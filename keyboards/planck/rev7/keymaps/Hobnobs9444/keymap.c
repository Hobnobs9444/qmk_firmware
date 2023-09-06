/*Hobnobs9444 Planck Rev7 Keymap*/

#include QMK_KEYBOARD_H
#include "keymap_uk.h"

enum planck_layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _GAME,
    _FL,
    _ADJUST
};

enum planck_keycodes {
    QWERTY = SAFE_RANGE
};

// Custom macros
#define CTL_ESC     CTL_T(KC_ESC)               // Tap for Esc, hold for Ctrl
#define CTL_ENT     CTL_T(KC_ENT)               // Tap for Enter, hold for Shift
#define HPR_TAB     ALL_T(KC_TAB)               // Tap for Tab, hold for Hyper (Super+Ctrl+Alt+Shift)
#define HPR_DEL     ALL_T(KC_DEL)               // Tap for Tab, hold for Hyper (Super+Ctrl+Alt+Shift)
#define MEH_GRV     MEH_T(UK_GRV)               // Tap for Backtick, hold for Meh (Ctrl+Alt+Shift)

/* clang-format off */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  | Func | GUI  | Alt  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_grid(
    HPR_TAB, UK_Q,    UK_W,    UK_E,    UK_R,       UK_T,    UK_Y,    UK_U,       UK_I,    UK_O,    UK_P,    KC_BSPC,
    CTL_ESC, UK_A,    UK_S,    UK_D,    UK_F,       UK_G,    UK_H,    UK_J,       UK_K,    UK_L,    UK_SCLN, CTL_ENT,
    KC_LSFT, UK_Z,    UK_X,    UK_C,    UK_V,       UK_B,    UK_N,    UK_M,       UK_COMM, UK_DOT,  UK_SLSH, KC_RSFT,
    MEH_GRV, MO(_FL), KC_LGUI, KC_LALT, TT(_LOWER), KC_SPC,  KC_SPC,  TT(_RAISE), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * | Del  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   %  |   $  |   £  |   -  |   +  |   =  |   4  |   5  |   6  |   .  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   e  |   (  |   )  |   /  |   *  |   ^  |   1  |   2  |   3  |   ,  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_planck_grid(
  HPR_DEL, UK_1,    UK_2,    UK_3,    UK_4,    UK_5,    UK_6,    UK_7,    UK_8,    UK_9,    UK_0,   _______,
  _______, UK_PERC, UK_DLR,  UK_PND,  UK_MINS, UK_PLUS, UK_EQL,  UK_4,    UK_5,    UK_6,    UK_DOT,  _______,
  _______, UK_E,    UK_LPRN, UK_RPRN, UK_SLSH, UK_ASTR, UK_CIRC, UK_1,    UK_2,    UK_3,    UK_COMM, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * | Del  |   !  |   "  |   £  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   #  |   @  |   _  |   -  |   |  |      |   +  |   =  |   ~  |   '  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Caps |   \  |   <  |   [  |   (  |   {  |   }  |   )  |   ]  |   >  |      |Cps Wd|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Home |PageDn|PageUp| End  |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_planck_grid(
  HPR_DEL, UK_EXLM, UK_DQUO, UK_PND,  UK_DLR,  UK_PERC, UK_CIRC, UK_AMPR, UK_ASTR, UK_LPRN, UK_RPRN, _______,
  _______, UK_HASH, UK_AT,   UK_UNDS, UK_MINS, UK_PIPE, _______, UK_PLUS, UK_EQL,  UK_TILD, UK_QUOT, _______,
  KC_CAPS, UK_BSLS, UK_LABK, UK_LBRC, UK_LPRN, UK_LCBR, UK_RCBR, UK_RPRN, UK_RBRC, UK_RABK, _______, CW_TOGG,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
),

/* Gaming
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Func | GUI  | Alt  | Space|    Func     |      | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_GAME] = LAYOUT_planck_grid(
    KC_GRV,  UK_Q,    UK_W,    UK_E,    UK_R,       UK_T, UK_Y,     UK_U,    UK_I,    UK_O,    UK_P,    KC_BSPC,
    KC_TAB,  UK_A,    UK_S,    UK_D,    UK_F,       UK_G, UK_H,     UK_J,    UK_K,    UK_L,    UK_SCLN, KC_ENT,
    KC_LSFT, UK_Z,    UK_X,    UK_C,    UK_V,       UK_B, UK_N,     UK_M,    UK_COMM, UK_DOT,  UK_SLSH, KC_RSFT,
    KC_LCTL, MO(_FL), KC_LGUI, KC_LALT, KC_SPC, MO(_FL),  MO(_FL),  _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* Function Layer
 * ,-----------------------------------------------------------------------------------.
 * |      |   1  |   2  |   3  |   4  |   5  |      |  F7  |  F8  |  F9  | F10  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   6  |   7  |   8  |   9  |   0  |      |  F4  |  F5  |  F6  | F11  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Caps |   \  |      |      |      |      |      |  F1  |  F2  |  F3  | F12  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             | Play | Prev | Vol+ | Vol- | Next |
 * `-----------------------------------------------------------------------------------'
 */
[_FL] = LAYOUT_planck_grid(
  _______, UK_1,    UK_2,    UK_3,    UK_4,    UK_5,    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
  KC_ESC,  UK_6,    UK_7,    UK_8,    UK_9,    UK_0,    _______, KC_F4,   KC_F5,   KC_F6,   KC_F11,  _______,
  KC_CAPS, UK_BSLS, _______, _______, _______, _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F12,  _______,
  _______, _______, _______, _______, _______, _______, _______, KC_MPLY, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT
),

/* Adjust (Lower + Raise)
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * |      |      | Debug | RGB |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Clear |MUSmod|Aud on|Audoff|AGnorm|AGswap|Qwerty|      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Game |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_planck_grid(
    _______, _______,   DB_TOGG, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_DEL ,
    _______, EE_CLR,    MU_NEXT, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, _______, _______, _______, _______, _______,
    _______, AU_PREV,   AU_NEXT, MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  _______, _______, _______, _______, _______,
    _______, TG(_GAME), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)
// [ ] do I actually need all this?
};

/* clang-format on */

#ifdef AUDIO_ENABLE
float plover_song[][2]    = SONG(PLOVER_SOUND);
float plover_gb_song[][2] = SONG(PLOVER_GOODBYE_SOUND);
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

// Not used, left for reference when I want to try and use custom keycodes
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QWERTY:
            if (record->event.pressed) {
                print("mode just switched to qwerty and this is a huge string\n");
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        default:
            return true;
    }
}

