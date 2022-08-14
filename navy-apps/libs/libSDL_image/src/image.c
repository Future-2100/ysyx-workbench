#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  printf("in IMG_Load_RW\n");
  assert(0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  int w, h;
  FILE *fp = fopen(filename, "r");
  if(!fp) return NULL;
  fseek(fp, 0, SEEK_END);
  size_t size = ftell(fp) ;
  uint8_t *pixels = malloc( size );
  fseek(fp,0, SEEK_SET);
  fread( pixels, 1, size, fp);
  SDL_Surface *s = STBIMG_LoadFromMemory( pixels, size );
  fclose(fp);
  free(pixels);

  return s;
}

int IMG_isPNG(SDL_RWops *src) {
  assert(0);
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  assert(0);
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  assert(0);
  return "Navy does not support IMG_GetError()";
}
