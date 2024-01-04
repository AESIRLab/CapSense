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


// Generated by Captivate Design Center v1_83_00_08 on Wed Dec 27 10:55:04 CST 2023


//*****************************************************************************
// CAPT_UserConfig.c
//
// \version 1.83.00.05
// Released on May 15, 2020
//
//*****************************************************************************

//*****************************************************************************
//
// NOTE: This is an automatically generated source code file!  The Captivate
// Design Center generates the User Configuration file automatically based
// upon the sensor layout that was created.
//
// Changes to this file will be OVERWRITTEN if a you select
// "Update Existing Project" under "Generate Source Code" in the Design Center.
//
// To avoid interference with the code generation process, keep ALL application
// code external to this file.
//
//*****************************************************************************

#include "CAPT_UserConfig.h"

//*****************************************************************************
//
//! Captivate Element Definitions
//! All elements in this application are defined below.
//! Each element has 3 components:
//!  1) a raw count array (One index per freq. scanned) (uint16_t)
//!  2) a tuning array (One index per freq. scanned) (tCaptivateElementTuning)
//!  3) a element structure (tElement)
//
//*****************************************************************************
// Sensor: BTN00, Element: E00
uint16_t BTN00_E00_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E00_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E00 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 3,
    .ui8RxPin = 0,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E00_RawCnts,
    .pTuning = BTN00_E00_Tuning,
};

// Sensor: BTN00, Element: E01
uint16_t BTN00_E01_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E01_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E01 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 3,
    .ui8RxPin = 0,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E01_RawCnts,
    .pTuning = BTN00_E01_Tuning,
};

// Sensor: BTN00, Element: E02
uint16_t BTN00_E02_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E02_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E02 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 3,
    .ui8RxPin = 0,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E02_RawCnts,
    .pTuning = BTN00_E02_Tuning,
};

// Sensor: BTN00, Element: E03
uint16_t BTN00_E03_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E03_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E03 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 3,
    .ui8RxPin = 0,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E03_RawCnts,
    .pTuning = BTN00_E03_Tuning,
};

// Sensor: BTN00, Element: E04
uint16_t BTN00_E04_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E04_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E04 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 3,
    .ui8RxPin = 1,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E04_RawCnts,
    .pTuning = BTN00_E04_Tuning,
};

// Sensor: BTN00, Element: E05
uint16_t BTN00_E05_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E05_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E05 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 3,
    .ui8RxPin = 1,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E05_RawCnts,
    .pTuning = BTN00_E05_Tuning,
};

// Sensor: BTN00, Element: E06
uint16_t BTN00_E06_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E06_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E06 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 3,
    .ui8RxPin = 1,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E06_RawCnts,
    .pTuning = BTN00_E06_Tuning,
};

// Sensor: BTN00, Element: E07
uint16_t BTN00_E07_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E07_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E07 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 3,
    .ui8RxPin = 1,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E07_RawCnts,
    .pTuning = BTN00_E07_Tuning,
};

// Sensor: BTN00, Element: E08
uint16_t BTN00_E08_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E08_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E08 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 2,
    .ui8RxPin = 0,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E08_RawCnts,
    .pTuning = BTN00_E08_Tuning,
};

// Sensor: BTN00, Element: E09
uint16_t BTN00_E09_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E09_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E09 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 2,
    .ui8RxPin = 0,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E09_RawCnts,
    .pTuning = BTN00_E09_Tuning,
};

// Sensor: BTN00, Element: E10
uint16_t BTN00_E10_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E10_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E10 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 2,
    .ui8RxPin = 0,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E10_RawCnts,
    .pTuning = BTN00_E10_Tuning,
};

// Sensor: BTN00, Element: E11
uint16_t BTN00_E11_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E11_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E11 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 2,
    .ui8RxPin = 0,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E11_RawCnts,
    .pTuning = BTN00_E11_Tuning,
};

// Sensor: BTN00, Element: E12
uint16_t BTN00_E12_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E12_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E12 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 2,
    .ui8RxPin = 1,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E12_RawCnts,
    .pTuning = BTN00_E12_Tuning,
};

// Sensor: BTN00, Element: E13
uint16_t BTN00_E13_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E13_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E13 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 2,
    .ui8RxPin = 1,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E13_RawCnts,
    .pTuning = BTN00_E13_Tuning,
};

