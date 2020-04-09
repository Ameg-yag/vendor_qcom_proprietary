/*============================================================================
  @file Magnetic.h

  @brief
  Magnetic class definition.

  Copyright (c) 2014, 2017 Qualcomm Technologies, Inc.  All Rights Reserved.
  Qualcomm Technologies Proprietary and Confidential.
============================================================================*/
#ifndef ANDROID_MAGNETIC_SENSOR_H
#define ANDROID_MAGNETIC_SENSOR_H

#include "SMGRSensor.h"

/*============================================================================
 * Class Magnetic
=============================================================================*/

class Magnetic : public SMGRSensor {
private:
  uint8_t buff_cal_mag_index;
  float buff_cal_mag[CAL_MAG_AXES][CAL_MAG_FILTER_LENGTH];
  float cal_mag_sum_x,cal_mag_sum_y,cal_mag_sum_z;
  bool buff_cal_mag_full;

public:
	Magnetic(int handle);
	 ~Magnetic();
/*===========================================================================
  FUNCTION:  setSensorInfo
    Fill the sensor information from the sns_smgr_sensor_datatype_info_s_v01 type
    Parameters
        @datatype : sensor information got from the sensor1 callback
===========================================================================*/
    void setSensorInfo(sns_smgr_sensor_datatype_info_s_v01* datatype);
/*===========================================================================
  FUNCTION:  prepareAddMsg
    SMGRSensor::SMGRPrepareAddMsg will call this function and this func will
    fill the item that needed for this type of sensor.
    Parameters
        @buff_req : the sensor1 message buffer
===========================================================================*/
    void prepareAddMsg(sns_smgr_buffering_req_msg_v01 **buff_req);
/*===========================================================================
  FUNCTION:  processReportInd
    process the sensor data indicator from the sensor1 type to sensor event type
    Parameters
        @smgr_data : the sensor1 data message from the sensor1 callback
        @sensor_data : the sensor event message that will be send to framework
===========================================================================*/
    void processReportInd(sns_smgr_periodic_report_ind_msg_v01* smgr_ind,
                sns_smgr_data_item_s_v01* smgr_data,
                sensors_event_t &sensor_data);
/*============================================================================
  FUNCTION:  getSuid
    Retrieve the associated SSC Sensor UID for this sensor
============================================================================*/
    uint64_t getSuid(void);
};
#endif
