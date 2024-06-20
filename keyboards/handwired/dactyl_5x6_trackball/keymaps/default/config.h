// Copyright 2024 Asante Azevedo (@Asante Azevedo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// #include "../../trackball.h"

#define EE_HANDS
#define MATRIX_COLS 7
#define MATRIX_ROWS 10

// trackball settings
#define PMW33XX_CS_PIN F4
#define SPLIT_POINTING_ENABLE
#define ROTATIONAL_TRANSFORM_ANGLE  25
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x05
#define PMW33XX_CPI 700
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100
#define MOUSEKEY_WHEEL_MAX_SPEED 3