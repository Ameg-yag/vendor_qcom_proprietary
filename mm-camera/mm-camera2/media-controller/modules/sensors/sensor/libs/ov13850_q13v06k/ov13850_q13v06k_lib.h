/* ov13850_q13v06k_lib.h
 *
 * Copyright (c) 2015-2016 Qualcomm Technologies, Inc.
 * All Rights Reserved.
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 */

#ifndef __OV13850_Q13V06K_LIB_H__
#define __OV13850_Q13V06K_LIB_H__

#include "sensor_lib.h"
#define SENSOR_MODEL "ov13850_q13v06k"

/* OV13850_Q13V06K Regs */
// #define OV13850_Q13V06K_DIG_GAIN               0x5502

/* OV13850_Q13V06K CONSTANTS */
#define OV13850_Q13V06K_MAX_INTEGRATION_MARGIN  10

#define OV13850_Q13V06K_DATA_PEDESTAL           0x10 /* 10bit value */

#define OV13850_Q13V06K_MIN_AGAIN_REG_VAL       16 /* 1.0x */
#define OV13850_Q13V06K_MAX_AGAIN_REG_VAL       248 /* 15.5x */

#define OV13850_Q13V06K_MIN_DGAIN_REG_VAL       256 /* 1.0x */
#define OV13850_Q13V06K_MAX_DGAIN_REG_VAL       256 /* 1.0x */

#define OV13850_Q13V06K_MAX_DGAIN_DECIMATOR     256

/* OV13850_Q13V06K FORMULAS */
#define OV13850_Q13V06K_MIN_AGAIN    1.0
#define OV13850_Q13V06K_MAX_AGAIN    15.5

#define OV13850_Q13V06K_MIN_DGAIN    (OV13850_Q13V06K_MIN_DGAIN_REG_VAL / 256)
#define OV13850_Q13V06K_MAX_DGAIN    (OV13850_Q13V06K_MAX_DGAIN_REG_VAL / 256)

#define OV13850_Q13V06K_MIN_GAIN     \
    (OV13850_Q13V06K_MIN_AGAIN*OV13850_Q13V06K_MIN_DGAIN)
#define OV13850_Q13V06K_MAX_GAIN    \
    (OV13850_Q13V06K_MAX_AGAIN*OV13850_Q13V06K_MAX_DGAIN)

#define START_REG_ARRAY \
{ \
  {0x0100, 0x01, 0x00}, \
}

#define STOP_REG_ARRAY \
{ \
  {0x0100, 0x00, 0x00}, \
}

#define GROUPON_REG_ARRAY \
{ \
  {0x3208, 0x00, 0x00}, \
}

#define GROUPOFF_REG_ARRAY \
{ \
  {0x3208, 0x10, 0x00}, \
  {0x3208, 0xA0, 0x00}, \
}

