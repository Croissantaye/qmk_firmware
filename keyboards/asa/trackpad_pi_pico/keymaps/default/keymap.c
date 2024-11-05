// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┐
      * │Tab│ Q │ W │
      * ├───┼───┼───┤
      * │Ctl│ A │ S │
      * ├───┼───┼───┤
      * │Sft│ Z │ X │
      * └───┴───┴───┘
      */
    [0] = LAYOUT_ortho_4x4(
        KC_TAB,  KC_Q,    KC_W,
        KC_LCTL, KC_A,    KC_S,
        KC_LSFT, KC_Z,    KC_X
    )
};
