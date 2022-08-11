#include <NDL.h>
#include <SDL.h>
#include <string.h>
#include <assert.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
//  assert(0);
};

int SDL_PushEvent(SDL_Event *ev) {
 // assert(0);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  //assert(0);
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[64];
  while ( NDL_PollEvent(buf, sizeof(buf)) == 0 ) ;
  printf("should not reached here");
  assert(0);
  char *src = buf;
  char keydown[5];
  char keycode[10];
  int i = 0;
  while( *src != ' ' ) {
    keydown[i] = *src ;
    i ++ ;
    src++;
  }
  keydown[i] = '\0';
  src++;  //jump the ' '
  if( strcmp( keydown, "kd" )==0 ) event->type = SDL_KEYDOWN;
  if( strcmp( keydown, "ku" )==0 ) event->type = SDL_KEYUP;
  
  i=0;
  while( *src != '\0' ) {
    keycode[i] = *src ;
    i++;
    src ++ ;
  }
  keycode[i] = '\0';

  if( strcmp( keycode, "0" )==0 )    event->key.keysym.sym = SDLK_0;
  if( strcmp( keycode, "1" )==0 )    event->key.keysym.sym = SDLK_1;
  if( strcmp( keycode, "2" )==0 )    event->key.keysym.sym = SDLK_2;
  if( strcmp( keycode, "3" )==0 )    event->key.keysym.sym = SDLK_3;
  if( strcmp( keycode, "4" )==0 )    event->key.keysym.sym = SDLK_4;
  if( strcmp( keycode, "5" )==0 )    event->key.keysym.sym = SDLK_5;
  if( strcmp( keycode, "6" )==0 )    event->key.keysym.sym = SDLK_6;
  if( strcmp( keycode, "7" )==0 )    event->key.keysym.sym = SDLK_7;
  if( strcmp( keycode, "8" )==0 )    event->key.keysym.sym = SDLK_8;
  if( strcmp( keycode, "9" )==0 )    event->key.keysym.sym = SDLK_9;
  if( strcmp( keycode, "J" )==0 )    event->key.keysym.sym = SDLK_J;
  if( strcmp( keycode, "K" )==0 )    event->key.keysym.sym = SDLK_K;
  if( strcmp( keycode, "DOWN" )==0 ) event->key.keysym.sym = SDLK_DOWN;
  if( strcmp( keycode, "UP" )==0 )   event->key.keysym.sym = SDLK_UP;
  if( strcmp( keycode, "LEFT" )==0 )   event->key.keysym.sym = SDLK_LEFT;
  if( strcmp( keycode, "RIGHT" )==0 )   event->key.keysym.sym = SDLK_RIGHT;

 // assert(0);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
 // assert(0);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
 // assert(0);
  return NULL;
}