#define INIT0_REG_ARRAY \
{ \
  {0x0103, 0x01, 1000}, /* SW reset + 1ms Delay */ \
  {0x0300, 0x01, 0x00}, \
  {0x0301, 0x00, 0x00}, \
  {0x0302, 0x28, 0x00}, \
  {0x0303, 0x00, 0x00}, \
  {0x030a, 0x00, 0x00}, \
  {0x300f, 0x11, 0x00}, \
  {0x3010, 0x01, 0x00}, \
  {0x3011, 0x76, 0x00}, \
  {0x3012, 0x41, 0x00}, \
  {0x3013, 0x12, 0x00}, \
  {0x3014, 0x11, 0x00}, \
  {0x301f, 0x03, 0x00}, \
  {0x3106, 0x00, 0x00}, \
  {0x3210, 0x47, 0x00}, \
  {0x3500, 0x00, 0x00}, \
  {0x3501, 0x60, 0x00}, \
  {0x3502, 0x00, 0x00}, \
  {0x3506, 0x00, 0x00}, \
  {0x3507, 0x02, 0x00}, \
  {0x3508, 0x00, 0x00}, \
  {0x350a, 0x00, 0x00}, \
  {0x350b, 0x80, 0x00}, \
  {0x350e, 0x00, 0x00}, \
  {0x350f, 0x10, 0x00}, \
  {0x351a, 0x00, 0x00}, \
  {0x351b, 0x10, 0x00}, \
  {0x351c, 0x00, 0x00}, \
  {0x351d, 0x20, 0x00}, \
  {0x351e, 0x00, 0x00}, \
  {0x351f, 0x40, 0x00}, \
  {0x3520, 0x00, 0x00}, \
  {0x3521, 0x80, 0x00}, \
  {0x3600, 0xc0, 0x00}, \
  {0x3601, 0xfc, 0x00}, \
  {0x3602, 0x02, 0x00}, \
  {0x3603, 0x78, 0x00}, \
  {0x3604, 0xb1, 0x00}, \
  {0x3605, 0x95, 0x00}, \
  {0x3606, 0x73, 0x00}, \
  {0x3607, 0x07, 0x00}, \
  {0x3609, 0x40, 0x00}, \
  {0x360a, 0x30, 0x00}, \
  {0x360b, 0x91, 0x00}, \
  {0x360C, 0x09, 0x00}, \
  {0x360f, 0x02, 0x00}, \
  {0x3611, 0x10, 0x00}, \
  {0x3612, 0x27, 0x00}, \
  {0x3613, 0x33, 0x00}, \
  {0x3615, 0x0c, 0x00}, \
  {0x3616, 0x0e, 0x00}, \
  {0x3641, 0x02, 0x00}, \
  {0x3660, 0x82, 0x00}, \
  {0x3668, 0x54, 0x00}, \
  {0x3669, 0x00, 0x00}, \
  {0x366a, 0x3f, 0x00}, \
  {0x3667, 0xa0, 0x00}, \
  {0x3702, 0x40, 0x00}, \
  {0x3703, 0x44, 0x00}, \
  {0x3704, 0x2c, 0x00}, \
  {0x3705, 0x01, 0x00}, \
  {0x3706, 0x15, 0x00}, \
  {0x3707, 0x44, 0x00}, \
  {0x3708, 0x3c, 0x00}, \
  {0x3709, 0x1f, 0x00}, \
  {0x370a, 0x27, 0x00}, \
  {0x370b, 0x3c, 0x00}, \
  {0x3720, 0x55, 0x00}, \
  {0x3722, 0x84, 0x00}, \
  {0x3728, 0x40, 0x00}, \
  {0x372a, 0x00, 0x00}, \
  {0x372b, 0x02, 0x00}, \
  {0x372e, 0x22, 0x00}, \
  {0x372f, 0xa0, 0x00}, \
  {0x3730, 0x00, 0x00}, \
  {0x3731, 0x00, 0x00}, \
  {0x3732, 0x00, 0x00}, \
  {0x3733, 0x00, 0x00}, \
  {0x3710, 0x28, 0x00}, \
  {0x3716, 0x03, 0x00}, \
  {0x3718, 0x1c, 0x00}, \
  {0x3719, 0x0c, 0x00}, \
  {0x371a, 0x08, 0x00}, \
  {0x371c, 0xfc, 0x00}, \
  {0x3748, 0x00, 0x00}, \
  {0x3760, 0x13, 0x00}, \
  {0x3761, 0x33, 0x00}, \
  {0x3762, 0x86, 0x00}, \
  {0x3763, 0x16, 0x00}, \
  {0x3767, 0x24, 0x00}, \
  {0x3768, 0x06, 0x00}, \
  {0x3769, 0x45, 0x00}, \
  {0x376c, 0x23, 0x00}, \
  {0x376f, 0x80, 0x00}, \
  {0x3773, 0x06, 0x00}, \
  {0x3d84, 0x00, 0x00}, \
  {0x3d85, 0x17, 0x00}, \
  {0x3d8c, 0x73, 0x00}, \
  {0x3d8d, 0xbf, 0x00}, \
  {0x3800, 0x00, 0x00}, \
  {0x3801, 0x00, 0x00}, \
  {0x3802, 0x00, 0x00}, \
  {0x3803, 0x04, 0x00}, \
  {0x3804, 0x10, 0x00}, \
  {0x3805, 0x9f, 0x00}, \
  {0x3806, 0x0c, 0x00}, \
  {0x3807, 0x4b, 0x00}, \
  {0x3808, 0x08, 0x00}, \
  {0x3809, 0x40, 0x00}, \
  {0x380a, 0x06, 0x00}, \
  {0x380b, 0x20, 0x00}, \
  {0x380c, 0x09, 0x00}, \
  {0x380d, 0x60, 0x00}, \
  {0x380e, 0x0d, 0x00}, \
  {0x380f, 0x00, 0x00}, \
  {0x3810, 0x00, 0x00}, \
  {0x3811, 0x08, 0x00}, \
  {0x3812, 0x00, 0x00}, \
  {0x3813, 0x02, 0x00}, \
  {0x3814, 0x31, 0x00}, \
  {0x3815, 0x31, 0x00}, \
  {0x3820, 0x01, 0x00}, \
  {0x3821, 0x06, 0x00}, \
  {0x3823, 0x00, 0x00}, \
  {0x3826, 0x00, 0x00}, \
  {0x3827, 0x02, 0x00}, \
  {0x3834, 0x00, 0x00}, \
  {0x3835, 0x1c, 0x00}, \
  {0x3836, 0x08, 0x00}, \
  {0x3837, 0x02, 0x00}, \
  {0x4000, 0xf1, 0x00}, \
  {0x4001, 0x00, 0x00}, \
  {0x400b, 0x0c, 0x00}, \
  {0x4011, 0x00, 0x00}, \
  {0x401a, 0x00, 0x00}, \
  {0x401b, 0x00, 0x00}, \
  {0x401c, 0x00, 0x00}, \
  {0x401d, 0x00, 0x00}, \
  {0x4020, 0x00, 0x00}, \
  {0x4021, 0xe4, 0x00}, \
  {0x4022, 0x04, 0x00}, \
  {0x4023, 0xd7, 0x00}, \
  {0x4024, 0x05, 0x00}, \
  {0x4025, 0xbc, 0x00}, \
  {0x4026, 0x05, 0x00}, \
  {0x4027, 0xbf, 0x00}, \
  {0x4028, 0x00, 0x00}, \
  {0x4029, 0x02, 0x00}, \
  {0x402a, 0x04, 0x00}, \
  {0x402b, 0x08, 0x00}, \
  {0x402c, 0x02, 0x00}, \
  {0x402d, 0x02, 0x00}, \
  {0x402e, 0x0c, 0x00}, \
  {0x402f, 0x08, 0x00}, \
  {0x403d, 0x2c, 0x00}, \
  {0x403f, 0x7f, 0x00}, \
  {0x4041, 0x07, 0x00}, \
  {0x4500, 0x82, 0x00}, \
  {0x4501, 0x3c, 0x00}, \
  {0x458b, 0x00, 0x00}, \
  {0x459c, 0x00, 0x00}, \
  {0x459d, 0x00, 0x00}, \
  {0x459e, 0x00, 0x00}, \
  {0x4601, 0x83, 0x00}, \
  {0x4602, 0x22, 0x00}, \
  {0x4603, 0x01, 0x00}, \
  {0x4837, 0x19, 0x00}, \
  {0x4d00, 0x04, 0x00}, \
  {0x4d01, 0x42, 0x00}, \
  {0x4d02, 0xd1, 0x00}, \
  {0x4d03, 0x90, 0x00}, \
  {0x4d04, 0x66, 0x00}, \
  {0x4d05, 0x65, 0x00}, \
  {0x4d0b, 0x00, 0x00}, \
  {0x5000, 0x0e, 0x00}, \
  {0x5001, 0x01, 0x00}, \
  {0x5002, 0x07, 0x00}, \
  {0x5013, 0x40, 0x00}, \
  {0x501c, 0x00, 0x00}, \
  {0x501d, 0x10, 0x00}, \
  {0x510f, 0xfc, 0x00}, \
  {0x5110, 0xf0, 0x00}, \
  {0x5111, 0x10, 0x00}, \
  {0x536d, 0x02, 0x00}, \
  {0x536e, 0x67, 0x00}, \
  {0x536f, 0x01, 0x00}, \
  {0x5370, 0x4c, 0x00}, \
  {0x5400, 0x00, 0x00}, \
  {0x5400, 0x00, 0x00}, \
  {0x5401, 0x61, 0x00}, \
  {0x5402, 0x00, 0x00}, \
  {0x5403, 0x00, 0x00}, \
  {0x5404, 0x00, 0x00}, \
  {0x5405, 0x40, 0x00}, \
  {0x540c, 0x05, 0x00}, \
  {0x5501, 0x00, 0x00}, \
  {0x5b00, 0x00, 0x00}, \
  {0x5b01, 0x00, 0x00}, \
  {0x5b02, 0x01, 0x00}, \
  {0x5b03, 0xff, 0x00}, \
  {0x5b04, 0x02, 0x00}, \
  {0x5b05, 0x6c, 0x00}, \
  {0x5b09, 0x02, 0x00}, \
  {0x5e00, 0x00, 0x00}, \
  {0x5e10, 0x1c, 0x00}, \
  /* Enable VSync */ \
  {0x3002, 0x80, 0x00}, \
}

