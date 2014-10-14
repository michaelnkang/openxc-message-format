/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.1 at Tue Oct 14 14:03:21 2014. */

#include "openxc.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t openxc_VehicleMessage_fields[7] = {
    PB_FIELD(  1, ENUM    , OPTIONAL, STATIC  , FIRST, openxc_VehicleMessage, type, type, 0),
    PB_FIELD(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, openxc_VehicleMessage, can_message, type, &openxc_CanMessage_fields),
    PB_FIELD(  3, MESSAGE , OPTIONAL, STATIC  , OTHER, openxc_VehicleMessage, simple_message, can_message, &openxc_SimpleMessage_fields),
    PB_FIELD(  4, MESSAGE , OPTIONAL, STATIC  , OTHER, openxc_VehicleMessage, diagnostic_response, simple_message, &openxc_DiagnosticResponse_fields),
    PB_FIELD(  5, MESSAGE , OPTIONAL, STATIC  , OTHER, openxc_VehicleMessage, control_command, diagnostic_response, &openxc_ControlCommand_fields),
    PB_FIELD(  6, MESSAGE , OPTIONAL, STATIC  , OTHER, openxc_VehicleMessage, command_response, control_command, &openxc_CommandResponse_fields),
    PB_LAST_FIELD
};

const pb_field_t openxc_CanMessage_fields[5] = {
    PB_FIELD(  1, INT32   , OPTIONAL, STATIC  , FIRST, openxc_CanMessage, bus, bus, 0),
    PB_FIELD(  2, UINT32  , OPTIONAL, STATIC  , OTHER, openxc_CanMessage, message_id, bus, 0),
    PB_FIELD(  3, BYTES   , OPTIONAL, STATIC  , OTHER, openxc_CanMessage, data, message_id, 0),
    PB_FIELD(  4, ENUM    , OPTIONAL, STATIC  , OTHER, openxc_CanMessage, frame_format, data, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_ControlCommand_fields[7] = {
    PB_FIELD(  1, ENUM    , OPTIONAL, STATIC  , FIRST, openxc_ControlCommand, type, type, 0),
    PB_FIELD(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, openxc_ControlCommand, diagnostic_request, type, &openxc_DiagnosticControlCommand_fields),
    PB_FIELD(  3, MESSAGE , OPTIONAL, STATIC  , OTHER, openxc_ControlCommand, passthrough_mode_request, diagnostic_request, &openxc_PassthroughModeControlCommand_fields),
    PB_FIELD(  4, MESSAGE , OPTIONAL, STATIC  , OTHER, openxc_ControlCommand, acceptance_filter_bypass_command, passthrough_mode_request, &openxc_AcceptanceFilterBypassCommand_fields),
    PB_FIELD(  5, MESSAGE , OPTIONAL, STATIC  , OTHER, openxc_ControlCommand, payload_format_command, acceptance_filter_bypass_command, &openxc_PayloadFormatCommand_fields),
    PB_FIELD(  6, MESSAGE , OPTIONAL, STATIC  , OTHER, openxc_ControlCommand, predefined_obd2_requests_command, payload_format_command, &openxc_PredefinedObd2RequestsCommand_fields),
    PB_LAST_FIELD
};

const pb_field_t openxc_DiagnosticControlCommand_fields[3] = {
    PB_FIELD(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, openxc_DiagnosticControlCommand, request, request, &openxc_DiagnosticRequest_fields),
    PB_FIELD(  2, ENUM    , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticControlCommand, action, request, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_PassthroughModeControlCommand_fields[3] = {
    PB_FIELD(  1, INT32   , OPTIONAL, STATIC  , FIRST, openxc_PassthroughModeControlCommand, bus, bus, 0),
    PB_FIELD(  2, BOOL    , OPTIONAL, STATIC  , OTHER, openxc_PassthroughModeControlCommand, enabled, bus, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_AcceptanceFilterBypassCommand_fields[3] = {
    PB_FIELD(  1, INT32   , OPTIONAL, STATIC  , FIRST, openxc_AcceptanceFilterBypassCommand, bus, bus, 0),
    PB_FIELD(  2, BOOL    , OPTIONAL, STATIC  , OTHER, openxc_AcceptanceFilterBypassCommand, bypass, bus, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_PayloadFormatCommand_fields[2] = {
    PB_FIELD(  1, ENUM    , OPTIONAL, STATIC  , FIRST, openxc_PayloadFormatCommand, format, format, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_PredefinedObd2RequestsCommand_fields[2] = {
    PB_FIELD(  1, BOOL    , OPTIONAL, STATIC  , FIRST, openxc_PredefinedObd2RequestsCommand, enabled, enabled, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_CommandResponse_fields[4] = {
    PB_FIELD(  1, ENUM    , OPTIONAL, STATIC  , FIRST, openxc_CommandResponse, type, type, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, openxc_CommandResponse, message, type, 0),
    PB_FIELD(  3, BOOL    , OPTIONAL, STATIC  , OTHER, openxc_CommandResponse, status, message, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_DiagnosticRequest_fields[10] = {
    PB_FIELD(  1, INT32   , OPTIONAL, STATIC  , FIRST, openxc_DiagnosticRequest, bus, bus, 0),
    PB_FIELD(  2, UINT32  , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticRequest, message_id, bus, 0),
    PB_FIELD(  3, UINT32  , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticRequest, mode, message_id, 0),
    PB_FIELD(  4, UINT32  , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticRequest, pid, mode, 0),
    PB_FIELD(  5, BYTES   , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticRequest, payload, pid, 0),
    PB_FIELD(  6, BOOL    , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticRequest, multiple_responses, payload, 0),
    PB_FIELD(  7, DOUBLE  , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticRequest, frequency, multiple_responses, 0),
    PB_FIELD(  8, STRING  , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticRequest, name, frequency, 0),
    PB_FIELD(  9, ENUM    , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticRequest, decoded_type, name, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_DiagnosticResponse_fields[9] = {
    PB_FIELD(  1, INT32   , OPTIONAL, STATIC  , FIRST, openxc_DiagnosticResponse, bus, bus, 0),
    PB_FIELD(  2, UINT32  , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticResponse, message_id, bus, 0),
    PB_FIELD(  3, UINT32  , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticResponse, mode, message_id, 0),
    PB_FIELD(  4, UINT32  , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticResponse, pid, mode, 0),
    PB_FIELD(  5, BOOL    , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticResponse, success, pid, 0),
    PB_FIELD(  6, UINT32  , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticResponse, negative_response_code, success, 0),
    PB_FIELD(  7, BYTES   , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticResponse, payload, negative_response_code, 0),
    PB_FIELD(  8, DOUBLE  , OPTIONAL, STATIC  , OTHER, openxc_DiagnosticResponse, value, payload, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_DynamicField_fields[5] = {
    PB_FIELD(  1, ENUM    , OPTIONAL, STATIC  , FIRST, openxc_DynamicField, type, type, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, openxc_DynamicField, string_value, type, 0),
    PB_FIELD(  3, DOUBLE  , OPTIONAL, STATIC  , OTHER, openxc_DynamicField, numeric_value, string_value, 0),
    PB_FIELD(  4, BOOL    , OPTIONAL, STATIC  , OTHER, openxc_DynamicField, boolean_value, numeric_value, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_SimpleMessage_fields[4] = {
    PB_FIELD(  1, STRING  , OPTIONAL, STATIC  , FIRST, openxc_SimpleMessage, name, name, 0),
    PB_FIELD(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, openxc_SimpleMessage, value, name, &openxc_DynamicField_fields),
    PB_FIELD(  3, MESSAGE , OPTIONAL, STATIC  , OTHER, openxc_SimpleMessage, event, value, &openxc_DynamicField_fields),
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
PB_STATIC_ASSERT((pb_membersize(openxc_VehicleMessage, can_message) < 65536 && pb_membersize(openxc_VehicleMessage, simple_message) < 65536 && pb_membersize(openxc_VehicleMessage, diagnostic_response) < 65536 && pb_membersize(openxc_VehicleMessage, control_command) < 65536 && pb_membersize(openxc_VehicleMessage, command_response) < 65536 && pb_membersize(openxc_ControlCommand, diagnostic_request) < 65536 && pb_membersize(openxc_ControlCommand, passthrough_mode_request) < 65536 && pb_membersize(openxc_ControlCommand, acceptance_filter_bypass_command) < 65536 && pb_membersize(openxc_ControlCommand, payload_format_command) < 65536 && pb_membersize(openxc_ControlCommand, predefined_obd2_requests_command) < 65536 && pb_membersize(openxc_DiagnosticControlCommand, request) < 65536 && pb_membersize(openxc_SimpleMessage, value) < 65536 && pb_membersize(openxc_SimpleMessage, event) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_openxc_VehicleMessage_openxc_CanMessage_openxc_ControlCommand_openxc_DiagnosticControlCommand_openxc_PassthroughModeControlCommand_openxc_AcceptanceFilterBypassCommand_openxc_PayloadFormatCommand_openxc_PredefinedObd2RequestsCommand_openxc_CommandResponse_openxc_DiagnosticRequest_openxc_DiagnosticResponse_openxc_DynamicField_openxc_SimpleMessage)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(openxc_VehicleMessage, can_message) < 256 && pb_membersize(openxc_VehicleMessage, simple_message) < 256 && pb_membersize(openxc_VehicleMessage, diagnostic_response) < 256 && pb_membersize(openxc_VehicleMessage, control_command) < 256 && pb_membersize(openxc_VehicleMessage, command_response) < 256 && pb_membersize(openxc_ControlCommand, diagnostic_request) < 256 && pb_membersize(openxc_ControlCommand, passthrough_mode_request) < 256 && pb_membersize(openxc_ControlCommand, acceptance_filter_bypass_command) < 256 && pb_membersize(openxc_ControlCommand, payload_format_command) < 256 && pb_membersize(openxc_ControlCommand, predefined_obd2_requests_command) < 256 && pb_membersize(openxc_DiagnosticControlCommand, request) < 256 && pb_membersize(openxc_SimpleMessage, value) < 256 && pb_membersize(openxc_SimpleMessage, event) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_openxc_VehicleMessage_openxc_CanMessage_openxc_ControlCommand_openxc_DiagnosticControlCommand_openxc_PassthroughModeControlCommand_openxc_AcceptanceFilterBypassCommand_openxc_PayloadFormatCommand_openxc_PredefinedObd2RequestsCommand_openxc_CommandResponse_openxc_DiagnosticRequest_openxc_DiagnosticResponse_openxc_DynamicField_openxc_SimpleMessage)
#endif


/* On some platforms (such as AVR), double is really float.
 * These are not directly supported by nanopb, but see example_avr_double.
 * To get rid of this error, remove any double fields from your .proto.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)

