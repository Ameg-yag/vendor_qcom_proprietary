/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*

                        S N S _ S A M _ F A S T _ A M D _ V 0 1  . C

GENERAL DESCRIPTION
  This is the file which defines the SNS_SAM_FAST_AMD_SVC service Data structures.

  Copyright (c) 2014-2015 Qualcomm Technologies, Inc.  All Rights Reserved. 
 Confidential and Proprietary - Qualcomm Technologies, Inc.

  $Header$
 *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/
/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====* 
 *THIS IS AN AUTO GENERATED FILE. DO NOT ALTER IN ANY WAY 
 *====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/

/* This file was generated with Tool version 6.14.2 
   It was generated on: Thu Dec 11 2014 (Spin 0)
   From IDL File: sns_sam_fast_amd_v01.idl */

#include "stdint.h"
#include "qmi_idl_lib_internal.h"
#include "sns_sam_fast_amd_v01.h"
#include "sns_sam_common_v01.h"
#include "sns_common_v01.h"


/*Type Definitions*/
/*Message Definitions*/
static const uint8_t sns_sam_fast_amd_enable_req_msg_data_v01[] = {
  0x01,
   QMI_IDL_GENERIC_4_BYTE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_enable_req_msg_v01, report_mode),

  0x02,
   QMI_IDL_GENERIC_4_BYTE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_enable_req_msg_v01, detection_period_in_motion_state),

  0x03,
   QMI_IDL_GENERIC_4_BYTE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_enable_req_msg_v01, detection_period_in_stationary_state),

  QMI_IDL_TLV_FLAGS_LAST_TLV | QMI_IDL_TLV_FLAGS_OPTIONAL | (QMI_IDL_OFFSET8(sns_sam_fast_amd_enable_req_msg_v01, state_detection_threshold) - QMI_IDL_OFFSET8(sns_sam_fast_amd_enable_req_msg_v01, state_detection_threshold_valid)),
  0x10,
   QMI_IDL_GENERIC_4_BYTE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_enable_req_msg_v01, state_detection_threshold)
};

static const uint8_t sns_sam_fast_amd_enable_resp_msg_data_v01[] = {
  2,
   QMI_IDL_AGGREGATE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_enable_resp_msg_v01, resp),
  QMI_IDL_TYPE88(2, 0),

  QMI_IDL_TLV_FLAGS_LAST_TLV | QMI_IDL_TLV_FLAGS_OPTIONAL | (QMI_IDL_OFFSET8(sns_sam_fast_amd_enable_resp_msg_v01, instance_id) - QMI_IDL_OFFSET8(sns_sam_fast_amd_enable_resp_msg_v01, instance_id_valid)),
  0x10,
   QMI_IDL_GENERIC_1_BYTE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_enable_resp_msg_v01, instance_id)
};

static const uint8_t sns_sam_fast_amd_disable_req_msg_data_v01[] = {
  QMI_IDL_TLV_FLAGS_LAST_TLV | 0x01,
   QMI_IDL_GENERIC_1_BYTE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_disable_req_msg_v01, instance_id)
};

static const uint8_t sns_sam_fast_amd_disable_resp_msg_data_v01[] = {
  2,
   QMI_IDL_AGGREGATE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_disable_resp_msg_v01, resp),
  QMI_IDL_TYPE88(2, 0),

  QMI_IDL_TLV_FLAGS_LAST_TLV | QMI_IDL_TLV_FLAGS_OPTIONAL | (QMI_IDL_OFFSET8(sns_sam_fast_amd_disable_resp_msg_v01, instance_id) - QMI_IDL_OFFSET8(sns_sam_fast_amd_disable_resp_msg_v01, instance_id_valid)),
  0x10,
   QMI_IDL_GENERIC_1_BYTE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_disable_resp_msg_v01, instance_id)
};

static const uint8_t sns_sam_fast_amd_report_ind_msg_data_v01[] = {
  0x01,
   QMI_IDL_GENERIC_1_BYTE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_report_ind_msg_v01, instance_id),

  0x02,
   QMI_IDL_GENERIC_4_BYTE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_report_ind_msg_v01, timestamp),

  QMI_IDL_TLV_FLAGS_LAST_TLV | 0x03,
   QMI_IDL_GENERIC_4_BYTE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_report_ind_msg_v01, state)
};

static const uint8_t sns_sam_fast_amd_error_ind_msg_data_v01[] = {
  0x01,
   QMI_IDL_GENERIC_1_BYTE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_error_ind_msg_v01, error),

  QMI_IDL_TLV_FLAGS_LAST_TLV | 0x02,
   QMI_IDL_GENERIC_1_BYTE,
  QMI_IDL_OFFSET8(sns_sam_fast_amd_error_ind_msg_v01, instance_id)
};

/* Type Table */
/* No Types Defined in IDL */

/* Message Table */
static const qmi_idl_message_table_entry SNS_SAM_FAST_AMD_SVC_message_table_v01[] = {
  {sizeof(sns_sam_fast_amd_enable_req_msg_v01), sns_sam_fast_amd_enable_req_msg_data_v01},
  {sizeof(sns_sam_fast_amd_enable_resp_msg_v01), sns_sam_fast_amd_enable_resp_msg_data_v01},
  {sizeof(sns_sam_fast_amd_disable_req_msg_v01), sns_sam_fast_amd_disable_req_msg_data_v01},
  {sizeof(sns_sam_fast_amd_disable_resp_msg_v01), sns_sam_fast_amd_disable_resp_msg_data_v01},
  {sizeof(sns_sam_fast_amd_report_ind_msg_v01), sns_sam_fast_amd_report_ind_msg_data_v01},
  {sizeof(sns_sam_fast_amd_error_ind_msg_v01), sns_sam_fast_amd_error_ind_msg_data_v01}
};