#define RES0_REG_ARRAY \
{ \
  {0x0300, 0x00, 0x00}, \
  {0x0302, 0x32, 0x00}, \
  {0x3612, 0x07, 0x00}, \
  {0x3501, 0xc0, 0x00}, \
  {0x3702, 0x40, 0x00}, \
  {0x370a, 0x24, 0x00}, \
  {0x372a, 0x04, 0x00}, \
  {0x372f, 0xa0, 0x00}, \
  {0x3718, 0x10, 0x00}, \
  {0x3801, 0x14, 0x00}, \
  {0x3802, 0x00, 0x00}, \
  {0x3803, 0x0c, 0x00}, \
  {0x3805, 0x8b, 0x00}, \
  {0x3806, 0x0c, 0x00}, \
  {0x3807, 0x43, 0x00}, \
  {0x3808, 0x10, 0x00}, \
  {0x3809, 0x70, 0x00}, \
  {0x380a, 0x0c, 0x00}, \
  {0x380b, 0x30, 0x00}, \
  {0x380c, 0x12, 0x00}, \
  {0x380d, 0xc0, 0x00}, \
  {0x380e, 0x0d, 0x00}, \
  {0x380f, 0x05, 0x00}, \
  {0x3811, 0x04, 0x00}, \
  {0x3813, 0x04, 0x00}, \
  {0x3814, 0x11, 0x00}, \
  {0x3815, 0x11, 0x00}, \
  {0x3820, 0x00, 0x00}, \
  {0x3821, 0x04, 0x00}, \
  {0x3834, 0x00, 0x00}, \
  {0x3836, 0x04, 0x00}, \
  {0x3837, 0x01, 0x00}, \
  {0x4020, 0x02, 0x00}, \
  {0x4021, 0x3c, 0x00}, \
  {0x4022, 0x0e, 0x00}, \
  {0x4023, 0x37, 0x00}, \
  {0x4024, 0x0f, 0x00}, \
  {0x4025, 0x1c, 0x00}, \
  {0x4026, 0x0f, 0x00}, \
  {0x4027, 0x1f, 0x00}, \
  {0x402a, 0x04, 0x00}, \
  {0x402b, 0x08, 0x00}, \
  {0x402c, 0x02, 0x00}, \
  {0x402e, 0x0c, 0x00}, \
  {0x402f, 0x08, 0x00}, \
  {0x4501, 0x38, 0x00}, \
  {0x4601, 0x04, 0x00}, \
  {0x4603, 0x00, 0x00}, \
  {0x4837, 0x0d, 0x00}, \
  {0x5401, 0x71, 0x00}, \
  {0x5405, 0x80, 0x00}, \
}

#define RES1_REG_ARRAY \
{ \
  {0x0300, 0x01, 0x00}, \
  {0x0302, 0x28, 0x00}, \
  {0x3612, 0x27, 0x00}, \
  {0x3501, 0x60, 0x00}, \
  {0x3702, 0x40, 0x00}, \
  {0x370a, 0x27, 0x00}, \
  {0x372a, 0x00, 0x00}, \
  {0x372f, 0xa0, 0x00}, \
  {0x3718, 0x1c, 0x00}, \
  {0x3801, 0x00, 0x00}, \
  {0x3802, 0x00, 0x00}, \
  {0x3803, 0x04, 0x00}, \
  {0x3805, 0x9f, 0x00}, \
  {0x3806, 0x0c, 0x00}, \
  {0x3807, 0x4b, 0x00}, \
  {0x3808, 0x08, 0x00}, \
  {0x3809, 0x38, 0x00}, \
  {0x380a, 0x06, 0x00}, \
  {0x380b, 0x18, 0x00}, \
  {0x380c, 0x09, 0x00}, \
  {0x380d, 0x60, 0x00}, \
  {0x380e, 0x0d, 0x00}, \
  {0x380f, 0x05, 0x00}, \
  {0x3811, 0x0c, 0x00}, \
  {0x3813, 0x06, 0x00}, \
  {0x3814, 0x31, 0x00}, \
  {0x3815, 0x31, 0x00}, \
  {0x3820, 0x01, 0x00}, \
  {0x3821, 0x06, 0x00}, \
  {0x3834, 0x00, 0x00}, \
  {0x3836, 0x08, 0x00}, \
  {0x3837, 0x02, 0x00}, \
  {0x4020, 0x00, 0x00}, \
  {0x4021, 0xe4, 0x00}, \
  {0x4022, 0x04, 0x00}, \
  {0x4023, 0xd7, 0x00}, \
  {0x4024, 0x05, 0x00}, \
  {0x4025, 0xbc, 0x00}, \
  {0x4026, 0x05, 0x00}, \
  {0x4027, 0xbf, 0x00}, \
  {0x402a, 0x04, 0x00}, \
  {0x402b, 0x08, 0x00}, \
  {0x402c, 0x02, 0x00}, \
  {0x402e, 0x0c, 0x00}, \
  {0x402f, 0x08, 0x00}, \
  {0x4501, 0x3c, 0x00}, \
  {0x4601, 0x83, 0x00}, \
  {0x4603, 0x01, 0x00}, \
  {0x4837, 0x19, 0x00}, \
  {0x5401, 0x61, 0x00}, \
  {0x5405, 0x40, 0x00}, \
}