/* clang-format off */
float melody[8][2][2] = {
    {{440.0f, 8}, {440.0f, 24}},
    {{440.0f, 8}, {440.0f, 24}},
    {{440.0f, 8}, {440.0f, 24}},
    {{440.0f, 8}, {440.0f, 24}},
    {{440.0f, 8}, {440.0f, 24}},
    {{440.0f, 8}, {440.0f, 24}},
    {{440.0f, 8}, {440.0f, 24}},
    {{440.0f, 8}, {440.0f, 24}},
};
/* clang-format on */

#define JUST_MINOR_THIRD 1.2
#define JUST_MAJOR_THIRD 1.25
#define JUST_PERFECT_FOURTH 1.33333333
#define JUST_TRITONE 1.42222222
#define JUST_PERFECT_FIFTH 1.33333333

#define ET12_MINOR_SECOND 1.059463
#define ET12_MAJOR_SECOND 1.122462
#define ET12_MINOR_THIRD 1.189207
#define ET12_MAJOR_THIRD 1.259921
#define ET12_PERFECT_FOURTH 1.33484
#define ET12_TRITONE 1.414214
#define ET12_PERFECT_FIFTH 1.498307

deferred_token tokens[8];

uint32_t reset_note(uint32_t trigger_time, void *note) {
    *(float*)note = 440.0f;
    return 0;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    cancel_deferred_exec(tokens[index]);
    if (clockwise) {
        melody[index][1][0] = melody[index][1][0] * ET12_MINOR_SECOND;
        melody[index][0][0] = melody[index][1][0] / ET12_PERFECT_FIFTH;
        audio_play_melody(&melody[index], 2, false);
    } else {
        melody[index][1][0] = melody[index][1][0] / ET12_MINOR_SECOND;
        melody[index][0][0] = melody[index][1][0] * ET12_TRITONE;
        audio_play_melody(&melody[index], 2, false);
    }
    tokens[index] = defer_exec(1000, reset_note, &melody[index][1][0]);
    return false;
}