// Sensor: BTN00, Element: E14
uint16_t BTN00_E14_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E14_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E14 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 2,
    .ui8RxPin = 1,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E14_RawCnts,
    .pTuning = BTN00_E14_Tuning,
};

// Sensor: BTN00, Element: E15
uint16_t BTN00_E15_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E15_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E15 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 2,
    .ui8RxPin = 1,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E15_RawCnts,
    .pTuning = BTN00_E15_Tuning,
};

// Sensor: BTN00, Element: E16
uint16_t BTN00_E16_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E16_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E16 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 1,
    .ui8RxPin = 0,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E16_RawCnts,
    .pTuning = BTN00_E16_Tuning,
};

// Sensor: BTN00, Element: E17
uint16_t BTN00_E17_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E17_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E17 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 1,
    .ui8RxPin = 0,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E17_RawCnts,
    .pTuning = BTN00_E17_Tuning,
};

// Sensor: BTN00, Element: E18
uint16_t BTN00_E18_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E18_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E18 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 1,
    .ui8RxPin = 0,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E18_RawCnts,
    .pTuning = BTN00_E18_Tuning,
};

// Sensor: BTN00, Element: E19
uint16_t BTN00_E19_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E19_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E19 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 1,
    .ui8RxPin = 0,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E19_RawCnts,
    .pTuning = BTN00_E19_Tuning,
};

// Sensor: BTN00, Element: E20
uint16_t BTN00_E20_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E20_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E20 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 1,
    .ui8RxPin = 1,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E20_RawCnts,
    .pTuning = BTN00_E20_Tuning,
};

// Sensor: BTN00, Element: E21
uint16_t BTN00_E21_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E21_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E21 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 1,
    .ui8RxPin = 1,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E21_RawCnts,
    .pTuning = BTN00_E21_Tuning,
};

// Sensor: BTN00, Element: E22
uint16_t BTN00_E22_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E22_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E22 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 1,
    .ui8RxPin = 1,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E22_RawCnts,
    .pTuning = BTN00_E22_Tuning,
};

// Sensor: BTN00, Element: E23
uint16_t BTN00_E23_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E23_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E23 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 1,
    .ui8RxPin = 1,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E23_RawCnts,
    .pTuning = BTN00_E23_Tuning,
};

// Sensor: BTN00, Element: E24
uint16_t BTN00_E24_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E24_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E24 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 0,
    .ui8RxPin = 0,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E24_RawCnts,
    .pTuning = BTN00_E24_Tuning,
};

// Sensor: BTN00, Element: E25
uint16_t BTN00_E25_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E25_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E25 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 0,
    .ui8RxPin = 0,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E25_RawCnts,
    .pTuning = BTN00_E25_Tuning,
};

// Sensor: BTN00, Element: E26
uint16_t BTN00_E26_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E26_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E26 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 0,
    .ui8RxPin = 0,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E26_RawCnts,
    .pTuning = BTN00_E26_Tuning,
};

// Sensor: BTN00, Element: E27
uint16_t BTN00_E27_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E27_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E27 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 0,
    .ui8RxPin = 0,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E27_RawCnts,
    .pTuning = BTN00_E27_Tuning,
};

// Sensor: BTN00, Element: E28
uint16_t BTN00_E28_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E28_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E28 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 0,
    .ui8RxPin = 1,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E28_RawCnts,
    .pTuning = BTN00_E28_Tuning,
};

// Sensor: BTN00, Element: E29
uint16_t BTN00_E29_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E29_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E29 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 0,
    .ui8RxPin = 1,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E29_RawCnts,
    .pTuning = BTN00_E29_Tuning,
};

// Sensor: BTN00, Element: E30
uint16_t BTN00_E30_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E30_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E30 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 0,
    .ui8RxPin = 1,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E30_RawCnts,
    .pTuning = BTN00_E30_Tuning,
};

// Sensor: BTN00, Element: E31
uint16_t BTN00_E31_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E31_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E31 =
{
    .ui8TxPin = 3,
    .ui8TxBlock = 0,
    .ui8RxPin = 1,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E31_RawCnts,
    .pTuning = BTN00_E31_Tuning,
};

// Sensor: BTN00, Element: E32
uint16_t BTN00_E32_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E32_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E32 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 3,
    .ui8RxPin = 0,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E32_RawCnts,
    .pTuning = BTN00_E32_Tuning,
};

