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

#ifndef SD_CARD_MANAGER_H_
#define SD_CARD_MANAGER_H_

#include <stdint.h>
#include <stdbool.h>
#include "bluetera_messages.h"
#include "bluetera_err.h"
#include "app_error.h"

typedef void (*bltr_sd_card_status_handler_t)(bool inserted);

typedef struct
{
	bltr_sd_card_status_handler_t sd_card_status_handler;
} bltr_sd_card_init_t;

void bltr_sd_card_init(const bltr_sd_card_init_t* init);
ret_code_t bltr_sd_card_handle_uplink_message(const bluetera_uplink_message_t* message);
ret_code_t bltr_sd_card_handle_imu_sensor_data(const bltr_imu_sensor_data_t* data);			// TODO: replace with a more generic handling of messages / events

ret_code_t bltr_sd_card_open_log();
ret_code_t bltr_sd_card_close_log();
ret_code_t bltr_sd_card_write_log(uint8_t* data, uint16_t len);
bool bltr_sd_card_is_inserted();

#endif