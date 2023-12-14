#include QMK_KEYBOARD_H
#include <sendstring_danish.h>


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

enum keymaps {
    _QWERTY,
    _MOUSE,
    _ARROWS,
    _SYMBOLS,
    _PARENS,
    _FUNS,
    _NUMBERS,
    _OS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x5_2(DK_Q, DK_W, LALT_T(DK_E), LCTL_T(DK_R), DK_T, DK_Y, LCTL_T(DK_U), LALT_T(DK_I), DK_O, DK_P, DK_A, LT(_FUNS,DK_S), LT(_MOUSE,DK_D), LT(_SYMBOLS,DK_F), DK_G, DK_H, LT(_PARENS,DK_J), LT(_ARROWS,DK_K), LT(_NUMBERS,DK_L), DK_SCLN, DK_Z, DK_X, DK_C, DK_V, DK_B, DK_N, DK_M, DK_COMM, DK_DOT, DK_SLSH, KC_LSFT, KC_BSPC, LT(_OS,KC_SPC), KC_ESC),
    [_MOUSE] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_WH_U, KC_BTN2, KC_TRNS, KC_TRNS, KC_BTN2, KC_NO, KC_BTN1, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[_ARROWS] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_LGUI, KC_NO, LCTL(KC_LALT), LCA(KC_LSFT), KC_TRNS, KC_HOME, KC_PGDN, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_SYMBOLS] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DK_UNDS, DK_PIPE, DK_QUOT, KC_TRNS, DK_CIRC, DK_ASTR, DK_AMPR, KC_NO, KC_TRNS, DK_HASH, DK_TILD, DK_SLSH, DK_DQUO, DK_DLR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DK_MINS, DK_BSLS, DK_GRV, KC_TRNS, RGB_RMOD, KC_TRNS, KC_TRNS, RGB_MOD),
    [_PARENS] = LAYOUT_split_3x5_2(KC_TRNS, DK_COLN, DK_LABK, DK_RABK, DK_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DK_LCBR, DK_RCBR, DK_LPRN, DK_RPRN, DK_AT, KC_TRNS, KC_NO, DK_EQL, DK_PLUS, DK_PERC, KC_TRNS, DK_EXLM, DK_LBRC, DK_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_TRNS, KC_TRNS, KC_VOLU),
    [_FUNS] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_NO, LCTL(KC_LALT), KC_TRNS, KC_TRNS, KC_TRNS, KC_F4, KC_F5, KC_F6, KC_F11, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_NUMBERS] = LAYOUT_split_3x5_2(KC_PSLS, DK_7, DK_8, DK_9, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DK_0, DK_1, DK_2, DK_3, KC_PMNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_PAST, KC_4, KC_5, KC_6, DK_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_OS] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, DK_COLN, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, DK_PERC, DK_SLSH, KC_ENT, KC_TRNS, KC_TRNS, KC_LGUI, DK_L, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DK_EXLM, KC_TRNS, KC_TRNS, KC_TRNS, RALT_T(DK_COMM), RCTL_T(KC_DOT), QK_BOOT, KC_TRNS, KC_TAB, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




