#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_4x10(
    KC_K,      KC_J,               KC_P,             KC_L,             KC_Q,             KC_Z,            KC_D,               KC_B,              KC_X,              KC_V,
    KC_F,      KC_S,               KC_N,             KC_H,             KC_M,             KC_G,            KC_C,               KC_T,              KC_R,              KC_W,
    KC_LGUI,   LALT_T(KC_ESC),     LCTL_T(KC_TAB),   LSFT_T(KC_SPC),   KC_NO,            KC_CAPS,         RSFT_T(KC_ENT),     RCTL_T(KC_BSPC),   RALT_T(KC_DEL),    KC_RGUI,
    KC_NO,     KC_NO,              KC_NO,            LT(4, KC_A),      LT(1, KC_E),      LT(2, KC_O),     LT(3, KC_I),        KC_NO,             KC_NO,             KC_NO),

  
  [1] = LAYOUT_ortho_4x10(
    KC_NO,   KC_GRV,    KC_SCLN,   KC_QUOT,       KC_NO,     KC_NO,   KC_9,      KC_0,   KC_MINS,   KC_EQL,
    KC_NO,   KC_SLSH,   KC_COMM,   KC_DOT,        KC_NO,     KC_NO,   KC_5,      KC_6,   KC_7,      KC_8,
    KC_TRNS, KC_BSLS,   KC_LBRC,   KC_RBRC,       KC_NO,     KC_NO,   KC_1,      KC_2,   KC_3,      KC_4,
    KC_NO,   KC_NO,     KC_NO,     KC_NO,         KC_NO,     KC_SPC,  KC_NO,     KC_NO,  KC_NO,     KC_NO),
  
  [2] = LAYOUT_ortho_4x10(
    KC_NO,   LSFT(KC_GRV),    LSFT(KC_SCLN),           LSFT(KC_QUOT),   KC_NO,     KC_NO,    LSFT(KC_9),      LSFT(KC_0),   LSFT(KC_MINS),   LSFT(KC_EQL),
    KC_NO,LSFT(KC_SLSH),      LSFT(KC_COMM),           LSFT(KC_DOT),    KC_NO,     KC_NO,    LSFT(KC_5),      LSFT(KC_6),   LSFT(KC_7),      LSFT(KC_8),
    KC_TRNS, LSFT(KC_BSLS),   LSFT(KC_LBRC),           LSFT(KC_RBRC),   KC_NO,     KC_NO,    LSFT(KC_1),      LSFT(KC_2),   LSFT(KC_3),      LSFT(KC_4),
    KC_NO,   KC_NO,                   KC_NO,           KC_NO,           KC_SPC,    KC_NO,    KC_NO,           KC_NO,        KC_NO,           KC_NO),

  [3] = LAYOUT_ortho_4x10(
    KC_TAB,      KC_HOME,     KC_UP,        KC_END,        LALT(KC_F),   LALT(KC_T),   LCTL(KC_L),   LCTL(KC_E),   LCTL(KC_J),   LCTL(KC_R),
    KC_APP,      KC_LEFT,     KC_DOWN,      KC_RIGHT,      LALT(KC_I),   LALT(KC_M),   KC_RSFT,      KC_RCTL,      KC_RALT,      KC_RGUI,
    LCTL(KC_X),  LGUI(KC_V),  LCTL(KC_C),   LCTL(KC_V),    LALT(KC_O),   LALT(KC_A),   LCTL(KC_B),   LCTL(KC_U),   LCTL(KC_I),   LCTL(KC_Z),
    KC_NO,       KC_NO,       KC_NO,        LCA(KC_M),     LCA(KC_F),    KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO),
  [4] = LAYOUT_ortho_4x10(
    KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,     MS_BTN4,   MS_UP,     MS_BTN5,   KC_NO,
    MS_ACL1, MS_ACL2,   MS_WHLU,   MS_WHLD,   KC_NO,   KC_NO,     MS_LEFT,   MS_DOWN,   MS_RGHT,   KC_RCTL,
    KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_RSFT,
    KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,   MS_BTN1,   MS_BTN2,   KC_NO,     KC_NO,     KC_NO),


  [5] = LAYOUT_ortho_4x10(
    KC_ESC,          KC_VOLD,           KC_MUTE,           KC_VOLU,           KC_WAKE,   KC_CAPS,    KC_F9,    KC_F10,     KC_F11,  KC_F12,
    LGUI_T(KC_TAB),  LALT_T(KC_MPRV),   LCTL_T(KC_MPLY),   LSFT_T(KC_MNXT),   KC_SLEP,   KC_PSCR,    KC_F5,    KC_F6,     KC_F7,   KC_F8,
    NK_ON,           KC_BRID,           KC_NO,             KC_BRIU,           KC_PWR,    KC_NO,      KC_F1,    KC_F2,     KC_F3,   KC_F4,
    KC_NO,           KC_NO,             KC_NO,             KC_NO,             KC_NO,     KC_NO,      KC_NO,    KC_NO,     KC_NO,   KC_NO)

};

const uint16_t PROGMEM space1_combo[] = {LT(1, KC_E), LT(2, KC_O), COMBO_END};
const uint16_t PROGMEM space2_combo[] = {LT(4, KC_A), LT(3, KC_I), COMBO_END};
const uint16_t PROGMEM space3_combo[] = {LT(1, KC_E), LT(2, KC_O), LT(3, KC_I), COMBO_END};
const uint16_t PROGMEM space4_combo[] = {LT(4, KC_A), LT(2, KC_O), LT(3, KC_I), COMBO_END};
const uint16_t PROGMEM space5_combo[] = {LT(1, KC_E), LT(4, KC_A), LT(2, KC_O), LT(3, KC_I), COMBO_END};
const uint16_t PROGMEM space6_combo[] = {LT(1, KC_E), LT(4, KC_A), LT(3, KC_I), COMBO_END};
const uint16_t PROGMEM space7_combo[] = {LT(1, KC_E), LT(4, KC_A), LT(2, KC_O), COMBO_END};
const uint16_t PROGMEM space8_combo[] = {LT(4, KC_A), LT(2, KC_O), COMBO_END};
const uint16_t PROGMEM space9_combo[] = {LT(1, KC_E), LT(3, KC_I), COMBO_END};

const uint16_t PROGMEM ucombo[] = {LT(4, KC_A), LT(1, KC_E), COMBO_END};
const uint16_t PROGMEM ycombo[] = {LT(2, KC_O), LT(3, KC_I), COMBO_END};

combo_t key_combos[] = {
  COMBO(space1_combo, LT(5, KC_SPC)),
  COMBO(space2_combo, KC_SPC),
  COMBO(space3_combo, KC_SPC),
  COMBO(space4_combo, KC_SPC),
  COMBO(space5_combo, KC_SPC),
  COMBO(space6_combo, KC_SPC),
  COMBO(space7_combo, KC_SPC),
  COMBO(space8_combo, KC_SPC),
  COMBO(space9_combo, KC_SPC),

  COMBO(ucombo, KC_U),
  COMBO(ycombo, KC_Y)
};

