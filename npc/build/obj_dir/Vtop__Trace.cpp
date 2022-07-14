// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__imm),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__result),64);
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__br_asrt));
            tracep->chgQData(oldp+5,(vlSelf->top__DOT__rd_data2),64);
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__I_type));
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__U_type));
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__lgc_op),4);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__wlgc_op),5);
            tracep->chgBit(oldp+11,((0ULL == vlSelf->top__DOT__result)));
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__sb));
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__sh));
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__sw));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__sd));
            tracep->chgQData(oldp+16,((0xfffffffffffffffeULL 
                                       & vlSelf->top__DOT__result)),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__regfile_inst__DOT__wb_data),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__alu_inst__DOT__opdata1),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__alu_inst__DOT__opdata2),64);
            tracep->chgIData(oldp+24,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata1)),32);
            tracep->chgIData(oldp+25,((IData)(vlSelf->top__DOT__alu_inst__DOT__opdata2)),32);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__alu_inst__DOT__lgc_result),64);
            tracep->chgIData(oldp+28,(vlSelf->top__DOT__alu_inst__DOT__wlgc_result),32);
            tracep->chgBit(oldp+29,(((((IData)(vlSelf->top__DOT__sb) 
                                       | (IData)(vlSelf->top__DOT__sh)) 
                                      | (IData)(vlSelf->top__DOT__sw)) 
                                     | (IData)(vlSelf->top__DOT__sd))));
            tracep->chgBit(oldp+30,((((IData)(vlSelf->top__DOT__sh) 
                                      | (IData)(vlSelf->top__DOT__sw)) 
                                     | (IData)(vlSelf->top__DOT__sd))));
            tracep->chgBit(oldp+31,(((IData)(vlSelf->top__DOT__sw) 
                                     | (IData)(vlSelf->top__DOT__sd))));
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__memory_inst__DOT__wr_en));
            tracep->chgSData(oldp+33,((0x1fffU & (IData)(
                                                         (vlSelf->top__DOT__result 
                                                          >> 3U)))),13);
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__controlor_inst__DOT__immop_en));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__controlor_inst__DOT__immsf_en));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__controlor_inst__DOT__R_type));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__memory_inst__DOT__rdata),64);
            tracep->chgQData(oldp+41,((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                       >> 7U)))))) 
                                        << 8U) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))),64);
            tracep->chgQData(oldp+43,((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                       >> 0xfU)))))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))),64);
            tracep->chgQData(oldp+45,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))),64);
            tracep->chgQData(oldp+47,((QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))),64);
            tracep->chgQData(oldp+49,((QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))),64);
            tracep->chgQData(oldp+51,((QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))),64);
            tracep->chgCData(oldp+53,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata1),8);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata2),8);
            tracep->chgSData(oldp+55,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata3),16);
            tracep->chgIData(oldp+56,(vlSelf->top__DOT__memory_inst__DOT__ram_inst__DOT__rdata4),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__regfile_inst__DOT__gpr[31]),64);
            tracep->chgIData(oldp+121,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        }
        tracep->chgBit(oldp+122,(vlSelf->clk));
        tracep->chgBit(oldp+123,(vlSelf->rstn));
        tracep->chgBit(oldp+124,(vlSelf->ebreak));
        tracep->chgQData(oldp+125,(vlSelf->dnxt_pc),64);
        tracep->chgQData(oldp+127,(vlSelf->pc),64);
        tracep->chgIData(oldp+129,(vlSelf->inst),32);
        tracep->chgBit(oldp+130,((0x19U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgBit(oldp+131,((0x1bU == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgQData(oldp+132,((4ULL + vlSelf->pc)),64);
        tracep->chgBit(oldp+134,((((((((((((0xdU == 
                                            (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))) 
                                           | (5U == 
                                              (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U)))) 
                                          | (0x1bU 
                                             == (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 2U)))) 
                                         | (0x19U == 
                                            (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                        | (0U == (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 2U)))) 
                                       | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en)) 
                                      | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                     | (0xcU == (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 2U)))) 
                                    | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en)) 
                                   | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en)) 
                                  | (0xeU == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))))));
        tracep->chgBit(oldp+135,((0U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+136,(((0x1bU == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U))) 
                                  | (0x19U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->chgBit(oldp+137,(((((((((5U == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U))) 
                                        | (0xdU == 
                                           (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))) 
                                       | (0xcU == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 2U)))) 
                                      | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en)) 
                                     | (IData)(vlSelf->top__DOT__controlor_inst__DOT__immsf_en)) 
                                    | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en)) 
                                   | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en)) 
                                  | (0xeU == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))))));
        tracep->chgQData(oldp+138,(((((((((- (QData)((IData)(
                                                             (0U 
                                                              == 
                                                              (0x707cU 
                                                               & vlSelf->inst))))) 
                                          & (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                             >> 7U)))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))) 
                                         | ((- (QData)((IData)(
                                                               (0x1000U 
                                                                == 
                                                                (0x707cU 
                                                                 & vlSelf->inst))))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                               >> 0xfU)))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))))) 
                                        | ((- (QData)((IData)(
                                                              (0x2000U 
                                                               == 
                                                               (0x707cU 
                                                                & vlSelf->inst))))) 
                                           & (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__memory_inst__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))) 
                                       | ((- (QData)((IData)(
                                                             (0x3000U 
                                                              == 
                                                              (0x707cU 
                                                               & vlSelf->inst))))) 
                                          & vlSelf->top__DOT__memory_inst__DOT__rdata)) 
                                      | ((- (QData)((IData)(
                                                            (0x4000U 
                                                             == 
                                                             (0x707cU 
                                                              & vlSelf->inst))))) 
                                         & (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))) 
                                     | ((- (QData)((IData)(
                                                           (0x5000U 
                                                            == 
                                                            (0x707cU 
                                                             & vlSelf->inst))))) 
                                        & (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->top__DOT__memory_inst__DOT__rdata)))))) 
                                    | ((- (QData)((IData)(
                                                          (0x6000U 
                                                           == 
                                                           (0x707cU 
                                                            & vlSelf->inst))))) 
                                       & (QData)((IData)(vlSelf->top__DOT__memory_inst__DOT__rdata))))),64);
        tracep->chgQData(oldp+140,(((0U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0xfU)))
                                     ? 0ULL : vlSelf->top__DOT__regfile_inst__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))])),64);
        tracep->chgBit(oldp+142,((8U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+143,((0x18U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U)))));
        tracep->chgBit(oldp+144,(((((IData)(vlSelf->top__DOT__I_type) 
                                    | (IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type)) 
                                   | (8U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                  | (0x18U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->chgBit(oldp+145,(((5U == (0x1fU & (vlSelf->inst 
                                                   >> 2U))) 
                                  | (0x1bU == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->chgBit(oldp+146,((((IData)(vlSelf->top__DOT__controlor_inst__DOT__R_type) 
                                   | (8U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                  | (0x18U == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->chgBit(oldp+147,(((((IData)(vlSelf->top__DOT__I_type) 
                                    | (8U == (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U)))) 
                                   | (IData)(vlSelf->top__DOT__U_type)) 
                                  | (0x1bU == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U))))));
        tracep->chgBit(oldp+148,((((((((((IData)(vlSelf->top__DOT__controlor_inst__DOT__immop_en) 
                                         | (0xcU == 
                                            (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
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
                                   | (0U == (0x1fU 
                                             & (vlSelf->inst 
                                                >> 2U)))) 
                                  | (8U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 2U))))));
        tracep->chgBit(oldp+149,((((IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmop_en) 
                                   | (0xeU == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 2U)))) 
                                  | (IData)(vlSelf->top__DOT__controlor_inst__DOT__wimmsf_en))));
        tracep->chgCData(oldp+150,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgBit(oldp+151,((IData)((0U == (0x707cU 
                                                 & vlSelf->inst)))));
        tracep->chgBit(oldp+152,((IData)((0x1000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+153,((IData)((0x2000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+154,((IData)((0x3000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+155,((IData)((0x4000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+156,((IData)((0x5000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+157,((IData)((0x6000U == 
                                          (0x707cU 
                                           & vlSelf->inst)))));
        tracep->chgQData(oldp+158,((vlSelf->pc + vlSelf->top__DOT__imm)),64);
        tracep->chgBit(oldp+160,((((0x19U != (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 2U))) 
                                   & (0x19U != (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 2U)))) 
                                  & (~ (IData)(vlSelf->top__DOT__br_asrt)))));
        tracep->chgCData(oldp+161,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+162,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+163,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgQData(oldp+164,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                (0x7ffU 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U)))))),64);
        tracep->chgQData(oldp+166,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                ((0x7e0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+168,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->inst 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->inst 
                                                                          >> 7U)))))))),64);
        tracep->chgQData(oldp+170,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x1fU) | (QData)((IData)(
                                                                 (0x7ffff000U 
                                                                  & vlSelf->inst))))),64);
        tracep->chgQData(oldp+172,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 ((0xff000U 
                                                                   & vlSelf->inst) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->inst 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U)))))))),64);
        tracep->chgBit(oldp+174,(((0x4000U & vlSelf->inst)
                                   ? ((0x2000U & vlSelf->inst)
                                       ? ((0x1000U 
                                           & vlSelf->inst)
                                           ? (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                              >= vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                           : (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                              < vlSelf->top__DOT__alu_inst__DOT__opdata2))
                                       : ((0x1000U 
                                           & vlSelf->inst)
                                           ? VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                           : VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__alu_inst__DOT__opdata1, vlSelf->top__DOT__alu_inst__DOT__opdata2)))
                                   : ((~ (vlSelf->inst 
                                          >> 0xdU)) 
                                      & ((0x1000U & vlSelf->inst)
                                          ? (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                             != vlSelf->top__DOT__alu_inst__DOT__opdata2)
                                          : (vlSelf->top__DOT__alu_inst__DOT__opdata1 
                                             == vlSelf->top__DOT__alu_inst__DOT__opdata2))))));
        tracep->chgCData(oldp+175,((0x1fU & (vlSelf->inst 
                                             >> 2U))),5);
        tracep->chgCData(oldp+176,((vlSelf->inst >> 0x19U)),7);
        tracep->chgBit(oldp+177,((0xdU == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))));
        tracep->chgBit(oldp+178,((5U == (0x1fU & (vlSelf->inst 
                                                  >> 2U)))));
        tracep->chgBit(oldp+179,((0xcU == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))));
        tracep->chgBit(oldp+180,((0xeU == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 2U)))));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    }
}
