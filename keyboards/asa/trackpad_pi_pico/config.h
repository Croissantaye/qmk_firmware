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

#define SPI_SCK_PIN GP18
#define SPI_MOSI_PIN GP19
#define SPI_MISO_PIN GP16
#define POINTING_DEVICE_CS_PIN GP17

#define CIRQUE_PINNACLE_CURVED_OVERLAY
#undef CIRQUE_PINNACLE_DIAMETER_MM
#define CIRQUE_PINNACLE_DIAMETER_MM 40
#define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_RELATIVE_MODE
#define CIRQUE_PINNACLE_TAP_ENABLE
#define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
