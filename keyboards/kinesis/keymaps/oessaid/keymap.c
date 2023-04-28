#include QMK_KEYBOARD_H

#define QWERTY 0      // Base qwerty
#define SYMBOLS 1     // Symbols + Numpad
#define NAVIGATION 2  // Navigation

/****************************************************************************************************
 *
 * Keymap: Default Layer in Qwerty
 *
 * ,-------------------------------------------------------------------------------------------------------------------.
 * | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
 * |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
 * | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
 * |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
 * |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
 * | Caps   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
 * |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
 * | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
 * `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
 *          | `~   | INS  | Left | Right|                                         | Up   | Down |  [{  |  ]}  |
 *          `---------------------------'                                         `---------------------------'
 *                                        ,-------------.         ,-------------.
 *                                        | Ctrl | Alt  |         | Gui  | Ctrl |
 *                                 ,------|------|------|         |------+------+------.
 *                                 |      |      | Home |         | PgUp |      |      |
 *                                 | BkSp | Del  |------|         |------|Return| Space|
 *                                 |      |      | End  |         | PgDn |      |      |
 *                                 `--------------------'         `--------------------'
 */

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [QWERTY] = LAYOUT_pretty(
    KC_ESC,     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_NO,    RESET,
    KC_EQL,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
    KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                                                      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_ESC,
    KC_BSPACE,  KC_A,     KC_S,     KC_D,   LT(2, KC_F),KC_G,                                                                      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
    KC_LSFT,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                                      KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
                KC_LCTRL, KC_LALT,  KC_LGUI,  _______,                                                                                       _______,  _______,  KC_RALT,  KC_RCTRL,
                                                          KC_LGUI,       KC_LALT,                            KC_RGUI,  LT(1,KC_ENTER),
                                                                         KC_HOME,                            KC_PGUP,
                                               KC_HYPR,   KC_DEL,        KC_END,                             KC_PGDN,  LT(1,KC_ENTER), LT(1, KC_SPC)
  ),
  [SYMBOLS] = LAYOUT_pretty(
    KC_ESC,     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,      KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_NO,    RESET,
    KC_EQL,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                      KC_6,        KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
    KC_GRAVE,   KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_LBRACKET,                                                               KC_RBRACKET, KC_7,     KC_8,     KC_9,     KC_MINUS, KC_EQUAL,
    _______ ,   KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_PERC,  KC_LPRN,                                                                   KC_RPRN,     KC_4,     KC_5,     KC_6,     KC_0,     KC_BSLASH,
    _______ ,   _______,  _______,  _______,  _______,  KC_LCBR,                                                                   KC_RCBR,     KC_1,     KC_2,     KC_3,     _______,  _______,
                KC_LCTRL, KC_LALT,  KC_LGUI,  KC_LABK,                                                                                          KC_RABK,  KC_COMMA, KC_DOT,   KC_RCTRL,
                                                          KC_LGUI,  KC_LALT,                            KC_RGUI,  _______,
                                                                    KC_HOME,                            KC_PGUP,
                                               _______,   _______,  _______,                            KC_PGDN,  _______, _______
  ),
  [NAVIGATION] = LAYOUT_pretty(
    KC_ESC,     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,      KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_NO,    RESET,
    KC_EQL,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                      KC_6,        KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
    _______,    _______,  _______,  _______,  _______,  _______,                                                                   _______, LCTL(LSFT(KC_TAB)), LCTL(KC_TAB), _______,  _______,      _______,
    _______,    _______,  _______,  _______,  _______,  _______,                                                                   KC_LEFT, KC_DOWN,            KC_UP,        KC_RIGHT, LGUI(KC_TAB), LGUI(KC_GRAVE),
    _______,    _______,  _______,  _______,  _______,  _______,                                                                   _______, _______,            _______,      _______,  _______,      _______,
                _______,  _______,  _______,  _______,                                                                             _______, _______,            _______,      _______,
                                                          KC_LGUI,       KC_LALT,                            KC_RGUI,  LT(1,KC_ENTER),
                                                                         KC_HOME,                            KC_PGUP,
                                               KC_HYPR,   KC_DEL,        KC_END,                             KC_PGDN,  LT(1,KC_ENTER), LT(1, KC_SPC)
  ),
};