// Sensor: BTN00, Element: E33
uint16_t BTN00_E33_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E33_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E33 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 3,
    .ui8RxPin = 0,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E33_RawCnts,
    .pTuning = BTN00_E33_Tuning,
};

// Sensor: BTN00, Element: E34
uint16_t BTN00_E34_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E34_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E34 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 3,
    .ui8RxPin = 0,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E34_RawCnts,
    .pTuning = BTN00_E34_Tuning,
};

// Sensor: BTN00, Element: E35
uint16_t BTN00_E35_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E35_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E35 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 3,
    .ui8RxPin = 0,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E35_RawCnts,
    .pTuning = BTN00_E35_Tuning,
};

// Sensor: BTN00, Element: E36
uint16_t BTN00_E36_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E36_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E36 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 3,
    .ui8RxPin = 1,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E36_RawCnts,
    .pTuning = BTN00_E36_Tuning,
};

// Sensor: BTN00, Element: E37
uint16_t BTN00_E37_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E37_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E37 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 3,
    .ui8RxPin = 1,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E37_RawCnts,
    .pTuning = BTN00_E37_Tuning,
};

// Sensor: BTN00, Element: E38
uint16_t BTN00_E38_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E38_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E38 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 3,
    .ui8RxPin = 1,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E38_RawCnts,
    .pTuning = BTN00_E38_Tuning,
};

// Sensor: BTN00, Element: E39
uint16_t BTN00_E39_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E39_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E39 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 3,
    .ui8RxPin = 1,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E39_RawCnts,
    .pTuning = BTN00_E39_Tuning,
};

// Sensor: BTN00, Element: E40
uint16_t BTN00_E40_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E40_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E40 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 2,
    .ui8RxPin = 0,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E40_RawCnts,
    .pTuning = BTN00_E40_Tuning,
};

// Sensor: BTN00, Element: E41
uint16_t BTN00_E41_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E41_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E41 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 2,
    .ui8RxPin = 0,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E41_RawCnts,
    .pTuning = BTN00_E41_Tuning,
};

// Sensor: BTN00, Element: E42
uint16_t BTN00_E42_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E42_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E42 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 2,
    .ui8RxPin = 0,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E42_RawCnts,
    .pTuning = BTN00_E42_Tuning,
};

// Sensor: BTN00, Element: E43
uint16_t BTN00_E43_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E43_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E43 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 2,
    .ui8RxPin = 0,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E43_RawCnts,
    .pTuning = BTN00_E43_Tuning,
};

// Sensor: BTN00, Element: E44
uint16_t BTN00_E44_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E44_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E44 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 2,
    .ui8RxPin = 1,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E44_RawCnts,
    .pTuning = BTN00_E44_Tuning,
};

// Sensor: BTN00, Element: E45
uint16_t BTN00_E45_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E45_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E45 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 2,
    .ui8RxPin = 1,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E45_RawCnts,
    .pTuning = BTN00_E45_Tuning,
};

// Sensor: BTN00, Element: E46
uint16_t BTN00_E46_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E46_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E46 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 2,
    .ui8RxPin = 1,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E46_RawCnts,
    .pTuning = BTN00_E46_Tuning,
};

// Sensor: BTN00, Element: E47
uint16_t BTN00_E47_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E47_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E47 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 2,
    .ui8RxPin = 1,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E47_RawCnts,
    .pTuning = BTN00_E47_Tuning,
};

// Sensor: BTN00, Element: E48
uint16_t BTN00_E48_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E48_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E48 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 1,
    .ui8RxPin = 0,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E48_RawCnts,
    .pTuning = BTN00_E48_Tuning,
};

// Sensor: BTN00, Element: E49
uint16_t BTN00_E49_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E49_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E49 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 1,
    .ui8RxPin = 0,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E49_RawCnts,
    .pTuning = BTN00_E49_Tuning,
};

// Sensor: BTN00, Element: E50
uint16_t BTN00_E50_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E50_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E50 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 1,
    .ui8RxPin = 0,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E50_RawCnts,
    .pTuning = BTN00_E50_Tuning,
};

// Sensor: BTN00, Element: E51
uint16_t BTN00_E51_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E51_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E51 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 1,
    .ui8RxPin = 0,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E51_RawCnts,
    .pTuning = BTN00_E51_Tuning,
};

// Sensor: BTN00, Element: E52
uint16_t BTN00_E52_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E52_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E52 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 1,
    .ui8RxPin = 1,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E52_RawCnts,
    .pTuning = BTN00_E52_Tuning,
};