#define RES2_REG_ARRAY \
{ \
  {0x0300, 0x01, 0x00}, \
  {0x0302, 0x28, 0x00}, \
  {0x3612, 0x27, 0x00}, \
  {0x3501, 0x60, 0x00}, \
  {0x3702, 0x40, 0x00}, \
  {0x370a, 0x27, 0x00}, \
  {0x372a, 0x00, 0x00}, \
  {0x372f, 0xa0, 0x00}, \
  {0x3718, 0x1c, 0x00}, \
  {0x3801, 0x00, 0x00}, \
  {0x3802, 0x00, 0x00}, \
  {0x3803, 0x04, 0x00}, \
  {0x3805, 0x9f, 0x00}, \
  {0x3806, 0x0c, 0x00}, \
  {0x3807, 0x4b, 0x00}, \
  {0x3808, 0x08, 0x00}, \
  {0x3809, 0x38, 0x00}, \
  {0x380a, 0x04, 0x00}, \
  {0x380b, 0xa0, 0x00}, \
  {0x380c, 0x09, 0x00}, \
  {0x380d, 0x60, 0x00}, \
  {0x380e, 0x0d, 0x00}, \
  {0x380f, 0x05, 0x00}, \
  {0x3811, 0x0c, 0x00}, \
  {0x3813, 0xc2, 0x00}, \
  {0x3814, 0x31, 0x00}, \
  {0x3815, 0x31, 0x00}, \
  {0x3820, 0x01, 0x00}, \
  {0x3821, 0x06, 0x00}, \
  {0x3834, 0x00, 0x00}, \
  {0x3836, 0x08, 0x00}, \
  {0x3837, 0x02, 0x00}, \
  {0x4020, 0x00, 0x00}, \
  {0x4021, 0xe4, 0x00}, \
  {0x4022, 0x04, 0x00}, \
  {0x4023, 0xd7, 0x00}, \
  {0x4024, 0x05, 0x00}, \
  {0x4025, 0xbc, 0x00}, \
  {0x4026, 0x05, 0x00}, \
  {0x4027, 0xbf, 0x00}, \
  {0x402a, 0x04, 0x00}, \
  {0x402b, 0x08, 0x00}, \
  {0x402c, 0x02, 0x00}, \
  {0x402e, 0x0c, 0x00}, \
  {0x402f, 0x08, 0x00}, \
  {0x4501, 0x3c, 0x00}, \
  {0x4601, 0x83, 0x00}, \
  {0x4603, 0x01, 0x00}, \
  {0x4837, 0x19, 0x00}, \
  {0x5401, 0x61, 0x00}, \
  {0x5405, 0x40, 0x00}, \
}

#define RES3_REG_ARRAY \
{ \
  {0x0300, 0x01, 0x00}, \
  {0x0302, 0x28, 0x00}, \
  {0x3612, 0x27, 0x00}, \
  {0x3501, 0x60, 0x00}, \
  {0x3702, 0x5a, 0x00}, \
  {0x370a, 0xa9, 0x00}, \
  {0x372a, 0x00, 0x00}, \
  {0x372f, 0x88, 0x00}, \
  {0x3718, 0x10, 0x00}, \
  {0x3801, 0x00, 0x00}, \
  {0x3802, 0x01, 0x00}, \
  {0x3803, 0x78, 0x00}, \
  {0x3805, 0x9f, 0x00}, \
  {0x3806, 0x0a, 0x00}, \
  {0x3807, 0xcf, 0x00}, \
  {0x3808, 0x04, 0x00}, \
  {0x3809, 0x20, 0x00}, \
  {0x380a, 0x02, 0x00}, \
  {0x380b, 0x52, 0x00}, \
  {0x380c, 0x0b, 0x00}, \
  {0x380d, 0x98, 0x00}, \
  {0x380e, 0x05, 0x00}, \
  {0x380f, 0x44, 0x00}, \
  {0x3811, 0x08, 0x00}, \
  {0x3813, 0x02, 0x00}, \
  {0x3814, 0x31, 0x00}, \
  {0x3815, 0x35, 0x00}, \
  {0x3820, 0x02, 0x00}, \
  {0x3821, 0x06, 0x00}, \
  {0x3834, 0x02, 0x00}, \
  {0x3836, 0x08, 0x00}, \
  {0x3837, 0x04, 0x00}, \
  {0x4020, 0x00, 0x00}, \
  {0x4021, 0xe4, 0x00}, \
  {0x4022, 0x03, 0x00}, \
  {0x4023, 0x3f, 0x00}, \
  {0x4024, 0x04, 0x00}, \
  {0x4025, 0x20, 0x00}, \
  {0x4026, 0x04, 0x00}, \
  {0x4027, 0x25, 0x00}, \
  {0x402a, 0x02, 0x00}, \
  {0x402b, 0x04, 0x00}, \
  {0x402c, 0x06, 0x00}, \
  {0x402e, 0x08, 0x00}, \
  {0x402f, 0x04, 0x00}, \
  {0x4501, 0x3c, 0x00}, \
  {0x4601, 0x40, 0x00}, \
  {0x4603, 0x01, 0x00}, \
  {0x4837, 0x19, 0x00}, \
  {0x5401, 0x51, 0x00}, \
  {0x5405, 0x20, 0x00}, \
}

