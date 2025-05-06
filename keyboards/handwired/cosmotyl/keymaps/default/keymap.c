// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _LOWER,
    _RAISE,
    _COMBO
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define COMBO MO(_COMBO)
#define BKTAB LSFT(KC_TAB)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
            KC_1, KC_2, KC_3, KC_4, KC_5,                       KC_6, KC_7, KC_8, KC_9, KC_0,
            KC_Q, KC_W, KC_F, KC_P, KC_B,                       KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
            KC_A, KC_R, KC_S, KC_T, KC_G,                       KC_M, KC_N, KC_E, KC_I, KC_O,
            KC_Z, KC_X, KC_C, KC_D, KC_V,                       KC_K, KC_H, KC_COMM, KC_DOT, KC_SLASH,
            KC_BSLS, KC_SCLN, LOWER, KC_SPC, KC_LGUI,           KC_ESC, KC_BSPC, RAISE, KC_EQL, KC_MINS,
            KC_LSFT, KC_LCTL,                                   KC_ENT, KC_LSFT
    ),
    [_LOWER] = LAYOUT(
            KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                  KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
            KC_NO, KC_END, KC_UP, KC_HOME, KC_F11,              KC_F12, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,            KC_NO,  KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU,
            KC_NO, KC_PGDN, KC_NO, KC_PGUP, KC_NO,              KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_ESC, KC_DEL, COMBO, KC_NO, KC_NO,
            KC_NO, KC_NO,                                       KC_TAB, BKTAB
    ),
    [_RAISE] = LAYOUT(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_LBRC, KC_LCBR, KC_LPRN,            KC_RPRN, KC_RCBR, KC_RBRC, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, COMBO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO,                                       KC_NO, KC_NO
    ),
    [_COMBO] = LAYOUT(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO,                                       KC_NO, KC_NO
    )
};
