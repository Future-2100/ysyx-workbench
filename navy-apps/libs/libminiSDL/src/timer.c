#include <NDL.h>
#include <sdl-timer.h>
#include <stdio.h>

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback, void *param) {
  printf("in ADDTimer");
  assert(0);
  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
  printf("in RemoveTimer");
  assert(0);
  return 1;
}

uint32_t SDL_GetTicks() {
  printf("in GetTicks");
  assert(0);
  return 0;
}

void SDL_Delay(uint32_t ms) {
  printf("in Delay");
  assert(0);
}
