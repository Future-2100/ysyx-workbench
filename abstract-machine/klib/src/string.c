#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t i = 0;

  while(s[i]!='\0') {
    i ++;
  }

  return i;
  //panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {

  size_t i = 0;

  while ( src[i] != '\0' ){
    dst[i] = src[i];
    i++;
  }

  dst[i] = src[i];
  return dst;
  
  //panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i ;
  for( i=0 ; i<n ; i++ ) {
    dst[i] = src[i];
  }

  return dst;
  //panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  
  size_t i = strlen(dst);
  size_t j = strlen(src);
  size_t n ;
  
  for( n = 0; n < j; n++ ) {
    dst[i+n] = src[n] ;
  }
  dst[i+j] = '\0';

  return dst;

  //panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  
  size_t i = 0;
  while( s1[i] != '\0' && s2[i] != '\0') {
    if((unsigned char)s1[i] < (unsigned char)s2[i]) return -1;
    if((unsigned char)s1[i] > (unsigned char)s2[i]) return  1;
    i++;
  }
    if((unsigned char)s1[i] < (unsigned char)s2[i]) return -1;
    if((unsigned char)s1[i] > (unsigned char)s2[i]) return  1;
    if(s1[i] == s2[i]) return 0;

    return 0;
  
    //panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {

  size_t i = 0;
  while( s1[i] != '\0' && s2[i] != '\0') {
    if(i==n)  return 0;
    if((unsigned char)s1[i] < (unsigned char)s2[i]) return -1;
    if((unsigned char)s1[i] > (unsigned char)s2[i]) return  1;
    i++;
  }
    if((unsigned char)s1[i] < (unsigned char)s2[i]) return -1;
    if((unsigned char)s1[i] > (unsigned char)s2[i]) return  1;
    if(s1[i] == s2[i]) return 0;

    return 0;

}

void *memset(void *s, int c, size_t n) {
  
  size_t i ;
  for(i=0; i<n; i++) {
    *(char *)(s+i) = c;
  }
  return 0;

}

void *memmove(void *dst, const void *src, size_t n) {
  
  size_t i;
  size_t m = strlen((char *)src);
  char buf[m] ;
  for( i=0; i<n; i++) {
    *(buf+i) = *(char *)(src+i);
  }

  for( i=0; i<n; i++) {
    *(char *)(dst+i) = *(buf+i);
  }
  return 0;
 // panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