// Sensor: BTN00, Element: E53
uint16_t BTN00_E53_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E53_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E53 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 1,
    .ui8RxPin = 1,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E53_RawCnts,
    .pTuning = BTN00_E53_Tuning,
};

// Sensor: BTN00, Element: E54
uint16_t BTN00_E54_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E54_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E54 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 1,
    .ui8RxPin = 1,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E54_RawCnts,
    .pTuning = BTN00_E54_Tuning,
};

// Sensor: BTN00, Element: E55
uint16_t BTN00_E55_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E55_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E55 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 1,
    .ui8RxPin = 1,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E55_RawCnts,
    .pTuning = BTN00_E55_Tuning,
};

// Sensor: BTN00, Element: E56
uint16_t BTN00_E56_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E56_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E56 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 0,
    .ui8RxPin = 0,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E56_RawCnts,
    .pTuning = BTN00_E56_Tuning,
};

// Sensor: BTN00, Element: E57
uint16_t BTN00_E57_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E57_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E57 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 0,
    .ui8RxPin = 0,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E57_RawCnts,
    .pTuning = BTN00_E57_Tuning,
};

// Sensor: BTN00, Element: E58
uint16_t BTN00_E58_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E58_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E58 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 0,
    .ui8RxPin = 0,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E58_RawCnts,
    .pTuning = BTN00_E58_Tuning,
};

// Sensor: BTN00, Element: E59
uint16_t BTN00_E59_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E59_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E59 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 0,
    .ui8RxPin = 0,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E59_RawCnts,
    .pTuning = BTN00_E59_Tuning,
};

// Sensor: BTN00, Element: E60
uint16_t BTN00_E60_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E60_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E60 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 0,
    .ui8RxPin = 1,
    .ui8RxBlock = 0,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E60_RawCnts,
    .pTuning = BTN00_E60_Tuning,
};

// Sensor: BTN00, Element: E61
uint16_t BTN00_E61_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E61_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E61 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 0,
    .ui8RxPin = 1,
    .ui8RxBlock = 1,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E61_RawCnts,
    .pTuning = BTN00_E61_Tuning,
};

// Sensor: BTN00, Element: E62
uint16_t BTN00_E62_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E62_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E62 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 0,
    .ui8RxPin = 1,
    .ui8RxBlock = 2,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E62_RawCnts,
    .pTuning = BTN00_E62_Tuning,
};

// Sensor: BTN00, Element: E63
uint16_t BTN00_E63_RawCnts[CAPT_MUTUAL_FREQ_CNT];
tCaptivateElementTuning BTN00_E63_Tuning[CAPT_MUTUAL_FREQ_CNT];
tElement BTN00_E63 =
{
    .ui8TxPin = 2,
    .ui8TxBlock = 0,
    .ui8RxPin = 1,
    .ui8RxBlock = 3,
    .ui8TouchThreshold = 10,
    .pRawCount = BTN00_E63_RawCnts,
    .pTuning = BTN00_E63_Tuning,
};


//*****************************************************************************
//
//! Captivate Time Cycle Definitions
//! All time cycles in this application are defined below.  Time cycles are
//! groups of elements that are measured together in parallel in one time slot.
//! Each cycle has 2 components:
//!  1) an element pointer array to the member elements (tElement*)
//!  2) a cycle structure (tCycle)
//
//*****************************************************************************
// Time Cycle: BTN00_C00
tElement* BTN00_C00_Elements[4] =
{
    &BTN00_E00,
    &BTN00_E01,
    &BTN00_E02,
    &BTN00_E03,
};
tCycle BTN00_C00 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C00_Elements,
};

// Time Cycle: BTN00_C01
tElement* BTN00_C01_Elements[4] =
{
    &BTN00_E04,
    &BTN00_E05,
    &BTN00_E06,
    &BTN00_E07,
};
tCycle BTN00_C01 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C01_Elements,
};

// Time Cycle: BTN00_C02
tElement* BTN00_C02_Elements[4] =
{
    &BTN00_E08,
    &BTN00_E09,
    &BTN00_E10,
    &BTN00_E11,
};
tCycle BTN00_C02 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C02_Elements,
};

// Time Cycle: BTN00_C03
tElement* BTN00_C03_Elements[4] =
{
    &BTN00_E12,
    &BTN00_E13,
    &BTN00_E14,
    &BTN00_E15,
};
tCycle BTN00_C03 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C03_Elements,
};

