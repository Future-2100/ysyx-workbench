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
    // DPI export at /home/grand/ysyx-workbench/npc/vsrc/pipeline/top.v:400:8
    extern void end_sim();

    // DPI IMPORTS
    // DPI import at /home/grand/ysyx-workbench/npc/vsrc/pipeline/top.v:373:32
    extern void axi_port(char arvalid, char* arready, char arport, long long araddr, char* rvalid, char rready, char* rresp, long long* rdata);
    // DPI import at /home/grand/ysyx-workbench/npc/vsrc/pipeline/top.v:357:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/grand/ysyx-workbench/npc/vsrc/pipeline/top.v:360:32
    extern void vmem_read(long long raddr, long long* rdata, char ren);
    // DPI import at /home/grand/ysyx-workbench/npc/vsrc/pipeline/top.v:366:32
    extern void vmem_write(long long waddr, long long wdata, char wlen, char wen);

#ifdef __cplusplus
}
#endif
