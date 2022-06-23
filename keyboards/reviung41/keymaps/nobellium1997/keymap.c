/* Copyright 2020 gtips
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

enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)

#define HOME_A LCTL_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LGUI_T(KC_D)

// Right-hand home row mods
#define HOME_K RGUI_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RCTL_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_reviung41(
    KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,      KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     _______,
    KC_RSFT,  HOME_A,     HOME_S,     HOME_D,     KC_F,      KC_G,               KC_H,     KC_J,     HOME_K,     HOME_L,     HOME_SCLN,  KC_QUOT,
    _______,  KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,               KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  _______,
                    KC_TAB,   LT(LOWER, KC_ENT),       _______,   LT(RAISE, KC_SPC), LT(ADJUST, KC_BSPC)
  ),
  
  [_LOWER] = LAYOUT_reviung41(
    KC_ESC,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,    KC_PERC,            KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_DEL,
    KC_RSFT, KC_PIPE,  KC_GRV, KC_LPRN, KC_RPRN, KC_TILD,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_QUOT,
      _______, _______, _______, KC_LCBR, KC_RCBR, _______,                      KC_UNDS, KC_PLUS, KC_COMM,  KC_DOT, KC_SLSH, _______,
                    KC_TAB,   LT(LOWER, KC_ENT),       _______,   _______, LT(ADJUST, KC_BSPC)
  ),
  
  [_RAISE] = LAYOUT_reviung41(
    KC_ESC,  KC_1,     KC_2,     KC_3,     KC_4,      KC_5,               KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL,
    KC_RSFT, KC_PIPE,  KC_GRV, KC_LPRN, KC_RPRN, KC_TILD,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_QUOT,
      _______, _______, _______, KC_LCBR, KC_RCBR, _______,                      KC_UNDS, KC_PLUS, KC_COMM,  KC_DOT, KC_SLSH, _______,
                    KC_TAB,   _______,       _______,   LT(RAISE, KC_SPC), LT(ADJUST, KC_BSPC)
  ),
  
  [_ADJUST] = LAYOUT_reviung41(
      _______, KC_F1, KC_QUOT, KC_UP, KC_DQT, KC_F2,                      _______, _______, _______, _______, _______, _______,
      _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, KC_ESC,                      KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_QUOT, _______,
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, RESET,
                    KC_TAB,   LT(LOWER, KC_ENT),       _______,   LT(RAISE, KC_SPC), _______
  ),
};
