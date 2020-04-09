/******************************************************************************
#  Copyright (c) 2018-2019 Qualcomm Technologies, Inc.
#  All Rights Reserved.
#  Confidential and Proprietary - Qualcomm Technologies, Inc.
#******************************************************************************/
#pragma once
#include <framework/add_message_id.h>
#include <interfaces/QcRilRequestMessage.h>
#include <interfaces/voice/voice.h>
#include <optional>

/*
 * Get current call list
 *
 * Response:
 *   errorCode    : Valid error codes
 *   responseData : std::shared_ptr<GetCurrentSetupCallsRespData>
 */
class QcRilRequestGetCurrentSetupCallsMessage
    : public QcRilRequestMessage,
      public add_message_id<QcRilRequestGetCurrentSetupCallsMessage> {
 private:
 public:
  static constexpr const char *MESSAGE_NAME = "QcRilRequestGetCurrentSetupCallsMessage";

  QcRilRequestGetCurrentSetupCallsMessage() = delete;

  ~QcRilRequestGetCurrentSetupCallsMessage() {}

  inline QcRilRequestGetCurrentSetupCallsMessage(std::shared_ptr<MessageContext> context)
      : QcRilRequestMessage(get_class_message_id(), context) {
    mName = MESSAGE_NAME;
  }

  virtual string dump() { return QcRilRequestMessage::dump() + "{}"; }
};
