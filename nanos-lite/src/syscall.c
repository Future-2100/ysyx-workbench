#include <common.h>
#include "syscall.h"

uintptr_t write( int fd, uintptr_t buf, size_t count ) {
  char *ch = (char *)buf;
  if( fd==1 || fd==2 ) {
    for(int i = 0; i < count; i++) {
      putch(*ch);
      ch++;
    }
  }
  return count; 
}


void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case SYS_exit  : printf("is in sys_exit \n"); 
                     halt(a[1]) ;  
                     break;

    case SYS_yield : printf("is in sys_yield\n"); 
                     yield() ; 
                     c->GPRx = 0  ;
                     break  ;

    case SYS_write : printf("is in sys_write\n"); 
                     if ( write((int)a[1],a[2],a[3]) == -1 )
                       c->GPRx = 1 ;
                     else
                       c->GPRx = 0 ;
                     break;

    case  -1       : printf(" here is_yield \n");  
                     c->GPRx = 0 ;
                     break;

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
