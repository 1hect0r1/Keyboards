#include QMK_KEYBOARD_H
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [_QWERTY] = LAYOUT_planck_grid( /* QWERTY */
       KC_TAB,  KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
       KC_CAPS, KC_A,    KC_S,   KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
       SFT_T(KC_ESC), KC_Z,    KC_X,   KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,SFT_T(KC_ENT),
       KC_DEL, KC_LGUI, KC_LALT,KC_LCTL, MO(1),   KC_SPC,  KC_BSPC, MO(2),   KC_SLASH,KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_LOWER] = LAYOUT_planck_grid( /* LOWER */
       KC_TRNS, KC_7,    KC_8,    KC_9,   KC_PAST, KC_PSLS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_TRNS, KC_TRNS,
        KC_TRNS, KC_4,    KC_5,    KC_6,   KC_PPLS, KC_PMNS, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_TRNS, KC_NUHS,
       KC_DOT,  KC_1,    KC_2,    KC_3,   KC_0,    KC_EQL,  KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PGUP, KC_TRNS,
       KC_INS,  KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, S(KC_NUBS), KC_HOME, KC_PGDN, KC_END
    ),
    [_RAISE] = LAYOUT_planck_grid( /* RAISE */
       KC_TRNS, KC_EXLM, KC_AT,  KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, S(KC_NUHS),
       KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_GRV,
       KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUBS, KC_MPRV, KC_VOLD, KC_MNXT
    )
};
