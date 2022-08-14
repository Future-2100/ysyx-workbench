#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  printf("in SDL_BlitSurface>>>>>>>>>>>>>\n");
  assert(dst && src);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  
  int sx,sy,w,h,dx,dy;
  if( srcrect == NULL ) {
    w = src->w;
    h = src->h;
    sx = 0;
    sy = 0;
  }
  else {
    w = srcrect->w;
    h = srcrect->h;
    sx = srcrect->x;
    sy = srcrect->y;
  }

  if( dstrect == NULL ) {
    dx = 0;
    dy = 0;
    assert( dst->w == w );
    assert( dst->h == h );
  }
  else {
    dx = dstrect->x;
    dy = dstrect->y;
    assert( dstrect->w == w );
    assert( dstrect->h == h );
  }
  int i,j;
  if( (src->format->BitsPerPixel==32) ) {
    for( j = 0; j < h; j++) {
      for( i = 0; i < w; i++) {
        * ((uint32_t *)dst->pixels + (j+dy)*w + i + dx )  = 
        * ((uint32_t *)src->pixels + (j+sy)*w + i + sx )  ;
      }
    }
  }

  else if (( src->format->BitsPerPixel == 8 ) ) {
    for( j = 0; j < h; j++) {
      for( i = 0; i < w; i++) {
        * ((uint8_t *)dst->pixels + (j+dy)* w + i + dx )  = 
        * ((uint8_t *)src->pixels + (j+dy)* w + i + dx )  ;
      }
    }
  }
}

void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
   printf("in SDL_FillRect\n");
   assert(dst);
    int w = 0;
    int h = 0;
    int x = 0;
    int y = 0;
  if( dstrect == NULL ) {
    NDL_OpenCanvas(&w, &h) ;
  }
  else {
    w = dstrect->w;
    h = dstrect->h;
    x = dstrect->x;
    y = dstrect->y;
  }

  int i , j;
  if( dst->format->BitsPerPixel == 32 ) {
    for( j=0; j<h; j++ ) {
      for( i=0; i<w; i++ ) {
        *( (uint32_t *)dst->pixels + (y+j)*dst->w + x + i ) = color ;
      }
    }
  }
  else {
    printf("SDL_FillRect : BitsPerPixel = %d\n", dst->format->BitsPerPixel);
    assert(0);
  }
}


uint32_t SDL_MapRGB( uint8_t r, uint8_t g, uint8_t b ) {
  uint32_t rdata = r;
  uint32_t gdata = g;
  uint32_t bdata = b;
  uint32_t pixels =  ( rdata << 16 ) | ( gdata << 8 ) | ( bdata );
  return pixels;
}

void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
 
  /*
  if(s->format->BytesPerPixel == 1) {
    if(s->format->palette == NULL) {
      printf("palette == NULL\n");
    }
    printf("UpdateRect 1 BytesPerPixel: %d\n",s->format->BytesPerPixel);
    char *buf = (char *)malloc(w * h * 4);
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
        char r = *((uint8_t *)s->format->palette->colors + *(char *)(s->pixels + i * w + j) + 2 ) ;
        char g = *((uint8_t *)s->format->palette->colors + *(char *)(s->pixels + i * w + j) + 1 ) ;
        char b = *((uint8_t *)s->format->palette->colors + *(char *)(s->pixels + i * w + j) + 0 ) ;
        *(buf + (i * w + j) * 4 ) = SDL_MapRGB(r,g,b);
        //memcpy( buf + (i * w + j) * 4, s->format->palette->colors + *(char *)(s->pixels + i * w + j), 4 );
      }
    }
    NDL_DrawRect((uint32_t *)buf, 0, 0, w, h);
    free(buf);
  }
  else {
    printf(" SDL_UpdateRect : format->BytesPerPixel : %d, not completed\n ", s->format->BytesPerPixel);
    assert(0);
  }
  */

  printf(">>>>>>>>>>>>>>>>in SDL_UpdateRect\n");
  printf("x:%d y:%d w:%d h:%d , s->w:%d  s->h:%d  \n", x,y,w,h,s->w,s->h);
  assert(s);
  int i,j;
  if( w==0 && h==0 ) {
    w = s->w;
    h = s->h;
  }

  //uint32_t color[w];
  uint32_t *pixels = (uint32_t *)malloc( w * h * 4);
  if( s->format->BitsPerPixel == 32 ) {
    for( j = 0; j < h; j++) {
      for( i = 0; i < w; i++) {
        memcpy( pixels + (j+y)*w + i + x , s->pixels + (j*s->w + i) * 4 , 4 );
        //color[i] = *((uint32_t *)s->pixels + (j+y)*s->w + i + x );
      }
    }
    NDL_DrawRect( pixels, x, y, w, h);
  }

  else if( s->format->BitsPerPixel == 8 ) {
 //   SDL_Surface *display = SDL_SetVideoMode(320,200,32,SDL_HWSURFACE);
    for( j = 0; j < h; j++) {
      for( i = 0; i < w; i++) {
        uint8_t index =  s->pixels[(j+y)*s->w + i + x] ;
        uint8_t r = s->format->palette->colors[index].r ;
        uint8_t g = s->format->palette->colors[index].g ;
        uint8_t b = s->format->palette->colors[index].b ;
        //uint8_t a = s->format->palette->colors[index].a ;
        *( pixels + (j+y)*s->w + i + x ) = SDL_MapRGB(r, g, b);
        //color[i] = *((uint32_t *)s->format->palette->colors + (uintptr_t)*(s->pixels + (j+y)*s->w + i + x ) );
      }
      //NDL_DrawRect( color, 0, j,  w, 1 );
    }
    //printf("finished 8 bits SDL_UpdateRect display\n");
    NDL_DrawRect( pixels, 0, 0, w, h );
  }
  printf("end of SDL_UpdateRect\n");
  
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    printf( "w = %d, h = %d\n", w, h );
    printf( "dstrect->w = %d, dstrect->h = %d\n", dstrect->w, dstrect->h );
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {

  printf("in SDL_LockSurface(SDL_Surface *s)\n");
  assert(0);
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
  printf("in SDL_UnlockSurface(SDL_Surface *s)");
  assert(0);
}
