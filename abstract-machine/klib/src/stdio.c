#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static char number_buf[128];

void change_format_x(uint64_t x_number) {
  int i;
  if( x_number == 0 ) {
    number_buf[0] = '0' ;
    number_buf[1] = '0' ;
    number_buf[2] = '\0';
    return ;
  }
  else if ( x_number == 0xffffffffffffffff ) {
    number_buf[0] = '0' ;
    for( i=1; i<17; i++ )  number_buf[i] = 'f';
    number_buf[i] = '\0';
  
  }
  else {
    uint64_t system = 1ull;
    uint64_t bits   = 1ull;
    while( x_number / system != 0ull ) {
      bits ++ ;
      system = system * 16ull ;
      if(bits == 17 )  { system = 0xffffffffffffffff; break; }
    }
    bool modefied = false ;
    for( i=0; i<bits; i++ ) {
      uint64_t bit_number = x_number / system ;
      if(bit_number < 10ull )  number_buf[i] = bit_number + '0' ;
      else                 number_buf[i] = bit_number + 'a' - 10 ;
      x_number = x_number % system ;
      if(bits == 17 && modefied == false ) {
        system = 0x1000000000000000;
        modefied = true;
      }
      else { system = system / 16ull; }
    }
    number_buf[i] = '\0';
  }
}

void change_format_d(int64_t input_number) {
  int64_t d_number = input_number;
  int i;
  if( input_number == 0 ) {
    number_buf[0] = ' ' ;
    number_buf[1] = '0' ;
    number_buf[2] = '\0';
    return ;
  
  }
  if( d_number < 0 )  {
    d_number = - d_number ;
    number_buf[0] = '-' ;
  
  }
  else {
    number_buf[0] = ' ';
  
  }
  int64_t system = 1;
  int64_t bits   = 1;
  while( d_number / system != 0 ) {
    bits ++ ;
    system = system * 10 ;
  }
  system = system / 10;
  for( i=1; i<bits; i++ ) {
    int64_t bit_number = d_number / system ;
    number_buf[i] = bit_number + '0' ;
    d_number = d_number % system ;
    system = system / 10;
  }
  number_buf[i] = '\0';
}

int printf(const char *fmt, ...) {
  va_list valist;
  va_start(valist, fmt);

  char *char_buf ;
  while( *fmt ) {
    if( ( *fmt == '%' && *(fmt+1) == 'x' )  ||
        ( *fmt == '%' && *(fmt+1) == 'p' ) ) {
      uint64_t x_number = va_arg(valist, uint64_t);
      change_format_x(x_number);
      char_buf = number_buf + 1 ;
      while( *char_buf ) {
        putch( *char_buf );
        char_buf++;
      }
      fmt++;
    }

    else if( (*fmt == '%' && *(fmt+1) == 'd') || 
        (*fmt == '%' && *(fmt+1) == '0'  && *(fmt+2) == '2' && *(fmt+3) == 'd' ) ) {
      int64_t d_number = va_arg(valist, int64_t);
      change_format_d(d_number);
      char_buf = number_buf ;
      while( *char_buf ) {
        putch( *char_buf );
        char_buf++;
      }
      if (*fmt == '%' && *(fmt+1) == '0'  && *(fmt+2) == '2' && *(fmt+3) == 'd' ) {
          fmt = fmt  + 2 ;
      }
      fmt++;
    }

    else if( *fmt == '%' && *(fmt+1) == 's' ) {
      char* string = va_arg(valist, char*);
        while( *string ){
          putch( *string );
          string++;
        }
      fmt++;
    }

    else if( *fmt == '%' && *(fmt+1) == 'c' ) {
      char character = va_arg(valist, int);
      putch(character);
      fmt++;
    }

    else {
      putch(*fmt);
    }

      fmt++;

  }
  va_end(valist);
  return 0;
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

  va_list valist;
  va_start(valist, fmt);

  char *out_offset = out;
  char *char_buf ;
  while( *fmt ) {
    if( ( *fmt == '%' && *(fmt+1) == 'x' )  ||
        ( *fmt == '%' && *(fmt+1) == 'p' ) ) {
      uint64_t x_number = va_arg(valist, uint64_t);
      change_format_x(x_number);
      char_buf = number_buf + 1 ;
      while( *char_buf ) {
        *out_offset = *char_buf;
        char_buf++;
        out_offset ++;
      }
      fmt++;
    }

    else if( (*fmt == '%' && *(fmt+1) == 'd') || 
        (*fmt == '%' && *(fmt+1) == '0'  && *(fmt+2) == '2' && *(fmt+3) == 'd' ) ) {
      int64_t d_number = va_arg(valist, int64_t);
      change_format_d(d_number);
      char_buf = number_buf ;
      while( *char_buf ) {
        *out_offset = *char_buf ;
        char_buf++;
        out_offset ++ ;
      }
      if (*fmt == '%' && *(fmt+1) == '0'  && *(fmt+2) == '2' && *(fmt+3) == 'd' ) {
          fmt = fmt  + 2 ;
      }
      fmt++;
    }

    else if( *fmt == '%' && *(fmt+1) == 's' ) {
      char* string = va_arg(valist, char*);
        while( *string ){
          *out_offset = *string ;
          string++;
          out_offset++;
        }
      fmt++;
    }

    else if( *fmt == '%' && *(fmt+1) == 'c' ) {
      char character = va_arg(valist, int);
      *out_offset = character ;
      fmt++;
      out_offset ++;
    }

    else {
      *out_offset = *fmt ;
      out_offset ++ ;
    }

      fmt++;

  }
  *out_offset = '\0';
  va_end(valist);
  return 0;
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif

