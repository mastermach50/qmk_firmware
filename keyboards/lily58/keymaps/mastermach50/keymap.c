#include QMK_KEYBOARD_H

enum custom_keys {
  MO_NAV = SAFE_RANGE,
  MO_SYM,
};

enum layers {
  BASE = 0,
  NOHR,
  SYM,
  NAV,
  MSMD,
};

// Define home row mods
#define LG_A    LGUI_T(KC_A)
#define LA_S    LALT_T(KC_S)
#define LC_D    LCTL_T(KC_D)
#define LS_F    LSFT_T(KC_F)

#define RS_J    RSFT_T(KC_J)
#define RC_K    RCTL_T(KC_K)
#define RA_L    RALT_T(KC_L)
#define RG_SCLN RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT(
//┌───────┬───────┬───────┬───────┬───────┬───────┐                 ┌───────┬───────┬───────┬───────┬───────┬───────┐
   KC_ESC ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                  KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_GRV ,
//├───────┼───────┼───────┼───────┼───────┼───────┤                 ├───────┼───────┼───────┼───────┼───────┼───────┤
   KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                  KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_BSLS,
//├───────┼───────┼───────┼───────┼───────┼───────┤                 ├───────┼───────┼───────┼───────┼───────┼───────┤
   KC_LCTL,LG_A   ,LA_S   ,LC_D   ,LS_F   ,KC_G   ,                  KC_H   ,RS_J   ,RC_K   ,RA_L   ,RG_SCLN,KC_QUOT,
//├───────┼───────┼───────┼───────┼──═══──┼───────┼───────┐ ┌───────┼───────┼──═══──┼───────┼───────┼───────┼───────┤
   KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,KC_LBRC,  KC_RBRC,KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
//└───────┴───────┼───────┼───────┼───────┼───────┼───────┘ └───────┼───────┼───────┼───────┼───────┼───────┴───────┘
                   KC_LALT,KC_LGUI,MO_NAV ,KC_SPC ,                  KC_BSPC,MO_SYM ,KC_ENT ,KC_RGUI
//                └───────┴───────┴───────┴───────┘                 └───────┴───────┴───────┴───────┘
),

[NOHR] = LAYOUT(
//┌───────┬───────┬───────┬───────┬───────┬───────┐                 ┌───────┬───────┬───────┬───────┬───────┬───────┐
   KC_ESC ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                  KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_GRV ,
//├───────┼───────┼───────┼───────┼───────┼───────┤                 ├───────┼───────┼───────┼───────┼───────┼───────┤
   KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                  KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_BSLS,
//├───────┼───────┼───────┼───────┼───────┼───────┤                 ├───────┼───────┼───────┼───────┼───────┼───────┤
   KC_LCTL,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                  KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT,
//├───────┼───────┼───────┼───────┼──═══──┼───────┼───────┐ ┌───────┼───────┼──═══──┼───────┼───────┼───────┼───────┤
   KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,KC_LBRC,  KC_RBRC,KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
//└───────┴───────┼───────┼───────┼───────┼───────┼───────┘ └───────┼───────┼───────┼───────┼───────┼───────┴───────┘
                   KC_LALT,KC_LGUI,MO_NAV ,KC_SPC ,                  KC_BSPC,MO_SYM ,KC_ENT ,KC_RGUI
//                └───────┴───────┴───────┴───────┘                 └───────┴───────┴───────┴───────┘
),

