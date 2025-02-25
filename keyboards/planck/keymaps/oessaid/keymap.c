/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off
enum planck_layers {
  _QWERTY,
  _SYMBOLS,
  _NAVIGATION,
  _FUNC,
  _VIM,
  _TMUX,
  _ADJUST,
  _HYPER
};

// clang-format off
enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  SYMBOLS,
  NAVIGATION,
  FUNC,
  VIM,
  TMUX,
  HYPER,
  BACKLIT,
  EXT_PLV,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* ░█░█░█▀▀░█░█░█▄█░█▀█░█▀█░█▀▀ */
/* ░█▀▄░█▀▀░░█░░█░█░█▀█░█▀▀░▀▀█ */
/* ░▀░▀░▀▀▀░░▀░░▀░▀░▀░▀░▀░░░▀▀▀ */

/* Qwerty
 * ,------------------------------------------------------------------------------------------------------.
 * | Tab   |   Q  |   W  |   E  |   R  |   T       |   Y       |   U   |   I  |   O  |   P  | Esc          |
 * |-------+------+------+------+------+-----------+-----------+-------+------+------+------+--------------|
 * | Bksp  |   A  |   S  |   D  |   F  |   G       |   H       |   J   |   K  |   L  |   ;  |  '           |
 * |-------+------+------+------+------+-----------+-----------+-------+------+------+------+--------------|
 * | Shift |   Z  |   X  |   C  |   V  |   B       |   N       |   M   |   ,  |   .  |   /  |  Shift       |
 * |-------+------+------+------+------+-----------+-----------+-------+------+------+------+--------------|
 * |MO(VIM)| Ctrl | Alt  | GUI  |MO(FN)|LT(Spc/Sym)|LT(Spc/Sym)|MO(Arr)| Caps | Alt  | Ctrl |LT(Enter/TMUX)|
 * `------------------------------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_grid(
    KC_TAB,    KC_Q,      KC_W,     KC_E,     KC_R,             KC_T,               KC_Y,            KC_U,              KC_I,       KC_O,      KC_P,        LT(6, KC_ESCAPE),
    KC_BSPACE, KC_A,      KC_S,     KC_D,     LT(2, KC_F),      KC_G,               KC_H,            KC_J,              KC_K,       KC_L,      KC_SCOLON,   KC_QUOTE,
    KC_LSFT,   KC_Z,      KC_X,     KC_C,     KC_V,             KC_B,               KC_N,            KC_M,              KC_COMMA,   KC_DOT,    KC_SLASH,    KC_RSFT,
    MO(3),     KC_LCTRL,  KC_LALT,  KC_LGUI,  LT(4, KC_ENTER),  LT(1, KC_SPACE),    LT(1, KC_SPACE), LT(7, KC_ENTER),   KC_HYPR,    KC_RALT,   KC_RCTRL,    MO(3)
),
/* 1: SYMBOLS+NUM;
 * 2: NAV;
 * 3: FN;
 * 4: VIM;
 * 5: TMUX
 * 7: HYPER */

[_SYMBOLS] = LAYOUT_planck_grid(
    KC_GRAVE, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_LBRACKET, KC_RBRACKET, KC_7,    KC_8,     KC_9,   KC_MINUS, KC_EQUAL,
    _______ , KC_CIRC, KC_AMPR, KC_ASTR, KC_PERC, KC_LPRN,     KC_RPRN,     KC_4,    KC_5,     KC_6,   KC_0,     KC_BSLASH,
    _______ , _______, _______, _______, _______, KC_LCBR,     KC_RCBR,     KC_1,    KC_2,     KC_3,   _______,  _______,
    _______ , _______, _______, _______, KC_LABK, _______,     _______,     KC_RABK, KC_COMMA, KC_DOT, _______,  KC_F10
    /* _______ , _______, _______, _______, _______, KC_LABK,     KC_RABK,     _______, KC_COMMA, KC_DOT, _______,  KC_F10 */
),

[_NAVIGATION] = LAYOUT_planck_grid(

    _______, _______, _______, _______, _______, _______,   _______, LCTL(LSFT(KC_TAB)), LCTL(KC_TAB), _______,  _______,         _______,
    _______, _______, _______, _______, _______, _______,   KC_LEFT, KC_DOWN,            KC_UP,        KC_RIGHT, LGUI(KC_TAB), LGUI(KC_GRAVE),
    _______, _______, _______, _______, _______, _______,   _______, _______,            _______,      _______,  _______,         _______,
    _______, _______, _______, _______, _______, _______, _______, _______,            _______,      _______,  _______,         _______
),

