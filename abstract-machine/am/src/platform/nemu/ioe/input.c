#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
<<<<<<< HEAD

//  if( kbd->keycode != AM_KEY_NONE )

=======
//  if( kbd->keycode != AM_KEY_NONE )
>>>>>>> tracer-ysyx2204
    
      uint32_t code = inl(KBD_ADDR);

        kbd->keydown =  (code & KEYDOWN_MASK) >> 15 ;
        if(kbd->keydown == 0)
          kbd->keycode = code;
        else
          kbd->keycode = code & ~KEYDOWN_MASK;

   // }
<<<<<<< HEAD

=======
>>>>>>> tracer-ysyx2204
    //kbd->keydown = false;
    //kbd->keycode = AM_KEY_NONE;
    
}

