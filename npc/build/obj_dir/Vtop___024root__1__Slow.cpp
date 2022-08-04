// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root____Vdpiimwrap_top__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__2\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp4;
    // Body
    ++(vlSymsp->__Vcoverage[849]);
    ++(vlSymsp->__Vcoverage[851]);
    VL_WRITEF("[%0t] Tracing to build/logs/top.vcd...\n\n",
              64,VL_TIME_UNITED_Q(1),-12);
    __Vtemp4[0U] = 0x2e766364U;
    __Vtemp4[1U] = 0x2f746f70U;
    __Vtemp4[2U] = 0x6c6f6773U;
    __Vtemp4[3U] = 0x696c642fU;
    __Vtemp4[4U] = 0x6275U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp4));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1),
              -12);
    ++(vlSymsp->__Vcoverage[864]);
    vlSelf->ifu_RREADY = 1U;
    Vtop___024root____Vdpiimwrap_top__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__regfile_inst__DOT__gpr);
    ++(vlSymsp->__Vcoverage[865]);
    if (((IData)(vlSelf->ifu_RREADY) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_RREADY))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->top__DOT____Vtogcov__ifu_RREADY = vlSelf->ifu_RREADY;
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__vmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ ren);
void Vtop___024root____Vdpiimwrap_top__DOT__vmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wlen, CData/*7:0*/ wen);

