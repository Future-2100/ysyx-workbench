#include <am.h>
#include <stdio.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  /*
  int i;
  uint32_t vga_config = inl(VGACTL_ADDR);
  int w = (vga_config >>  16 );
  int h = (vga_config & 0xffff );
  printf ("w = %d, h = %d \n", w, h ) ;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i++) fb[i] = i;
  outl(SYNC_ADDR, 1);
  */
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {

  uint32_t vga_config = inl(VGACTL_ADDR);
  uint32_t width  = (vga_config >>  16 );
  uint32_t height = (vga_config & 0xffff );

  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width , .height = height,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
    return ;
  }
  uint32_t vga_config = inl(VGACTL_ADDR);
  int WIDTH = (vga_config >>  16  );

  uint64_t first_addr = FB_ADDR + ((WIDTH) * (ctl->y)) + ctl->x ;
  uint64_t addr = first_addr;
  for ( int j = 0; j < ctl->h; j++) {
    for ( int i = 0; i < ctl->w; i++) {
      outl(  (uintptr_t)addr , *(uint32_t *)(ctl->pixels) );
      addr ++ ;
    }
    addr = addr + (WIDTH - ctl->w );
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