#define RES4_REG_ARRAY \
{ \
  {0x0300, 0x01, 0x00}, \
  {0x0302, 0x28, 0x00}, \
  {0x3612, 0x27, 0x00}, \
  {0x3501, 0x60, 0x00}, \
  {0x3702, 0x5a, 0x00}, \
  {0x370a, 0xa9, 0x00}, \
  {0x372a, 0x00, 0x00}, \
  {0x372f, 0x88, 0x00}, \
  {0x3718, 0x10, 0x00}, \
  {0x3801, 0x00, 0x00}, \
  {0x3802, 0x01, 0x00}, \
  {0x3803, 0x78, 0x00}, \
  {0x3805, 0x9f, 0x00}, \
  {0x3806, 0x0a, 0x00}, \
  {0x3807, 0xcf, 0x00}, \
  {0x3808, 0x04, 0x00}, \
  {0x3809, 0x20, 0x00}, \
  {0x380a, 0x02, 0x00}, \
  {0x380b, 0x52, 0x00}, \
  {0x380c, 0x0b, 0x00}, \
  {0x380d, 0x98, 0x00}, \
  {0x380e, 0x03, 0x00}, \
  {0x380f, 0x82, 0x00}, \
  {0x3811, 0x08, 0x00}, \
  {0x3813, 0x02, 0x00}, \
  {0x3814, 0x31, 0x00}, \
  {0x3815, 0x35, 0x00}, \
  {0x3820, 0x02, 0x00}, \
  {0x3821, 0x06, 0x00}, \
  {0x3834, 0x02, 0x00}, \
  {0x3836, 0x08, 0x00}, \
  {0x3837, 0x04, 0x00}, \
  {0x4020, 0x00, 0x00}, \
  {0x4021, 0xe4, 0x00}, \
  {0x4022, 0x03, 0x00}, \
  {0x4023, 0x3f, 0x00}, \
  {0x4024, 0x04, 0x00}, \
  {0x4025, 0x20, 0x00}, \
  {0x4026, 0x04, 0x00}, \
  {0x4027, 0x25, 0x00}, \
  {0x402a, 0x02, 0x00}, \
  {0x402b, 0x04, 0x00}, \
  {0x402c, 0x06, 0x00}, \
  {0x402e, 0x08, 0x00}, \
  {0x402f, 0x04, 0x00}, \
  {0x4501, 0x3c, 0x00}, \
  {0x4601, 0x40, 0x00}, \
  {0x4603, 0x01, 0x00}, \
  {0x4837, 0x19, 0x00}, \
  {0x5401, 0x51, 0x00}, \
  {0x5405, 0x20, 0x00}, \
}

#define RES5_REG_ARRAY \
{ \
  {0x0300, 0x01, 0x00}, \
  {0x0302, 0x28, 0x00}, \
  {0x3612, 0x27, 0x00}, \
  {0x3501, 0x60, 0x00}, \
  {0x3702, 0x5a, 0x00}, \
  {0x370a, 0xa9, 0x00}, \
  {0x372a, 0x00, 0x00}, \
  {0x372f, 0x88, 0x00}, \
  {0x3718, 0x10, 0x00}, \
  {0x3801, 0x00, 0x00}, \
  {0x3802, 0x01, 0x00}, \
  {0x3803, 0x78, 0x00}, \
  {0x3805, 0x9f, 0x00}, \
  {0x3806, 0x0a, 0x00}, \
  {0x3807, 0xcf, 0x00}, \
  {0x3808, 0x04, 0x00}, \
  {0x3809, 0x20, 0x00}, \
  {0x380a, 0x02, 0x00}, \
  {0x380b, 0x52, 0x00}, \
  {0x380c, 0x0b, 0x00}, \
  {0x380d, 0x98, 0x00}, \
  {0x380e, 0x02, 0x00}, \
  {0x380f, 0xa2, 0x00}, \
  {0x3811, 0x08, 0x00}, \
  {0x3813, 0x02, 0x00}, \
  {0x3814, 0x31, 0x00}, \
  {0x3815, 0x35, 0x00}, \
  {0x3820, 0x02, 0x00}, \
  {0x3821, 0x06, 0x00}, \
  {0x3834, 0x02, 0x00}, \
  {0x3836, 0x08, 0x00}, \
  {0x3837, 0x04, 0x00}, \
  {0x4020, 0x00, 0x00}, \
  {0x4021, 0xe4, 0x00}, \
  {0x4022, 0x03, 0x00}, \
  {0x4023, 0x3f, 0x00}, \
  {0x4024, 0x04, 0x00}, \
  {0x4025, 0x20, 0x00}, \
  {0x4026, 0x04, 0x00}, \
  {0x4027, 0x25, 0x00}, \
  {0x402a, 0x02, 0x00}, \
  {0x402b, 0x04, 0x00}, \
  {0x402c, 0x06, 0x00}, \
  {0x402e, 0x08, 0x00}, \
  {0x402f, 0x04, 0x00}, \
  {0x4501, 0x3c, 0x00}, \
  {0x4601, 0x40, 0x00}, \
  {0x4603, 0x01, 0x00}, \
  {0x4837, 0x19, 0x00}, \
  {0x5401, 0x51, 0x00}, \
  {0x5405, 0x20, 0x00}, \
}

