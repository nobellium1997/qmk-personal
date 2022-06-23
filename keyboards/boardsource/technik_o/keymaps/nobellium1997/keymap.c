/* Copyright 2020 Boardsource
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

enum layers {
    _MAIN,
    _RAISE,
    _LOWER,
    _ARROW,
};

// Readability keycodes
#define LOWER   MO(_LOWER)
#define RAISE   MO(_RAISE)
#define ARROW   MO(_ARROW)

// Left-hand home row mods
#define HOME_A LCTL_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LGUI_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RGUI_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RCTL_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT_ortho_4x12(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  _______, _______, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,  _______, _______, KC_H,    HOME_J,  HOME_K,  HOME_L,  HOME_SCLN,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  _______, _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
    RGB_TOG, _______, _______, LT(ARROW, KC_TAB), LT(LOWER, KC_ENT), _______, _______, LT(RAISE, KC_SPC), KC_BSPC, _______,  _______,  _______
  ),

  [_RAISE] = LAYOUT_ortho_4x12(
  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
  RESET,   _______, _______, LT(ARROW, KC_TAB), LT(LOWER, KC_ENT), _______, _______, LT(RAISE, KC_SPC), KC_BSPC, _______,  _______,  _______
  ),

  [_LOWER] = LAYOUT_ortho_4x12(
 KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
 KC_PIPE, KC_GRV,  KC_LPRN, KC_RPRN, KC_TILD, _______, _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
 _______, _______, KC_LCBR, KC_RCBR, _______, _______, _______, KC_UNDS, KC_PLUS, KC_COMM, KC_DOT,  KC_SLSH, 
 RGB_MOD, _______, _______, LT(ARROW, KC_TAB), LT(LOWER, KC_ENT), _______, _______, LT(RAISE, KC_SPC), KC_BSPC, _______,  _______,  _______
  ),
 
  [_ARROW] = LAYOUT_ortho_4x12(
 KC_F1,   KC_QUOT, KC_UP,   KC_DQT,   KC_F2,    _______, _______, KC_F6,    KC_F7,  KC_F8, KC_F9, _______,
 _______, KC_LEFT, KC_DOWN, KC_RIGHT, KC_ESC,   _______, _______, _______, _______, _______, _______, _______,
 _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, 
 RGB_MOD, _______, _______, LT(ARROW, KC_TAB), LT(LOWER, KC_ENT), _______, _______, LT(RAISE, KC_SPC), KC_BSPC, _______,  _______,  _______
  ),

};

