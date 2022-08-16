// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_dpi.h"


void Vtop::end_sim() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::end_sim\n"); );
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("end_sim");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_end_sim_t __Vcb = (Vtop__Vcb_end_sim_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()));
}
