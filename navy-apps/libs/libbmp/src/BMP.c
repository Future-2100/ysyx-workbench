#include <stdio.h> 
#include <stdint.h> 
#include <stdlib.h>
#include <assert.h>

struct BitmapHeader {
  uint16_t type;
  uint32_t filesize;
  uint32_t resv_1;
  uint32_t offset;
  uint32_t ih_size;
  uint32_t width;
  uint32_t height;
  uint16_t planes;
  uint16_t bitcount; // 1, 4, 8, or 24
  uint32_t compression;
  uint32_t sizeimg;
  uint32_t xres, yres;
  uint32_t clrused, clrimportant;
} __attribute__((packed));

void* BMP_Load(const char *filename, int *width, int *height) {
 // FILE *fp = fopen(filename, "r");
  int fp = open(filename, "r");
  if (!fp) return NULL;

  struct BitmapHeader hdr;
  assert(sizeof(hdr) == 54);
  printf(">>>>>>>>>>>>>>>>>\n");
  //assert(1 == fread(&hdr, sizeof(struct BitmapHeader), 1, fp));
  assert(sizeof(struct BitmapHeader) == read(fp, &hdr, 0, sizeof(struct BitmapHeader)));

  if (hdr.bitcount != 24) return NULL;
  if (hdr.compression != 0) return NULL;
  int w = hdr.width;
  int h = hdr.height;
  uint32_t *pixels = malloc(w * h * sizeof(uint32_t));

  int line_off = (w * 3 + 3) & ~0x3;
  printf(" w = %d, h = %d, line_off = %d\n", w, h, line_off);
  for (int i = 0; i < h; i ++) {
    //fseek(fp, hdr.offset + (h - 1 - i) * line_off, SEEK_SET);
    lseek(fp, hdr.offset + (h - 1 - i) * line_off, SEEK_SET);
    printf("offset = %d\n", hdr.offset + (h - 1 - i) * line_off);
    //int nread = fread(&pixels[w * i], 3, w, fp);
    int nread = read(fp, &pixels[w * i], 3);
    for (int j = w - 1; j >= 0; j --) {
      uint8_t b = *(((uint8_t*)&pixels[w * i]) + 3 * j);
      uint8_t g = *(((uint8_t*)&pixels[w * i]) + 3 * j + 1);
      uint8_t r = *(((uint8_t*)&pixels[w * i]) + 3 * j + 2);
      pixels[w * i + j] = (r << 16) | (g << 8) | b;
    }
  }

  fclose(fp);
  if (width) *width = w;
  if (height) *height = h;
  return pixels;
}
