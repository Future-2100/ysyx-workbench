// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated_heavy.h"
<<<<<<< HEAD
#include "verilated_vcd_c.h"
=======
>>>>>>> tracer-ysyx2204

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vtop__Vcb_end_sim_t = void (*) (Vtop__Syms* __restrict vlSymsp);

// SYMS CLASS (contains all model state)
class Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
<<<<<<< HEAD
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
=======
>>>>>>> tracer-ysyx2204
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // COVERAGE
<<<<<<< HEAD
    uint32_t __Vcoverage[2267];
=======
    uint32_t __Vcoverage[4160];
>>>>>>> tracer-ysyx2204

    // SCOPE NAMES
    VerilatedScope __Vscope_top;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
<<<<<<< HEAD
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
=======
>>>>>>> tracer-ysyx2204
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
