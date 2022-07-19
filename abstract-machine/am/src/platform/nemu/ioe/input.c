#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

  uint32_t code = AM_INPUT_CONFIG ;
  if( code == AM_KEY_NONE) {
    kbd->keydown = false;
    kbd->keycode = code;
  }

  else {
    kbd->keydown = false;
    kbd->keycode = AM_KEY_NONE;
  }
}
