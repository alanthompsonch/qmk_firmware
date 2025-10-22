// Copyright 2024 splitkb.com (support@splitkb.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_swiss_de.h"

enum layers {
    _NOTED = 0,
    _MATH,
    _SYM,
    _NAV,
    _MOUSE,
    _FKEYS,
    _MEDIA
};

// Note: LAlt/Enter (ALT_ENT) is not the same thing as the keyboard shortcut Alt+Enter.
// The notation `mod/tap` denotes a key that activates the modifier `mod` when held down, and
// produces the key `tap` when tapped (i.e. pressed and released).

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_NOTED] = LAYOUT_split_3x6_5_hlc(KC_NO, KC_RBRC, KC_Z, KC_U, KC_A, KC_Q, KC_P, KC_B, KC_M, KC_L, KC_F, KC_NO, KC_NO, LGUI_T(KC_C), LALT_T(KC_S), LCTL_T(KC_I), LSFT_T(KC_E), KC_O, KC_D, RSFT_T(KC_T), RCTL_T(KC_N), RALT_T(KC_R), RGUI_T(KC_H), KC_NO, KC_NO, KC_V, KC_J, KC_X, KC_Y, KC_MINS, KC_NO, KC_NO, KC_NO, KC_NO, KC_W, KC_G, KC_COMM, KC_DOT, KC_K, KC_NO, KC_NO, LT(6,KC_ESC), LT(3,KC_SPC), LT(4,KC_TAB), KC_NO, KC_NO, LT(2,KC_ENT), LT(1,KC_BSPC), LT(5,KC_DEL), KC_NO,KC_MUTE, KC_NO,  KC_NO, KC_NO, KC_NO, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO),


    [_MATH] = LAYOUT_split_3x6_5_hlc(KC_NO, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, KC_NO, KC_NO, KC_PPLS, KC_PMNS, KC_PAST, KC_PSLS, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_NO, KC_DOT, KC_COMM, KC_PEQL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PEQL, KC_COMM, KC_DOT, KC_NO, KC_NO, KC_NO, KC_ESC, KC_SPC, KC_TAB, KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_DEL, KC_NO, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______),


    [_SYM] = LAYOUT_split_3x6_5_hlc(KC_NO, KC_AT, RALT(KC_2), RALT(KC_3), KC_PERC, KC_CIRC, KC_TILD, RALT(KC_7), KC_EQL, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_MINS, RALT(KC_QUOT), RALT(KC_LBRC), KC_ASTR, KC_PSLS, RALT(KC_NUBS), KC_LPRN, RALT(KC_RBRC), RALT(KC_NUHS), KC_NUHS, KC_NO, KC_NO, KC_PLUS, KC_RCBR, KC_UNDS, KC_NUBS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LSFT(KC_NUBS), KC_LT, KC_GT, RALT(KC_EQL), KC_NO, KC_NO, KC_PMNS, KC_QUES, KC_SPC, KC_NO, KC_NO, KC_ENT, KC_NO, KC_NO, KC_NO, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______),


    [_NAV] = LAYOUT_split_3x6_5_hlc(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_DEL, KC_NO, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______),


    [_MOUSE] = LAYOUT_split_3x6_5_hlc(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MS_BTN2, MS_BTN1, MS_BTN3, KC_NO, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______),


    [_FKEYS] = LAYOUT_split_3x6_5_hlc(KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_SCRL, KC_NO, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, KC_NO, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_PAUS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_APP, KC_SPC, KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______),


    [_MEDIA] = LAYOUT_split_3x6_5_hlc(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, UG_TOGG, UG_PREV, UG_NEXT, UG_HUEU, UG_HUED, UG_VALU, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, BL_ON, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, BL_OFF, UG_SATU, UG_SATD, UG_SPDU, UG_SPDD, UG_VALD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MSTP, KC_MPLY, KC_MUTE, KC_NO, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______),

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU),  ENCODER_CCW_CW(KC_PGUP, KC_PGDN),  ENCODER_CCW_CW(KC_PGUP, KC_PGDN)  },
    [1] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
    [2] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
    [3] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
    [4] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
    [5] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
    [6] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
};
#endif
