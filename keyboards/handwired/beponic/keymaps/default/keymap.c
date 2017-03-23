#include "beponic.h"
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "tmk_core/protocol/lufa/LUFA-git/LUFA/Drivers/Peripheral/TWI.h"

// Fillers to make layering more clear
#define _______ KC_TRNS
#define ___T___ KC_TRNS
#define XXXXXXX KC_NO

// Layer shorthand
#define _BEPO 0
#define _FN 1
// #define _QW 1


bool is_ctrl_pressed = 0;
bool is_altgr_pressed = 0;


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


 /* Keymap 0: default layer
 *
 * ,--------------------------------------------------.                                  ,--------------------------------------------------.
 * |   $    |   "  |   <  |   >  |   (  |   )  |Delete|                                  |ScroLo|   @  |   +  |   -  |   /  |   *  |   =    |
 * |--------+------+------+------+------+-------------|                                  |------+------+------+------+------+------+--------|
 * |   %    |   B  |E_ACUT|   P  |   O  |E_GRAV|Backsp|                                  |CapsLo|   ^  |   V  |   D  |   L  |   J  |   Z    |
 * |--------+------+------+------+------+------|  ace |                                  |      |------+------+------+------+------+--------|
 * |   W    |   A  |   U  |   I  |   E  |   ,  |------|                                  |------|   C  |   T  |   S  |   R  |   N  |   M    |
 * |--------+------+------+------+------+------|  Tab |                                  | NumLo|------+------+------+------+------+--------|
 * | E_CIRC |A_GRAV|   Y  |   X  |   .  |   K  |      |                                  |      |   '  |   Q  |   G  |   H  |   F  | C_CEDIL|
 * `--------+------+------+------+------+-------------,-------------.      ,-------------`-------------+------+------+------+------+--------'
 *   |Escape|Insert|LSuper| LCtrl|  LAlt|             | BEPO |QWERTY|      |AZERTY| BEPO |             | AltGr| RCtrl|RSuper|PrntSc| Pause|
 *   `----------------------------------'      ,------|------|------|      |------+------+------.      `----------------------------------'
 *                                             |      |      |L_NumK|      |L_NumK|      |      |
 *                                             | Space|LShift|------|      |------|RShift|Enter |
 *                                             |      |      |L_FNav|      |L_FNav|      |      |
 *                                             `--------------------'      `--------------------'
 */
// [BEPO] = KEYMAP(
// // Left hand
// BP_DOLLAR,  BP_DQOT,  BP_LGIL,  BP_RGIL,  BP_LPRN,  BP_RPRN,  KC_DEL,
// BP_PERCENT, BP_B,   BP_E_ACUTE, BP_P,   BP_O,   BP_E_GRAVE, KC_BSPC,
// BP_W,   BP_A,   BP_U,   BP_I,   BP_E,   BP_COMMA,
// BP_ECRC,  BP_A_GRAVE, BP_Y,   BP_X,   BP_DOT,   BP_K,   KC_TAB,
// KC_ESC,   KC_INS,   KC_LGUI,  KC_LCTL,  KC_LALT,
//                             DF(BEPO), DF(QW_B),
//                                 MO(NUMK),
//                         KC_SPC,   KC_LSHIFT,  MO(FNAV),
// // Right hand
//         KC_SLCK,  BP_AT,    BP_PLUS,  BP_MINUS, BP_SLASH, BP_ASTR,  BP_EQUAL,
//         KC_CAPSLOCK,  BP_DCRC,  BP_V,   BP_D,   BP_L,   BP_J,   BP_Z,
//             BP_C,   BP_T,   BP_S,   BP_R,   BP_N,   BP_M,
//         KC_NUMLOCK, BP_APOS,  BP_Q,   BP_G,   BP_H,   BP_F,   BP_CCED,
//                 BP_ALGR,  KC_RCTL,  KC_RGUI,  KC_PSCREEN, KC_PAUSE,
// DF(AZ_B), DF(BEPO),
// MO(NUMK),
// MO(FNAV), KC_RSHIFT,  KC_ENTER),

 [_BEPO] = { /* BEPO */ 
  { BP_DOLLAR,  BP_DQOT,  BP_LGIL,  BP_RGIL,  BP_LPRN,  BP_RPRN,  KC_DEL, BP_AT, BP_PLUS,  BP_MINUS, BP_SLASH, BP_ASTR,  BP_EQUAL, BP_PERCENT, KC_ESC },
  { KC_TAB, BP_B,   BP_E_ACUTE, BP_P,   BP_O,   BP_E_GRAVE, KC_BSPC,  BP_DCRC,  BP_V,   BP_D,   BP_L,   BP_J,   BP_Z, BP_W , KC_RCTRL},
  { KC_LSHIFT, BP_A,   BP_U,   BP_I,   BP_E,   BP_COMMA, KC_ENTER, BP_C,   BP_T,   BP_S,   BP_R,   BP_N,   BP_M, KC_RSHIFT , KC_PGUP},
  { BP_ECRC, BP_A_GRAVE, BP_Y,   BP_X,   BP_DOT,   BP_K, KC_NO,  BP_APOS,  BP_Q,   BP_G,   BP_H,   BP_F,   BP_CCED, KC_UP, KC_PGDN},
  { KC_NO, KC_NO, KC_LALT, M(1), KC_NO, KC_LCTL, MO(_FN), KC_NO, KC_SPC, KC_RALT, KC_HOME, KC_END, KC_LEFT, KC_DOWN, KC_RIGHT},
  
 },


