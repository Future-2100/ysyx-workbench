#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t code = inl( KBD_ADDR + AM_INPUT_KEYBRD );
  printf("!!!!!!");
  if(code == AM_KEY_NONE) {
    kbd->keydown = false;
    kbd->keycode = 0;
  }
    
  else {
    kbd->keydown = true;
    kbd->keycode = code;
  }
  //kbd->keycode = inl(KBD_ADDR);
  //kbd->keydown = true;
}
