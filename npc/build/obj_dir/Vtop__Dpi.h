// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/grand/ysyx-workbench/npc/vsrc/top.v:257:8
    extern void end_sim();

    // DPI IMPORTS
    // DPI import at /home/grand/ysyx-workbench/npc/vsrc/top.v:235:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/grand/ysyx-workbench/npc/vsrc/top.v:238:32
    extern void vmem_read(long long raddr, long long* rdata, char ren);
    // DPI import at /home/grand/ysyx-workbench/npc/vsrc/top.v:244:32
    extern void vmem_write(long long waddr, long long wdata, char wlen, char wen);

#ifdef __cplusplus
}
#endif
