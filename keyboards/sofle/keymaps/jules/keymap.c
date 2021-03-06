// SOFLE

#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _DEFAULTS = 0,
    _QWERTY = 0,
    _COLEMAK,
	_COLEMAKDH,
    _LOWER,
    _RAISE,
    _ADJUST,
    _NUMPAD,
    _SWITCH
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_COLEMAK,
	KC_COLEMAKDH,
    KC_LOWER,
    KC_RAISE,
    KC_ADJUST,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE,
    KC_D_MUTE
};

#define S_BSPC LSFT_T(KC_BSPC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------| MUTE  |    |DISCORD|------+------+------+------+------+------|
 * | LCTR |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |LShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | Bspc | WIN  |LOWER | Enter| /Space  /       \Enter \  |SPACE |RAISE | RCTR | RAlt |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_QWERTY] = LAYOUT( \
  //,------------------------------------------------.                    ,---------------------------------------------------.
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,             LT(_SWITCH,KC_6), KC_7,   KC_8,    KC_9,    KC_0,    KC_GRV, \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  LT(_NUMPAD,KC_TAB),KC_Q,KC_W,KC_E,  KC_R,    KC_T,                      KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  KC_BSLS, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_MUTE,  KC_D_MUTE,KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH,   KC_RBRC, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                 KC_LGUI, KC_LCTRL, KC_LOWER, S_BSPC,  KC_DEL,      KC_ENT, KC_SPC,  KC_RAISE, KC_RCTRL, KC_RALT \
  //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),





/*
 * COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |DISCORD|------+------+------+------+------+------|
 * | LCTR |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |LShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | Bspc | WIN  |LOWER | Enter| /Space  /       \Enter \  |SPACE |RAISE | RCTR | RAlt |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_COLEMAK] = LAYOUT( \
  //,------------------------------------------------.                    ,---------------------------------------------------.
  KC_TRNS,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      LT(_SWITCH,KC_6),    KC_7,   KC_8,    KC_9,    KC_0,    KC_TRNS, \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  KC_TRNS,  KC_Q,   KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_TRNS, \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  KC_TRNS,  KC_A,   KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,   KC_E,    KC_I,    KC_O,    KC_TRNS, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  KC_TRNS,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_TRNS,    KC_TRNS,KC_K,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS \
  //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),

/*
 * COLEMAK-DH
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |DISCORD|------+------+------+------+------+------|
 * | LCTR |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |LShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | Bspc | WIN  |LOWER | Enter| /Space  /       \Enter \  |SPACE |RAISE | RCTR | RAlt |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_COLEMAKDH] = LAYOUT( \
  //,------------------------------------------------.                    ,---------------------------------------------------.
  KC_TRNS,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      LT(_SWITCH,KC_6),    KC_7,   KC_8,    KC_9,    KC_0,    KC_TRNS, \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  KC_TRNS,  KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                      KC_J,    KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_TRNS, \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  KC_TRNS,  KC_A,   KC_R,    KC_S,    KC_T,    KC_G,                      KC_M,    KC_N,   KC_E,    KC_I,    KC_O,    KC_TRNS, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  KC_TRNS,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V,  KC_TRNS,    KC_TRNS,KC_K,    KC_H,   KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS \
  //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),

/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | trans|  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  ESC |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   =  |   1  |   2  |   3  |   4  |   5  |-------.    ,-------|   6  |   7  |   8  |   9  |   0  |   |  |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |   _  |      |      |      |      |      |-------|    |-------|      |      |   ,  |   .  |   \  |   +  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LCTL |LOWER | BKSP | /Delete /       \Enter \  |SPACE |RAISE | RCTR | RAlt |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT( \
  //,------------------------------------------------.                    ,---------------------------------------------------.
  _______,  KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,\
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  KC_ESC,   KC_EXLM, KC_AT,  KC_HASH,  KC_DLR, KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,_______, \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  KC_EQL,   KC_1,    KC_2,    KC_3,    KC_4,   KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_PMNS,  \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  KC_UNDS,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO ,_______,    _______,KC_NO,  KC_NO,    KC_COMM, KC_DOT,  KC_SLSH, KC_PPLS, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                 _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______\
  //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),
/* LOWER
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |CapsLK| PGUP |-------.    ,-------| HOME | Left | Down | Right| END  | PGUP |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      | Undo | Cut  | Copy | Paste| PGDN |-------|    |-------|Abksp | Aleft|Sdown |Aright|      | PGDN |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT( \
  //,------------------------------------------------.                    ,---------------------------------------------------.
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  _______,  KC_INS,  KC_PSCR, KC_APP, XXXXXXX, XXXXXXX,                   _______,S(A(KC_LEFT)), KC_UP, S(A(KC_RGHT)),_______,_______, \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  _______,  _______, _______, _______, KC_CAPS,KC_PGUP,                   KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_PGUP,  \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  _______,KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, KC_PGDN,_______,    _______,A(KC_BSPC),A(KC_LEFT),S(KC_DOWN), A(KC_RGHT), _______, KC_PGDN, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                 _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______ \
  //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | RESET|      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |RGB_TOG|hue^ |sat ^ | bri ^|      |COLEMAK|-------.   ,-------|desk <|      |      |desk >|      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | mode | hue dn|sat d|bri dn|      |QWERTY|-------|    |-------|      | PREV | PLAY | NEXT |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_ADJUST] = LAYOUT( \
  //,------------------------------------------------.                    ,---------------------------------------------------.
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  RESET,   XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  RGB_TOG, RGB_HUI,RGB_SAI, RGB_VAI, KC_COLEMAKDH,KC_COLEMAK,                 C(G(KC_LEFT)),KC_NO,KC_NO,C(G(KC_RGHT)),XXXXXXX, XXXXXXX, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  RGB_MOD, RGB_HUD,RGB_SAD, RGB_VAD, XXXXXXX,KC_QWERTY,XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                   _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______ \
    //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),
/* NUMPAD
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |   ^  |   7  |   8  |   9  |   *  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|   -  |   4  |   5  |   6  |   =  |  |   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|   +  |   1  |   2  |   3  |   \  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |MODMEH|      |      | /       /       \      \  |      | 0    |  .   |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_NUMPAD] = LAYOUT( \
  //,------------------------------------------------.                    ,---------------------------------------------------.
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX,\
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NLCK,                   KC_CIRC, KC_P7,  KC_P8,   KC_P9,   KC_ASTR, _______, \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_MINS, KC_P4,  KC_P5,   KC_P6,   KC_EQL,  KC_PIPE, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,_______,    _______,KC_PLUS, KC_P1, KC_P2,   KC_P3,   KC_SLSH, _______, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
                 _______, OSM(MOD_MEH), _______, _______, _______,     _______, _______, KC_P0, KC_PDOT, _______\
  //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/
),

/* SWITCH
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | cole | qwer | low  |raise | adj  |numpd |                    |      |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |RESET |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      | BRIU |      |      |      |-------.    ,-------|      |      |      |      |      |EEPRST|
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |SLEEP |      | BRID |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

  // layer switcher
[_SWITCH] = LAYOUT( \
  //,------------------------------------------------.                    ,---------------------------------------------------.
  TO(0),     TO(1),  TO(2),   TO(3),   TO(4),  TO(5),                     XXXXXXX, TO(7),   XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX,\
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, 				  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RESET,  \
  //|------+-------+--------+--------+--------+------|                   |--------+-------+--------+--------+--------+---------|
  KC_NO,   KC_NO, KC_BRIU,   KC_NO,   KC_NO,   KC_NO, 					  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, EEP_RST, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
  KC_SYSTEM_SLEEP,KC_NO,KC_BRID,KC_NO,KC_NO,   KC_NO, KC_NO,	  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
  //|------+-------+--------+--------+--------+------|  ===  |   |  ===  |--------+-------+--------+--------+--------+---------|
				KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO  \
  //            \--------+--------+--------+---------+-------|   |--------+---------+--------+---------+-------/

	),


};
#ifdef RGBLIGHT_ENABLE
char layer_state_str[24];
// Now define the array of layers. Later layers take precedence

// These change the indicator light only.

// _QWERTY
const rgblight_segment_t PROGMEM layer_qwerty_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_RED},
    {36, 1, HSV_RED}
);

// _COLEMAKDH
const rgblight_segment_t PROGMEM layer_colemakdh_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PINK},
    {36, 1, HSV_PINK}
);

// _NUM
const rgblight_segment_t PROGMEM layer_num_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_TEAL},
    {36, 1, HSV_TEAL}
);
// _SYMBOL
const rgblight_segment_t PROGMEM layer_symbol_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_BLUE},
    {36, 1, HSV_BLUE}
);
// _COMMAND

const rgblight_segment_t PROGMEM layer_command_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PURPLE},
    {36, 1, HSV_PURPLE}
);

//_NUMPAD
const rgblight_segment_t PROGMEM layer_numpad_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_ORANGE},
    {36, 1, HSV_ORANGE}
);
const rgblight_segment_t PROGMEM layer_numpad_rh_lights[] = RGBLIGHT_LAYER_SEGMENTS(
	{0, 1, HSV_ORANGE},
    {36, 1, HSV_ORANGE}
);

// _MOVE
const rgblight_segment_t PROGMEM layer_move_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PINK},
    {36, 1, HSV_PINK}
);

// _SWITCHER
const rgblight_segment_t PROGMEM layer_switcher_lights[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_GREEN},
    {36, 1, HSV_GREEN}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(

    layer_qwerty_lights,
	layer_num_lights,// overrides layer 1
	layer_symbol_lights,
    layer_command_lights,
	layer_numpad_lights,
	layer_numpad_rh_lights,
	layer_switcher_lights,  // Overrides other layers
	layer_colemakdh_lights
);

layer_state_t layer_state_set_user(layer_state_t state) {
	rgblight_set_layer_state(0, layer_state_cmp(state, _DEFAULTS) && layer_state_cmp(default_layer_state,_QWERTY));
	rgblight_set_layer_state(7, layer_state_cmp(state, _DEFAULTS) && layer_state_cmp(default_layer_state,_COLEMAKDH));

    //layer_state_cmp(state, 1));
	rgblight_set_layer_state(1, layer_state_cmp(state, _RAISE));
	rgblight_set_layer_state(2, layer_state_cmp(state, _LOWER));
	rgblight_set_layer_state(3, layer_state_cmp(state, _ADJUST));
	rgblight_set_layer_state(4, layer_state_cmp(state, _NUMPAD));
	//if (!has_usb())
	//	rgblight_set_layer_state(5, layer_state_cmp(state, _NUMPAD));
	rgblight_set_layer_state(6, layer_state_cmp(state, _SWITCH));
    return state;
}
void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
	rgblight_mode(1);// haven't found a way to set this in a more useful way

}
#endif

#ifdef OLED_DRIVER_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,254,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,254,254,  0,254,254,  0,254,254,  0,254,254,  6,  6,  6,  6,254,254,  0,254,254,  0,254,254,  0,254,254, 48, 48, 48, 48, 48, 48,254,254,  6,  6,  6,  6,254,254, 48, 48,254,254,  0,  6, 12, 24, 48, 96,192,128,  0,254,254,  6,  6,  6,  6,254,254,  0,  0,254,254,  0,252,248,248,240,240,224,224,192,192,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,255,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,255,255,  0,255,255,  6,255,255,  6,255,255,  0,  0,  0,  0,255,255,  6,255,255,  6,255,255,  0,255,255,192,192,192,192,192,192,255,255,  0,  0,  0,  0,255,255,192,192,255,255,  0,  6,  6,134,198,102, 54, 31, 15,255,255,  0,  0,  0,  0,255,255,  6,  6,255,255,  0,255,255,255,255,255,255,255,255,255,255,255,255,255,254,254,252,252,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,
        0,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,  7,  0,  7,  7,  0,  7,  7,  0,  7,  7,  6,  6,  6,  6,  7,  7,  0,  7,  7,  0,  7,  7,  0,  7,  7,  0,  0,  0,  0,  0,  0,  7,  7,  6,  6,  6,  6,  7,  7,  0,  0,  7,  7,  0,  6,  3,  1,  0,  0,  0,  0,  0,  7,  7,  6,  6,  6,  6,  7,  7,  0,  0,  7,  7,  0,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,255,255,255,255,255,255,255,255,255,255,255,255,255,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,
        0,
    };

    oled_write_raw_P(qmk_logo, sizeof(qmk_logo));
}

void render_status_title(void){
    static const char PROGMEM status_title[2][5] = {
        {0x9D,0x9E,0xBB,0xBC,0},
        {0xBD,0xBE,0xDB,0xDC,0}
    };
    oled_write_P(PSTR(" "),false);
    oled_write_P(status_title[0], false);
    oled_write_P(PSTR(" "),false);
    oled_write_P(status_title[1], false);
    oled_write_ln_P(PSTR(""), false);
};

static void print_status_narrow(void) {

    static const char PROGMEM layout_indicators[3][3] = {
        {0x95,0x96,0},
        {0xB9,0xBA,0},
        {0xDD,0xDE,0}
    };

    static const char PROGMEM lock_indicators[2][2] = {
        {0xD6,0},
        {0xD7,0}
    };

    static const char PROGMEM layer_indicators[5][3] = {
        {0x97,0x98,0},
        {0x99,0x9A,0},
        {0x9B,0x9C,0},
        {0xB5,0xB6,0},
        {0xB7,0xB8,0}
    };

    // Print title
    render_status_title();

    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("  "), false);
            oled_write_P(layout_indicators[0], false);
            break;
        case _COLEMAK:
            oled_write_P(PSTR("  "), false);
            oled_write_P(layout_indicators[1], false);
            break;
        case _COLEMAKDH:
            oled_write_P(PSTR("  "), false);
            oled_write_P(layout_indicators[2], false);
            break;
        default:
            oled_write_P(PSTR("  "), false);
            oled_write_P(layout_indicators[0], false);
    };
    oled_write_P(PSTR("\n\n"), false);
    oled_write_P(PSTR("  "), false);
    // Print current layer

    switch (get_highest_layer(layer_state)) {
        case _RAISE:
            oled_write_P(layer_indicators[0], false);
            break;
        case _LOWER:
            oled_write_P(layer_indicators[1], false);
            break;
        case _ADJUST:
            oled_write_P(layer_indicators[2], false);
            break;
        case _NUMPAD:
            oled_write_P(layer_indicators[3], false);
            break;
        case _SWITCH:
            oled_write_P(layer_indicators[4], false);
            break;
        default:
            oled_write_P(PSTR(""), false);
    };
    oled_write_P(PSTR("\n\n"), false);
    oled_write_P(PSTR("  "), false);
    led_t led_state = host_keyboard_led_state();
    if (led_state.caps_lock && led_state.num_lock) {
        oled_write_P(lock_indicators[0], false);
        oled_write_P(lock_indicators[1], false);
    } else if (led_state.caps_lock) {
        oled_write_P(lock_indicators[0], false);
        oled_write_P(PSTR(" "), false);
    } else if (led_state.num_lock) {
        oled_write_P(PSTR(" "), false);
        oled_write_P(lock_indicators[1], false);
    } else {
        oled_write_P(PSTR("  "), false);
    }
};

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case KC_COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
            }
            return false;
        case KC_COLEMAKDH:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAKDH);
            }
            return false;
        case KC_LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;

        case KC_D_MUTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_MEH));
                register_code(KC_UP);
            } else {
                unregister_mods(mod_config(MOD_MEH));
                unregister_code(KC_UP);
            }
    }
    return true;
}

#ifdef ENCODER_ENABLE

const uint16_t PROGMEM encoder_keymaps[][2][2] = {
    [_QWERTY] =  { { C(S(KC_TAB)), C(KC_TAB) },     { KC_PGDN,      KC_PGUP } },
    [_RAISE]  =  { { C(KC_LEFT),   C(KC_RGHT) },    { KC_VOLD,  KC_VOLU } },
    [_LOWER]  =  { { KC_TRNS,      KC_TRNS },       { G(KC_TAB),    G(S(KC_TAB)) } },
    [_ADJUST] =  { { KC_TRNS,      KC_TRNS },       { KC_TRNS,      KC_TRNS } },
};

void encoder_update_user(uint8_t index, bool clockwise) {
    int layer = get_highest_layer(layer_state);

    uint16_t code;
    do {
        code = pgm_read_word(&encoder_keymaps[layer--][index][clockwise]);
    } while (code == KC_TRNS);

    tap_code16(code);
}
#endif
