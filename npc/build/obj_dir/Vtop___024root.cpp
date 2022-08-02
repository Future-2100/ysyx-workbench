// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void vmem_read(long long raddr, long long* rdata, char ren);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__vmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ ren) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__vmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char ren__Vcvt;
    for (size_t ren__Vidx = 0; ren__Vidx < 1; ++ren__Vidx) ren__Vcvt = ren;
    vmem_read(raddr__Vcvt, &rdata__Vcvt, ren__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void vmem_write(long long waddr, long long wdata, char wlen, char wen);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__vmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wlen, CData/*7:0*/ wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__vmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wlen__Vcvt;
    for (size_t wlen__Vidx = 0; wlen__Vidx < 1; ++wlen__Vidx) wlen__Vcvt = wlen;
    char wen__Vcvt;
    for (size_t wen__Vidx = 0; wen__Vidx < 1; ++wen__Vidx) wen__Vcvt = wen;
    vmem_write(waddr__Vcvt, wdata__Vcvt, wlen__Vcvt, wen__Vcvt);
}

void Vtop___024root____Vdpiexp_top__DOT__end_sim_TOP(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__end_sim_TOP\n"); );
    // Variables
    // Body
    VL_FINISH_MT("/home/grand/ysyx-workbench/npc/vsrc/top.v", 258, "");
    ++(vlSymsp->__Vcoverage[792]);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((0x2000U & vlSelf->inst)) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1714]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((0x2000U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1713]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((0x2000U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1717]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((0x2000U & vlSelf->inst)) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1718]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1715]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1716]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1712]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1711]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((0x2000U & vlSelf->inst)) {
            ++(vlSymsp->__Vcoverage[1758]);
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((0x2000U & vlSelf->inst)) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1757]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1754]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1755]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((0x2000U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1756]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1758]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1753]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((0x2000U & vlSelf->inst)) {
            ++(vlSymsp->__Vcoverage[1806]);
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1801]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((0x2000U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1804]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((0x2000U & vlSelf->inst)) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1805]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1802]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1803]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1800]);
            }
        }
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rstn) ^ (IData)(vlSelf->top__DOT____Vtogcov__rstn))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__rstn = vlSelf->rstn;
    }
    if (((0x67U == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT____Vtogcov__jalr_en))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->top__DOT____Vtogcov__jalr_en = (0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst));
    }
    if (((0x6fU == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT____Vtogcov__jal_en))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->top__DOT____Vtogcov__jal_en = (0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->inst));
    }
    if (((3U == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_load))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->top__DOT____Vtogcov__wb_load = (3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst));
    }
    if (((0x23U == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT____Vtogcov__S_type))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->top__DOT____Vtogcov__S_type = (0x23U 
                                               == (0x7fU 
                                                   & vlSelf->inst));
    }
    if (((0x63U == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT____Vtogcov__B_type))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->top__DOT____Vtogcov__B_type = (0x63U 
                                               == (0x7fU 
                                                   & vlSelf->inst));
    }
    if (((0x37U == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__lui_en))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__lui_en 
            = (0x37U == (0x7fU & vlSelf->inst));
    }
    if (((0x17U == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__auipc_en))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__auipc_en 
            = (0x17U == (0x7fU & vlSelf->inst));
    }
    vlSelf->ebreak = (IData)(((0x100073U == (0x1f0007fU 
                                             & vlSelf->inst)) 
                              & (0U == (vlSelf->inst 
                                        >> 0x19U))));
    if ((1U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffeU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (1U 
                                                & vlSelf->inst));
    }
    if ((2U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffdU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (2U 
                                                & vlSelf->inst));
    }
    if ((4U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffbU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (4U 
                                                & vlSelf->inst));
    }
    if ((8U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffff7U 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (8U 
                                                & vlSelf->inst));
    }
    if ((0x10U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffefU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10U 
                                                & vlSelf->inst));
    }
    if ((0x20U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffdfU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20U 
                                                & vlSelf->inst));
    }
    if ((0x40U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffbfU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40U 
                                                & vlSelf->inst));
    }
    if ((0x80U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffff7fU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80U 
                                                & vlSelf->inst));
    }
    if ((0x100U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffeffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x100U 
                                                & vlSelf->inst));
    }
    if ((0x200U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffdffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x200U 
                                                & vlSelf->inst));
    }
    if ((0x400U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffbffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x400U 
                                                & vlSelf->inst));
    }
    if ((0x800U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffff7ffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x800U 
                                                & vlSelf->inst));
    }
    if ((0x1000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffefffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x1000U 
                                                & vlSelf->inst));
    }
    if ((0x2000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffdfffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x2000U 
                                                & vlSelf->inst));
    }
    if ((0x4000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffbfffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x4000U 
                                                & vlSelf->inst));
    }
    if ((0x8000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffff7fffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x8000U 
                                                & vlSelf->inst));
    }
    if ((0x10000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffeffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10000U 
                                                & vlSelf->inst));
    }
    if ((0x20000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffdffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20000U 
                                                & vlSelf->inst));
    }
    if ((0x40000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffbffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40000U 
                                                & vlSelf->inst));
    }
    if ((0x80000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfff7ffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80000U 
                                                & vlSelf->inst));
    }
    if ((0x100000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffefffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x100000U 
                                                & vlSelf->inst));
    }
    if ((0x200000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffdfffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x200000U 
                                                & vlSelf->inst));
    }
    if ((0x400000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffbfffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x400000U 
                                                & vlSelf->inst));
    }
    if ((0x800000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xff7fffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x800000U 
                                                & vlSelf->inst));
    }
    if ((0x1000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfeffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x1000000U 
                                                & vlSelf->inst));
    }
    if ((0x2000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfdffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x2000000U 
                                                & vlSelf->inst));
    }
    if ((0x4000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfbffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x4000000U 
                                                & vlSelf->inst));
    }
    if ((0x8000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xf7ffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x8000000U 
                                                & vlSelf->inst));
    }
    if ((0x10000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xefffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10000000U 
                                                & vlSelf->inst));
    }
    if ((0x20000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xdfffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20000000U 
                                                & vlSelf->inst));
    }
    if ((0x40000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xbfffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40000000U 
                                                & vlSelf->inst));
    }
    if (((vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->top__DOT____Vtogcov__inst = ((0x7fffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80000000U 
                                                & vlSelf->inst));
    }
    vlSelf->top__DOT__wb_pc = ((0x6fU == (0x7fU & vlSelf->inst)) 
                               | (0x67U == (0x7fU & vlSelf->inst)));
    vlSelf->top__DOT__lb = (IData)((3U == (0x707fU 
                                           & vlSelf->inst)));
    vlSelf->top__DOT__lh = (IData)((0x1003U == (0x707fU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__lw = (IData)((0x2003U == (0x707fU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__ld = (IData)((0x3003U == (0x707fU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__lbu = (IData)((0x4003U == (0x707fU 
                                                 & vlSelf->inst)));
    vlSelf->top__DOT__lhu = (IData)((0x5003U == (0x707fU 
                                                 & vlSelf->inst)));
    vlSelf->top__DOT__lwu = (IData)((0x6003U == (0x707fU 
                                                 & vlSelf->inst)));
    vlSelf->top__DOT__sb = (IData)((0x23U == (0x707fU 
                                              & vlSelf->inst)));
    vlSelf->top__DOT__sh = (IData)((0x1023U == (0x707fU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__sw = (IData)((0x2023U == (0x707fU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__sd = (IData)((0x3023U == (0x707fU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__pc_en = ((0x17U == (0x7fU & vlSelf->inst)) 
                               | (0x6fU == (0x7fU & vlSelf->inst)));
    vlSelf->top__DOT__imm_gen_inst__DOT__immI_num = 
        (((- (QData)((IData)((vlSelf->inst >> 0x1fU)))) 
          << 0xbU) | (QData)((IData)((0x7ffU & (vlSelf->inst 
                                                >> 0x14U)))));
    vlSelf->top__DOT__imm_gen_inst__DOT__immS_num = 
        (((- (QData)((IData)((vlSelf->inst >> 0x1fU)))) 
          << 0xbU) | (QData)((IData)(((0x7e0U & (vlSelf->inst 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlSelf->inst 
                                                  >> 7U))))));
    vlSelf->top__DOT__imm_gen_inst__DOT__immB_num = 
        (((- (QData)((IData)((vlSelf->inst >> 0x1fU)))) 
          << 0xcU) | (QData)((IData)(((0x800U & (vlSelf->inst 
                                                 << 4U)) 
                                      | ((0x7e0U & 
                                          (vlSelf->inst 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSelf->inst 
                                             >> 7U)))))));
    vlSelf->top__DOT__imm_gen_inst__DOT__immU_num = 
        (((- (QData)((IData)((vlSelf->inst >> 0x1fU)))) 
          << 0x1fU) | (QData)((IData)((0x7ffff000U 
                                       & vlSelf->inst))));
    vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num = 
        (((- (QData)((IData)((vlSelf->inst >> 0x1fU)))) 
          << 0x14U) | (QData)((IData)(((0xff000U & vlSelf->inst) 
                                       | ((0x800U & 
                                           (vlSelf->inst 
                                            >> 9U)) 
                                          | (0x7feU 
                                             & (vlSelf->inst 
                                                >> 0x14U)))))));
    vlSelf->top__DOT__U_type = ((0x37U == (0x7fU & vlSelf->inst)) 
                                | (0x17U == (0x7fU 
                                             & vlSelf->inst)));
    vlSelf->top__DOT__controlor_inst__DOT__mrsop_en 
        = (IData)((0x2000033U == (0x200007fU & vlSelf->inst)));
    vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en 
        = (IData)((0x200003bU == (0x200007fU & vlSelf->inst)));
    vlSelf->top__DOT__controlor_inst__DOT__wrsop_en 
        = (IData)((0x3bU == (0x200007fU & vlSelf->inst)));
    vlSelf->top__DOT__controlor_inst__DOT__rsop_en 
        = (IData)((0x33U == (0x200007fU & vlSelf->inst)));
    vlSelf->top__DOT__controlor_inst__DOT__wimmop_en 
        = ((0x1bU == (0x7fU & vlSelf->inst)) & (1U 
                                                != 
                                                (3U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))));
    vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en 
        = (IData)((0x101bU == (0x307fU & vlSelf->inst)));
    vlSelf->top__DOT__controlor_inst__DOT__immop_en 
        = ((0x13U == (0x7fU & vlSelf->inst)) & (1U 
                                                != 
                                                (3U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))));
    vlSelf->top__DOT__controlor_inst__DOT__immsf_en 
        = (IData)((0x1013U == (0x307fU & vlSelf->inst)));
    if (((IData)(vlSelf->ebreak) ^ (IData)(vlSelf->top__DOT____Vtogcov__ebreak))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__ebreak = vlSelf->ebreak;
    }
    if (((IData)(vlSelf->top__DOT__wb_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_pc))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->top__DOT____Vtogcov__wb_pc = vlSelf->top__DOT__wb_pc;
    }
    if (((IData)(vlSelf->top__DOT__lb) ^ (IData)(vlSelf->top__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->top__DOT____Vtogcov__lb = vlSelf->top__DOT__lb;
    }
    if (((IData)(vlSelf->top__DOT__lh) ^ (IData)(vlSelf->top__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->top__DOT____Vtogcov__lh = vlSelf->top__DOT__lh;
    }
    if (((IData)(vlSelf->top__DOT__lw) ^ (IData)(vlSelf->top__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->top__DOT____Vtogcov__lw = vlSelf->top__DOT__lw;
    }
    if (((IData)(vlSelf->top__DOT__ld) ^ (IData)(vlSelf->top__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->top__DOT____Vtogcov__ld = vlSelf->top__DOT__ld;
    }
    if (((IData)(vlSelf->top__DOT__lbu) ^ (IData)(vlSelf->top__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->top__DOT____Vtogcov__lbu = vlSelf->top__DOT__lbu;
    }
    if (((IData)(vlSelf->top__DOT__lhu) ^ (IData)(vlSelf->top__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->top__DOT____Vtogcov__lhu = vlSelf->top__DOT__lhu;
    }
    if (((IData)(vlSelf->top__DOT__lwu) ^ (IData)(vlSelf->top__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->top__DOT____Vtogcov__lwu = vlSelf->top__DOT__lwu;
    }
    vlSelf->top__DOT__ren = (((((((IData)(vlSelf->top__DOT__lb) 
                                  | (IData)(vlSelf->top__DOT__lh)) 
                                 | (IData)(vlSelf->top__DOT__lw)) 
                                | (IData)(vlSelf->top__DOT__ld)) 
                               | (IData)(vlSelf->top__DOT__lbu)) 
                              | (IData)(vlSelf->top__DOT__lhu)) 
                             | (IData)(vlSelf->top__DOT__lwu));
    if (((IData)(vlSelf->top__DOT__sb) ^ (IData)(vlSelf->top__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->top__DOT____Vtogcov__sb = vlSelf->top__DOT__sb;
    }
    if (((IData)(vlSelf->top__DOT__sh) ^ (IData)(vlSelf->top__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->top__DOT____Vtogcov__sh = vlSelf->top__DOT__sh;
    }
    if (((IData)(vlSelf->top__DOT__sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->top__DOT____Vtogcov__sw = vlSelf->top__DOT__sw;
    }
    if (((IData)(vlSelf->top__DOT__sd) ^ (IData)(vlSelf->top__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->top__DOT____Vtogcov__sd = vlSelf->top__DOT__sd;
    }
    vlSelf->top__DOT__wen = (((((IData)(vlSelf->top__DOT__sb) 
                                | (IData)(vlSelf->top__DOT__sh)) 
                               | (IData)(vlSelf->top__DOT__sw)) 
                              | (IData)(vlSelf->top__DOT__sd)) 
                             & (IData)(vlSelf->rstn));
    vlSelf->top__DOT__wlen = ((((1U & (- (IData)((IData)(vlSelf->top__DOT__sb)))) 
                                | (2U & (- (IData)((IData)(vlSelf->top__DOT__sh))))) 
                               | (4U & (- (IData)((IData)(vlSelf->top__DOT__sw))))) 
                              | (8U & (- (IData)((IData)(vlSelf->top__DOT__sd)))));
    if (((IData)(vlSelf->top__DOT__pc_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_en))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->top__DOT____Vtogcov__pc_en = vlSelf->top__DOT__pc_en;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num)))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num)))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num)))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num)))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num)))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__U_type) ^ (IData)(vlSelf->top__DOT____Vtogcov__U_type))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->top__DOT____Vtogcov__U_type = vlSelf->top__DOT__U_type;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__mrsop_en) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__mlgc_en))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->top__DOT____Vtogcov__mlgc_en = vlSelf->top__DOT__controlor_inst__DOT__mrsop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__wmlgc_en))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->top__DOT____Vtogcov__wmlgc_en = vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wrsop_en))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wrsop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__wrsop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__rsop_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__rsop_en))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__rsop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__rsop_en;
    }
    vlSelf->top__DOT__controlor_inst__DOT__R_type = 
        ((((IData)(vlSelf->top__DOT__controlor_inst__DOT__rsop_en) 
           | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en)) 
          | (IData)(vlSelf->top__DOT__controlor_inst__DOT__mrsop_en)) 
         | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en));
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wimmop_en))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wimmop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__wimmop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wimmsf_en))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wimmsf_en 
            = vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en;
    }
    vlSelf->top__DOT__wlgc_en = (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en) 
                                  | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en)) 
                                 | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
    vlSelf->top__DOT__wlgc_op = ((((- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en))) 
                                   & (0x10U | (7U & 
                                               (vlSelf->inst 
                                                >> 0xcU)))) 
                                  | ((- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en))) 
                                     & (0x10U | ((8U 
                                                  & (vlSelf->inst 
                                                     >> 0x1bU)) 
                                                 | (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU)))))) 
                                 | ((- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en))) 
                                    & (0x10U | ((8U 
                                                 & (vlSelf->inst 
                                                    >> 0x1bU)) 
                                                | (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU))))));
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immop_en))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__immop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immsf_en))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immsf_en 
            = vlSelf->top__DOT__controlor_inst__DOT__immsf_en;
    }
    vlSelf->top__DOT__wb_alu = ((((((((((0x17U == (0x7fU 
                                                   & vlSelf->inst)) 
                                        | (0x37U == 
                                           (0x7fU & vlSelf->inst))) 
                                       | (IData)(vlSelf->top__DOT__controlor_inst__DOT__rsop_en)) 
                                      | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en)) 
                                     | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                    | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en)) 
                                   | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en)) 
                                  | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en)) 
                                 | (IData)(vlSelf->top__DOT__controlor_inst__DOT__mrsop_en)) 
                                | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en));
    vlSelf->top__DOT__lgc_en = (((((((((IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en) 
                                       | (IData)(vlSelf->top__DOT__controlor_inst__DOT__rsop_en)) 
                                      | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->inst))) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->inst))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->inst))) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->inst))) 
                                 | (3U == (0x7fU & vlSelf->inst))) 
                                | (0x23U == (0x7fU 
                                             & vlSelf->inst)));
    vlSelf->top__DOT__lgc_op = (0xfU & ((((- (IData)(
                                                     (0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst)))) 
                                          | ((- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__rsop_en))) 
                                             & ((8U 
                                                 & (vlSelf->inst 
                                                    >> 0x1bU)) 
                                                | (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU))))) 
                                         | (7U & ((- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en))) 
                                                  & (vlSelf->inst 
                                                     >> 0xcU)))) 
                                        | ((- (IData)((IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en))) 
                                           & ((8U & 
                                               (vlSelf->inst 
                                                >> 0x1bU)) 
                                              | (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))))));
    vlSelf->top__DOT__I_type = ((((((0x67U == (0x7fU 
                                               & vlSelf->inst)) 
                                    | (3U == (0x7fU 
                                              & vlSelf->inst))) 
                                   | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en)) 
                                  | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                 | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en)) 
                                | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
    if (((IData)(vlSelf->top__DOT__ren) ^ (IData)(vlSelf->top__DOT____Vtogcov__ren))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->top__DOT____Vtogcov__ren = vlSelf->top__DOT__ren;
    }
    if (((IData)(vlSelf->top__DOT__wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wen))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->top__DOT____Vtogcov__wen = vlSelf->top__DOT__wen;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->top__DOT____Vtogcov__wlen = ((0xeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (1U 
                                                & (IData)(vlSelf->top__DOT__wlen)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->top__DOT____Vtogcov__wlen = ((0xdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (2U 
                                                & (IData)(vlSelf->top__DOT__wlen)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->top__DOT____Vtogcov__wlen = ((0xbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (4U 
                                                & (IData)(vlSelf->top__DOT__wlen)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->top__DOT____Vtogcov__wlen = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (8U 
                                                & (IData)(vlSelf->top__DOT__wlen)));
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__R_type))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__R_type 
            = vlSelf->top__DOT__controlor_inst__DOT__R_type;
    }
    vlSelf->top__DOT__rs2_en = ((IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type) 
                                | (0x63U == (0x7fU 
                                             & vlSelf->inst)));
    if (((IData)(vlSelf->top__DOT__wlgc_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_en))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->top__DOT____Vtogcov__wlgc_en = vlSelf->top__DOT__wlgc_en;
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__wlgc_op)))) {
                        ++(vlSymsp->__Vcoverage[1797]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                        ++(vlSymsp->__Vcoverage[1795]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                  >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1797]);
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                        ++(vlSymsp->__Vcoverage[1793]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                        ++(vlSymsp->__Vcoverage[1797]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((2U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                    ++(vlSymsp->__Vcoverage[1797]);
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                    ++(vlSymsp->__Vcoverage[1797]);
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                    ++(vlSymsp->__Vcoverage[1797]);
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__wlgc_op)))) {
                        ++(vlSymsp->__Vcoverage[1797]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                        ++(vlSymsp->__Vcoverage[1794]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__wlgc_op)))) {
                        ++(vlSymsp->__Vcoverage[1796]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((2U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                    ++(vlSymsp->__Vcoverage[1797]);
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__wlgc_op)))) {
                        ++(vlSymsp->__Vcoverage[1792]);
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__wlgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0x1eU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__wlgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0x1dU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (2U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__wlgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0x1bU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (4U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__wlgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0x17U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (8U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__wlgc_op) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0xfU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if (((IData)(vlSelf->top__DOT__wb_alu) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_alu))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->top__DOT____Vtogcov__wb_alu = vlSelf->top__DOT__wb_alu;
    }
    if (((IData)(vlSelf->top__DOT__lgc_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_en))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->top__DOT____Vtogcov__lgc_en = vlSelf->top__DOT__lgc_en;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1509]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1514]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1515]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1508]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1507]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1517]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1513]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1512]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1517]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1510]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1516]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1517]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1511]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                ++(vlSymsp->__Vcoverage[1517]);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1506]);
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__lgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->top__DOT____Vtogcov__lgc_op = ((0xeU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__lgc_op)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__lgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->top__DOT____Vtogcov__lgc_op = ((0xdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__lgc_op)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__lgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->top__DOT____Vtogcov__lgc_op = ((0xbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__lgc_op)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__lgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->top__DOT____Vtogcov__lgc_op = ((7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__lgc_op)));
    }
    if (((IData)(vlSelf->top__DOT__I_type) ^ (IData)(vlSelf->top__DOT____Vtogcov__I_type))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->top__DOT____Vtogcov__I_type = vlSelf->top__DOT__I_type;
    }
    vlSelf->top__DOT__rs1_en = ((((IData)(vlSelf->top__DOT__I_type) 
                                  | (IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type)) 
                                 | (0x23U == (0x7fU 
                                              & vlSelf->inst))) 
                                | (0x63U == (0x7fU 
                                             & vlSelf->inst)));
    vlSelf->top__DOT__imm_en = ((((IData)(vlSelf->top__DOT__I_type) 
                                  | (0x23U == (0x7fU 
                                               & vlSelf->inst))) 
                                 | (IData)(vlSelf->top__DOT__U_type)) 
                                | (0x6fU == (0x7fU 
                                             & vlSelf->inst)));
    vlSelf->top__DOT__imm = ((((((- (QData)((IData)(vlSelf->top__DOT__I_type))) 
                                 & vlSelf->top__DOT__imm_gen_inst__DOT__immI_num) 
                                | ((- (QData)((IData)(
                                                      (0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst))))) 
                                   & vlSelf->top__DOT__imm_gen_inst__DOT__immS_num)) 
                               | ((- (QData)((IData)(
                                                     (0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst))))) 
                                  & vlSelf->top__DOT__imm_gen_inst__DOT__immB_num)) 
                              | ((- (QData)((IData)(vlSelf->top__DOT__U_type))) 
                                 & vlSelf->top__DOT__imm_gen_inst__DOT__immU_num)) 
                             | ((- (QData)((IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst))))) 
                                & vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num));
    if (((IData)(vlSelf->top__DOT__rs2_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__rs2_en))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->top__DOT____Vtogcov__rs2_en = vlSelf->top__DOT__rs2_en;
    }
    if (((IData)(vlSelf->top__DOT__rs1_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__rs1_en))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->top__DOT____Vtogcov__rs1_en = vlSelf->top__DOT__rs1_en;
    }
    if (((IData)(vlSelf->top__DOT__imm_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_en))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->top__DOT____Vtogcov__imm_en = vlSelf->top__DOT__imm_en;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffffeULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (IData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->top__DOT__imm)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffffdULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 1U))))) 
                                               << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffffbULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 2U))))) 
                                               << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffff7ULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 3U))))) 
                                               << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffffefULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 4U))))) 
                                               << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffffdfULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 5U))))) 
                                               << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffffbfULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 6U))))) 
                                               << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffff7fULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 7U))))) 
                                               << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffeffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 8U))))) 
                                               << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffdffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 9U))))) 
                                               << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffbffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xaU))))) 
                                               << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffff7ffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xbU))))) 
                                               << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffefffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xcU))))) 
                                               << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffdfffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xdU))))) 
                                               << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffbfffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xeU))))) 
                                               << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffff7fffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xfU))))) 
                                               << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffeffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x10U))))) 
                                               << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffdffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x11U))))) 
                                               << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffbffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x12U))))) 
                                               << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffff7ffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x13U))))) 
                                               << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffefffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x14U))))) 
                                               << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffdfffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x15U))))) 
                                               << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffbfffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x16U))))) 
                                               << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffff7fffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x17U))))) 
                                               << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffeffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x18U))))) 
                                               << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffdffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x19U))))) 
                                               << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffbffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1aU))))) 
                                               << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffff7ffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1bU))))) 
                                               << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffefffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1cU))))) 
                                               << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffdfffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1dU))))) 
                                               << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffbfffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1eU))))) 
                                               << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffff7fffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1fU))))) 
                                               << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffeffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x20U))))) 
                                               << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffdffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x21U))))) 
                                               << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffbffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x22U))))) 
                                               << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffff7ffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x23U))))) 
                                               << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffefffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x24U))))) 
                                               << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffdfffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x25U))))) 
                                               << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffbfffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x26U))))) 
                                               << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffff7fffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x27U))))) 
                                               << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffeffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x28U))))) 
                                               << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffdffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x29U))))) 
                                               << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffbffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2aU))))) 
                                               << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffff7ffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2bU))))) 
                                               << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffefffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2cU))))) 
                                               << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffdfffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2dU))))) 
                                               << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffbfffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2eU))))) 
                                               << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffff7fffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2fU))))) 
                                               << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffeffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x30U))))) 
                                               << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffdffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x31U))))) 
                                               << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffbffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x32U))))) 
                                               << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfff7ffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x33U))))) 
                                               << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffefffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x34U))))) 
                                               << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffdfffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x35U))))) 
                                               << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffbfffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x36U))))) 
                                               << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xff7fffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x37U))))) 
                                               << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfeffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x38U))))) 
                                               << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfdffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x39U))))) 
                                               << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfbffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3aU))))) 
                                               << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xf7ffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3bU))))) 
                                               << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xefffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3cU))))) 
                                               << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xdfffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3dU))))) 
                                               << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xbfffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3eU))))) 
                                               << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->top__DOT____Vtogcov__imm = ((0x7fffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3fU))))) 
                                               << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[924]);
    if (vlSelf->rstn) {
        ++(vlSymsp->__Vcoverage[923]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[922]);
    }
    vlSelf->pc = ((IData)(vlSelf->rstn) ? vlSelf->dnxt_pc
                   : 0x7ffffffcULL);
    if ((1U & ((IData)(vlSelf->pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffeULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (IData)((IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->pc)))));
    }
    if ((1U & ((IData)((vlSelf->pc >> 1U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 1U))))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffdULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 1U))))) 
                                              << 1U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 2U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 2U))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffffbULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 2U))))) 
                                              << 2U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 3U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 3U))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffff7ULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 3U))))) 
                                              << 3U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 4U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 4U))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffffefULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 4U))))) 
                                              << 4U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 5U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 5U))))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffffdfULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 5U))))) 
                                              << 5U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 6U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 6U))))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffffbfULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 6U))))) 
                                              << 6U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 7U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 7U))))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffff7fULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 7U))))) 
                                              << 7U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 8U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 8U))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffeffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 8U))))) 
                                              << 8U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 9U)) ^ (IData)(
                                                     (vlSelf->top__DOT____Vtogcov__pc 
                                                      >> 9U))))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffdffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 9U))))) 
                                              << 9U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xaU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffffbffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xaU))))) 
                                              << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xbU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffff7ffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xbU))))) 
                                              << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xcU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffefffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xcU))))) 
                                              << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xdU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffdfffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xdU))))) 
                                              << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xeU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffffbfffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xeU))))) 
                                              << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0xfU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__pc 
                                                        >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffff7fffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0xfU))))) 
                                              << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x10U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffeffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x10U))))) 
                                              << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x11U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffdffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x11U))))) 
                                              << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x12U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffffbffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x12U))))) 
                                              << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x13U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffff7ffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x13U))))) 
                                              << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x14U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffefffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x14U))))) 
                                              << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x15U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffdfffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x15U))))) 
                                              << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x16U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffffbfffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x16U))))) 
                                              << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x17U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffff7fffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x17U))))) 
                                              << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x18U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffeffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x18U))))) 
                                              << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x19U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffdffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x19U))))) 
                                              << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1aU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffffbffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1aU))))) 
                                              << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1bU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffff7ffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1bU))))) 
                                              << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1cU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffefffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1cU))))) 
                                              << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1dU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffdfffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1dU))))) 
                                              << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1eU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffffbfffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1eU))))) 
                                              << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x1fU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffff7fffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x1fU))))) 
                                              << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x20U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffeffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x20U))))) 
                                              << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x21U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffdffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x21U))))) 
                                              << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x22U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffbffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x22U))))) 
                                              << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x23U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffff7ffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x23U))))) 
                                              << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x24U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffefffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x24U))))) 
                                              << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x25U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffdfffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x25U))))) 
                                              << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x26U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffbfffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x26U))))) 
                                              << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x27U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffff7fffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x27U))))) 
                                              << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x28U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffeffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x28U))))) 
                                              << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x29U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffdffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x29U))))) 
                                              << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2aU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffbffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2aU))))) 
                                              << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2bU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffff7ffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2bU))))) 
                                              << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2cU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffefffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2cU))))) 
                                              << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2dU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffdfffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2dU))))) 
                                              << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2eU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffbfffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2eU))))) 
                                              << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x2fU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffff7fffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x2fU))))) 
                                              << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x30U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffeffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x30U))))) 
                                              << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x31U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffdffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x31U))))) 
                                              << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x32U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffbffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x32U))))) 
                                              << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x33U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfff7ffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x33U))))) 
                                              << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x34U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffefffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x34U))))) 
                                              << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x35U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffdfffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x35U))))) 
                                              << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x36U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffbfffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x36U))))) 
                                              << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x37U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xff7fffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x37U))))) 
                                              << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x38U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfeffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x38U))))) 
                                              << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x39U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfdffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x39U))))) 
                                              << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3aU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfbffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3aU))))) 
                                              << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3bU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xf7ffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3bU))))) 
                                              << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3cU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xefffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3cU))))) 
                                              << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3dU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xdfffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3dU))))) 
                                              << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3eU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->top__DOT____Vtogcov__pc = ((0xbfffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3eU))))) 
                                              << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->pc >> 0x3fU)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__pc 
                                                         >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->top__DOT____Vtogcov__pc = ((0x7fffffffffffffffULL 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 0x3fU))))) 
                                              << 0x3fU));
    }
    vlSelf->snxt_pc = (4ULL + vlSelf->pc);
    if ((1U & ((IData)(vlSelf->snxt_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__snxt_pc)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->snxt_pc)))));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 1U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffffdULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 1U))))) 
                                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 2U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffffbULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 2U))))) 
                                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 3U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffff7ULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 3U))))) 
                                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 4U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffffefULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 4U))))) 
                                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 5U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffffdfULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 5U))))) 
                                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 6U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffffbfULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 6U))))) 
                                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 7U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffff7fULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 7U))))) 
                                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 8U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffeffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 8U))))) 
                                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 9U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffdffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 9U))))) 
                                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xaU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffffbffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xaU))))) 
                                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xbU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffff7ffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xbU))))) 
                                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xcU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffefffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xcU))))) 
                                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xdU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffdfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xdU))))) 
                                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xeU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffffbfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xeU))))) 
                                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0xfU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__snxt_pc 
                                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffff7fffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0xfU))))) 
                                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffeffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x10U))))) 
                                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffdffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x11U))))) 
                                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffffbffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x12U))))) 
                                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffff7ffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x13U))))) 
                                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffefffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x14U))))) 
                                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffdfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x15U))))) 
                                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffffbfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x16U))))) 
                                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffff7fffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x17U))))) 
                                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffeffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x18U))))) 
                                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffdffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x19U))))) 
                                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffffbffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1aU))))) 
                                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffff7ffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1bU))))) 
                                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffefffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1cU))))) 
                                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffdfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1dU))))) 
                                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffffbfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1eU))))) 
                                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffff7fffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x1fU))))) 
                                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffeffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x20U))))) 
                                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffdffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x21U))))) 
                                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffffbffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x22U))))) 
                                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffff7ffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x23U))))) 
                                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffefffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x24U))))) 
                                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffdfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x25U))))) 
                                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffffbfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x26U))))) 
                                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffff7fffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x27U))))) 
                                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffeffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x28U))))) 
                                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffdffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x29U))))) 
                                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffffbffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2aU))))) 
                                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffff7ffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2bU))))) 
                                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffefffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2cU))))) 
                                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffdfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2dU))))) 
                                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffffbfffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2eU))))) 
                                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffff7fffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x2fU))))) 
                                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffeffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x30U))))) 
                                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffdffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x31U))))) 
                                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfffbffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x32U))))) 
                                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfff7ffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x33U))))) 
                                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffefffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x34U))))) 
                                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffdfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x35U))))) 
                                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xffbfffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x36U))))) 
                                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xff7fffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x37U))))) 
                                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfeffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x38U))))) 
                                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfdffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x39U))))) 
                                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xfbffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3aU))))) 
                                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xf7ffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3bU))))) 
                                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xefffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3cU))))) 
                                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xdfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3dU))))) 
                                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0xbfffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3eU))))) 
                                                   << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->snxt_pc >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__snxt_pc 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT____Vtogcov__snxt_pc = ((0x7fffffffffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__snxt_pc) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->snxt_pc 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__6\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v1;
    QData/*63:0*/ __Vdlyvval__top__DOT__regfile_inst__DOT__gpr__v0;
    // Body
    ++(vlSymsp->__Vcoverage[993]);
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[992]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        ++(vlSymsp->__Vcoverage[989]);
    }
    if ((1U & (~ (IData)(vlSelf->rstn)))) {
        vlSelf->top__DOT__regfile_inst__DOT__i = 0x20U;
    }
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__wb_en) {
            ++(vlSymsp->__Vcoverage[990]);
        }
    }
    if (vlSelf->rstn) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__wb_en)))) {
            ++(vlSymsp->__Vcoverage[991]);
        }
    }
    __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0 = 0U;
    __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v1 = 0U;
    if (vlSelf->rstn) {
        if (vlSelf->top__DOT__wb_en) {
            __Vdlyvval__top__DOT__regfile_inst__DOT__gpr__v0 
                = vlSelf->top__DOT__regfile_inst__DOT__wb_data;
            __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0 = 1U;
            __Vdlyvdim0__top__DOT__regfile_inst__DOT__gpr__v0 
                = (0x1fU & (vlSelf->inst >> 7U));
        }
    } else {
        __Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v1 = 1U;
    }
    if (__Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v0) {
        vlSelf->top__DOT__regfile_inst__DOT__gpr[__Vdlyvdim0__top__DOT__regfile_inst__DOT__gpr__v0] 
            = __Vdlyvval__top__DOT__regfile_inst__DOT__gpr__v0;
    }
    if (__Vdlyvset__top__DOT__regfile_inst__DOT__gpr__v1) {
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[1U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[2U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[3U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[4U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[5U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[6U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[7U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[8U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[9U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0xaU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0xbU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0xcU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0xdU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0xeU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0xfU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x10U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x11U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x12U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x13U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x14U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x15U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x16U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x17U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x18U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x19U] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x1aU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x1bU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x1cU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x1dU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x1eU] = 0ULL;
        vlSelf->top__DOT__regfile_inst__DOT__gpr[0x1fU] = 0ULL;
    }
    vlSelf->a = vlSelf->top__DOT__regfile_inst__DOT__gpr
        [0xaU];
    if ((1U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->top__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffffeULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | (IData)((IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->a)))));
    }
    if ((1U & ((IData)((vlSelf->a >> 1U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffffdULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 1U))))) 
                                             << 1U));
    }
    if ((1U & ((IData)((vlSelf->a >> 2U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffffbULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 2U))))) 
                                             << 2U));
    }
    if ((1U & ((IData)((vlSelf->a >> 3U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffff7ULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 3U))))) 
                                             << 3U));
    }
    if ((1U & ((IData)((vlSelf->a >> 4U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffffefULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 4U))))) 
                                             << 4U));
    }
    if ((1U & ((IData)((vlSelf->a >> 5U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffffdfULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 5U))))) 
                                             << 5U));
    }
    if ((1U & ((IData)((vlSelf->a >> 6U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 6U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffffbfULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 6U))))) 
                                             << 6U));
    }
    if ((1U & ((IData)((vlSelf->a >> 7U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 7U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffff7fULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 7U))))) 
                                             << 7U));
    }
    if ((1U & ((IData)((vlSelf->a >> 8U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 8U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffeffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 8U))))) 
                                             << 8U));
    }
    if ((1U & ((IData)((vlSelf->a >> 9U)) ^ (IData)(
                                                    (vlSelf->top__DOT____Vtogcov__a 
                                                     >> 9U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffdffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 9U))))) 
                                             << 9U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0xaU)) ^ (IData)(
                                                      (vlSelf->top__DOT____Vtogcov__a 
                                                       >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffffbffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0xaU))))) 
                                             << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0xbU)) ^ (IData)(
                                                      (vlSelf->top__DOT____Vtogcov__a 
                                                       >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffff7ffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0xbU))))) 
                                             << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0xcU)) ^ (IData)(
                                                      (vlSelf->top__DOT____Vtogcov__a 
                                                       >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffefffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0xcU))))) 
                                             << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0xdU)) ^ (IData)(
                                                      (vlSelf->top__DOT____Vtogcov__a 
                                                       >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffdfffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0xdU))))) 
                                             << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0xeU)) ^ (IData)(
                                                      (vlSelf->top__DOT____Vtogcov__a 
                                                       >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffffbfffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0xeU))))) 
                                             << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0xfU)) ^ (IData)(
                                                      (vlSelf->top__DOT____Vtogcov__a 
                                                       >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffff7fffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0xfU))))) 
                                             << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x10U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffeffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x10U))))) 
                                             << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x11U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffdffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x11U))))) 
                                             << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x12U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffffbffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x12U))))) 
                                             << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x13U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffff7ffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x13U))))) 
                                             << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x14U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffefffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x14U))))) 
                                             << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x15U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffdfffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x15U))))) 
                                             << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x16U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffffbfffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x16U))))) 
                                             << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x17U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffff7fffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x17U))))) 
                                             << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x18U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffeffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x18U))))) 
                                             << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x19U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffdffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x19U))))) 
                                             << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x1aU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffffbffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x1aU))))) 
                                             << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x1bU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffff7ffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x1bU))))) 
                                             << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x1cU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffefffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x1cU))))) 
                                             << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x1dU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffdfffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x1dU))))) 
                                             << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x1eU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffffbfffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x1eU))))) 
                                             << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x1fU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffff7fffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x1fU))))) 
                                             << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x20U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffeffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x20U))))) 
                                             << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x21U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffdffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x21U))))) 
                                             << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x22U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffffbffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x22U))))) 
                                             << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x23U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffff7ffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x23U))))) 
                                             << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x24U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffefffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x24U))))) 
                                             << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x25U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffdfffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x25U))))) 
                                             << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x26U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffffbfffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x26U))))) 
                                             << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x27U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffff7fffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x27U))))) 
                                             << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x28U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffeffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x28U))))) 
                                             << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x29U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffdffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x29U))))) 
                                             << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x2aU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffffbffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x2aU))))) 
                                             << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x2bU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffff7ffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x2bU))))) 
                                             << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x2cU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffefffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x2cU))))) 
                                             << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x2dU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffdfffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x2dU))))) 
                                             << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x2eU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffffbfffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x2eU))))) 
                                             << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x2fU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffff7fffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x2fU))))) 
                                             << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x30U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffeffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x30U))))) 
                                             << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x31U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffdffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x31U))))) 
                                             << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x32U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfffbffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x32U))))) 
                                             << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x33U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfff7ffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x33U))))) 
                                             << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x34U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffefffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x34U))))) 
                                             << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x35U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffdfffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x35U))))) 
                                             << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x36U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__a = ((0xffbfffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x36U))))) 
                                             << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x37U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__a = ((0xff7fffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x37U))))) 
                                             << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x38U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfeffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x38U))))) 
                                             << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x39U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfdffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x39U))))) 
                                             << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x3aU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__a = ((0xfbffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x3aU))))) 
                                             << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x3bU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__a = ((0xf7ffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x3bU))))) 
                                             << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x3cU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__a = ((0xefffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x3cU))))) 
                                             << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x3dU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__a = ((0xdfffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x3dU))))) 
                                             << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x3eU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__a = ((0xbfffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x3eU))))) 
                                             << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->a >> 0x3fU)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__a 
                                                        >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__a = ((0x7fffffffffffffffULL 
                                           & vlSelf->top__DOT____Vtogcov__a) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->a 
                                                                         >> 0x3fU))))) 
                                             << 0x3fU));
    }
}