[SYM] = LAYOUT(
//┌───────┬───────┬───────┬───────┬───────┬───────┐                 ┌───────┬───────┬───────┬───────┬───────┬───────┐
   KC_GRV ,KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                  KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_TILD,
//├───────┼───────┼───────┼───────┼───────┼───────┤                 ├───────┼───────┼───────┼───────┼───────┼───────┤
   KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,                  KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,
//├───────┼───────┼───────┼───────┼───────┼───────┤                 ├───────┼───────┼───────┼───────┼───────┼───────┤
   _______,XXXXXXX,XXXXXXX,KC_MINS,KC_EQL ,KC_INS ,                  KC_DEL ,KC_PSCR,KC_SCRL,KC_PAUS,XXXXXXX,XXXXXXX,
//├───────┼───────┼───────┼───────┼──═══──┼───────┼───────┐ ┌───────┼───────┼──═══──┼───────┼───────┼───────┼───────┤
   _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,  XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,_______,
//└───────┴───────┼───────┼───────┼───────┼───────┼───────┘ └───────┼───────┼───────┼───────┼───────┼───────┴───────┘
                   _______,_______,_______,_______,                  _______,_______,_______,_______
//                └───────┴───────┴───────┴───────┘                 └───────┴───────┴───────┴───────┘
),


[NAV] = LAYOUT(
//┌───────┬───────┬───────┬───────┬───────┬───────┐                 ┌───────┬───────┬───────┬───────┬───────┬───────┐
   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,DF(BASE),                DF(NOHR),XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
//├───────┼───────┼───────┼───────┼───────┼───────┤                 ├───────┼───────┼───────┼───────┼───────┼───────┤
   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                  XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
//├───────┼───────┼───────┼───────┼───────┼───────┤                 ├───────┼───────┼───────┼───────┼───────┼───────┤
   _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                  KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,XXXXXXX,XXXXXXX,
//├───────┼───────┼───────┼───────┼──═══──┼───────┼───────┐ ┌───────┼───────┼──═══──┼───────┼───────┼───────┼───────┤
   _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_HOME,KC_PGUP,  KC_PGDN,KC_END ,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,_______,
//└───────┴───────┼───────┼───────┼───────┼───────┼───────┘ └───────┼───────┼───────┼───────┼───────┼───────┴───────┘
                   _______,_______,_______,_______,                  _______,_______,_______,_______
//                └───────┴───────┴───────┴───────┘                 └───────┴───────┴───────┴───────┘
),

[MSMD] = LAYOUT(
//┌───────┬───────┬───────┬───────┬───────┬───────┐                 ┌───────┬───────┬───────┬───────┬───────┬───────┐
   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                  KC_SLEP,KC_VOLU,KC_BRIU,XXXXXXX,XXXXXXX,XXXXXXX,
//├───────┼───────┼───────┼───────┼───────┼───────┤                 ├───────┼───────┼───────┼───────┼───────┼───────┤
   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                  KC_MUTE,KC_VOLD,KC_BRID,XXXXXXX,XXXXXXX,XXXXXXX,
//├───────┼───────┼───────┼───────┼───────┼───────┤                 ├───────┼───────┼───────┼───────┼───────┼───────┤
   _______,XXXXXXX,XXXXXXX,KC_MPRV,KC_MPLY,KC_MNXT,                  MS_LEFT,MS_DOWN,MS_UP  ,MS_RGHT,XXXXXXX,XXXXXXX,
//├───────┼───────┼───────┼───────┼──═══──┼───────┼───────┐ ┌───────┼───────┼──═══──┼───────┼───────┼───────┼───────┤
   _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,MS_WHLL,MS_WHLU,  MS_WHLD,MS_WHLR,MS_BTN1,MS_BTN2,XXXXXXX,XXXXXXX,_______,
//└───────┴───────┼───────┼───────┼───────┼───────┼───────┘ └───────┼───────┼───────┼───────┼───────┼───────┴───────┘
                   _______,_______,_______,_______,                  _______,_______,_______,_______
//                └───────┴───────┴───────┴───────┘                 └───────┴───────┴───────┴───────┘
)

};
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    case MO_NAV:
      if (record->event.pressed) {
        layer_on(NAV);
      } else {
        layer_off(NAV);
      }
      update_tri_layer(NAV, SYM, MSMD);
      return false;
    case MO_SYM:
      if (record->event.pressed) {
        layer_on(SYM);
      } else {
        layer_off(SYM);
      }
      update_tri_layer(NAV, SYM, MSMD);
      return false;
  }
  return true;
}