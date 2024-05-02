// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _QWERTY 0
// #define _LOWER 1
#define _RAISE 1

#define RAISE MO(_RAISE)
// #define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * 
     *  ┬───┬───┬───┬───┬───┬───┐ 
     *  │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 
     *  ┼───┼───┼───┼───┼───┼───┤ 
     *  │Tab│ Q │ W │ E │ R │ T │
     *  ┼───┼───┼───┼───┼───┼───┤
     *  │Shf│ A │ S │ D │ F │ G │
     *  ┼───┼───┼───┼───┼───┼───┤
     *  │Win│ Z │ X │ C │ V │ B │
     *  ┴───┴───┼───┼───┼───┼───┼───┐
     *          │Hom│End│spc│ent│Mod│
     *          └───┴───┴───┼───┼───┤
     *                      │ctl│alt│
     *                      └───┴───┘
     * 
     *          ┬───┬───┬───┬───┬───┬───┐ 
     *          │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ 
     *          ┼───┼───┼───┼───┼───┼───┤ 
     *          │ Y │ U │ I │ O │ P │ = │
     *          ┼───┼───┼───┼───┼───┼───┤
     *          │ H │ J │ K │ L │ : │ ' │
     *          ┼───┼───┼───┼───┼───┼───┤
     *          │ N │ M │ < │ > │ ? │ \ │
     *          ┼───┼───┼───┼───┼───┴───┘
     *          │Del│   │ [ │ ] │
     *  ┌───┬───┼───┤   └───┴───┘
     *  │Alt│Ctl│Bks│
     *  └───┴───┴───┘
     */
    [_QWERTY] = LAYOUT_ergodox(
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,
        KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,
        KC_LGUI, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                                    
                        KC_HOME, KC_END, KC_SPC,KC_ENT , RAISE ,    
                                                KC_LCTL, KC_LALT,       

                         KC_6 ,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
                         KC_Y ,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL ,
                         KC_H ,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
                         KC_N ,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                         KC_DEL,             KC_LBRC,KC_RBRC,
        KC_RALT, KC_RCTL, KC_BSPC
    ),

    /**
     *  ┬───┬───┬───┬───┬───┬───┐ 
     *  │F12│ F1│ F2│ F3│ F4│ F5│ 
     *  ┼───┼───┼───┼───┼───┼───┤ 
     *  │ ` │   │ V+│ V-│ Vx│   │
     *  ┼───┼───┼───┼───┼───┼───┤
     *  │Sht│ ← │ ↓ │ ↑ │ → │   │
     *  ┼───┼───┼───┼───┼───┼───┤
     *  │SLP│   │Nxt│p/p│Pre│   │
     *  ┴───┴───┼───┼───┼───┼───┼───┐
     *          │PgU│PgD│Mod│   │   │
     *          └───┴───┴───┼───┼───┤
     *                      │   │   │
     *                      └───┴───┘
     * 
     *          ┬───┬───┬───┬───┬───┬───┐ 
     *          │ F6│ F7│ F8│ F9│F10│F11│ 
     *          ┼───┼───┼───┼───┼───┼───┤ 
     *          │   │MWU│MWD│MWL│MWR│   │
     *          ┼───┼───┼───┼───┼───┼───┤
     *          │   │LMB│RMB│   │   │   │
     *          ┼───┼───┼───┼───┼───┼───┤
     *          │   │   │   │   │   │   │
     *          ┼───┼───┼───┼───┼───┴───┘
     *          │Mod│   │   │   │
     *  ┌───┬───┼───┤   └───┴───┘
     *  │   │   │   │
     *  └───┴───┴───┘
     * 
     */

    [_RAISE] = LAYOUT_ergodox(
        KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,
        KC_GRV , KC_NO ,KC_VOLD,KC_VOLU,KC_MUTE, KC_NO ,
        _______, KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT, KC_NO  ,
        KC_SLEP, KC_NO , KC_MNXT,KC_MPLY,KC_MPRV, KC_NO  ,
                        KC_PGUP, KC_PGDN,                                     
                                         KC_NO ,KC_NO , KC_NO ,    
                                                KC_NO, KC_NO,       

                         KC_F6,    KC_F7,   KC_F8,   KC_F9,  KC_F10,    KC_F11,
                         KC_NO , KC_WH_U, KC_WH_D, KC_WH_L, KC_WH_R,    KC_NO ,
                         KC_NO , KC_BTN1, KC_BTN1,    KC_NO,    KC_NO, KC_NO,
                         KC_NO ,    KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,
                         KC_NO ,             KC_NO,KC_NO,    
        KC_NO, KC_NO, KC_NO
    )
};
