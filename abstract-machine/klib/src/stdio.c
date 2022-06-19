#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {

  //putch(char ch);
  va_list valist;
  va_start(valist, fmt);
  size_t i = 0;
  size_t j = 0;

  while( *(fmt+i) != '\0' ) {

    if( *(fmt+i) == '%' && *(fmt+i+1) == 'd' ) {
      int bits=0;
      int k;
      int tens= 1;

      int integer = va_arg(valist, int); //352
        while( integer / (tens) != 0 ) {
          bits++;
          tens = tens * 10 ;
        }

        tens = tens / 10;

        for( k=0; k<bits; k++ ) {
          char num = (char)(integer / tens + 48 ); 
          integer = integer % tens ;
          putch(num);
          tens = tens / 10;
        }

        i++;
    }


    else if( *(fmt+i) == '%' && *(fmt+i+1) == 's' ) {
      char *str = va_arg(valist, char * ) ;
        while( *(str+j) != '\0' ) {
          putch(*(str+j));
          j++;
        }
      i++;
    }


    else {
      putch(*(fmt+i));
    }
    
    i++;
  }

  va_end(valist);
  
  return 0;
 // panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {

  va_list valist;
  va_start(valist, fmt);

  size_t cnt_fmt  = 0;
  size_t cnt_str = 0;
  size_t cnt_out  = 0;

  while( *(fmt+cnt_fmt) != '\0' ) {

    if( *(fmt+cnt_fmt) == '%' && *(fmt+cnt_fmt+1) == 'd' ) {
      int bits=0;
      int k;
      int tens= 1;

      int integer = va_arg(valist, int); //352
        while( integer / (tens) != 0 ) {
          bits++;
          tens = tens * 10 ;
        }

        tens = tens / 10;

        for( k=0; k<bits; k++ ) {
          *(out+cnt_out) = (char)(integer / tens + 48 ); 
          integer = integer % tens ;
          tens = tens / 10;
          cnt_out++;
        }
        cnt_fmt++;
    }

    else if( *(fmt+cnt_fmt) == '%' && *(fmt+cnt_fmt+1) == 's' ) {
      char *str = va_arg(valist, char * ) ;
        while( *(str+cnt_str) != '\0' ) {
          *(out+cnt_out) = (*(str+cnt_str));
          cnt_out++;
          cnt_str++;
        }
        cnt_fmt++;
    }


    else {
      *(out+cnt_out) = (*(fmt+cnt_fmt));
      cnt_out++;
    }

      cnt_fmt++;

  }
  *(out+cnt_out) = '\0' ;
  
  va_end(valist);

  return 0;

}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif

