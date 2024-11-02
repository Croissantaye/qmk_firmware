// Copyright 2024 Asante Azevedo (@Croissantaye)
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

// /* Handedness. */
// #define SPLIT_HAND_PIN GP29
// #define SPLIT_HAND_PIN_LOW_IS_LEFT // High -> right, Low -> left.

// /* VBUS detection. */
// #define USB_VBUS_PIN GP19

// /* CRC. */
// #define CRC8_USE_TABLE
// #define CRC8_OPTIMIZE_SPEED

/* Cirque trackpad over SPI. */
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP22
#define SPI_MOSI_PIN GP23
#define SPI_MISO_PIN GP20
#define POINTING_DEVICE_CS_PIN GP21

/* Cirque settings*/
#undef CIRQUE_PINNACLE_DIAMETER_MM
#define CIRQUE_PINNACLE_DIAMETER_MM 40
#define CIRQUE_PINNACLE_SPI_MODE 0
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
#define CIRQUE_PINNACLE_TAP_ENABLE
#define CIRQUE_PINNACLE_SECONDARY_TAP_ENABLE
#define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_ABSOLUTE_MODE
#define CIRQUE_PINNACLE_CURVED_OVERLAY

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP1
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U