[_FUNC] = LAYOUT_planck_grid(

    _______, _______, _______, _______, _______, _______, _______, KC_F7,   KC_F8,   KC_F9,   KC_F10, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_F4,   KC_F5,   KC_F6,   KC_F11, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F12, _______,
    _______, _______, _______, _______, _______, _______, KC_NO,   _______, _______, _______, _______, _______
),

[_VIM] = LAYOUT_planck_grid(
    _______, _______, _______, _______, _______,     _______, _______,     ST_MACRO_22, ST_MACRO_23, _______,     ST_MACRO_28, _______,
    _______, _______, _______, _______, _______,     _______, ST_MACRO_24, ST_MACRO_25, ST_MACRO_26, ST_MACRO_27, _______, ST_MACRO_29,
    _______, _______, _______, _______, _______,     _______, _______,     _______,     _______,     _______,     _______, _______,
    KC_NO,   _______, _______, _______, _______, LGUI(KC_ENTER), LGUI(KC_SPACE), MO(7), _______,     _______,     _______, _______
    /* KC_NO,   _______, _______, _______, ST_MACRO_28, _______, KC_HYPR,       ST_MACRO_29, _______,     _______,     _______, _______ */
),

[_TMUX] = LAYOUT_planck_grid(
    _______, _______,     ST_MACRO_0,  ST_MACRO_1,  ST_MACRO_2,  _______, _______,    ST_MACRO_3,  ST_MACRO_4,  _______,     ST_MACRO_20,     ST_MACRO_5,
    _______, _______,     ST_MACRO_6,  ST_MACRO_7,  ST_MACRO_8,  _______, ST_MACRO_9, ST_MACRO_10, ST_MACRO_11, ST_MACRO_12, HYPR(KC_SCOLON),     ST_MACRO_21,
    _______, ST_MACRO_14, ST_MACRO_15, ST_MACRO_16, _______,     _______, _______,    _______,     ST_MACRO_17, ST_MACRO_18, ST_MACRO_19, _______,
    _______, _______,     _______,     _______,  MO(7), LGUI(KC_ENTER), LGUI(KC_SPACE), _______, _______,     _______,     _______,     _______
    /* _______, _______,     _______,     _______,     ST_MACRO_20, KC_HYPR, _______,      ST_MACRO_21, _______,     _______,     _______,     _______ */
),

/* Adjust (Lower + Raise)
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |MUSmod|Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|Plover|      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|TermOn|TermOf|      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_planck_grid(
    _______, RESET,   DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL ,
    _______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  SYMBOLS,  NAVIGATION,  TMUX,  _______,
    _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  TERM_ON, TERM_OFF, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
),

[_HYPER] = LAYOUT_planck_grid(

    _______, HYPR(KC_Q), HYPR(KC_Q), _______, _______, _______, _______, HYPR(KC_U),   HYPR(KC_I), _______, _______, HYPR(KC_EQUAL),
    _______, _______, _______, _______, _______, _______, HYPR(KC_H), HYPR(KC_J), HYPR(KC_K), HYPR(KC_L), HYPR(KC_SCOLON), _______,
    _______, HYPR(KC_Z), HYPR(KC_X), HYPR(KC_C), HYPR(KC_V), _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, KC_NO,   _______, _______, _______, _______, _______
),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_W));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_LSFT(SS_TAP(X_E)));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_LSFT(SS_TAP(X_4)));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_P));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_N));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_LSFT(SS_TAP(X_7)));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_S));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_D));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_F));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_H));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_J));

    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_K));

    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_L));

    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_EQUAL));

    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_Z));

    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_X));

    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_C));

    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_COMMA));

    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_LBRACKET));

    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_RBRACKET));

    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_MINUS));

    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(50) SS_TAP(X_BSLASH));

    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING("g"SS_LSFT("t"));

    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING("gt");

    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE)"h");

    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE)"j");

    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE)"k");

    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE)"l");

    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE)"-");

    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_TAP(X_BSLASH));

    }
    break;
  }
  return true;
}
