/*
	SlimeVR Code is placed under the MIT license
	Copyright (c) 2021 Eiren Rain

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
	THE SOFTWARE.
*/

#define IMU IMU_LSM6DSV
#define SECOND_IMU IMU
#define BOARD BOARD_CUSTOM
#define IMU_ROTATION DEG_0
#define SECOND_IMU_ROTATION DEG_90

#define PRIMARY_IMU_OPTIONAL false

#define MAX_IMU_COUNT 2

// whats it?
#define ON_OFF_BUTTON 1

/*
#ifndef IMU_DESC_LIST
#define IMU_DESC_LIST            \
	IMU_DESC_ENTRY(              \
		IMU,                     \
		PRIMARY_IMU_ADDRESS_ONE, \
		IMU_ROTATION,            \
		PIN_IMU_SCL,             \
		PIN_IMU_SDA,             \
		PRIMARY_IMU_OPTIONAL,    \
		PIN_IMU_INT              \
	)
#endif
*/

#ifndef IMU_DESC_LIST
#define IMU_DESC_LIST \
        IMU_DESC_ENTRY(IMU,        PRIMARY_IMU_ADDRESS_ONE,   IMU_ROTATION,        PIN_IMU_SCL, PIN_IMU_SDA, PRIMARY_IMU_OPTIONAL,   PIN_IMU_INT) \
        IMU_DESC_ENTRY(SECOND_IMU, SECONDARY_IMU_ADDRESS_TWO, SECOND_IMU_ROTATION, PIN_IMU_SCL, PIN_IMU_SDA, PRIMARY_IMU_OPTIONAL, PIN_IMU_INT_2)
#endif

//no use batt monitor
//#define BATTERY_MONITOR BAT_EXTERNAL

#define PIN_IMU_SDA 3
#define PIN_IMU_SCL 2
#define PIN_IMU_INT 255
#define PIN_IMU_INT_2 255
#define LED_PIN LED_OFF
#define PIN_BATTERY_LEVEL 0
