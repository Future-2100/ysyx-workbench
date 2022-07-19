#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

//  if( kbd->keycode != AM_KEY_NONE )

    //uint32_t code = inl(KBD_ADDR);
    
      AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
      kbd->keydown = ev.keydown;
      kbd->keycode = ev.keycode;

   // }

    //kbd->keydown = false;
    //kbd->keycode = AM_KEY_NONE;
    
}

