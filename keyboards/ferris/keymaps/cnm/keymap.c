#include QMK_KEYBOARD_H


enum layers {
    _QWERTY,
    _MOUSE,
    _ARROWS,
    _SYMBOLS,
    _PARENS,
    _FUNS,
    _NUMBERS,
    _OS,
};


enum unicodes {
    KC_ae,
    KC_AE,
    KC_oe,
    KC_OE,
    KC_aa,
    KC_AA,
};

const uint32_t unicode_map[] PROGMEM = {
    [KC_AE]  = 0x00C6,
    [KC_OE] = 0x00D8,
    [KC_AA] = 0x00C5,
    [KC_ae]  = 0x00E6,
    [KC_oe] = 0x00F8,
    [KC_aa] = 0x00E5,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERTY] = LAYOUT_split_3x5_2(
        KC_Q,            KC_W,            LALT_T(KC_E),    LCTL_T(KC_R),       KC_T,                                                            KC_Y,            RCTL_T(KC_U),     LALT_T(KC_I),     KC_O,              KC_P,
        KC_A,            LT(_FUNS,KC_S),  LT(_MOUSE,KC_D), LT(_SYMBOLS,KC_F),  KC_G,                                                            KC_H,            LT(_PARENS,KC_J), LT(_ARROWS,KC_K), LT(_NUMBERS,KC_L), KC_SCLN,
        KC_Z,            KC_X,            KC_C,            KC_V,               KC_B,                                                            KC_N,            KC_M,             KC_COMM,          KC_DOT,            KC_SLSH,
                                                                            KC_LSFT,         KC_BSPC,                          LT(_OS,KC_SPC),  KC_ESC
    ),

	[_MOUSE] = LAYOUT_split_3x5_2(
        KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,                                                            KC_TRNS,         KC_BTN1,         KC_WH_U,         KC_BTN2,         KC_TRNS,
        KC_TRNS,         KC_BTN2,         KC_NO,           KC_BTN1,         KC_TRNS,                                                            KC_TRNS,         KC_MS_L,         KC_MS_D,         KC_MS_U,         KC_MS_R,
        KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,                                                            KC_TRNS,         KC_WH_L,         KC_WH_D,         KC_WH_R,         KC_TRNS,
                                                                            KC_TRNS,         KC_TRNS,                          KC_TRNS,         KC_TRNS
    ),

	[_ARROWS] = LAYOUT_split_3x5_2(
        KC_TRNS,         KC_TRNS,         KC_PGUP,         KC_TRNS,         KC_TRNS,                                                            KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,
        KC_LEFT,         KC_UP,           KC_DOWN,         KC_RGHT,         KC_TRNS,                                                            KC_TRNS,         KC_LGUI,         KC_NO,           LCTL(KC_LALT),   LCA(KC_LSFT),
        KC_TRNS,         KC_HOME,         KC_PGDN,         KC_END,          KC_TRNS,                                                            KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,
                                                                            KC_TRNS,         KC_TRNS,                          KC_TRNS,         KC_TRNS
    ),

	[_SYMBOLS] = LAYOUT_split_3x5_2(
        KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,                                                            KC_TRNS,         KC_UNDS,         KC_PIPE,         KC_QUOT,         KC_TRNS,
        KC_CIRC,         KC_ASTR,         KC_AMPR,         KC_NO,           KC_TRNS,                                                            KC_HASH,         KC_TILD,         KC_SLSH,         KC_DQUO,         KC_DLR,
        KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,                                                            KC_TRNS,         KC_MINS,         KC_BSLS,         KC_GRV,          KC_TRNS,
                                                                            RGB_RMOD,        KC_TRNS,                          KC_TRNS,         RGB_MOD
    ),

	[_PARENS] = LAYOUT_split_3x5_2(
        KC_TRNS,         KC_COLN,         KC_LT,           KC_GT,           KC_SCLN,                                                            KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,
        KC_LCBR,         KC_RCBR,         KC_LPRN,         KC_RPRN,         KC_AT,                                                              KC_TRNS,         KC_NO,           KC_EQL,          KC_PLUS,         KC_PERC,
        KC_TRNS,         KC_EXLM,         KC_LBRC,         KC_RBRC,         KC_TRNS,                                                            KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,
                                                                            KC_VOLD,         KC_TRNS,                          KC_TRNS,         KC_VOLU
    ),

	[_FUNS] = LAYOUT_split_3x5_2(
        KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,                                                            KC_TRNS,         KC_F7,           KC_F8,           KC_F9,           KC_F10,
        KC_TRNS,         KC_NO,           LCTL(KC_LALT),   KC_TRNS,         KC_TRNS,                                                            KC_TRNS,         KC_F4,           KC_F5,           KC_F6,           KC_F11,
        KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,                                                            KC_TRNS,         KC_F1,           KC_F2,           KC_F3,           KC_F12,
                                                                            KC_TRNS,         KC_TRNS,                          KC_TRNS,         KC_TRNS
    ),

	[_NUMBERS] = LAYOUT_split_3x5_2(
        KC_PSLS,         KC_7,            KC_8,            KC_9,            KC_PPLS,                                                            KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,
        KC_0,            KC_1,            KC_2,            KC_3,            KC_PMNS,                                                            KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_NO,           KC_TRNS,
        KC_PAST,         KC_4,            KC_5,            KC_6,            KC_EQL,                                                             KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS,
                                                                            KC_TRNS,         KC_TRNS,                          KC_TRNS,         KC_TRNS
    ),

	[_OS] = LAYOUT_split_3x5_2(
        KC_TRNS,         KC_TRNS,         KC_COLN,        KC_TRNS,         KC_TRNS,                                                            UP(KC_ae, KC_AE),         C(KC_TAB),       KC_TRNS,         KC_TRNS,         KC_DEL,
        KC_TRNS,         KC_PERC,         KC_SLSH,         KC_ENT,          KC_TRNS,                                                            UP(KC_oe, KC_OE),         KC_LGUI,         G(KC_L),         KC_TRNS,         KC_TRNS,
        KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_EXLM,         KC_TRNS,                                                            UP(KC_aa, KC_AA),         KC_TRNS,         RALT_T(KC_COMM), RCTL_T(KC_DOT),  QK_BOOT,
                                                                            KC_TRNS,         KC_TAB,                           KC_NO,         KC_TRNS
    ),

};



#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {



};

#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)









