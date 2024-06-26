/* Copyright 2017 IslandMan93
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

// KEYMAP

enum layers {
    _BASE, // default
    _FNCS, // fn keys, keyboard flash key
};

// Keybind aliases
#define MO_FNCS MO(_FNCS) // hold to access fn layer
// #define OS_LSFT OSM(MOD_LSFT)
// #define OS_RSFT OSM(MOD_RSFT)

/*
 * on thumb keys, need:
 * LEFT
 * l_alt
 * space
 * shift
 * enter
 *
 * RIGHT
 * backspace
 * shift
 * mod
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                      KC_MUTE, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_7,                      KC_VOLU, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______,                   KC_VOLD, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_BSLS,
    KC_CAPS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,                   KC_RALT, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
    KC_LSFT, KC_LCTL, MO_FNCS, KC_LGUI, KC_LALT, KC_SPC,  KC_LSFT, KC_ENT,  KC_BSPC, KC_RSFT, MO_FNCS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_RSFT
  ),

  [_FNCS] = LAYOUT(
    QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,                    KC_F12,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  QK_BOOT,
    _______, _______, _______, _______, _______, _______, _______,                   KC_BRIU, _______, _______, _______, KC_MINS, KC_EQL,  _______,
    _______, _______, _______, _______, _______, _______, _______,                   KC_BRID, _______, KC_PGDN, KC_PGUP, KC_LBRC, KC_RBRC, _______,
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                      _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  )

};

