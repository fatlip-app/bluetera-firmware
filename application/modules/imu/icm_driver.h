/*
	MIT License

	Copyright (c) 2019 Tensor Technologies LTD

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/

#ifndef ICM_DRIVER_H_
#define ICM_DRIVER_H_

#include <stdint.h>
#include <stdbool.h>
#include "bltr_imu.h"

void bltr_imu_init(const bltr_imu_init_t* init);
void bltr_imu_start(uint32_t period);
void bltr_imu_stop();
void bltr_imu_set_mode(bltr_imu_mode_t mode);
void bltr_imu_update();
void bltr_imu_set_freq_divider(uint8_t div);
void bltr_imu_set_fsr(uint16_t acc, uint16_t gyro);
void bltr_imu_get_fsr(uint16_t* acc, uint16_t* gyro);

#endif