/* Sensor Handler */
static sensor_lib_t sensor_lib_ptr =
{
  .sensor_slave_info =
  {
    .sensor_name = SENSOR_MODEL,
    .slave_addr = 0x20,
    .i2c_freq_mode = SENSOR_I2C_MODE_FAST,
    .addr_type = CAMERA_I2C_WORD_ADDR,
    .sensor_id_info =
    {
      .sensor_id_reg_addr = 0x300A,
      .sensor_id = 0xD850,
    },
    .power_setting_array =
    {
      .power_setting_a =
      {
        {
          .seq_type = CAMERA_POW_SEQ_VREG,
          .seq_val = CAMERA_VIO,
          .config_val = 0,
          .delay = 0,
        },
        {
          .seq_type = CAMERA_POW_SEQ_VREG,
          .seq_val = CAMERA_VANA,
          .config_val = 0,
          .delay = 0,
        },
        {
          .seq_type = CAMERA_POW_SEQ_VREG,
          .seq_val = CAMERA_VDIG,
          .config_val = 0,
          .delay = 0,
        },
        {
          .seq_type = CAMERA_POW_SEQ_CLK,
          .seq_val = CAMERA_MCLK,
          .config_val = 24000000,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_STANDBY,
          .config_val = GPIO_OUT_LOW,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_STANDBY,
          .config_val = GPIO_OUT_HIGH,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_RESET,
          .config_val = GPIO_OUT_LOW,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_RESET,
          .config_val = GPIO_OUT_HIGH,
          .delay = 5,
        },
      },
      .size = 8,
      .power_down_setting_a =
      {
        {
          .seq_type = CAMERA_POW_SEQ_CLK,
          .seq_val = CAMERA_MCLK,
          .config_val = 0,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_RESET,
          .config_val = GPIO_OUT_LOW,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_STANDBY,
          .config_val = GPIO_OUT_LOW,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_VREG,
          .seq_val = CAMERA_VDIG,
          .config_val = 0,
          .delay = 0,
        },
        {
          .seq_type = CAMERA_POW_SEQ_VREG,
          .seq_val = CAMERA_VANA,
          .config_val = 0,
          .delay = 0,
        },
        {
          .seq_type = CAMERA_POW_SEQ_VREG,
          .seq_val = CAMERA_VIO,
          .config_val = 0,
          .delay = 0,
        },
      },
      .size_down = 6,
    },
  },
  .sensor_output =
  {
    .output_format = SENSOR_BAYER,
    .connection_mode = SENSOR_MIPI_CSI,
    .raw_output = SENSOR_10_BIT_DIRECT,
    .filter_arrangement = SENSOR_BGGR,
  },
  .output_reg_addr =
  {
    .x_output = 0x3808,
    .y_output = 0x380A,
    .line_length_pclk = 0x380C,
    .frame_length_lines = 0x380E,
  },
  .exp_gain_info =
  {
    .coarse_int_time_addr = 0x3500,
    .global_gain_addr = 0x350A,
    .vert_offset = OV13850_Q13V06K_MAX_INTEGRATION_MARGIN,
  },
  .aec_info =
  {
    .min_gain = OV13850_Q13V06K_MIN_GAIN,
    .max_gain = OV13850_Q13V06K_MAX_GAIN,
    .max_analog_gain = OV13850_Q13V06K_MAX_AGAIN,
    .max_linecount = 32767 - OV13850_Q13V06K_MAX_INTEGRATION_MARGIN,
  },
  .sensor_num_frame_skip = 2,
  .sensor_num_HDR_frame_skip = 2,
  .sensor_max_pipeline_frame_delay = 2,
  .sensor_property =
  {
    .pix_size = 1.12, /* um */
    .sensing_method = SENSOR_SMETHOD_ONE_CHIP_COLOR_AREA_SENSOR,
    .crop_factor = 1.0,
  },
  .pixel_array_size_info =
  {
    .active_array_size =
    {
      .width = 4208,
      .height = 3120,
    },
    .left_dummy = 8,
    .right_dummy = 8,
    .top_dummy = 8,
    .bottom_dummy = 8,
  },
  .color_level_info =
  {
    .white_level = 1023,
    .r_pedestal = OV13850_Q13V06K_DATA_PEDESTAL,
    .gr_pedestal = OV13850_Q13V06K_DATA_PEDESTAL,
    .gb_pedestal = OV13850_Q13V06K_DATA_PEDESTAL,
    .b_pedestal = OV13850_Q13V06K_DATA_PEDESTAL,
  },
  .sensor_stream_info_array =
  {
    .sensor_stream_info =
    {
      {
        .vc_cfg_size = 1,
        .vc_cfg =
        {
          {
            .cid = 0,
            .dt = CSI_RAW10,
            .decode_format = CSI_DECODE_10BIT,
          },
        },
        .pix_data_fmt =
        {
          SENSOR_BAYER,
        },
      },
      {
        .vc_cfg_size = 1,
        .vc_cfg =
        {
          {
            .cid = 1,
            .dt = CSI_EMBED_DATA,
            .decode_format = CSI_DECODE_8BIT,
          },
        },
        .pix_data_fmt =
        {
          SENSOR_META,
        },
      },
    },
    .size = 2,
  },
  .start_settings =
  {
    .reg_setting_a = START_REG_ARRAY,
    .addr_type = CAMERA_I2C_WORD_ADDR,
    .data_type = CAMERA_I2C_BYTE_DATA,
    .delay = 0,
  },
  .stop_settings =
  {
    .reg_setting_a = STOP_REG_ARRAY,
    .addr_type = CAMERA_I2C_WORD_ADDR,
    .data_type = CAMERA_I2C_BYTE_DATA,
    .delay = 0,
  },
  .groupon_settings =
  {
    .reg_setting_a = GROUPON_REG_ARRAY,
    .addr_type = CAMERA_I2C_WORD_ADDR,
    .data_type = CAMERA_I2C_BYTE_DATA,
    .delay = 0,
  },
  .groupoff_settings =
  {
    .reg_setting_a = GROUPOFF_REG_ARRAY,
    .addr_type = CAMERA_I2C_WORD_ADDR,
    .data_type = CAMERA_I2C_BYTE_DATA,
    .delay = 0,
  },
  .embedded_data_enable_settings =
  {
    .reg_setting_a = {},
    .addr_type = 0,
    .data_type = 0,
    .delay = 0,
  },
  .embedded_data_disable_settings =
  {
    .reg_setting_a = {},
    .addr_type = 0,
    .data_type = 0,
    .delay = 0,
  },
  .test_pattern_info =
  {
    .test_pattern_settings =
    {
      {
        .mode = SENSOR_TEST_PATTERN_OFF,
        .settings =
        {
          .reg_setting_a =
          {
            {0x5E00, 0x00, 0x00},
          },
          .addr_type = CAMERA_I2C_WORD_ADDR,
          .data_type = CAMERA_I2C_BYTE_DATA,
          .delay = 0,
        }
      },
      {
        .mode = SENSOR_TEST_PATTERN_COLOR_BARS,
        .settings =
        {
          .reg_setting_a =
          {
            {0x5E00, 0x80, 0x00},
          },
          .addr_type = CAMERA_I2C_WORD_ADDR,
          .data_type = CAMERA_I2C_BYTE_DATA,
          .delay = 0,
        },
      },
      {
        .mode = SENSOR_TEST_PATTERN_COLOR_BARS_FADE_TO_GRAY,
        .settings =
        {
          .reg_setting_a =
          {
            {0x5E00, 0x84, 0x00},
          },
          .addr_type = CAMERA_I2C_WORD_ADDR,
          .data_type = CAMERA_I2C_BYTE_DATA,
          .delay = 0,
        },
      },
    },
    .size = 3,
    .solid_mode_addr =
    {
      .r_addr = 0,
      .gr_addr = 0,
      .gb_addr = 0,
      .b_addr = 0,
    },
  },
  .init_settings_array =
  {
    .reg_settings =
    {
      {
        .reg_setting_a = INIT0_REG_ARRAY,
        .addr_type = CAMERA_I2C_WORD_ADDR,
        .data_type = CAMERA_I2C_BYTE_DATA,
        .delay = 0,
      },
    },
    .size = 1,
  },
  .res_settings_array =
  {
    .reg_settings =
    {
      /* Res 0 */
      {
        .reg_setting_a = RES0_REG_ARRAY,
        .addr_type = CAMERA_I2C_WORD_ADDR,
        .data_type = CAMERA_I2C_BYTE_DATA,
        .delay = 0,
      },
      /* Res 1 */
      {
        .reg_setting_a = RES1_REG_ARRAY,
        .addr_type = CAMERA_I2C_WORD_ADDR,
        .data_type = CAMERA_I2C_BYTE_DATA,
        .delay = 0,
      },
      /* Res 2 */
      {
        .reg_setting_a = RES2_REG_ARRAY,
        .addr_type = CAMERA_I2C_WORD_ADDR,
        .data_type = CAMERA_I2C_BYTE_DATA,
        .delay = 0,
      },
      /* Res 3 */
      {
        .reg_setting_a = RES3_REG_ARRAY,
        .addr_type = CAMERA_I2C_WORD_ADDR,
        .data_type = CAMERA_I2C_BYTE_DATA,
        .delay = 0,
      },
      /* Res 4 */
      {
        .reg_setting_a = RES4_REG_ARRAY,
        .addr_type = CAMERA_I2C_WORD_ADDR,
        .data_type = CAMERA_I2C_BYTE_DATA,
        .delay = 0,
      },
      /* Res 5 */
      {
        .reg_setting_a = RES5_REG_ARRAY,
        .addr_type = CAMERA_I2C_WORD_ADDR,
        .data_type = CAMERA_I2C_BYTE_DATA,
        .delay = 0,
      },
    },
    .size = 6,
  },
  .out_info_array =
  {
    .out_info =
    {
      /* Res 0 */
      {
        .x_output = 4208,
        .y_output = 3120,
        .line_length_pclk = 4800,
        .frame_length_lines = 3333,
        .op_pixel_clk = 480000000,
        .binning_factor = 1,
        .min_fps = 7.500,
        .max_fps = 30.00,
        .mode = SENSOR_DEFAULT_MODE,
        .offset_x = 0,
        .offset_y = 0,
        .scale_factor = 1.000,
        .is_pdaf_supported = FALSE,
      },
      /* Res 1 */
      {
        .x_output = 2104,
        .y_output = 1560,
        .line_length_pclk = 2400,
        .frame_length_lines = 3333,
        .op_pixel_clk = 256000000,
        .binning_factor = 1,
        .min_fps = 7.500,
        .max_fps = 30.00,
        .mode = SENSOR_DEFAULT_MODE,
        .offset_x = 0,
        .offset_y = 0,
        .scale_factor = 1.000,
        .is_pdaf_supported = FALSE,
      },
      /* Res 2 */
      {
        .x_output = 2104,
        .y_output = 1184,
        .line_length_pclk = 2400,
        .frame_length_lines = 3333,
        .op_pixel_clk = 256000000,
        .binning_factor = 1,
        .min_fps = 7.500,
        .max_fps = 30.0,
        .mode = SENSOR_DEFAULT_MODE,
        .offset_x = 0,
        .offset_y = 376,
        .scale_factor = 1.000,
        .is_pdaf_supported = FALSE,
      },
      /* Res 3 */
      {
        .x_output = 1056,
        .y_output = 594,
        .line_length_pclk = 2968,
        .frame_length_lines = 1348,
        .op_pixel_clk = 256000000,
        .binning_factor = 1,
        .min_fps = 7.500,
        .max_fps = 60.000, /*59.987*/
        .mode = SENSOR_HFR_MODE,
        .offset_x = 0,
        .offset_y = 360,
        .scale_factor = 1.000,
        .is_pdaf_supported = FALSE,
      },
      /* Res 4 */
      {
        .x_output = 1056,
        .y_output = 594,
        .line_length_pclk = 2968,
        .frame_length_lines = 898,
        .op_pixel_clk = 256000000,
        .binning_factor = 1,
        .min_fps = 7.500,
        .max_fps = 90.047,
        .mode = SENSOR_HFR_MODE,
        .offset_x = 0,
        .offset_y = 360,
        .scale_factor = 1.000,
        .is_pdaf_supported = FALSE,
      },
      /* Res 5 */
      {
        .x_output = 1056,
        .y_output = 594,
        .line_length_pclk = 2968,
        .frame_length_lines = 674,
        .op_pixel_clk = 256000000,
        .binning_factor = 1,
        .min_fps = 7.500,
        .max_fps = 120.000, /*119.974*/
        .mode = SENSOR_HFR_MODE,
        .offset_x = 0,
        .offset_y = 360,
        .scale_factor = 1.000,
        .is_pdaf_supported = FALSE,
      },
    },
    .size = 6,
  },
  .csi_params =
  {
    .lane_cnt = 4,
    .settle_cnt = 0x15,
    .is_csi_3phase = 0,
  },
  .csid_lut_params_array =
  {
    .lut_params =
    {
      /* Res 0 */
      {
        .num_cid = 2,
        .vc_cfg_a =
        {
          {
            .cid = 0,
            .dt = CSI_RAW10,
            .decode_format = CSI_DECODE_10BIT
          },
          {
            .cid = 1,
            .dt = CSI_EMBED_DATA,
            .decode_format = CSI_DECODE_8BIT
          },
        },
      },
      /* Res 1 */
      {
        .num_cid = 2,
        .vc_cfg_a =
        {
          {
            .cid = 0,
            .dt = CSI_RAW10,
            .decode_format = CSI_DECODE_10BIT
          },
          {
            .cid = 1,
            .dt = CSI_EMBED_DATA,
            .decode_format = CSI_DECODE_8BIT
          },
        },
      },
      /* Res 2 */
      {
        .num_cid = 2,
        .vc_cfg_a =
        {
          {
            .cid = 0,
            .dt = CSI_RAW10,
            .decode_format = CSI_DECODE_10BIT
          },
          {
            .cid = 1,
            .dt = CSI_EMBED_DATA,
            .decode_format = CSI_DECODE_8BIT
          },
        },
      },
      /* Res 3 */
      {
        .num_cid = 2,
        .vc_cfg_a =
        {
          {
            .cid = 0,
            .dt = CSI_RAW10,
            .decode_format = CSI_DECODE_10BIT
          },
          {
            .cid = 1,
            .dt = CSI_EMBED_DATA,
            .decode_format = CSI_DECODE_8BIT
          },
        },
      },
      /* Res 4 */
      {
        .num_cid = 2,
        .vc_cfg_a =
        {
          {
            .cid = 0,
            .dt = CSI_RAW10,
            .decode_format = CSI_DECODE_10BIT
          },
          {
            .cid = 1,
            .dt = CSI_EMBED_DATA,
            .decode_format = CSI_DECODE_8BIT
          },
        },
      },
      /* Res 5 */
      {
        .num_cid = 2,
        .vc_cfg_a =
        {
          {
            .cid = 0,
            .dt = CSI_RAW10,
            .decode_format = CSI_DECODE_10BIT
          },
          {
            .cid = 1,
            .dt = CSI_EMBED_DATA,
            .decode_format = CSI_DECODE_8BIT
          },
        },
      },
    },
    .size = 6,
  },
  .crop_params_array =
  {
    .crop_params =
    {
      /* Res 0 */
      {
        .top_crop = 0,
        .bottom_crop = 0,
        .left_crop = 0,
        .right_crop = 0,
      },
      /* Res 1 */
      {
        .top_crop = 0,
        .bottom_crop = 0,
        .left_crop = 0,
        .right_crop = 0,
      },
      /* Res 2 */
      {
        .top_crop = 0,
        .bottom_crop = 0,
        .left_crop = 0,
        .right_crop = 0,
      },
      /* Res 3 */
      {
        .top_crop = 0,
        .bottom_crop = 0,
        .left_crop = 0,
        .right_crop = 0,
      },
      /* Res 4 */
      {
        .top_crop = 0,
        .bottom_crop = 0,
        .left_crop = 0,
        .right_crop = 0,
      },
      /* Res 5 */
      {
        .top_crop = 0,
        .bottom_crop = 0,
        .left_crop = 0,
        .right_crop = 0,
      },
    },
    .size = 6,
  },
  .exposure_func_table =
  {
    .sensor_calculate_exposure = sensor_calculate_exposure,
    .sensor_fill_exposure_array = sensor_fill_exposure_array,
  },
  .meta_data_out_info_array =
  {
    .meta_data_out_info =
    {
      {
        .width = 4208,
        .height = 1,
        .stats_type = CSI_DECODE_8BIT,
        .dt = CSI_EMBED_DATA,
      },
    },
    .size = 1,
  },
  .rolloff_config =
  {
    .enable = FALSE,
    .full_size_info =
    {
      .full_size_width = 0,
      .full_size_height = 0,
      .full_size_left_crop = 0,
      .full_size_top_crop = 0,
    },
  },
  .adc_readout_time = 0,
  .sensor_num_fast_aec_frame_skip = 0,
  .noise_coeff = {
    .gradient_S = 3.738032e-06,
    .offset_S = 3.651935e-04,
    .gradient_O = 4.499952e-07,
    .offset_O = -2.968624e-04,
  },
};

#endif /* _OV13850_Q13V06K_LIB_H__ */
