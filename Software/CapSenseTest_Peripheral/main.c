/* --COPYRIGHT--,BSD
 * Copyright (c) 2017, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * --/COPYRIGHT--*/
//*****************************************************************************
// Development main.c for MSP430FR2676 CapTIvate devices.
//
// This starter application initializes the CapTIvate touch library
// for the touch panel specified by CAPT_UserConfig.c/.h via a call to
// CAPT_appStart(), which initializes and calibrates all sensors in the
// application, and starts the CapTIvate interval timer.
//
// Then, the capacitive touch interface is driven by calling the CapTIvate
// application handler, CAPT_appHandler().  The application handler manages
// whether the user interface (UI) is running in full active scan mode, or
// in a low-power wake-on-proximity mode.
//
// \version 1.83.00.05
// Released on May 15, 2020
//
//*****************************************************************************

#include <stdio.h>
#include <msp430.h>                      // Generic MSP430 Device Include
#include "driverlib.h"                   // MSPWare Driver Library
#include "captivate.h"                   // CapTIvate Touch Software Library
#include "CAPT_App.h"                    // CapTIvate Application Code
#include "CAPT_BSP.h"                    // CapTIvate EVM Board Support Package


//defines and whatnot
#define DELAY_1SEC 1000000;

//sensor elements
extern tElement BTN00_E00;


//variables
volatile uint8_t TXData, newData;

//function declaration and stuffz
void I2C_Init(void);
void I2C_SendData(void);

void main(void)
{
    //
    // Initialize the MCU
    // BSP_configureMCU() sets up the device IO and clocking
    // The global interrupt enable is set to allow peripherals
    // to wake the MCU.
    //
    WDTCTL = WDTPW | WDTHOLD;

      // Configure GPIO
      P4SEL0 |= BIT3 | BIT4;                    // I2C pins
      SYSCFG3 |= BIT4;

      P1OUT &= ~BIT7;                         // Clear P1.0 output latch
      P1DIR |= BIT7;                          // For LED
      // Disable the GPIO power-on default high-impedance mode to activate
      // previously configured port settings
      PM5CTL0 &= ~LOCKLPM5;

      // Configure USCI_B0 for I2C mode
      UCB1CTLW0 = UCSWRST;                      // Software reset enabled
      UCB1CTLW0 |= UCMODE_3 | UCSYNC;           // I2C mode, sync mode
      UCB1I2COA0 = 0x48 | UCOAEN;               // own address is 0x48 + enable
      UCB1CTLW0 &= ~UCSWRST;                    // clear reset register
      UCB1IE |= UCTXIE0 | UCSTPIE;              // transmit,stop interrupt enable

      newData = 0x00;

    BSP_configureMCU();
    __bis_SR_register(GIE);
    CAPT_appStart();    //Start Captivate
    __delay_cycles(2000);

    //Main Loop
    while(1)
    {

        TXData = newData;
        CAPT_appHandler();
        __delay_cycles(2000);

        while(UCB1CTL1 & UCTXSTP);


      if(BTN00_E00.bTouch == true){
          P1OUT |= BIT7;
          newData =  0x01;
          __bis_SR_register(LPM0_bits|GIE);   // Enter LPM0 w/ interrupt


      }

        //If it falls asleep or what not
        __no_operation();
        CAPT_appSleep();

    } // End background loop
} // End main()


#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector = USCI_B1_VECTOR
__interrupt void USCIB0_ISR(void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(USCI_B1_VECTOR))) USCIB1_ISR (void)
#else
#error Compiler not supported!
#endif
{
  switch(__even_in_range(UCB1IV, USCI_I2C_UCBIT9IFG))
  {
    case USCI_NONE: break;                  // Vector 0: No interrupts
    case USCI_I2C_UCALIFG: break;           // Vector 2: ALIFG
    case USCI_I2C_UCNACKIFG: break;         // Vector 4: NACKIFG
    case USCI_I2C_UCSTTIFG: break;          // Vector 6: STTIFG
    case USCI_I2C_UCSTPIFG:                 // Vector 8: STPIFG
      TXData = 0;
      UCB1IFG &= ~UCSTPIFG;                 // Clear stop condition int flag
      break;
    case USCI_I2C_UCRXIFG3: break;          // Vector 10: RXIFG3
    case USCI_I2C_UCTXIFG3: break;          // Vector 14: TXIFG3
    case USCI_I2C_UCRXIFG2: break;          // Vector 16: RXIFG2
    case USCI_I2C_UCTXIFG2: break;          // Vector 18: TXIFG2
    case USCI_I2C_UCRXIFG1: break;          // Vector 20: RXIFG1
    case USCI_I2C_UCTXIFG1: break;          // Vector 22: TXIFG1
    case USCI_I2C_UCRXIFG0: break;          // Vector 24: RXIFG0
    case USCI_I2C_UCTXIFG0:
       UCB1TXBUF = TXData;
       break;                               // Vector 26: TXIFG0
    case USCI_I2C_UCBCNTIFG: break;         // Vector 28: BCNTIFG
    case USCI_I2C_UCCLTOIFG: break;         // Vector 30: clock low timeout
    case USCI_I2C_UCBIT9IFG: break;         // Vector 32: 9th bit
    default: break;
  }
}
