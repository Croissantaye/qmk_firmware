/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum dilemma_keymap_layers {
    LAYER_BASE = 0,
    LAYER_BUTTON,
    LAYER_MEDIA,
    LAYER_NAV,
    LAYER_MOUSE,
    LAYER_NUM,
    LAYER_SYM,
    LAYER_FUN,
    LAYER_ADD,
};

#define KC_LA LGUI_T(KC_A)
#define KC_LS LALT_T(KC_S)
#define KC_LD LCTL_T(KC_D)
#define KC_LF LSFT_T(KC_F)
#define KC_RJ RSFT_T(KC_J)
#define KC_RK RCTL_T(KC_K)
#define KC_RL RALT_T(KC_L)
#define KC_RSCLN RGUI_T(KC_SCLN)

#define KC_BZ LT(LAYER_BUTTON, KC_Z)
#define KC_BSLASH LT(LAYER_BUTTON, KC_SLSH)

#define KC_M_ESC LT(LAYER_MEDIA, KC_ESC)
#define KC_N_SPC LT(LAYER_NAV, KC_SPC)
#define KC_M_TAB LT(LAYER_MOUSE, KC_TAB)
#define KC_S_ENT LT(LAYER_SYM, KC_ENT)
#define KC_N_BSPC LT(LAYER_NUM, KC_BSPC)
#define KC_N_DEL LT(LAYER_FUN, KC_DEL)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT_custom_3x5_3(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_LA,   KC_LS,   KC_LD,   KC_LF,    KC_G,       KC_H,    KC_RJ,  KC_RK,   KC_RL, KC_RSCLN,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
         KC_BZ,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT,KC_BSLASH,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                        KC_M_ESC, KC_N_SPC, KC_M_TAB, KC_S_ENT, KC_N_BSPC, KC_N_DEL
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),

  [LAYER_BUTTON] = LAYOUT_custom_3x5_3(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       C(KC_Z), C(KC_X), C(KC_C), C(KC_V),RCS(KC_R), RCS(KC_R),  C(KC_V),C(KC_C), C(KC_X),  C(KC_Z),
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, QK_BOOT,    QK_BOOT, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       C(KC_Z), C(KC_X), C(KC_C), C(KC_V),RCS(KC_R), RCS(KC_R),  C(KC_V),C(KC_C), C(KC_X),  C(KC_Z),
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                        MS_BTN3,  MS_BTN1,  MS_BTN2,   MS_BTN2,  MS_BTN1, MS_BTN2
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),

  [LAYER_MEDIA] = LAYOUT_custom_3x5_3(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,    XXXXXXX, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
          KC_Z, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         XXXXXXX, XXXXXXX, XXXXXXX,   KC_MSTP, KC_MPLY,  KC_KB_MUTE
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),

  [LAYER_NAV] = LAYOUT_custom_3x5_3(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    C(KC_Y), C(KC_V), C(KC_C), C(KC_X), C(KC_Z),
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,    XXXXXXX, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_INS, KC_HOME, KC_PGDN, KC_PGUP,  KC_END,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         XXXXXXX, XXXXXXX, XXXXXXX,     KC_ENT, KC_BSPC,  KC_DEL
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),

  [LAYER_MOUSE] = LAYOUT_custom_3x5_3(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    C(KC_Y), C(KC_V), C(KC_C), C(KC_X), C(KC_Z),
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,    XXXXXXX, MS_LEFT, MS_DOWN,   MS_UP, MS_RGHT,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                         XXXXXXX, XXXXXXX, XXXXXXX,    MS_BTN2, MS_BTN1, MS_BTN3
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),

  [LAYER_NUM] = LAYOUT_custom_3x5_3(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
       KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
       KC_QUOT,    KC_4,    KC_5,    KC_6,  KC_EQL,    XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
        KC_GRV,    KC_1,    KC_2,    KC_3, KC_BSLS,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                          KC_DOT,    KC_0, KC_MINS,    XXXXXXX, XXXXXXX, XXXXXXX
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),

  [LAYER_SYM] = LAYOUT_custom_3x5_3(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
     S(KC_LBRC),S(KC_7), S(KC_8),S(KC_9),S(KC_RBRC),    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
     S(KC_QUOT),S(KC_4), S(KC_5),S(KC_6), S(KC_EQL),    XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
      S(KC_GRV),S(KC_1), S(KC_2),S(KC_3),S(KC_BSLS),    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                       S(KC_DOT),S(KC_0),S(KC_MINS),    XXXXXXX, XXXXXXX, XXXXXXX
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),

  [LAYER_FUN] = LAYOUT_custom_3x5_3(
  // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
        KC_F12,   KC_F7,   KC_F8,   KC_F9, KC_PSCR,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
        KC_F11,   KC_F4,   KC_F5,   KC_F6, KC_SCRL,    XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
        KC_F10,   KC_F1,   KC_F2,   KC_F3, KC_PAUS,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                          KC_APP,  KC_SPC,  KC_TAB,    XXXXXXX, XXXXXXX, XXXXXXX
  //                   ╰───────────────────────────╯ ╰──────────────────────────╯
  ),
};
