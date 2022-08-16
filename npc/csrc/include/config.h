#ifndef __CONFIG_H_
#define __CONFIG_H_

<<<<<<< HEAD
=======
//#define CONFIG_MTRACE
>>>>>>> tracer-ysyx2204
//#define CONFIG_TRACE
//-------------------------some parameter related to the CONFIG_TRACE-----------------------
#ifdef CONFIG_TRACE
    #define CONFIG_TRACE_START 0
    #define CONFIG_TRACE_END 10000

    #define CONFIG_ITRACE
#endif
//_______________________________end of the CONFIG_TRACE parameters--------------------------

//#define CONFIG_DIFFTEST
//#define CONFIG_DEVICE
<<<<<<< HEAD
=======
//#define CONFIG_ELF
>>>>>>> tracer-ysyx2204

#define CONFIG_PC_RESET_OFFSET 0x0

#define CONFIG_MSIZE 0x8000000          // memory size
#define CONFIG_MBASE 0x80000000         // memory base address

<<<<<<< HEAD
#endif
=======
#endif
>>>>>>> tracer-ysyx2204
