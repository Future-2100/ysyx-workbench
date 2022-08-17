#include <NDL.h>
#include <assert.h>
#include <stdio.h>
extern uint8_t keyState[83];

int SDL_Init(uint32_t flags) {
  for(int i = 0 ; i < 83; i++) {
    keyState[i] = 0;
  }
  return NDL_Init(flags);
}

void SDL_Quit() {
  NDL_Quit();
}

char *SDL_GetError() {
  assert(0);
  return "Navy does not support SDL_GetError()";
}

int SDL_SetError(const char* fmt, ...) {
  assert(0);
  return -1;
}

int SDL_ShowCursor(int toggle) {
  assert(0);
  return 0;
}

void SDL_WM_SetCaption(const char *title, const char *icon) {
  //assert(0);
  printf("in SDL_WM_SetCaption\n");
}