[_FN] = { /* FN */
  { KC_NO, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_DEL,         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_ESC },
  { KC_TAB, KC_NO, KC_HOME,KC_UP, KC_END, KC_NO,KC_NO,                    KC_NO, BP_7,BP_8, BP_9, KC_NO,KC_NO, KC_NO, KC_NO  },
  { KC_LSHIFT, KC_NO, KC_LEFT,KC_DOWN, KC_RIGHT, KC_NO,KC_NO,             KC_NO, BP_4,BP_5, BP_6, KC_NO,KC_NO, KC_CAPSLOCK, KC_NO  },
  { M(9), MUV_IN, KC_NO,LCTL(BP_X), LCTL(BP_C), LCTL(BP_V),KC_NO,              BP_0 , BP_1,BP_2, BP_3, KC_NO,KC_NO, KC_NO, KC_NO  },
  { MU_ON, MU_OFF, M(2),KC_TRNS, KC_NO, KC_NO,KC_TRNS,                  KC_NO, RALT(KC_SPC),KC_NO, KC_NO, KC_NO,KC_HOME, KC_NO, KC_END  },
 },


 // [_QW] = { /* QWERTY */
 //  { KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC  },
 //  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL   },
 //  { KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_ENT,  KC_PGUP  },
 //  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT, KC_UP,   KC_PGDN  },
 //  { KC_D,    KC_LCTL, KC_LALT, KC_LGUI, KC_D, KC_SPC,  KC_SPC,  KC_D, KC_RGUI, KC_RALT, KC_RCTL, KC_D, KC_LEFT, KC_DOWN, KC_RGHT  },
 // },

 


};

const uint16_t PROGMEM fn_actions[] = {

};


float tone_startup[][2] = {
    ED_NOTE(_E7 ),
    E__NOTE(_CS7),
    E__NOTE(_E6 ),
    E__NOTE(_A6 ),
    M__NOTE(_CS7, 20)
};
float tone_goodbye[][2] = SONG(GOODBYE_SOUND);
float rock[][2] = SONG(ROCK_A_BYE_BABY);

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
          case 1:
            if (record->event.pressed) {
                layer_on(_FN);
                register_code(KC_LALT);
            }
            else {
                layer_off(_FN);
                unregister_code(KC_LALT);
            }
          case 2:
            PLAY_NOTE_ARRAY(rock, false, 0);
          case 9:
            voice_iterate();

        break;
      }
    return MACRO_NONE;
};


bool process_record_user (uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
  case KC_LCTL:
    if (record->event.pressed) {
        if (is_altgr_pressed == 1) {
            unregister_code(KC_LCTL);
            register_code(KC_SPC);
            unregister_code(KC_SPC);
        }
    }
    break;
  case KC_RALT:
    if (record->event.pressed) {
        is_altgr_pressed = 1;
    } else {
        is_altgr_pressed = 0;
    }
    break;
  }
  
  
  return true;
}