// Time Cycle: BTN00_C04
tElement* BTN00_C04_Elements[4] =
{
    &BTN00_E16,
    &BTN00_E17,
    &BTN00_E18,
    &BTN00_E19,
};
tCycle BTN00_C04 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C04_Elements,
};

// Time Cycle: BTN00_C05
tElement* BTN00_C05_Elements[4] =
{
    &BTN00_E20,
    &BTN00_E21,
    &BTN00_E22,
    &BTN00_E23,
};
tCycle BTN00_C05 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C05_Elements,
};

// Time Cycle: BTN00_C06
tElement* BTN00_C06_Elements[4] =
{
    &BTN00_E24,
    &BTN00_E25,
    &BTN00_E26,
    &BTN00_E27,
};
tCycle BTN00_C06 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C06_Elements,
};

// Time Cycle: BTN00_C07
tElement* BTN00_C07_Elements[4] =
{
    &BTN00_E28,
    &BTN00_E29,
    &BTN00_E30,
    &BTN00_E31,
};
tCycle BTN00_C07 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C07_Elements,
};

// Time Cycle: BTN00_C08
tElement* BTN00_C08_Elements[4] =
{
    &BTN00_E32,
    &BTN00_E33,
    &BTN00_E34,
    &BTN00_E35,
};
tCycle BTN00_C08 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C08_Elements,
};

// Time Cycle: BTN00_C09
tElement* BTN00_C09_Elements[4] =
{
    &BTN00_E36,
    &BTN00_E37,
    &BTN00_E38,
    &BTN00_E39,
};
tCycle BTN00_C09 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C09_Elements,
};

// Time Cycle: BTN00_C10
tElement* BTN00_C10_Elements[4] =
{
    &BTN00_E40,
    &BTN00_E41,
    &BTN00_E42,
    &BTN00_E43,
};
tCycle BTN00_C10 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C10_Elements,
};

// Time Cycle: BTN00_C11
tElement* BTN00_C11_Elements[4] =
{
    &BTN00_E44,
    &BTN00_E45,
    &BTN00_E46,
    &BTN00_E47,
};
tCycle BTN00_C11 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C11_Elements,
};

// Time Cycle: BTN00_C12
tElement* BTN00_C12_Elements[4] =
{
    &BTN00_E48,
    &BTN00_E49,
    &BTN00_E50,
    &BTN00_E51,
};
tCycle BTN00_C12 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C12_Elements,
};

// Time Cycle: BTN00_C13
tElement* BTN00_C13_Elements[4] =
{
    &BTN00_E52,
    &BTN00_E53,
    &BTN00_E54,
    &BTN00_E55,
};
tCycle BTN00_C13 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C13_Elements,
};

// Time Cycle: BTN00_C14
tElement* BTN00_C14_Elements[4] =
{
    &BTN00_E56,
    &BTN00_E57,
    &BTN00_E58,
    &BTN00_E59,
};
tCycle BTN00_C14 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C14_Elements,
};

// Time Cycle: BTN00_C15
tElement* BTN00_C15_Elements[4] =
{
    &BTN00_E60,
    &BTN00_E61,
    &BTN00_E62,
    &BTN00_E63,
};
tCycle BTN00_C15 =
{
    .ui8NrOfElements = 4,
    .pElements = BTN00_C15_Elements,
};


//*****************************************************************************
//
//! Captivate Sensor Definitions
//! All sensors in this application are defined below.  Sensors are
//! groups of time cycles that utilize raw measurement data to create an
//! abstract sensor type, such as a button, slider, wheel, or prox sensor.
//! Each sensor has 3 components:
//!  1) a cycle pointer array to the member time cycles (tCycle*)
//!  2) a sensor-specific parameter structure (tGenericSensorParams)
//!  3) a sensor structure (tSensor)
//
//*****************************************************************************
//Sensor: BTN00
const tCycle* BTN00_Cycles[16] =
{
    &BTN00_C00,
    &BTN00_C01,
    &BTN00_C02,
    &BTN00_C03,
    &BTN00_C04,
    &BTN00_C05,
    &BTN00_C06,
    &BTN00_C07,
    &BTN00_C08,
    &BTN00_C09,
    &BTN00_C10,
    &BTN00_C11,
    &BTN00_C12,
    &BTN00_C13,
    &BTN00_C14,
    &BTN00_C15,
};

