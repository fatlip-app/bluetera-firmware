/*
 * bluetera_messages.h
 *
 *  Created on: 15 ????? 2019
 *      Author: Boaz
 */

#ifndef BLUETERA_MESSAGES_H_
#define BLUETERA_MESSAGES_H_

#include "bluetera_messages.pb.h"
#include "bluetera_err.h"
#include "pb.h"

#define BLTR_MAX_MESSAGE_LENGTH_VARINT_BYTES			4
#define BLTR_MAX_DOWNLINK_MESSAGE_SIZE					(BLUETERA_DOWNLINK_MESSAGE_SIZE + BLTR_MAX_MESSAGE_LENGTH_VARINT_BYTES)
#define BLTR_MAX_UPLINK_MESSAGE_SIZE					(BLUETERA_UPLINK_MESSAGE_SIZE + BLTR_MAX_MESSAGE_LENGTH_VARINT_BYTES)

#define BLTR_APP_SCHEDULER_DATA_SIZE					BLTR_MAX_UPLINK_MESSAGE_SIZE

typedef void (* bltr_uplink_message_handler_t) (bluetera_uplink_message_t * msg);

typedef struct
{
	bltr_uplink_message_handler_t message_handler;
} bltr_msg_init_t;

// TODO(boaz): move bltr_app_scheduler_message_t to c-file
typedef struct
{
	uint8_t data[BLTR_APP_SCHEDULER_DATA_SIZE];
	uint16_t length;
} bltr_app_scheduler_message_t;


ret_code_t bltr_msg_init(const bltr_msg_init_t* init);
ret_code_t bltr_msg_send_acceleration(uint16_t timestamp, const float acc[3]);

// TODO(tomer): make sure it is OK to call with fixed array size
ret_code_t bltr_msg_send_echo(const uint8_t data[8]);


void bltr_msg_debug();

#endif /* BLUETERA_MESSAGES_H_ */
