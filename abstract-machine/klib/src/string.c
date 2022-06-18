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

  if(dst == NULL || src == NULL) {
    return NULL;
  }

  size_t i=0;
  while ( *(src+i) != '\0' ) {
    *(dst+i) = *(src+i);
    i++;
  }

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
  
  
  if( dst == NULL || src == NULL )
    return NULL;
  
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

    size_t i=0;

    if( (s1==NULL) || (s2==NULL) ) return 0;

    while( *(s1+i) != '\0' && *(s2+i) != '\0' ) {
      if( *(s1+i) < *(s2+i) ) return -1;
      if( *(s1+i) > *(s2+i) ) return  1;
      i++;
    }

    if( *(s1+i) == *(s2+i) ) return 0;
    if( *(s1+i) < *(s2+i) ) return -1;
    if( *(s1+i) > *(s2+i) ) return  1;

    return 100;

  return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {

    size_t i=0;

    if( (s1==NULL) || (s2==NULL) ) return 0;

    while( *(s1+i) != '\0' && *(s2+i) != '\0' ) {
      if( i == n) return 0;
      if( *(s1+i) < *(s2+i) ) return -1;
      if( *(s1+i) > *(s2+i) ) return  1;
      i++;
    }

    if( *(s1+i) == *(s2+i) ) return 0;
    if( *(s1+i) < *(s2+i) ) return -1;
    if( *(s1+i) > *(s2+i) ) return  1;

    return 100;
}

void *memset(void *s, int c, size_t n) {

  if(n == 0) return 0;
  
  size_t i ;

  for(i=0; i<n; i++) {
    *(char *)(s+i) = c;
  }
  return 0;

}

void *memmove(void *dst, const void *src, size_t n) {
  
  size_t i;
  char buf[n] ;
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
  if( out == NULL || in == NULL || out <= in+n ) {
    return NULL;
  }
  char *tmp_dest = out;
  const char *tmp_src = in;
  while(n--) *tmp_dest++ = *tmp_src++;
  return out;
  //panic("Not implemented");
}


int memcmp(const void *s1, const void *s2, size_t n) {

  size_t i;

  for(i=0; i<n; i++) {
    if ( *(unsigned char *)(s1+n) < *(unsigned char *)(s2+n) ) return -1;
    if ( *(unsigned char *)(s1+n) > *(unsigned char *)(s2+n) ) return  1;
  }

  return 0;

}

#endif