void Vtop___024root___settle__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__6\n"); );
    // Body
    if (((IData)(vlSelf->ifu_RREADY) ^ (IData)(vlSelf->top__DOT____Vtogcov__ifu_RREADY))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->top__DOT____Vtogcov__ifu_RREADY = vlSelf->ifu_RREADY;
    }
    vlSelf->top__DOT__instr_en = (((IData)(vlSelf->ifu_RVALID) 
                                   & (IData)(vlSelf->ifu_RREADY)) 
                                  & (0U == (IData)(vlSelf->ifu_RRESP)));
    if (((IData)(vlSelf->top__DOT__instr_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__instr_en))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->top__DOT____Vtogcov__instr_en = vlSelf->top__DOT__instr_en;
    }
    vlSelf->top__DOT__pc_ld = ((IData)(vlSelf->top__DOT__instr_en) 
                               | (IData)(vlSelf->top__DOT__controlor_inst__DOT__first_pc_ld));
    vlSelf->top__DOT__lb = ((IData)((3U == (0x707fU 
                                            & vlSelf->instr))) 
                            & (IData)(vlSelf->top__DOT__instr_en));
    vlSelf->top__DOT__lh = ((IData)((0x1003U == (0x707fU 
                                                 & vlSelf->instr))) 
                            & (IData)(vlSelf->top__DOT__instr_en));
    vlSelf->top__DOT__lw = ((IData)((0x2003U == (0x707fU 
                                                 & vlSelf->instr))) 
                            & (IData)(vlSelf->top__DOT__instr_en));
    vlSelf->top__DOT__ld = ((IData)((0x3003U == (0x707fU 
                                                 & vlSelf->instr))) 
                            & (IData)(vlSelf->top__DOT__instr_en));
    vlSelf->top__DOT__lbu = ((IData)((0x4003U == (0x707fU 
                                                  & vlSelf->instr))) 
                             & (IData)(vlSelf->top__DOT__instr_en));
    vlSelf->top__DOT__lhu = ((IData)((0x5003U == (0x707fU 
                                                  & vlSelf->instr))) 
                             & (IData)(vlSelf->top__DOT__instr_en));
    vlSelf->top__DOT__lwu = ((IData)((0x6003U == (0x707fU 
                                                  & vlSelf->instr))) 
                             & (IData)(vlSelf->top__DOT__instr_en));
    vlSelf->top__DOT__sb = ((IData)((0x23U == (0x707fU 
                                               & vlSelf->instr))) 
                            & (IData)(vlSelf->top__DOT__instr_en));
    vlSelf->top__DOT__sh = ((IData)((0x1023U == (0x707fU 
                                                 & vlSelf->instr))) 
                            & (IData)(vlSelf->top__DOT__instr_en));
    vlSelf->top__DOT__sw = ((IData)((0x2023U == (0x707fU 
                                                 & vlSelf->instr))) 
                            & (IData)(vlSelf->top__DOT__instr_en));
    vlSelf->top__DOT__sd = ((IData)((0x3023U == (0x707fU 
                                                 & vlSelf->instr))) 
                            & (IData)(vlSelf->top__DOT__instr_en));
    vlSelf->top__DOT__wb_en = ((((3U == (0x7fU & vlSelf->instr)) 
                                 | (IData)(vlSelf->top__DOT__wb_pc)) 
                                | (IData)(vlSelf->top__DOT__wb_alu)) 
                               & (IData)(vlSelf->top__DOT__instr_en));
    if (((IData)(vlSelf->top__DOT__pc_ld) ^ (IData)(vlSelf->top__DOT____Vtogcov__pc_ld))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->top__DOT____Vtogcov__pc_ld = vlSelf->top__DOT__pc_ld;
    }
    if (((IData)(vlSelf->top__DOT__lb) ^ (IData)(vlSelf->top__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->top__DOT____Vtogcov__lb = vlSelf->top__DOT__lb;
    }
    if (((IData)(vlSelf->top__DOT__lh) ^ (IData)(vlSelf->top__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->top__DOT____Vtogcov__lh = vlSelf->top__DOT__lh;
    }
    if (((IData)(vlSelf->top__DOT__lw) ^ (IData)(vlSelf->top__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->top__DOT____Vtogcov__lw = vlSelf->top__DOT__lw;
    }
    if (((IData)(vlSelf->top__DOT__ld) ^ (IData)(vlSelf->top__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->top__DOT____Vtogcov__ld = vlSelf->top__DOT__ld;
    }
    if (((IData)(vlSelf->top__DOT__lbu) ^ (IData)(vlSelf->top__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->top__DOT____Vtogcov__lbu = vlSelf->top__DOT__lbu;
    }
    if (((IData)(vlSelf->top__DOT__lhu) ^ (IData)(vlSelf->top__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->top__DOT____Vtogcov__lhu = vlSelf->top__DOT__lhu;
    }
    if (((IData)(vlSelf->top__DOT__lwu) ^ (IData)(vlSelf->top__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[858]);
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
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->top__DOT____Vtogcov__sb = vlSelf->top__DOT__sb;
    }
    if (((IData)(vlSelf->top__DOT__sh) ^ (IData)(vlSelf->top__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->top__DOT____Vtogcov__sh = vlSelf->top__DOT__sh;
    }
    if (((IData)(vlSelf->top__DOT__sw) ^ (IData)(vlSelf->top__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->top__DOT____Vtogcov__sw = vlSelf->top__DOT__sw;
    }
    if (((IData)(vlSelf->top__DOT__sd) ^ (IData)(vlSelf->top__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[862]);
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
    vlSelf->top__DOT__wdata = (((((- (QData)((IData)(vlSelf->top__DOT__sb))) 
                                  & (QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->top__DOT__rd_data2))))) 
                                 | ((- (QData)((IData)(vlSelf->top__DOT__sh))) 
                                    & (QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->top__DOT__rd_data2)))))) 
                                | ((- (QData)((IData)(vlSelf->top__DOT__sw))) 
                                   & (QData)((IData)(vlSelf->top__DOT__rd_data2)))) 
                               | ((- (QData)((IData)(vlSelf->top__DOT__sd))) 
                                  & vlSelf->top__DOT__rd_data2));
    if (((IData)(vlSelf->top__DOT__wb_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__wb_en))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->top__DOT____Vtogcov__wb_en = vlSelf->top__DOT__wb_en;
    }
    if (((IData)(vlSelf->top__DOT__ren) ^ (IData)(vlSelf->top__DOT____Vtogcov__ren))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->top__DOT____Vtogcov__ren = vlSelf->top__DOT__ren;
    }
    if (((IData)(vlSelf->top__DOT__wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wen))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->top__DOT____Vtogcov__wen = vlSelf->top__DOT__wen;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->top__DOT____Vtogcov__wlen = ((0xeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (1U 
                                                & (IData)(vlSelf->top__DOT__wlen)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->top__DOT____Vtogcov__wlen = ((0xdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (2U 
                                                & (IData)(vlSelf->top__DOT__wlen)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->top__DOT____Vtogcov__wlen = ((0xbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (4U 
                                                & (IData)(vlSelf->top__DOT__wlen)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__wlen) ^ (IData)(vlSelf->top__DOT____Vtogcov__wlen)))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->top__DOT____Vtogcov__wlen = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__wlen)) 
                                             | (8U 
                                                & (IData)(vlSelf->top__DOT__wlen)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__wdata) ^ (IData)(vlSelf->top__DOT____Vtogcov__wdata)))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffffeULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | (IData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->top__DOT__wdata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffffdULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 1U))))) 
                                                 << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffffbULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 2U))))) 
                                                 << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffff7ULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 3U))))) 
                                                 << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffffefULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 4U))))) 
                                                 << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffffdfULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 5U))))) 
                                                 << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffffbfULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 6U))))) 
                                                 << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffff7fULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 7U))))) 
                                                 << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffeffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 8U))))) 
                                                 << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffdffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 9U))))) 
                                                 << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffbffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0xaU))))) 
                                                 << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffff7ffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0xbU))))) 
                                                 << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffefffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0xcU))))) 
                                                 << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffdfffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0xdU))))) 
                                                 << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffbfffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0xeU))))) 
                                                 << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffff7fffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0xfU))))) 
                                                 << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffeffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x10U))))) 
                                                 << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffdffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x11U))))) 
                                                 << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffbffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x12U))))) 
                                                 << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffff7ffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x13U))))) 
                                                 << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffefffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x14U))))) 
                                                 << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffdfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x15U))))) 
                                                 << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffbfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x16U))))) 
                                                 << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffff7fffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x17U))))) 
                                                 << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffeffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x18U))))) 
                                                 << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffdffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x19U))))) 
                                                 << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffbffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x1aU))))) 
                                                 << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffff7ffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x1bU))))) 
                                                 << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffefffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x1cU))))) 
                                                 << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffdfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x1dU))))) 
                                                 << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffbfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x1eU))))) 
                                                 << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffff7fffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x1fU))))) 
                                                 << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffeffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x20U))))) 
                                                 << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffdffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x21U))))) 
                                                 << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffbffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x22U))))) 
                                                 << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffff7ffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x23U))))) 
                                                 << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffefffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x24U))))) 
                                                 << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffdfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x25U))))) 
                                                 << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffbfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x26U))))) 
                                                 << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffff7fffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x27U))))) 
                                                 << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffeffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x28U))))) 
                                                 << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffdffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x29U))))) 
                                                 << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffbffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x2aU))))) 
                                                 << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffff7ffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x2bU))))) 
                                                 << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffefffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x2cU))))) 
                                                 << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffdfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x2dU))))) 
                                                 << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffbfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x2eU))))) 
                                                 << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffff7fffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x2fU))))) 
                                                 << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffeffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x30U))))) 
                                                 << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffdffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x31U))))) 
                                                 << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffbffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x32U))))) 
                                                 << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfff7ffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x33U))))) 
                                                 << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffefffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x34U))))) 
                                                 << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffdfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x35U))))) 
                                                 << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffbfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x36U))))) 
                                                 << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xff7fffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x37U))))) 
                                                 << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfeffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x38U))))) 
                                                 << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfdffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x39U))))) 
                                                 << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfbffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x3aU))))) 
                                                 << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xf7ffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x3bU))))) 
                                                 << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xefffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x3cU))))) 
                                                 << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xdfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x3dU))))) 
                                                 << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xbfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x3eU))))) 
                                                 << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__wdata >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0x7fffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__wdata 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU));
    }
    Vtop___024root____Vdpiimwrap_top__DOT__vmem_read_TOP(vlSelf->top__DOT__result, vlSelf->__Vtask_top__DOT__vmem_read__1__rdata, (IData)(vlSelf->top__DOT__ren));
    vlSelf->top__DOT__rdata = vlSelf->__Vtask_top__DOT__vmem_read__1__rdata;
    Vtop___024root____Vdpiimwrap_top__DOT__vmem_write_TOP(vlSelf->top__DOT__result, vlSelf->top__DOT__wdata, (IData)(vlSelf->top__DOT__wlen), vlSelf->top__DOT__wen);
    if ((1U & ((IData)(vlSelf->top__DOT__rdata) ^ (IData)(vlSelf->top__DOT____Vtogcov__rdata)))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffffeULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | (IData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->top__DOT__rdata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffffdULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 1U))))) 
                                                 << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffffbULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 2U))))) 
                                                 << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffff7ULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 3U))))) 
                                                 << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffffefULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 4U))))) 
                                                 << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffffdfULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 5U))))) 
                                                 << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffffbfULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 6U))))) 
                                                 << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffff7fULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 7U))))) 
                                                 << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffeffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 8U))))) 
                                                 << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffdffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 9U))))) 
                                                 << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffffbffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0xaU))))) 
                                                 << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffff7ffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0xbU))))) 
                                                 << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffefffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0xcU))))) 
                                                 << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffdfffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0xdU))))) 
                                                 << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffffbfffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0xeU))))) 
                                                 << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffff7fffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0xfU))))) 
                                                 << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffeffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x10U))))) 
                                                 << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffdffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x11U))))) 
                                                 << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffffbffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x12U))))) 
                                                 << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffff7ffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x13U))))) 
                                                 << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffefffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x14U))))) 
                                                 << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffdfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x15U))))) 
                                                 << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffffbfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x16U))))) 
                                                 << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffff7fffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x17U))))) 
                                                 << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffeffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x18U))))) 
                                                 << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffdffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x19U))))) 
                                                 << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffffbffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x1aU))))) 
                                                 << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffff7ffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x1bU))))) 
                                                 << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffefffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x1cU))))) 
                                                 << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffdfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x1dU))))) 
                                                 << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffffbfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x1eU))))) 
                                                 << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffff7fffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x1fU))))) 
                                                 << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffeffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x20U))))) 
                                                 << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffdffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x21U))))) 
                                                 << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffffbffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x22U))))) 
                                                 << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffff7ffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x23U))))) 
                                                 << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffefffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x24U))))) 
                                                 << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffdfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x25U))))) 
                                                 << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffffbfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x26U))))) 
                                                 << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffff7fffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x27U))))) 
                                                 << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffeffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x28U))))) 
                                                 << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffdffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x29U))))) 
                                                 << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffffbffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x2aU))))) 
                                                 << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffff7ffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x2bU))))) 
                                                 << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffefffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x2cU))))) 
                                                 << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffdfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x2dU))))) 
                                                 << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffffbfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x2eU))))) 
                                                 << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffff7fffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x2fU))))) 
                                                 << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffeffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x30U))))) 
                                                 << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffdffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x31U))))) 
                                                 << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfffbffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x32U))))) 
                                                 << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfff7ffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x33U))))) 
                                                 << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffefffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x34U))))) 
                                                 << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffdfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x35U))))) 
                                                 << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xffbfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x36U))))) 
                                                 << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xff7fffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x37U))))) 
                                                 << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfeffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x38U))))) 
                                                 << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfdffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x39U))))) 
                                                 << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xfbffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x3aU))))) 
                                                 << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xf7ffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x3bU))))) 
                                                 << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xefffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x3cU))))) 
                                                 << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xdfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x3dU))))) 
                                                 << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0xbfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x3eU))))) 
                                                 << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__rdata >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__rdata 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->top__DOT____Vtogcov__rdata = ((0x7fffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__rdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__rdata 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata))))) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data)))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__rdata)))))))));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2139]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lbu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata))))) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data)))) {
        ++(vlSymsp->__Vcoverage[2140]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__rdata)))))))));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2141]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2142]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2143]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2144]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2145]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2146]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2147]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2148]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2149]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2150]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2151]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2152]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__rdata)))) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lhu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rdata)))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)(vlSelf->top__DOT__rdata))) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data)))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(vlSelf->top__DOT__rdata)))))));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2255]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2256]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2257]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2258]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2259]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2260]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2261]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2262]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2263]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2264]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2265]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2266]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2267]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lwu_data) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__memory_inst__DOT__lb_data = (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__rdata 
                                                                                >> 7U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__rdata)))));
    vlSelf->top__DOT__memory_inst__DOT__lh_data = (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__rdata)))));
    vlSelf->top__DOT__memory_inst__DOT__lw_data = (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__rdata)));
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__lb_data) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data)))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__lb_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lb_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__lh_data) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data)))) {
        ++(vlSymsp->__Vcoverage[1948]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__lh_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1949]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1950]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1951]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1952]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1953]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1954]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1955]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1962]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1963]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1964]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1965]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1966]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1967]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1968]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1969]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1970]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1971]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1972]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1973]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1974]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1975]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1976]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1977]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1978]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1979]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1980]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1981]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1982]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1983]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1984]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1985]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1986]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1987]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1988]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1989]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1990]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1991]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1992]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1993]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1994]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1995]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1996]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2001]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2002]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2003]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2004]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2005]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2006]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2007]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2008]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2009]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2010]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2011]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lh_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lh_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__memory_inst__DOT__lw_data) 
               ^ (IData)(vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data)))) {
        ++(vlSymsp->__Vcoverage[2012]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__memory_inst__DOT__lw_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2013]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2014]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2015]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2016]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2017]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2018]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2019]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__memory_inst__DOT__lw_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__memory_inst__DOT____Vtogcov__lw_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2075]);
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
                                         & vlSelf->top__DOT__rdata)) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__lbu))) 
                                        & (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__rdata)))))) 
                                    | ((- (QData)((IData)(vlSelf->top__DOT__lhu))) 
                                       & (QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->top__DOT__rdata)))))) 
                                   | ((- (QData)((IData)(vlSelf->top__DOT__lwu))) 
                                      & (QData)((IData)(vlSelf->top__DOT__rdata))));
    if ((1U & ((IData)(vlSelf->top__DOT__load_data) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__load_data)))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0xfffffffffffffffeULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->top__DOT__load_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__load_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__load_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[636]);
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
        ++(vlSymsp->__Vcoverage[637]);
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
        ++(vlSymsp->__Vcoverage[638]);
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
        ++(vlSymsp->__Vcoverage[639]);
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
        ++(vlSymsp->__Vcoverage[640]);
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
        ++(vlSymsp->__Vcoverage[641]);
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
        ++(vlSymsp->__Vcoverage[642]);
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
        ++(vlSymsp->__Vcoverage[643]);
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
        ++(vlSymsp->__Vcoverage[644]);
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
        ++(vlSymsp->__Vcoverage[645]);
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
        ++(vlSymsp->__Vcoverage[646]);
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
        ++(vlSymsp->__Vcoverage[647]);
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
        ++(vlSymsp->__Vcoverage[648]);
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
        ++(vlSymsp->__Vcoverage[649]);
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
        ++(vlSymsp->__Vcoverage[650]);
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
        ++(vlSymsp->__Vcoverage[651]);
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
        ++(vlSymsp->__Vcoverage[652]);
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
        ++(vlSymsp->__Vcoverage[653]);
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
        ++(vlSymsp->__Vcoverage[654]);
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
        ++(vlSymsp->__Vcoverage[655]);
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
        ++(vlSymsp->__Vcoverage[656]);
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
        ++(vlSymsp->__Vcoverage[657]);
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
        ++(vlSymsp->__Vcoverage[658]);
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
        ++(vlSymsp->__Vcoverage[659]);
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
        ++(vlSymsp->__Vcoverage[660]);
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
        ++(vlSymsp->__Vcoverage[661]);
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
        ++(vlSymsp->__Vcoverage[662]);
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
        ++(vlSymsp->__Vcoverage[663]);
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
        ++(vlSymsp->__Vcoverage[664]);
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
        ++(vlSymsp->__Vcoverage[665]);
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
        ++(vlSymsp->__Vcoverage[666]);
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
        ++(vlSymsp->__Vcoverage[667]);
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
        ++(vlSymsp->__Vcoverage[668]);
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
        ++(vlSymsp->__Vcoverage[669]);
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
        ++(vlSymsp->__Vcoverage[670]);
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
        ++(vlSymsp->__Vcoverage[671]);
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
        ++(vlSymsp->__Vcoverage[672]);
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
        ++(vlSymsp->__Vcoverage[673]);
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
        ++(vlSymsp->__Vcoverage[674]);
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
        ++(vlSymsp->__Vcoverage[675]);
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
        ++(vlSymsp->__Vcoverage[676]);
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
        ++(vlSymsp->__Vcoverage[677]);
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
        ++(vlSymsp->__Vcoverage[678]);
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
        ++(vlSymsp->__Vcoverage[679]);
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
        ++(vlSymsp->__Vcoverage[680]);
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
        ++(vlSymsp->__Vcoverage[681]);
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
        ++(vlSymsp->__Vcoverage[682]);
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
        ++(vlSymsp->__Vcoverage[683]);
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
        ++(vlSymsp->__Vcoverage[684]);
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
        ++(vlSymsp->__Vcoverage[685]);
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
        ++(vlSymsp->__Vcoverage[686]);
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
        ++(vlSymsp->__Vcoverage[687]);
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
        ++(vlSymsp->__Vcoverage[688]);
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
        ++(vlSymsp->__Vcoverage[689]);
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
        ++(vlSymsp->__Vcoverage[690]);
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
        ++(vlSymsp->__Vcoverage[691]);
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
        ++(vlSymsp->__Vcoverage[692]);
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
        ++(vlSymsp->__Vcoverage[693]);
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
        ++(vlSymsp->__Vcoverage[694]);
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
        ++(vlSymsp->__Vcoverage[695]);
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
        ++(vlSymsp->__Vcoverage[696]);
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
        ++(vlSymsp->__Vcoverage[697]);
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
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->top__DOT____Vtogcov__load_data = ((0x7fffffffffffffffULL 
                                                   & vlSelf->top__DOT____Vtogcov__load_data) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__load_data 
                                                                                >> 0x3fU))))) 
                                                     << 0x3fU));
    }
    vlSelf->top__DOT__regfile_inst__DOT__wb_data = 
        ((((- (QData)((IData)((3U == (0x7fU & vlSelf->instr))))) 
           & vlSelf->top__DOT__load_data) | ((- (QData)((IData)(vlSelf->top__DOT__wb_pc))) 
                                             & vlSelf->snxt_pc)) 
         | ((- (QData)((IData)(vlSelf->top__DOT__wb_alu))) 
            & vlSelf->top__DOT__result));
    if ((1U & ((IData)(vlSelf->top__DOT__regfile_inst__DOT__wb_data) 
               ^ (IData)(vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data)))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__regfile_inst__DOT__wb_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__regfile_inst__DOT____Vtogcov__wb_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__regfile_inst__DOT__wb_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}
