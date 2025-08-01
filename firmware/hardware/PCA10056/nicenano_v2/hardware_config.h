/*
Copyright 2018-2021 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H

#include "hardware_variants.h"

/* KEY MATRIX SIZE */
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

#define UNUSED_PINS {}

/* MUX PINS */
#define COL_MUX_S0 2
#define COL_MUX_S1 3
#define COL_MUX_S2 4
#define COL_MUX_S3 5
#define COL_MUX_SIG 6

#define ROW_MUX_S0 7
#define ROW_MUX_S1 8
#define ROW_MUX_S2 9
#define ROW_MUX_S3 10
#define ROW_MUX_SIG 11

#define DIODE_DIRECTION COL2ROW

/* Rotary Encoder 1 */
#define ENCODER1_A   12
#define ENCODER1_B   13
#define ENCODER1_BTN 14

/* Rotary Encoder 2 */
#define ENCODER2_A   15
#define ENCODER2_B   16
#define ENCODER2_BTN 17

/* ST7789 Display */
#define ST7789_CS    18
#define ST7789_DC    19
#define ST7789_RST   20
#define ST7789_BL    21
#define ST7789_MOSI  22
#define ST7789_SCK   23

/* SPDT Switch */
#define SWITCH_PIN   24

/* Power Monitoring */
#define BATTERY_TYPE BATT_LIPO
#define VBAT_PIN     31
#define VCC_PIN      12
#define VCC_POLARITY_ON 1

/* BLE Status LED */
#define STATUS_BLE_LED_PIN  19
#define STATUS_KB_LED_PIN   17

#endif /* HARDWARE_CONFIG_H */
