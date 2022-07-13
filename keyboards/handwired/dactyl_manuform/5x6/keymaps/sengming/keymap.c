/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

enum layer_names {
    _MAC,
    _WINDOWS,
    _MOUSE,
    _ARROWS,
    _SYMBOLS,
    _NUMBERS,
    _MEDIA,
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAC] = LAYOUT_5x6(
     KC_ESC , KC_1       , KC_2       , KC_3      , KC_4      , KC_5  ,                             KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC,
     KC_TAB , KC_Q       , LT(0,KC_W) , KC_E      , KC_R      , KC_T  ,                             KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
     KC_HYPR, KC_A       , KC_S       , KC_D      , KC_F      , KC_G  ,                             KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LSFT, CTL_T(KC_Z), LT(0,KC_X) ,LT(0,KC_C) ,LT(0,KC_V) , LT(0,KC_B) ,                        KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLASH,
                                KC_LCMD,KC_LCTRL,                                                     KC_DEL, KC_EQL,
                                                        KC_SPC, MO(_ARROWS),                MO(_MOUSE), KC_ENT,
                                                        C(KC_LSFT), MO(_SYMBOLS),          KC_GRAVE, G(KC_SPC),
                                                        KC_LALT, MO(_NUMBERS),           MO(_MEDIA), C(G(KC_Q))
  ),

  [_WINDOWS] = LAYOUT_5x6(

   _______,_______, _______ ,_______,_______ ,_______,                        _______,_______,_______,_______,_______,_______,
   _______,_______,_______,_______,_______,_______,                        _______, _______ , _______ , _______ ,_______,_______,
   _______,_______,_______,_______,_______ ,_______,                        _______, _______ , _______ , _______ ,_______,_______,
     _______,_______,_______,_______,_______,_______,                        _______, _______ , _______ , _______ ,_______ ,_______,
                          KC_LCMD,KC_LALT,                                                       _______, _______,
                                             _______,_______,            _______,_______,
                                             KC_LCTRL,_______,            _______,_______,
                                             _______,_______,            _______,_______

  ),

  [_MOUSE] = LAYOUT_5x6(

                 KC_F11,KC_F1, KC_F2 ,KC_F3,KC_F4 ,KC_F5,                        KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F12,
                 _______,_______,_______,KC_WH_U,_______,_______,                        _______, _______ , KC_MS_U , _______ ,_______,_______,
                 _______,_______,KC_WH_L,KC_WH_D,KC_WH_R ,_______,                        KC_BTN1, KC_MS_L , KC_MS_D , KC_MS_R ,_______,_______,
                  _______,_______,KC_ACL0,KC_ACL1,KC_ACL2,_______,                        _______, KC_BTN2 , _______ , _______ ,_______ ,_______,
                                       _______,_______,                                                       _______, RESET,
                                                          KC_BTN1,KC_BTN2,            _______,_______,
                                                          _______,KC_BTN2,            _______,_______,
                                                          _______,_______,            _______,_______

               ),
  [_ARROWS] = LAYOUT_5x6(

                   RESET,_______, _______ ,_______,_______ ,TG(_WINDOWS),                        _______,_______,_______,_______,_______,_______,
                   _______,_______,_______,_______,_______,_______,                        _______, KC_HOME , KC_UP , KC_END ,_______,_______,
                   _______,_______,_______,_______,_______ ,_______,                        KC_HOME, KC_LEFT , KC_DOWN , KC_RIGHT ,KC_END,_______,
                   _______,_______,_______,_______,_______,_______,                        _______, KC_PGDOWN , _______ , KC_PGUP ,_______ ,_______,
                                        RESET,_______,                                                       _______, _______,
                                                           _______,_______,            _______,_______,
                                                           _______,_______,            _______,_______,
                                                           _______,_______,            _______,_______

                ),
  [_SYMBOLS] = LAYOUT_5x6(

                    _______,_______, _______ ,_______,_______ ,_______,                        KC_CIRC,KC_CIRC,KC_LABK,KC_RABK,_______,_______,
                    _______,_______,_______,_______,_______,_______,                        KC_LABK, KC_AT , KC_LCBR , KC_RCBR ,KC_HASH,KC_RABK,
                    _______,_______,_______,_______,_______ ,_______,                        KC_PERC, KC_EQL , KC_LPRN , KC_RPRN ,KC_DLR,KC_AMPR,
                    _______,_______,_______,_______,_______,_______,                        KC_TILD, KC_GRAVE , KC_LBRC , KC_RBRC ,KC_PIPE ,KC_EXLM,
                                         _______,_______,                                                       KC_PPLS, KC_PMNS,
                                                            _______,_______,            _______,_______,
                                                            _______,_______,            _______,_______,
                                                            _______,_______,            _______,_______

                 ),
  [_NUMBERS] = LAYOUT_5x6(

                    RESET,_______, _______ ,_______,_______ ,_______,                        KC_PSLS,KC_PAST,KC_PPLS,KC_PMNS,_______,_______,
                    _______,_______,_______,KC_PSLS,KC_PAST,_______,                        _______, KC_7 , KC_8 , KC_9 ,_______,_______,
                    _______,_______,_______,KC_PMNS,KC_PPLS ,_______,                        _______, KC_4 , KC_5 , KC_6 ,_______,_______,
                    _______,_______,_______,_______,_______,_______,                        _______, KC_1 , KC_2 , KC_3 ,_______ ,_______,
                                         _______,_______,                                                       KC_0, KC_DOT,
                                                            _______,_______,            _______,_______,
                                                            _______,_______,            _______,_______,
                                                            _______,_______,            _______,_______

                 ),
  [_MEDIA] = LAYOUT_5x6(

                  KC_MSTP,KC_MPRV, KC_MPLY ,KC_MNXT,_______ ,_______,                        _______,_______,_______,_______,_______,_______,
                  _______,_______,_______,_______,KC_VOLU,_______,                        RGB_SPI, _______ , _______ , _______ ,_______,_______,
                  _______,_______,_______,_______,KC_VOLD ,_______,                        RGB_TOG, RGB_MODE_FORWARD , RGB_HUI , RGB_SAI ,RGB_VAI,_______,
                  _______,_______,_______,_______,KC_MUTE,_______,                        RGB_SPD, RGB_MODE_REVERSE , RGB_HUD , RGB_SAD ,RGB_VAD ,_______,
                                       _______,_______,                                                       _______, _______,
                                                          _______,_______,            _______,_______,
                                                          _______,_______,            _______,_______,
                                                          _______,_______,            _______,_______

               ),
};

//The following example uses LT(0, kc) (layer-tap key with no practical use because layer 0 is always active) to add cut, copy and paste function to X,C and V keys when they are held down
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(0,KC_X):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(G(KC_X)); // Intercept hold function to send Ctrl-X
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_C):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(G(KC_C)); // Intercept hold function to send Ctrl-C
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_V):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(G(KC_V)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_W):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_W)); // Intercept hold function to send Ctrl-W for vim
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_B):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_B)); // Intercept hold function to send Ctrl-B for tmux
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
    }
    return true;
}