tButtonSensorParams BTN00_Params;
tSensor BTN00 =
{
    // Basic Properties
    .TypeOfSensor = eButtonGroup,
    .SensingMethod = eProjected,
    .DirectionOfInterest = eDOIUp,
    .pvCallback = NULL,
    .ui8NrOfCycles = 16,
    .pCycle = BTN00_Cycles,
    .pSensorParams = (tGenericSensorParams*)&BTN00_Params,
    // Conversion Control Parameters
    .ui16ConversionCount = 500,
    .ui16ConversionGain = 100,
    .ui8FreqDiv = 2,
    .ui8ChargeLength = 0,
    .ui8TransferLength = 0,
    .bModEnable = false,
    .ui8BiasControl = 3,
    .bCsDischarge = true,
    .bLpmControl = false,
    .ui8InputSyncControl = 0,
    .bTimerSyncControl = false,
    .bIdleState = true,
    // Tuning  Parameters
    .ui16ProxThreshold = 10,
    .ui16NegativeTouchThreshold = 30,
    .ui16ErrorThreshold = 8191,
    .ui16TimeoutThreshold = 65535,
    .ProxDbThreshold.DbIn = 1,
    .ProxDbThreshold.DbOut = 0,
    .TouchDbThreshold.DbIn = 1,
    .TouchDbThreshold.DbOut = 0,
    .bCountFilterEnable = true,
    .ui8CntBeta = 1,
    .bSensorHalt = false,
    .bPTSensorHalt = true,
    .bPTElementHalt = true,
    .ui8LTABeta = 7,
    .bReCalibrateEnable = true,
};


#if (CAPT_CONDUCTED_NOISE_IMMUNITY_ENABLE==true)
//*****************************************************************************
//
//! \var g_EMCConfig
//! This structure stores the EMC configuration for this application.
//
//*****************************************************************************
const tEMCConfig g_EMCConfig =
{
	// Conversion Style
	.selfModeConversionStyle = CAPT_SELF_MODE_CONVERSION_STYLE,
	.projModeConversionStyle = CAPT_PROJ_MODE_CONVERSION_STYLE,
	
	// Oversampling Style
	.selfModeOversamplingStyle = CAPT_SELF_MODE_OVERSAMPLING_STYLE,
	.projModeOversamplingStyle = CAPT_PROJ_MODE_OVERSAMPLING_STYLE,
	
	// Jitter Filter Enable
	.bJitterFilterEnable = true,
	
	// Noise Thresholds and Calibration Noise Limits
	.ui8NoiseThreshold = CAPT_NOISE_THRESHOLD,
	.ui16CalibrationNoiseLimit = CAPT_CALIBRATION_NOISE_LIMIT,
	.ui8CalibrationTestSampleSize = 8,
		
	// Dynamic Threshold Adjustment Parameters
	.bEnableDynamicThresholdAdjustment = CAPT_DYNAMIC_THRESHOLD_ADJUSTMENT,
	.ui8MaxRelThreshAdj = 76,
	.ui8NoiseLevelFilterEntryThresh = 40,
	.ui8NoiseLevelFilterExitThresh = 0,
	.ui8NoiseLevelFilterDown = 6,
	.ui8NoiseLevelFilterUp = 1,
	.coeffA = _IQ31(0.0065),
	.coeffB = _IQ31(0.050)
};
#endif

//*****************************************************************************
//
//! \var g_pCaptivateSensorArray
//! This array allows for indexed access to any
//! sensor in the configuration.
//
//*****************************************************************************
tSensor* g_pCaptivateSensorArray[CAPT_SENSOR_COUNT] =
{
    &BTN00,
};


//*****************************************************************************
//
//! \var g_uiApp
//! This structure stores the global settings for this application.
//
//*****************************************************************************
tCaptivateApplication g_uiApp =
{
    .state = eUIActive,
	.pSensorList = &g_pCaptivateSensorArray[0],
    .ui8NrOfSensors = CAPT_SENSOR_COUNT,
    .ui8AppLPM = CAPT_LOW_POWER_MODE,
    .bElementDataTxEnable = true,
    .bSensorDataTxEnable = true,
    .ui16ActiveModeScanPeriod = 33,
    .ui16WakeOnProxModeScanPeriod = 100,
    .ui16InactivityTimeout = 32,
    .ui8WakeupInterval = 5,
};