/* Range Table */
/* No Ranges Defined in IDL */

/* Predefine the Type Table Object */
static const qmi_idl_type_table_object SNS_SAM_FAST_AMD_SVC_qmi_idl_type_table_object_v01;

/*Referenced Tables Array*/
static const qmi_idl_type_table_object *SNS_SAM_FAST_AMD_SVC_qmi_idl_type_table_object_referenced_tables_v01[] =
{&SNS_SAM_FAST_AMD_SVC_qmi_idl_type_table_object_v01, &sns_sam_common_qmi_idl_type_table_object_v01, &sns_common_qmi_idl_type_table_object_v01};

/*Type Table Object*/
static const qmi_idl_type_table_object SNS_SAM_FAST_AMD_SVC_qmi_idl_type_table_object_v01 = {
  0,
  sizeof(SNS_SAM_FAST_AMD_SVC_message_table_v01)/sizeof(qmi_idl_message_table_entry),
  1,
  NULL,
  SNS_SAM_FAST_AMD_SVC_message_table_v01,
  SNS_SAM_FAST_AMD_SVC_qmi_idl_type_table_object_referenced_tables_v01,
  NULL
};

/*Arrays of service_message_table_entries for commands, responses and indications*/
static const qmi_idl_service_message_table_entry SNS_SAM_FAST_AMD_SVC_service_command_messages_v01[] = {
  {SNS_SAM_FAST_AMD_CANCEL_REQ_V01, QMI_IDL_TYPE16(2, 0), 0},
  {SNS_SAM_FAST_AMD_VERSION_REQ_V01, QMI_IDL_TYPE16(2, 2), 0},
  {SNS_SAM_FAST_AMD_ENABLE_REQ_V01, QMI_IDL_TYPE16(0, 0), 28},
  {SNS_SAM_FAST_AMD_DISABLE_REQ_V01, QMI_IDL_TYPE16(0, 2), 4},
  {SNS_SAM_FAST_AMD_GET_ATTRIBUTES_REQ_V01, QMI_IDL_TYPE16(1, 0), 0}
};

static const qmi_idl_service_message_table_entry SNS_SAM_FAST_AMD_SVC_service_response_messages_v01[] = {
  {SNS_SAM_FAST_AMD_CANCEL_RESP_V01, QMI_IDL_TYPE16(2, 1), 5},
  {SNS_SAM_FAST_AMD_VERSION_RESP_V01, QMI_IDL_TYPE16(2, 3), 17},
  {SNS_SAM_FAST_AMD_ENABLE_RESP_V01, QMI_IDL_TYPE16(0, 1), 9},
  {SNS_SAM_FAST_AMD_DISABLE_RESP_V01, QMI_IDL_TYPE16(0, 3), 9},
  {SNS_SAM_FAST_AMD_GET_ATTRIBUTES_RESP_V01, QMI_IDL_TYPE16(1, 1), 86}
};

static const qmi_idl_service_message_table_entry SNS_SAM_FAST_AMD_SVC_service_indication_messages_v01[] = {
  {SNS_SAM_FAST_AMD_REPORT_IND_V01, QMI_IDL_TYPE16(0, 4), 18},
  {SNS_SAM_FAST_AMD_ERROR_IND_V01, QMI_IDL_TYPE16(0, 5), 8}
};

/*Service Object*/
struct qmi_idl_service_object SNS_SAM_FAST_AMD_SVC_qmi_idl_service_object_v01 = {
  0x06,
  0x01,
  SNS_QMI_SVC_ID_52_V01,
  86,
  { sizeof(SNS_SAM_FAST_AMD_SVC_service_command_messages_v01)/sizeof(qmi_idl_service_message_table_entry),
    sizeof(SNS_SAM_FAST_AMD_SVC_service_response_messages_v01)/sizeof(qmi_idl_service_message_table_entry),
    sizeof(SNS_SAM_FAST_AMD_SVC_service_indication_messages_v01)/sizeof(qmi_idl_service_message_table_entry) },
  { SNS_SAM_FAST_AMD_SVC_service_command_messages_v01, SNS_SAM_FAST_AMD_SVC_service_response_messages_v01, SNS_SAM_FAST_AMD_SVC_service_indication_messages_v01},
  &SNS_SAM_FAST_AMD_SVC_qmi_idl_type_table_object_v01,
  0x00,
  NULL
};

/* Service Object Accessor */
qmi_idl_service_object_type SNS_SAM_FAST_AMD_SVC_get_service_object_internal_v01
 ( int32_t idl_maj_version, int32_t idl_min_version, int32_t library_version ){
  if ( SNS_SAM_FAST_AMD_SVC_V01_IDL_MAJOR_VERS != idl_maj_version || SNS_SAM_FAST_AMD_SVC_V01_IDL_MINOR_VERS != idl_min_version 
       || SNS_SAM_FAST_AMD_SVC_V01_IDL_TOOL_VERS != library_version) 
  {
    return NULL;
  } 
  return (qmi_idl_service_object_type)&SNS_SAM_FAST_AMD_SVC_qmi_idl_service_object_v01;
}

