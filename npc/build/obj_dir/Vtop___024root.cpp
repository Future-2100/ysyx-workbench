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

void Vtop___024root____Vdpiexp_top__DOT__end_sim_TOP(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__end_sim_TOP\n"); );
    // Variables
    // Body
    VL_FINISH_MT("/home/grand/ysyx-workbench/npc/vsrc/top.v", 240, "");
    ++(vlSymsp->__Vcoverage[855]);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((0x2000U & vlSelf->inst)) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1777]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((0x2000U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1776]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((0x2000U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1780]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((0x2000U & vlSelf->inst)) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1781]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1778]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1779]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1775]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1774]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((0x2000U & vlSelf->inst)) {
            ++(vlSymsp->__Vcoverage[1821]);
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((0x2000U & vlSelf->inst)) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1820]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1817]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1818]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((0x2000U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1819]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1821]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1816]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((0x2000U & vlSelf->inst)) {
            ++(vlSymsp->__Vcoverage[1869]);
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1864]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((0x2000U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1867]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((0x2000U & vlSelf->inst)) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1868]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1865]);
            }
        }
    }
    if ((0x4000U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((0x1000U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[1866]);
            }
        }
    }
    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
        if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
            if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                ++(vlSymsp->__Vcoverage[1863]);
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
    if (((0x19U == (0x1fU & (vlSelf->inst >> 2U))) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__jalr_en))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->top__DOT____Vtogcov__jalr_en = (0x19U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 2U)));
    }
    if (((0x1bU == (0x1fU & (vlSelf->inst >> 2U))) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__jal_en))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->top__DOT____Vtogcov__jal_en = (0x1bU 
                                               == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 2U)));
    }
    if (((0U == (0x1fU & (vlSelf->inst >> 2U))) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_load))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->top__DOT____Vtogcov__wb_load = (0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 2U)));
    }
    if (((8U == (0x1fU & (vlSelf->inst >> 2U))) ^ (IData)(vlSelf->top__DOT____Vtogcov__S_type))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->top__DOT____Vtogcov__S_type = (8U == 
                                               (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U)));
    }
    if (((0x18U == (0x1fU & (vlSelf->inst >> 2U))) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__B_type))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->top__DOT____Vtogcov__B_type = (0x18U 
                                               == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 2U)));
    }
    if (((0xdU == (0x1fU & (vlSelf->inst >> 2U))) ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__lui_en))) {
        ++(vlSymsp->__Vcoverage[2258]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__lui_en 
            = (0xdU == (0x1fU & (vlSelf->inst >> 2U)));
    }
    if (((5U == (0x1fU & (vlSelf->inst >> 2U))) ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__auipc_en))) {
        ++(vlSymsp->__Vcoverage[2259]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__auipc_en 
            = (5U == (0x1fU & (vlSelf->inst >> 2U)));
    }
    vlSelf->ebreak = (IData)(((0x100070U == (0x1f0007cU 
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
    if ((1U & ((IData)(vlSelf->rdata) ^ (IData)(vlSelf->top__DOT____Vtogcov__rdata)))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffffeULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | (IData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->rdata)))));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 1U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__rdata 
                                                         >> 1U))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffffdULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 1U))))) 
                                                 << 1U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 2U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__rdata 
                                                         >> 2U))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffffbULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 2U))))) 
                                                 << 2U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 3U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__rdata 
                                                         >> 3U))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffff7ULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 3U))))) 
                                                 << 3U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 4U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__rdata 
                                                         >> 4U))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffffefULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 4U))))) 
                                                 << 4U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 5U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__rdata 
                                                         >> 5U))))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffffdfULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 5U))))) 
                                                 << 5U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 6U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__rdata 
                                                         >> 6U))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffffbfULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 6U))))) 
                                                 << 6U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 7U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__rdata 
                                                         >> 7U))))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffff7fULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 7U))))) 
                                                 << 7U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 8U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__rdata 
                                                         >> 8U))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffeffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 8U))))) 
                                                 << 8U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 9U)) ^ (IData)(
                                                        (vlSelf->top__DOT____Vtogcov__rdata 
                                                         >> 9U))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffdffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 9U))))) 
                                                 << 9U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0xaU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__rdata 
                                                           >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffbffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0xaU))))) 
                                                 << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0xbU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__rdata 
                                                           >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffff7ffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0xbU))))) 
                                                 << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0xcU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__rdata 
                                                           >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffefffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0xcU))))) 
                                                 << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0xdU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__rdata 
                                                           >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffdfffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0xdU))))) 
                                                 << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0xeU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__rdata 
                                                           >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffbfffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0xeU))))) 
                                                 << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0xfU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__rdata 
                                                           >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffff7fffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0xfU))))) 
                                                 << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x10U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffeffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x10U))))) 
                                                 << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x11U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffdffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x11U))))) 
                                                 << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x12U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffbffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x12U))))) 
                                                 << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x13U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffff7ffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x13U))))) 
                                                 << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x14U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffefffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x14U))))) 
                                                 << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x15U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffdfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x15U))))) 
                                                 << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x16U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffbfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x16U))))) 
                                                 << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x17U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffff7fffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x17U))))) 
                                                 << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x18U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffeffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x18U))))) 
                                                 << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x19U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffdffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x19U))))) 
                                                 << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x1aU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffbffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x1aU))))) 
                                                 << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x1bU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffff7ffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x1bU))))) 
                                                 << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x1cU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffefffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x1cU))))) 
                                                 << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x1dU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffdfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x1dU))))) 
                                                 << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x1eU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffbfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x1eU))))) 
                                                 << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x1fU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffff7fffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x1fU))))) 
                                                 << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x20U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffeffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x20U))))) 
                                                 << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x21U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffdffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x21U))))) 
                                                 << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x22U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffbffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x22U))))) 
                                                 << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x23U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffff7ffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x23U))))) 
                                                 << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x24U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffefffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x24U))))) 
                                                 << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x25U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffdfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x25U))))) 
                                                 << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x26U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffbfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x26U))))) 
                                                 << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x27U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffff7fffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x27U))))) 
                                                 << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x28U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffeffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x28U))))) 
                                                 << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x29U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffdffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x29U))))) 
                                                 << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x2aU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffbffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x2aU))))) 
                                                 << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x2bU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffff7ffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x2bU))))) 
                                                 << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x2cU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffefffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x2cU))))) 
                                                 << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x2dU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffdfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x2dU))))) 
                                                 << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x2eU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffbfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x2eU))))) 
                                                 << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x2fU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffff7fffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x2fU))))) 
                                                 << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x30U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffeffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x30U))))) 
                                                 << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x31U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffdffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x31U))))) 
                                                 << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x32U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffbffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x32U))))) 
                                                 << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x33U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfff7ffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x33U))))) 
                                                 << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x34U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffefffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x34U))))) 
                                                 << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x35U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffdfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x35U))))) 
                                                 << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x36U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffbfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x36U))))) 
                                                 << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x37U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xff7fffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x37U))))) 
                                                 << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x38U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfeffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x38U))))) 
                                                 << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x39U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfdffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x39U))))) 
                                                 << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x3aU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfbffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x3aU))))) 
                                                 << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x3bU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xf7ffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x3bU))))) 
                                                 << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x3cU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xefffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x3cU))))) 
                                                 << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x3dU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xdfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x3dU))))) 
                                                 << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x3eU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xbfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x3eU))))) 
                                                 << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->rdata >> 0x3fU)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__rdata 
                                                            >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0x7fffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->rdata 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)((0xffU & (IData)(vlSelf->rdata))))) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data)))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->rdata)))))))));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->rdata)))) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->rdata))))) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data)))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->rdata)))))))));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2139]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2140]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2141]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2142]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2143]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2144]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2145]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2146]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2147]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2148]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2149]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2150]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2151]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2152]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->rdata)))) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->rdata)))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)(vlSelf->rdata))) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data)))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(vlSelf->rdata)))))));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->rdata)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->rdata)) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__wb_pc = ((0x1bU == (0x1fU & (vlSelf->inst 
                                                   >> 2U))) 
                               | (0x19U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))));
    vlSelf->top__DOT__sb = (IData)((0x20U == (0x707cU 
                                              & vlSelf->inst)));
    vlSelf->top__DOT__sh = (IData)((0x1020U == (0x707cU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__sw = (IData)((0x2020U == (0x707cU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__sd = (IData)((0x3020U == (0x707cU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__lb = (IData)((0U == (0x707cU 
                                           & vlSelf->inst)));
    vlSelf->top__DOT__lh = (IData)((0x1000U == (0x707cU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__lw = (IData)((0x2000U == (0x707cU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__ld = (IData)((0x3000U == (0x707cU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__lbu = (IData)((0x4000U == (0x707cU 
                                                 & vlSelf->inst)));
    vlSelf->top__DOT__lhu = (IData)((0x5000U == (0x707cU 
                                                 & vlSelf->inst)));
    vlSelf->top__DOT__lwu = (IData)((0x6000U == (0x707cU 
                                                 & vlSelf->inst)));
    vlSelf->top__DOT__memory_inst__DOT__lb_data = (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->rdata 
                                                                                >> 7U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->rdata)))));
    vlSelf->top__DOT__memory_inst__DOT__lh_data = (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->rdata 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->rdata)))));
    vlSelf->top__DOT__memory_inst__DOT__lw_data = (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->rdata 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->rdata)));
    vlSelf->top__DOT__pc_en = ((5U == (0x1fU & (vlSelf->inst 
                                                >> 2U))) 
                               | (0x1bU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))));
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
    vlSelf->top__DOT__U_type = ((0xdU == (0x1fU & (vlSelf->inst 
                                                   >> 2U))) 
                                | (5U == (0x1fU & (vlSelf->inst 
                                                   >> 2U))));
    vlSelf->top__DOT__controlor_inst__DOT__mrsop_en 
        = (IData)((0x2000030U == (0x200007cU & vlSelf->inst)));
    vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en 
        = (IData)((0x2000038U == (0x200007cU & vlSelf->inst)));
    vlSelf->top__DOT__controlor_inst__DOT__wrsop_en 
        = (IData)((0x38U == (0x200007cU & vlSelf->inst)));
    vlSelf->top__DOT__controlor_inst__DOT__rsop_en 
        = (IData)((0x30U == (0x200007cU & vlSelf->inst)));
    vlSelf->top__DOT__controlor_inst__DOT__wimmop_en 
        = ((6U == (0x1fU & (vlSelf->inst >> 2U))) & 
           (1U != (3U & (vlSelf->inst >> 0xcU))));
    vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en 
        = (IData)((0x1018U == (0x307cU & vlSelf->inst)));
    vlSelf->top__DOT__controlor_inst__DOT__immop_en 
        = ((4U == (0x1fU & (vlSelf->inst >> 2U))) & 
           (1U != (3U & (vlSelf->inst >> 0xcU))));
    vlSelf->top__DOT__controlor_inst__DOT__immsf_en 
        = (IData)((0x1010U == (0x307cU & vlSelf->inst)));
    if (((IData)(vlSelf->ebreak) ^ (IData)(vlSelf->top__DOT____Vtogcov__ebreak))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__ebreak = vlSelf->ebreak;
    }
    if (((IData)(vlSelf->top__DOT__wb_pc) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_pc))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->top__DOT____Vtogcov__wb_pc = vlSelf->top__DOT__wb_pc;
    }
    if (((IData)(vlSelf->top__DOT__sb) ^ (IData)(vlSelf->top__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->top__DOT____Vtogcov__sb = vlSelf->top__DOT__sb;
    }
    if (((IData)(vlSelf->top__DOT__sh) ^ (IData)(vlSelf->top__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->top__DOT____Vtogcov__sh = vlSelf->top__DOT__sh;
    }
    if (((IData)(vlSelf->top__DOT__sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->top__DOT____Vtogcov__sw = vlSelf->top__DOT__sw;
    }
    if (((IData)(vlSelf->top__DOT__sd) ^ (IData)(vlSelf->top__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->top__DOT____Vtogcov__sd = vlSelf->top__DOT__sd;
    }
    vlSelf->wen = (((((IData)(vlSelf->top__DOT__sb) 
                      | (IData)(vlSelf->top__DOT__sh)) 
                     | (IData)(vlSelf->top__DOT__sw)) 
                    | (IData)(vlSelf->top__DOT__sd)) 
                   & (IData)(vlSelf->rstn));
    vlSelf->wlen = ((((1U & (- (IData)((IData)(vlSelf->top__DOT__sb)))) 
                      | (2U & (- (IData)((IData)(vlSelf->top__DOT__sh))))) 
                     | (4U & (- (IData)((IData)(vlSelf->top__DOT__sw))))) 
                    | (8U & (- (IData)((IData)(vlSelf->top__DOT__sd)))));
    if (((IData)(vlSelf->top__DOT__lb) ^ (IData)(vlSelf->top__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->top__DOT____Vtogcov__lb = vlSelf->top__DOT__lb;
    }
    if (((IData)(vlSelf->top__DOT__lh) ^ (IData)(vlSelf->top__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->top__DOT____Vtogcov__lh = vlSelf->top__DOT__lh;
    }
    if (((IData)(vlSelf->top__DOT__lw) ^ (IData)(vlSelf->top__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->top__DOT____Vtogcov__lw = vlSelf->top__DOT__lw;
    }
    if (((IData)(vlSelf->top__DOT__ld) ^ (IData)(vlSelf->top__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->top__DOT____Vtogcov__ld = vlSelf->top__DOT__ld;
    }
    if (((IData)(vlSelf->top__DOT__lbu) ^ (IData)(vlSelf->top__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->top__DOT____Vtogcov__lbu = vlSelf->top__DOT__lbu;
    }
    if (((IData)(vlSelf->top__DOT__lhu) ^ (IData)(vlSelf->top__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->top__DOT____Vtogcov__lhu = vlSelf->top__DOT__lhu;
    }
    if (((IData)(vlSelf->top__DOT__lwu) ^ (IData)(vlSelf->top__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->top__DOT____Vtogcov__lwu = vlSelf->top__DOT__lwu;
    }
    vlSelf->ren = (((((((IData)(vlSelf->top__DOT__lb) 
                        | (IData)(vlSelf->top__DOT__lh)) 
                       | (IData)(vlSelf->top__DOT__lw)) 
                      | (IData)(vlSelf->top__DOT__ld)) 
                     | (IData)(vlSelf->top__DOT__lbu)) 
                    | (IData)(vlSelf->top__DOT__lhu)) 
                   | (IData)(vlSelf->top__DOT__lwu));
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__lb_data) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data)))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__lb_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__lh_data) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data)))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__lh_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1948]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1949]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1950]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1951]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1952]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1953]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1954]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1955]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1962]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1963]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1964]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1965]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1966]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1967]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1968]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1969]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1970]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1971]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1972]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1973]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1974]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1975]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1976]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1977]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1978]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1979]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1980]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1981]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1982]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1983]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1984]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1985]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1986]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1987]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1988]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1989]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1990]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1991]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1992]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1993]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1994]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1995]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1996]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__lw_data) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data)))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__lw_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2001]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2002]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2003]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2004]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2005]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2006]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2007]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2008]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2009]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2010]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2011]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2012]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2013]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2014]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2015]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2016]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2017]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2018]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2019]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__load_data = ((((((((- (QData)((IData)(vlSelf->top__DOT__lb))) 
                                         & vlSelf->top__DOT__memory_inst__DOT__lb_data) 
                                        | ((- (QData)((IData)(vlSelf->top__DOT__lh))) 
                                           & vlSelf->top__DOT__memory_inst__DOT__lh_data)) 
                                       | ((- (QData)((IData)(vlSelf->top__DOT__lw))) 
                                          & vlSelf->top__DOT__memory_inst__DOT__lw_data)) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__ld))) 
                                         & vlSelf->rdata)) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__lbu))) 
                                        & (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->rdata)))))) 
                                    | ((- (QData)((IData)(vlSelf->top__DOT__lhu))) 
                                       & (QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->rdata)))))) 
                                   | ((- (QData)((IData)(vlSelf->top__DOT__lwu))) 
                                      & (QData)((IData)(vlSelf->rdata))));
    if (((IData)(vlSelf->top__DOT__pc_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_en))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->top__DOT____Vtogcov__pc_en = vlSelf->top__DOT__pc_en;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num)))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immI_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immI_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immI_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num)))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immS_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immS_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immS_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num)))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immB_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immB_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immB_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num)))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immU_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immU_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immU_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num) 
               ^ (IData)(vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num)))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__imm_gen_inst__DOT____Vtogcov__immJ_num) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__U_type) ^ (IData)(vlSelf->top__DOT____Vtogcov__U_type))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->top__DOT____Vtogcov__U_type = vlSelf->top__DOT__U_type;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__mrsop_en) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__mlgc_en))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->top__DOT____Vtogcov__mlgc_en = vlSelf->top__DOT__controlor_inst__DOT__mrsop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__wmlgc_en))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->top__DOT____Vtogcov__wmlgc_en = vlSelf->top__DOT__controlor_inst__DOT__wmrsop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wrsop_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wrsop_en))) {
        ++(vlSymsp->__Vcoverage[2265]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wrsop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__wrsop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__rsop_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__rsop_en))) {
        ++(vlSymsp->__Vcoverage[2264]);
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
        ++(vlSymsp->__Vcoverage[2262]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wimmop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__wimmop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__wimmsf_en))) {
        ++(vlSymsp->__Vcoverage[2263]);
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
        ++(vlSymsp->__Vcoverage[2260]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immop_en 
            = vlSelf->top__DOT__controlor_inst__DOT__immop_en;
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immsf_en))) {
        ++(vlSymsp->__Vcoverage[2261]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__immsf_en 
            = vlSelf->top__DOT__controlor_inst__DOT__immsf_en;
    }
    vlSelf->top__DOT__wb_alu = ((((((((((5U == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U))) 
                                        | (0xdU == 
                                           (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))) 
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
                                     | (5U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U)))) 
                                    | (0xdU == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U)))) 
                                   | (0x19U == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U)))) 
                                  | (0x1bU == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U)))) 
                                 | (0U == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))) 
                                | (8U == (0x1fU & (vlSelf->inst 
                                                   >> 2U))));
    vlSelf->top__DOT__lgc_op = (0xfU & ((((- (IData)(
                                                     (0xdU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->inst 
                                                          >> 2U))))) 
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
    vlSelf->top__DOT__I_type = ((((((0x19U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))) 
                                    | (0U == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U)))) 
                                   | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en)) 
                                  | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                 | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en)) 
                                | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
    if (((IData)(vlSelf->wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wen))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->top__DOT____Vtogcov__wen = vlSelf->wen;
    }
    if ((1U & ((IData)(vlSelf->wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->top__DOT____Vtogcov__wlen = ((0xeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (1U 
                                                & (IData)(vlSelf->wlen)));
    }
    if ((2U & ((IData)(vlSelf->wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->top__DOT____Vtogcov__wlen = ((0xdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (2U 
                                                & (IData)(vlSelf->wlen)));
    }
    if ((4U & ((IData)(vlSelf->wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->top__DOT____Vtogcov__wlen = ((0xbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (4U 
                                                & (IData)(vlSelf->wlen)));
    }
    if ((8U & ((IData)(vlSelf->wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->top__DOT____Vtogcov__wlen = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (8U 
                                                & (IData)(vlSelf->wlen)));
    }
    if (((IData)(vlSelf->ren) ^ (IData)(vlSelf->top__DOT____Vtogcov__ren))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->top__DOT____Vtogcov__ren = vlSelf->ren;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__load_data) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__load_data)))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffffffffeULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->top__DOT__load_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffffffffdULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 1U))))) 
                                                     << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffffffffbULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 2U))))) 
                                                     << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffffffff7ULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 3U))))) 
                                                     << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffffffffefULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 4U))))) 
                                                     << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffffffffdfULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 5U))))) 
                                                     << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffffffffbfULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 6U))))) 
                                                     << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffffffff7fULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 7U))))) 
                                                     << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffffffeffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 8U))))) 
                                                     << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffffffdffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 9U))))) 
                                                     << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffffffbffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0xaU))))) 
                                                     << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffffff7ffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0xbU))))) 
                                                     << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffffffefffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0xcU))))) 
                                                     << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffffffdfffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0xdU))))) 
                                                     << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffffffbfffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0xeU))))) 
                                                     << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffffff7fffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0xfU))))) 
                                                     << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffffeffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x10U))))) 
                                                     << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffffdffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x11U))))) 
                                                     << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffffbffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x12U))))) 
                                                     << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffff7ffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x13U))))) 
                                                     << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffffefffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x14U))))) 
                                                     << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffffdfffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x15U))))) 
                                                     << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffffbfffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x16U))))) 
                                                     << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffff7fffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x17U))))) 
                                                     << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffeffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x18U))))) 
                                                     << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffdffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x19U))))) 
                                                     << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffbffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x1aU))))) 
                                                     << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffff7ffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x1bU))))) 
                                                     << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffefffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x1cU))))) 
                                                     << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffdfffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x1dU))))) 
                                                     << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffffbfffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x1eU))))) 
                                                     << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffff7fffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x1fU))))) 
                                                     << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffeffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffdffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x21U))))) 
                                                     << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffbffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x22U))))) 
                                                     << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffff7ffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x23U))))) 
                                                     << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffefffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x24U))))) 
                                                     << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffdfffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x25U))))) 
                                                     << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffffbfffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x26U))))) 
                                                     << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffff7fffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x27U))))) 
                                                     << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffeffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x28U))))) 
                                                     << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffdffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x29U))))) 
                                                     << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffbffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x2aU))))) 
                                                     << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffff7ffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x2bU))))) 
                                                     << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffefffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x2cU))))) 
                                                     << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffdfffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x2dU))))) 
                                                     << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffffbfffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x2eU))))) 
                                                     << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffff7fffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x2fU))))) 
                                                     << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffeffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x30U))))) 
                                                     << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffdffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x31U))))) 
                                                     << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffbffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x32U))))) 
                                                     << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfff7ffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x33U))))) 
                                                     << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffefffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x34U))))) 
                                                     << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffdfffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x35U))))) 
                                                     << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xffbfffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x36U))))) 
                                                     << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xff7fffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x37U))))) 
                                                     << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfeffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x38U))))) 
                                                     << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfdffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x39U))))) 
                                                     << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfbffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x3aU))))) 
                                                     << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xf7ffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x3bU))))) 
                                                     << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xefffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x3cU))))) 
                                                     << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xdfffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x3dU))))) 
                                                     << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xbfffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x3eU))))) 
                                                     << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0x7fffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x3fU))))) 
                                                     << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type) 
         ^ (IData)(vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__R_type))) {
        ++(vlSymsp->__Vcoverage[2266]);
        vlSelf->top__DOT__controlor_inst__DOT____Vtogcov__R_type 
            = vlSelf->top__DOT__controlor_inst__DOT__R_type;
    }
    vlSelf->top__DOT__rs2_en = ((IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type) 
                                | (0x18U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))));
    if (((IData)(vlSelf->top__DOT__wlgc_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_en))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->top__DOT____Vtogcov__wlgc_en = vlSelf->top__DOT__wlgc_en;
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__wlgc_op)))) {
                        ++(vlSymsp->__Vcoverage[1860]);
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
                        ++(vlSymsp->__Vcoverage[1858]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                  >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1860]);
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                        ++(vlSymsp->__Vcoverage[1856]);
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
                        ++(vlSymsp->__Vcoverage[1860]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((4U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                if ((2U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                    ++(vlSymsp->__Vcoverage[1860]);
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
                    ++(vlSymsp->__Vcoverage[1860]);
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wlgc_op))) {
        if ((8U & (IData)(vlSelf->top__DOT__wlgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__wlgc_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__wlgc_op))) {
                    ++(vlSymsp->__Vcoverage[1860]);
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
                        ++(vlSymsp->__Vcoverage[1860]);
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
                        ++(vlSymsp->__Vcoverage[1857]);
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
                        ++(vlSymsp->__Vcoverage[1859]);
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
                    ++(vlSymsp->__Vcoverage[1860]);
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
                        ++(vlSymsp->__Vcoverage[1855]);
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__wlgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0x1eU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__wlgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0x1dU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (2U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__wlgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0x1bU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (4U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__wlgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0x17U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (8U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__wlgc_op) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->top__DOT____Vtogcov__wlgc_op = ((0xfU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__wlgc_op)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->top__DOT__wlgc_op)));
    }
    if (((IData)(vlSelf->top__DOT__wb_alu) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_alu))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->top__DOT____Vtogcov__wb_alu = vlSelf->top__DOT__wb_alu;
    }
    if (((IData)(vlSelf->top__DOT__lgc_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_en))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->top__DOT____Vtogcov__lgc_en = vlSelf->top__DOT__lgc_en;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1572]);
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
                    ++(vlSymsp->__Vcoverage[1577]);
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
                    ++(vlSymsp->__Vcoverage[1578]);
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
                    ++(vlSymsp->__Vcoverage[1571]);
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
                    ++(vlSymsp->__Vcoverage[1570]);
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
                    ++(vlSymsp->__Vcoverage[1580]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1576]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1575]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1580]);
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
                    ++(vlSymsp->__Vcoverage[1573]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1579]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__lgc_op)))) {
                    ++(vlSymsp->__Vcoverage[1580]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__lgc_op))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__lgc_op))) {
                    ++(vlSymsp->__Vcoverage[1574]);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__lgc_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lgc_op) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__lgc_op))) {
                ++(vlSymsp->__Vcoverage[1580]);
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
                    ++(vlSymsp->__Vcoverage[1569]);
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__lgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->top__DOT____Vtogcov__lgc_op = ((0xeU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__lgc_op)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__lgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->top__DOT____Vtogcov__lgc_op = ((0xdU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__lgc_op)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__lgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->top__DOT____Vtogcov__lgc_op = ((0xbU 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)) 
                                               | (4U 
                                                  & (IData)(vlSelf->top__DOT__lgc_op)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__lgc_op) ^ (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->top__DOT____Vtogcov__lgc_op = ((7U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__lgc_op)) 
                                               | (8U 
                                                  & (IData)(vlSelf->top__DOT__lgc_op)));
    }
    if (((IData)(vlSelf->top__DOT__I_type) ^ (IData)(vlSelf->top__DOT____Vtogcov__I_type))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->top__DOT____Vtogcov__I_type = vlSelf->top__DOT__I_type;
    }
    vlSelf->top__DOT__rs1_en = ((((IData)(vlSelf->top__DOT__I_type) 
                                  | (IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type)) 
                                 | (8U == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))) 
                                | (0x18U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))));
    vlSelf->top__DOT__imm_en = ((((IData)(vlSelf->top__DOT__I_type) 
                                  | (8U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))) 
                                 | (IData)(vlSelf->top__DOT__U_type)) 
                                | (0x1bU == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))));
    vlSelf->top__DOT__imm = ((((((- (QData)((IData)(vlSelf->top__DOT__I_type))) 
                                 & vlSelf->top__DOT__imm_gen_inst__DOT__immI_num) 
                                | ((- (QData)((IData)(
                                                      (8U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->inst 
                                                           >> 2U)))))) 
                                   & vlSelf->top__DOT__imm_gen_inst__DOT__immS_num)) 
                               | ((- (QData)((IData)(
                                                     (0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->inst 
                                                          >> 2U)))))) 
                                  & vlSelf->top__DOT__imm_gen_inst__DOT__immB_num)) 
                              | ((- (QData)((IData)(vlSelf->top__DOT__U_type))) 
                                 & vlSelf->top__DOT__imm_gen_inst__DOT__immU_num)) 
                             | ((- (QData)((IData)(
                                                   (0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 2U)))))) 
                                & vlSelf->top__DOT__imm_gen_inst__DOT__immJ_num));
    if (((IData)(vlSelf->top__DOT__rs2_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__rs2_en))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->top__DOT____Vtogcov__rs2_en = vlSelf->top__DOT__rs2_en;
    }
    if (((IData)(vlSelf->top__DOT__rs1_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__rs1_en))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->top__DOT____Vtogcov__rs1_en = vlSelf->top__DOT__rs1_en;
    }
    if (((IData)(vlSelf->top__DOT__imm_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm_en))) {
        ++(vlSymsp->__Vcoverage[823]);
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
