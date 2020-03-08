/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.6-dev at Sun Mar  8 21:19:05 2020. */

#include "bluetera_messages.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t bluetera_echo_payload_fields[2] = {
    PB_FIELD(  1, UINT32  , OPTIONAL, STATIC  , FIRST, bluetera_echo_payload_t, value, value, 0),
    PB_LAST_FIELD
};

const pb_field_t bluetera_error_fields[3] = {
    PB_FIELD(  1, UENUM   , OPTIONAL, STATIC  , FIRST, bluetera_error_t, module, module, 0),
    PB_FIELD(  2, UINT32  , OPTIONAL, STATIC  , OTHER, bluetera_error_t, code, module, 0),
    PB_LAST_FIELD
};

const pb_field_t bluetera_imu_acceleration_payload_fields[5] = {
    PB_FIELD(  1, UINT32  , OPTIONAL, STATIC  , FIRST, bluetera_imu_acceleration_payload_t, timestamp, timestamp, 0),
    PB_FIELD(  2, FLOAT   , OPTIONAL, STATIC  , OTHER, bluetera_imu_acceleration_payload_t, x, timestamp, 0),
    PB_FIELD(  3, FLOAT   , OPTIONAL, STATIC  , OTHER, bluetera_imu_acceleration_payload_t, y, x, 0),
    PB_FIELD(  4, FLOAT   , OPTIONAL, STATIC  , OTHER, bluetera_imu_acceleration_payload_t, z, y, 0),
    PB_LAST_FIELD
};

const pb_field_t bluetera_imu_quaternion_payload_fields[6] = {
    PB_FIELD(  1, UINT32  , OPTIONAL, STATIC  , FIRST, bluetera_imu_quaternion_payload_t, timestamp, timestamp, 0),
    PB_FIELD(  2, FLOAT   , OPTIONAL, STATIC  , OTHER, bluetera_imu_quaternion_payload_t, w, timestamp, 0),
    PB_FIELD(  3, FLOAT   , OPTIONAL, STATIC  , OTHER, bluetera_imu_quaternion_payload_t, x, w, 0),
    PB_FIELD(  4, FLOAT   , OPTIONAL, STATIC  , OTHER, bluetera_imu_quaternion_payload_t, y, x, 0),
    PB_FIELD(  5, FLOAT   , OPTIONAL, STATIC  , OTHER, bluetera_imu_quaternion_payload_t, z, y, 0),
    PB_LAST_FIELD
};

const pb_field_t bluetera_imu_gyroscope_payload_fields[5] = {
    PB_FIELD(  1, UINT32  , OPTIONAL, STATIC  , FIRST, bluetera_imu_gyroscope_payload_t, timestamp, timestamp, 0),
    PB_FIELD(  2, FLOAT   , OPTIONAL, STATIC  , OTHER, bluetera_imu_gyroscope_payload_t, x, timestamp, 0),
    PB_FIELD(  3, FLOAT   , OPTIONAL, STATIC  , OTHER, bluetera_imu_gyroscope_payload_t, y, x, 0),
    PB_FIELD(  4, FLOAT   , OPTIONAL, STATIC  , OTHER, bluetera_imu_gyroscope_payload_t, z, y, 0),
    PB_LAST_FIELD
};

const pb_field_t bluetera_downlink_message_fields[6] = {
    PB_ONEOF_FIELD(payload,   1, MESSAGE , ONEOF, STATIC  , FIRST, bluetera_downlink_message_t, acceleration, acceleration, &bluetera_imu_acceleration_payload_fields),
    PB_ONEOF_FIELD(payload,   2, MESSAGE , ONEOF, STATIC  , FIRST, bluetera_downlink_message_t, quaternion, quaternion, &bluetera_imu_quaternion_payload_fields),
    PB_ONEOF_FIELD(payload,   3, MESSAGE , ONEOF, STATIC  , FIRST, bluetera_downlink_message_t, gyroscope, gyroscope, &bluetera_imu_gyroscope_payload_fields),
    PB_ONEOF_FIELD(payload,  16, MESSAGE , ONEOF, STATIC  , FIRST, bluetera_downlink_message_t, error, error, &bluetera_error_fields),
    PB_ONEOF_FIELD(payload,  17, MESSAGE , ONEOF, STATIC  , FIRST, bluetera_downlink_message_t, echo, echo, &bluetera_echo_payload_fields),
    PB_LAST_FIELD
};

