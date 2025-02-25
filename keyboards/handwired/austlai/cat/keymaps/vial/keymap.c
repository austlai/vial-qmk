/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┼───┼───┼───┤       ├───┼───┼───┤───┴───┴───┘
      *             │GUI│SPC│BCK│       │ENT│SPC│ALT│
      *             └───┴───┴───┘       └───┴───┴───┘
      */
    [0] = LAYOUT(
        KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,   KC_T,         KC_Y, KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A, KC_S, KC_D,    KC_F,   KC_G,         KC_H, KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C,    KC_V,   KC_B,         KC_N, KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                             KC_LGUI, KC_SPC, KC_BSPC,    KC_ENT, KC_SPC, KC_RALT
    ),

    [1] = LAYOUT(
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______,    _______, _______, _______
    ),

    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______,    _______, _______, _______
    ),

    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______,    _______, _______, _______
    ),

    [4] = LAYOUT(
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______,    _______, _______, _______
    ),

    [5] = LAYOUT(
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______,    _______, _______, _______
    ),

};

