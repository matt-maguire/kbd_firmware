#include QMK_KEYBOARD_H


#ifdef LAYOUT_split_3x6_3_ex2
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3_ex2(
  //,----------------------------------------------------------------------------------------.  ,--------------------------------------------------------------------------------------------------.
      KC_CAPS,         KC_Y, LCTL_T(KC_C), LALT_T(KC_L), LGUI_T(KC_M),    KC_K,         MO(4),            MO(4),          KC_Z,  RGUI_T(KC_F), LALT_T(KC_U), RCTL_T(KC_COMM),      KC_QUOT, KC_SCLN,
  //|--------+-------------+-------------+-------------+-------------+--------+--------------|  |--------------+--------------+--------------+-------------+----------------+-------------+--------|
      KC_BSPC,         KC_I,   LT(3,KC_S),   LT(1,KC_R),   LT(2,KC_T),    KC_G,       XXXXXXX,          XXXXXXX,          KC_P,    LT(2,KC_N),   LT(1,KC_E),      LT(3,KC_A),         KC_O,  KC_EQL,
  //|--------+-------------+-------------+-------------+-------------+--------+--------------'  `--------------+--------------+--------------+-------------+----------------+-------------+--------|
      KC_QUES, RALT_T(KC_Q),         KC_V,         KC_W,         KC_D,    KC_J,                                           KC_B,          KC_H,      KC_SLSH,          KC_DOT, RALT_T(KC_X), KC_EXLM,
  //|--------+-------------+-------------+-------------+--------------+-------+--------------.  ,--------------+--------------+--------------+-------------+----------------+-------------+--------|
                                                         OSM(MOD_LALT), KC_SPC, OSM(MOD_LSFT),    OSM(MOD_RCTL), OSM(MOD_RGUI), OSM(MOD_LALT)
                                                     //`-------------------------------------'  `--------------------------------------------'
  ),

  [1] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
      _______,  KC_ESC,    KC_7,    KC_8,    KC_9,  KC_EQL, _______,    _______, KC_PGUP, KC_HOME,   KC_UP,  KC_END, KC_BSPC, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      _______,  KC_TAB,    KC_4,    KC_5,    KC_6, KC_MINS, _______,    _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,  KC_ENT, _______,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      _______,  KC_DOT,    KC_1,    KC_2,    KC_3,    KC_0,                      KC_BTN2, KC_BTN1, KC_WH_D, KC_WH_U,  KC_DEL, _______,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
      _______,  KC_ESC, KC_AMPR, KC_ASTR, KC_SLSH, KC_COLN, _______,    _______, KC_COMM, KC_LCBR, KC_RCBR,  KC_GRV, KC_BSPC, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      _______,  KC_TAB,  KC_DLR, KC_PERC, KC_CIRC, KC_UNDS, _______,    _______, KC_BSLS, KC_LPRN, KC_RPRN,  KC_EQL,  KC_ENT, _______,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      _______, KC_CAPS, KC_EXLM,   KC_AT, KC_HASH, KC_SCLN,                      KC_PIPE, KC_LBRC, KC_RBRC, KC_TILD,  KC_DEL, _______,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
      _______, KC_PSCR,   KC_F7,   KC_F8,   KC_F9,  KC_F12, _______,    _______, KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, KC_AGIN, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      _______,  KC_INS,   KC_F4,   KC_F5,   KC_F6,  KC_F11, _______,    _______, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_UNDO, _______,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      _______, KC_SCRL,   KC_F1,   KC_F2,   KC_F3,  KC_F10,                      KC_BTN2, KC_BTN1, KC_COPY, KC_PSTE,  KC_CUT, _______,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [4] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
      _______, _______, _______, _______, _______, _______, _______,    _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, QK_BOOT,    QK_BOOT, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, RGB_SPI, _______,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, KC_MUTE, KC_MPLY, KC_MSTP, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};
#else
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, TL_LOWR,  KC_SPC,     KC_ENT, TL_UPPR, KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
#endif

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [1] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [2] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [3] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [4] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
};
#endif
