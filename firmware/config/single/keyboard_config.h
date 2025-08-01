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
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H

#include "hardware_config.h"

/* DEVICE CONFIG */
#define KEYBOARD_SIDE SINGLE

#define DEVICE_NAME_R     "BlueMicroBLE_R"
#define DEVICE_NAME_L     "BlueMicroBLE_L"
#define DEVICE_NAME_M     "BlueMicroBLE"

#define DEVICE_MODEL      "BlueMicro75_Mux"
#define MANUFACTURER_NAME "YourNameOrBrand"

/* MATRIX DIMENSIONS */
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

/* KEYMAP MACRO FOR FULL 14x6 SINGLE BOARD */
#define KEYMAP( \
  K00,K01,K02,K03,K04,K05,K06,K07,K08,K09,K0A,K0B,K0C,K0D, \
  K10,K11,K12,K13,K14,K15,K16,K17,K18,K19,K1A,K1B,K1C,K1D, \
  K20,K21,K22,K23,K24,K25,K26,K27,K28,K29,K2A,K2B,K2C,K2D, \
  K30,K31,K32,K33,K34,K35,K36,K37,K38,K39,K3A,K3B,K3C,K3D, \
  K40,K41,K42,K43,K44,K45,K46,K47,K48,K49,K4A,K4B,K4C,K4D, \
  K50,K51,K52,K53,K54,K55,K56,K57,K58,K59,K5A,K5B,K5C,K5D  \
) { \
  {K00,K01,K02,K03,K04,K05,K06,K07,K08,K09,K0A,K0B,K0C,K0D}, \
  {K10,K11,K12,K13,K14,K15,K16,K17,K18,K19,K1A,K1B,K1C,K1D}, \
  {K20,K21,K22,K23,K24,K25,K26,K27,K28,K29,K2A,K2B,K2C,K2D}, \
  {K30,K31,K32,K33,K34,K35,K36,K37,K38,K39,K3A,K3B,K3C,K3D}, \
  {K40,K41,K42,K43,K44,K45,K46,K47,K48,K49,K4A,K4B,K4C,K4D}, \
  {K50,K51,K52,K53,K54,K55,K56,K57,K58,K59,K5A,K5B,K5C,K5D}  \
}

#endif /* KEYBOARD_CONFIG_H */
