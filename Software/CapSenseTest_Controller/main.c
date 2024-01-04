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




//sensor elements
extern tElement BTN00_E00;


//variables
volatile uint8_t RXData;
volatile uint8_t TXData, newData;


//functions

//1 = transmit
//0 = receive
void I2C_Comm(bool operation, uint8_t slaveAddress);

void main(void)
{
	//
	// Initialize the MCU
	// BSP_configureMCU() sets up the device IO and clocking
	// The global interrupt enable is set to allow peripherals
	// to wake the MCU.
	//
    WDTCTL = WDTPW | WDTHOLD;           //stop watchdog timer

       // Configure GPIO
       P1OUT &= ~BIT7;                         // Clear P1.0 output latch
       P1DIR |= BIT7;                          // For LED
       P1OUT &= ~BIT6;                         // Clear P1.0 output latch
       P1DIR |= BIT6;                          // For LED
       P4SEL0 |= BIT3 | BIT4;                  // I2C pins
       SYSCFG3 |= BIT4;                        //Remap I2C from P1 (default) to P4 b/c P1 is taken

       // Disable the GPIO power-on default high-impedance mode to activate
       // previously configured port settings
       PM5CTL0 &= ~LOCKLPM5;

       // Configure USCI_B0 for I2C mode
       UCB1CTLW0 |= UCSWRST;                   // Software reset enabled
       UCB1CTLW0 |= UCMODE_3 | UCMST | UCSYNC; // I2C mode, Master mode, sync
       UCB1CTLW1 |= UCASTP_2;                  // Automatic stop generated
                                               // after UCB0TBCNT is reached
       UCB1BRW = 0x0008;                       // baudrate = SMCLK / 8
       //UCB0TBCNT = 0x0005;                     // number of bytes to be received
       UCB1CTL1 &= ~UCSWRST;
       UCB1IE |= UCRXIE | UCNACKIE | UCBCNTIE;
       UCB1I2CSA = 0x0048;                     // Slave address

    //newData = 0x00;
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

		UCB1CTL1 |= UCTXSTT;        //I2C start condition
		__bis_SR_register(LPM0_bits|GIE);   // Enter LPM0 w/ interrupt
		while (UCB1CTL1 & UCTXSTP);         // Ensure stop condition got sent
		if(RXData == 0x01){
		    P1OUT |= BIT7;
		}

		//if button clicked, send to Arduino (spoiler, doesn't work)
		if(BTN00_E00.bTouch == true){
		    P1OUT |= BIT6;
		}

		while (UCB1CTL1 & UCTXSTP);                      // Ensure stop condition got sent
		__delay_cycles(10000);                             // Delay between transmissions
		UCB1I2CSA = 0x24;              // configure slave address
		__delay_cycles(1000);                             // Delay between transmissions
		UCB1CTLW0 |= UCTR | UCTXSTT;                      // I2C TX, start condition

		//newData = 0x05;                                    // Load TX byte counter

		//If it falls asleep or what not
		__no_operation();
		CAPT_appSleep();
		
	} // End background loop
} // End main()



//====================================================Untested==================================================
void I2C_Comm(bool operation, uint8_t slaveAddress){
    if(operation == false){     //set into receive mode
        UCB1I2CSA = slaveAddress;                     // Slave address
        UCB1CTL1 |= UCTXSTT;        //I2C start condition
        __bis_SR_register(LPM0_bits|GIE);   // Enter LPM0 w/ interrupt
        while (UCB1CTL1 & UCTXSTP);         // Ensure stop condition got sent
    }
    else{           //set into transmit mode
        UCB1I2CSA = slaveAddress;
        UCB1CTL1 |= UCTXSTT;        //I2C start condition
        __bis_SR_register(LPM0_bits|GIE);   // Enter LPM0 w/ interrupt
        while (UCB1CTL1 & UCTXSTP);         // Ensure stop condition got sent


    }
}
//================================================================================================================


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
    case USCI_I2C_UCNACKIFG:                // Vector 4: NACKIFG
      UCB1CTL1 |= UCTXSTT;                  // I2C start condition
      break;
    case USCI_I2C_UCSTTIFG: break;          // Vector 6: STTIFG
    case USCI_I2C_UCSTPIFG: break;          // Vector 8: STPIFG
    case USCI_I2C_UCRXIFG3: break;          // Vector 10: RXIFG3
    case USCI_I2C_UCTXIFG3: break;          // Vector 14: TXIFG3
    case USCI_I2C_UCRXIFG2: break;          // Vector 16: RXIFG2
    case USCI_I2C_UCTXIFG2: break;          // Vector 18: TXIFG2
    case USCI_I2C_UCRXIFG1: break;          // Vector 20: RXIFG1
    case USCI_I2C_UCTXIFG1: break;          // Vector 22: TXIFG1
    case USCI_I2C_UCRXIFG0:                 // Vector 24: RXIFG0
      RXData = UCB1RXBUF;                   // Get RX data, add break point
      __bic_SR_register_on_exit(LPM0_bits); // Exit LPM0
      break;
    case USCI_I2C_UCTXIFG0:
        //UCB1TXBUF = TXData;
        break;          // Vector 26: TXIFG0
    case USCI_I2C_UCBCNTIFG:                // Vector 28: BCNTIFG
      //P1OUT ^= BIT7;                        // Toggle LED on P1.0
      break;
    case USCI_I2C_UCCLTOIFG: break;         // Vector 30: clock low timeout
    case USCI_I2C_UCBIT9IFG: break;         // Vector 32: 9th bit
    default: break;
  }
}

