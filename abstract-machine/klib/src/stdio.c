#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {

  va_list valist;
  va_start(valist, fmt);

  int buf[8];
  int i;
  unsigned long long int tens ;
  int allbits;
  int bits;
  int integer;
  int zerobits;
  int k;
  char chnum;

  while( *fmt ) {
    if( *fmt == '%') {
      const char *ret = fmt + 1 ;

      switch ( *ret ) {

        case '0' : 
        case '1' :
        case '2' :
        case '3' :
        case '4' :
        case '5' :
        case '6' :
        case '7' :
        case '8' :
        case '9' :
                    i = 0 ;
                    tens = 1;
                    allbits = 0;
                    while( *ret>= '0' && *ret <= '9') {
                      buf[i] = *ret - '0' ;
                      i++ ;
                      ret ++ ;
                    }
                    while(i--) {
                      allbits = buf[i] * tens + allbits ;
                      tens = tens * 10;
                    }
                    switch ( *ret ) {
                      case 'd' :
                                bits=0;
                                tens= 1;
                                integer = va_arg(valist, int);
                                while( integer / (tens) != 0 ) {
                                  bits++;
                                  tens = tens * 10 ;
                                }
                                tens = tens / 10;
                                zerobits = allbits - bits;
                                for(k=0; k<zerobits; k++) {
                                  putch('0');

                                }
                                for( k=0; k<bits; k++ ) {
                                  char num = (char)(integer / tens + '0' ); 
                                  integer = integer % tens ;
                                  putch(num);
                                  tens = tens / 10;
                                }
                                fmt = ret ;
                                break;

                      case 'x' : break ;
                      default  : break ;

                    }
                    break;

        case 'c' : char ch = va_arg(valist, int);
                   putch(ch);
                   fmt = ret ;
                   break;
        case 's' : char *pc = va_arg(valist, char *);
                   while(*pc) {
                     putch(*pc);
                     pc++;
                   }  
                   fmt = ret ;
                   break;

        case 'd' : bits=0;
                   tens= 1;
                   integer = va_arg(valist, int);
                   if( integer == 0 ) {
                     putch('0');
                   }
                   else {
                   while( integer / (tens) != 0 ) {
                     bits++;
                     tens = tens * 10 ;
                   }
                   tens = tens / 10;
                   for( int k=0; k<bits; k++ ) {
                     char num = (char)(integer / tens + '0' ); 
                     putch(num);
                     integer = integer % tens ;
                     tens = tens / 10;
                   }
                   }
                   fmt = ret ;
                   break;

        case 'p' :
        case 'x' : bits=0;
                   tens= 1ull;
                   integer = va_arg(valist, unsigned int);
                   while( (integer / tens) != 0 ) {
                     bits++;
                     tens = tens * 16 ;
                   }
                   tens = tens / 16;
                   for( k=0; k<bits; k++ ) {
                     unsigned int num = (unsigned)integer/(unsigned)tens;
                     if( num >= 10 ) {
                       chnum = (char)( num + 'a' -10 ); 
                     }
                     else {
                       chnum = (char)( num + '0' ); 
                     }
                     putch(chnum);
                     integer = integer % tens ;
                     tens = tens / 16;
                   }
                   fmt = ret ;
                   break;

        case 'u' : bits=0;
                   unsigned int tens= 1;
                   unsigned int integer = va_arg(valist, unsigned int);
                   while( integer / (tens) != 0 ) {
                     bits++;
                     tens = tens * 10 ;
                   }
                   tens = tens / 10;
                   for( k=0; k<bits; k++ ) {
                     char num = (char)(integer / tens + '0' ); 
                     integer = integer % tens ;
                     putch(num);
                     tens = tens / 10;
                   }
                   fmt = ret ;
                   break;

        default : putch(*fmt); fmt++; break;

      }
    }
    else {
      putch(*fmt);
    }
    fmt ++ ;

  }

/*


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
*/

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

