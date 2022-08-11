#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
//  if( kbd->keycode != AM_KEY_NONE )
    
      uint32_t code = inl(KBD_ADDR);

        kbd->keydown =  (code & KEYDOWN_MASK) >> 15 ;
        if(kbd->keydown == 0)
          kbd->keycode = code;
        else
          kbd->keycode = code & ~KEYDOWN_MASK;

   // }
    //kbd->keydown = false;
    //kbd->keycode = AM_KEY_NONE;
    
}

