// Copyright 2024 splitkb.com (support@splitkb.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_swiss_de.h"



// Note: LAlt/Enter (ALT_ENT) is not the same thing as the keyboard shortcut Alt+Enter.
// The notation `mod/tap` denotes a key that activates the modifier `mod` when held down, and
// produces the key `tap` when tapped (i.e. pressed and released).

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x6_5_hlc(KC_TAB, KC_RBRC, KC_Z, KC_U, KC_A, KC_Q, KC_P, KC_B, KC_M, KC_L, KC_F, KC_NO, KC_NO, LGUI_T(KC_C), LALT_T(KC_S), LCTL_T(KC_I), LSFT_T(KC_E), KC_O, KC_D, RSFT_T(KC_T), RCTL_T(KC_N), RALT_T(KC_R), RGUI_T(KC_H), KC_NO, KC_NO, KC_V, KC_J, KC_X, KC_Y, KC_MINS, KC_NO, KC_NO, KC_NO, KC_NO, KC_W, KC_G, KC_COMM, KC_DOT, KC_K, KC_NO, KC_NO, LT(6,KC_ESC), LT(3,KC_SPC), LT(4,KC_TAB), KC_NO, KC_NO, LT(1,KC_ENT), LT(2,KC_BSPC), LT(5,KC_DEL), KC_NO,KC_MUTE, KC_NO,  KC_NO, KC_NO, KC_NO, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO),



    [1] = LAYOUT_split_3x6_5_hlc(KC_NO, KC_TILD, KC_AT, KC_HASH, KC_PERC, KC_AMPR, KC_CIRC, KC_PIPE, KC_EXLM, LSFT(KC_MINS), LSFT(KC_COMM), KC_NO, KC_NO, KC_DLR, KC_LCBR, RALT(KC_LBRC), KC_LPRN, KC_PSLS, RALT(KC_NUBS), KC_RPRN, RALT(KC_RBRC), KC_RCBR, KC_COLN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PMNS, KC_UNDS, KC_HASH, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______),


    [2] = LAYOUT_split_3x6_5_hlc(KC_TAB, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, KC_PEQL, KC_PEQL, KC_PLUS, KC_PMNS, KC_ASTR, KC_PSLS, KC_BSPC, KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_COMM, KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_ESC, KC_SPC, KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______),


    [3] = LAYOUT_split_3x6_5_hlc(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_NO, KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT, KC_BSPC, KC_DEL, KC_TRNS, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______),


    [4] = LAYOUT_split_3x6_5_hlc(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_TRNS, KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MS_BTN2, MS_BTN1, MS_BTN3, KC_TRNS, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______),


    [5] = LAYOUT_split_3x6_5_hlc(KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_SCRL, KC_TRNS, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, KC_NO, KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_PAUS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_APP, KC_SPC, KC_TAB, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______),


    [6] = LAYOUT_split_3x6_5_hlc(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, RGB_RMOD, RGB_HUD, RGB_HUI, RGB_MOD, RGB_VAI, KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, BL_ON, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_OFF, RGB_SPD, RGB_SAI, RGB_SAD, RGB_SPI, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MSTP, KC_MPLY, KC_MUTE, KC_TRNS, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______),

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
