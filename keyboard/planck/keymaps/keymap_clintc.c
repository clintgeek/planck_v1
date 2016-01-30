#include "extended_keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* MIT Layout (default)
   *
   * ,-----------------------------------------------------------------------.
   * | tab |  q  |  w  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |  p  |bksp |
   * |-----------------------------------------------------------------------|
   * | c/e |  a  |  s  |  d  |  f  |  g  |  h  |  j  |  k  |  l  |  ;  |  '  |
   * |-----------------------------------------------------------------------|
   * |shft |  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |  .  |  /  | s/r |
   * |-----------------------------------------------------------------------|
   * | fn  | fn2 | alt | sup |raise|   space   |lower| sup | alt | fn2 | fn  |
   * `-----------------------------------------------------------------------'
   */
    [0] = {  // standard alpha
      {KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_BSPC},
      {F(ce),  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN,  KC_QUOT},
      {KC_LSFT,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  F(sr)},
      {F(3),  F(4),  KC_LALT,  KC_LGUI,  F(1),   F(sf)   ,  F(2),  KC_RGUI,  KC_RALT,  F(4),  F(3)}
    },

    /* MIT Layout (raise)
    *
    * ,-----------------------------------------------------------------------.
    * |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |
    * |-----------------------------------------------------------------------|
    * |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |
    * |-----------------------------------------------------------------------|
    * |  `  |     |     |     |     |     |     |     |  [  |  ]  |  \  |     |
    * |-----------------------------------------------------------------------|
    * |     |     |     |     |     |  fwd del  |     |     |     |     |     |
    * `-----------------------------------------------------------------------'
    */
    [1] = {  // numbers and Fn keys
      {KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_10,  KC_F11,  KC_F12},
      {KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  KC_MINS,  KC_EQL},
      {KC_GRV,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_TRNS},
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   F(csp)   ,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
    },

  /* MIT Layout (lower)
   *
   * ,-----------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------|
   * |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |  (  |  )  |  _  |  +  |
   * |-----------------------------------------------------------------------|
   * |  ~  |     |     |     |     |     |     |     |  {  |  }  |  |  |     |
   * |-----------------------------------------------------------------------|
   * |     |     |     |     |     |   bksp    |     |     |     |     |     |
   * `-----------------------------------------------------------------------'
   */
    [2] = {  // symbols
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
      {KC_EXCLM,  KC_AT,  KC_HASH,  KC_DLR,  KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_UNDS,  KC_PLUS},
      {KC_TILD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LCBR,  KC_RCBR,  KC_PIPE,  KC_TRNS},
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_BSPC   ,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
    },

  /* MIT Layout (fn)
   *
   * ,-----------------------------------------------------------------------.
   * | esc |     |  up |     |     |     |     |     |     |     |  up |     |
   * |-----------------------------------------------------------------------|
   * |     |  lf |  dn |  rt |     |     |     |     |     |  lf |  dn |  rt |
   * |-----------------------------------------------------------------------|
   * |caps | prv | ply | nxt |  vd |  vu |  vm |     |     |     |     |sleep|
   * |-----------------------------------------------------------------------|
   * |     |     |     |     |     |           |     |     |     |     |     |
   * `-----------------------------------------------------------------------'
   */
    [3] = {  // arrow and media keys
      {KC_ESC,  KC_TRNS,  KC_UP,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_UP,  KC_TRNS},
      {KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RGHT},
      {KC_CAPS,  KC_MEDIA_PREV,  KC_MEDIA_PLAY,  KC_MEDIA_NEXT,  KC_AUDIO_VOL_DOWN,  KC_AUDIO_VOL_UP,  KC_AUDIO_MUTE,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_SYSTEM_SLEEP},
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS   ,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
    },

  /* MIT Layout (WoW)
   *
   * ,-----------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------|
   * |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------|
   * |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------|
   * |     |     |     |     |     |           |     |     |     |     |     |
   * `-----------------------------------------------------------------------'
   */
    [4] = {  // World of Warcraft
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS   ,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
    },

  /* MIT Layout (future use)
   *
   * ,-----------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------|
   * |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------|
   * |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------|
   * |     |     |     |     |     |           |     |     |     |     |     |
   * `-----------------------------------------------------------------------'
   */
    [5] = {  // future use
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS   ,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
    },

  /* MIT Layout (space_function) // hjkl arrow keys
   *
   * ,-----------------------------------------------------------------------.
   * |     |     |     |     |     |     | s.lf| s.dn| s.up| s.rt| s.hm|s.end|
   * |-----------------------------------------------------------------------|
   * |     |     |     |     |     |     |  lf |  dn |  up |  rt |  hm | end |
   * |-----------------------------------------------------------------------|
   * |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------|
   * |     |     |     |     |     |           |     |     |     |     |     |
   * `-----------------------------------------------------------------------'
   */
    [6] = {
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  F(sl),  F(sd),  F(su),  F(srt),  F(sh),  F(se)},
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT,  KC_HOME,  KC_END},
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
      {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS   ,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
    }
};

const uint16_t PROGMEM fn_actions[] = {
  1 = ACTION_LAYER_TAP_TOGGLE(1), // hold for raise, tap x3 for raise lock
  2 = ACTION_LAYER_TAP_TOGGLE(2), // hold for lower, tap x3 for lower lock
  3 = ACTION_LAYER_TAP_TOGGLE(3), // hold for fn, tap x3 for fn lock
  4 = ACTION_LAYER_TAP_TOGGLE(4), // hold for WoW, tap x3 for WpW lock
  5 = ACTION_LAYER_TAP_TOGGLE(5), // hold for fn2, tap x3 for fn2 lock
  6 = ACTION_LAYER_TAP_KEY(6), // hold for hjkl arrows, tap for space

  [ce] = MT(MOD_LCTL, KC_ESC), // Control on hold, escape on tap
  [sr] = MT(MOD_LSFT, KC_ENT) // Shift on hold, return on tap

  [sl] = LSFT(KC_LEFT), // shift + left
  [sd] = LSFT(KC_DOWN), // shift + down
  [su] = LSFT(KC_UP), // shift + up
  [srt] = LSFT(KC_RGHT), // shift + right
  [sh] = LSFT(KC_HOME), // shift + home
  [se] = LSFT(KC_END), // shift + end
  [csp] = LCTRL(KC_SPC) // ctrl + spacw
};
