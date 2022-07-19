#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

  if( kbd->keycode != AM_KEY_NONE )
    printf("%d\n", kbd->keycode) ;


//    kbd->keydown = false;
//    kbd->keycode = AM_KEY_NONE;

    
}