const pb_field_t bluetera_imu_start_fields[6] = {
    PB_FIELD(  1, FIXED32 , OPTIONAL, STATIC  , FIRST, bluetera_imu_start_t, data_types, data_types, 0),
    PB_FIELD(  2, UINT32  , OPTIONAL, STATIC  , OTHER, bluetera_imu_start_t, odr, data_types, 0),
    PB_FIELD(  3, UINT32  , OPTIONAL, STATIC  , OTHER, bluetera_imu_start_t, acc_fsr, odr, 0),
    PB_FIELD(  4, UINT32  , OPTIONAL, STATIC  , OTHER, bluetera_imu_start_t, gyro_fsr, acc_fsr, 0),
    PB_FIELD(  5, UENUM   , OPTIONAL, STATIC  , OTHER, bluetera_imu_start_t, data_sink, gyro_fsr, 0),
    PB_LAST_FIELD
};

const pb_field_t bluetera_imu_command_fields[3] = {
    PB_ONEOF_FIELD(payload,   1, MESSAGE , ONEOF, STATIC  , FIRST, bluetera_imu_command_t, start, start, &bluetera_imu_start_fields),
    PB_ONEOF_FIELD(payload,   2, BOOL    , ONEOF, STATIC  , FIRST, bluetera_imu_command_t, stop, stop, 0),
    PB_LAST_FIELD
};

const pb_field_t bluetera_uplink_message_fields[3] = {
    PB_ONEOF_FIELD(payload,   1, MESSAGE , ONEOF, STATIC  , FIRST, bluetera_uplink_message_t, imu, imu, &bluetera_imu_command_fields),
    PB_ONEOF_FIELD(payload,  17, MESSAGE , ONEOF, STATIC  , FIRST, bluetera_uplink_message_t, echo, echo, &bluetera_echo_payload_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.error) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.error) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 65536 && pb_membersize(bluetera_imu_command_t, payload.start) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.error) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.error) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 65536 && pb_membersize(bluetera_imu_command_t, payload.start) < 65536 && pb_membersize(bluetera_uplink_message_t, payload.imu) < 65536 && pb_membersize(bluetera_uplink_message_t, payload.echo) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.error) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.error) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 65536 && pb_membersize(bluetera_imu_command_t, payload.start) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.error) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.error) < 65536 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 65536 && pb_membersize(bluetera_imu_command_t, payload.start) < 65536 && pb_membersize(bluetera_uplink_message_t, payload.imu) < 65536 && pb_membersize(bluetera_uplink_message_t, payload.echo) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_bluetera_echo_payload_bluetera_error_bluetera_imu_acceleration_payload_bluetera_imu_quaternion_payload_bluetera_imu_gyroscope_payload_bluetera_downlink_message_bluetera_imu_start_bluetera_imu_command_bluetera_uplink_message)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 256 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 256 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 256 && pb_membersize(bluetera_downlink_message_t, payload.error) < 256 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 256 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 256 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 256 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 256 && pb_membersize(bluetera_downlink_message_t, payload.error) < 256 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 256 && pb_membersize(bluetera_imu_command_t, payload.start) < 256 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 256 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 256 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 256 && pb_membersize(bluetera_downlink_message_t, payload.error) < 256 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 256 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 256 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 256 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 256 && pb_membersize(bluetera_downlink_message_t, payload.error) < 256 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 256 && pb_membersize(bluetera_imu_command_t, payload.start) < 256 && pb_membersize(bluetera_uplink_message_t, payload.imu) < 256 && pb_membersize(bluetera_uplink_message_t, payload.echo) < 256 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 256 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 256 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 256 && pb_membersize(bluetera_downlink_message_t, payload.error) < 256 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 256 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 256 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 256 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 256 && pb_membersize(bluetera_downlink_message_t, payload.error) < 256 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 256 && pb_membersize(bluetera_imu_command_t, payload.start) < 256 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 256 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 256 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 256 && pb_membersize(bluetera_downlink_message_t, payload.error) < 256 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 256 && pb_membersize(bluetera_downlink_message_t, payload.acceleration) < 256 && pb_membersize(bluetera_downlink_message_t, payload.quaternion) < 256 && pb_membersize(bluetera_downlink_message_t, payload.gyroscope) < 256 && pb_membersize(bluetera_downlink_message_t, payload.error) < 256 && pb_membersize(bluetera_downlink_message_t, payload.echo) < 256 && pb_membersize(bluetera_imu_command_t, payload.start) < 256 && pb_membersize(bluetera_uplink_message_t, payload.imu) < 256 && pb_membersize(bluetera_uplink_message_t, payload.echo) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_bluetera_echo_payload_bluetera_error_bluetera_imu_acceleration_payload_bluetera_imu_quaternion_payload_bluetera_imu_gyroscope_payload_bluetera_downlink_message_bluetera_imu_start_bluetera_imu_command_bluetera_uplink_message)
#endif


/* @@protoc_insertion_point(eof) */
