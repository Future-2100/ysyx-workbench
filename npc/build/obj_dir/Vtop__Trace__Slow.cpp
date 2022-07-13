// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+64,"clk", false,-1);
        tracep->declBit(c+65,"rstn", false,-1);
        tracep->declQuad(c+66,"pc", false,-1, 63,0);
        tracep->declBus(c+68,"inst", false,-1, 31,0);
        tracep->declQuad(c+69,"gpr1", false,-1, 63,0);
        tracep->declBit(c+71,"ebreak", false,-1);
        tracep->declBit(c+64,"top clk", false,-1);
        tracep->declBit(c+65,"top rstn", false,-1);
        tracep->declQuad(c+66,"top pc", false,-1, 63,0);
        tracep->declBus(c+68,"top inst", false,-1, 31,0);
        tracep->declQuad(c+69,"top gpr1", false,-1, 63,0);
        tracep->declBit(c+71,"top ebreak", false,-1);
        tracep->declQuad(c+72,"top rdata1", false,-1, 63,0);
        tracep->declQuad(c+74,"top rdata2", false,-1, 63,0);
        tracep->declBit(c+76,"top wen", false,-1);
        tracep->declQuad(c+77,"top wdata", false,-1, 63,0);
        tracep->declBit(c+76,"top I_type", false,-1);
        tracep->declQuad(c+79,"top imm", false,-1, 63,0);
        tracep->declBit(c+76,"top imm_en", false,-1);
        tracep->declBus(c+81,"top alu_op", false,-1, 3,0);
        tracep->declQuad(c+77,"top result", false,-1, 63,0);
        tracep->declBit(c+82,"top zero", false,-1);
        tracep->declBit(c+64,"top pc_gen_inst clk", false,-1);
        tracep->declBit(c+65,"top pc_gen_inst rstn", false,-1);
        tracep->declQuad(c+66,"top pc_gen_inst pc", false,-1, 63,0);
        tracep->declBit(c+64,"top regfile_inst clk", false,-1);
        tracep->declBit(c+65,"top regfile_inst rstn", false,-1);
        tracep->declBus(c+83,"top regfile_inst raddr1", false,-1, 4,0);
        tracep->declQuad(c+72,"top regfile_inst rdata1", false,-1, 63,0);
        tracep->declBus(c+84,"top regfile_inst raddr2", false,-1, 4,0);
        tracep->declQuad(c+74,"top regfile_inst rdata2", false,-1, 63,0);
        tracep->declBit(c+76,"top regfile_inst wen", false,-1);
        tracep->declBus(c+85,"top regfile_inst waddr", false,-1, 4,0);
        tracep->declQuad(c+77,"top regfile_inst wdata", false,-1, 63,0);
        tracep->declQuad(c+69,"top regfile_inst gpr1", false,-1, 63,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declQuad(c+1+i*2,"top regfile_inst gpr", true,(i+1), 63,0);}}
        tracep->declBus(c+63,"top regfile_inst i", false,-1, 31,0);
        tracep->declBit(c+76,"top imm_gen_inst I_type", false,-1);
        tracep->declBus(c+68,"top imm_gen_inst inst", false,-1, 31,0);
        tracep->declQuad(c+79,"top imm_gen_inst imm", false,-1, 63,0);
        tracep->declQuad(c+86,"top imm_gen_inst imm_I", false,-1, 63,0);
        tracep->declQuad(c+72,"top alu_inst rsdata1", false,-1, 63,0);
        tracep->declBit(c+76,"top alu_inst imm_en", false,-1);
        tracep->declQuad(c+74,"top alu_inst rsdata2", false,-1, 63,0);
        tracep->declQuad(c+79,"top alu_inst imm", false,-1, 63,0);
        tracep->declBus(c+81,"top alu_inst alu_op", false,-1, 3,0);
        tracep->declQuad(c+77,"top alu_inst result", false,-1, 63,0);
        tracep->declBit(c+82,"top alu_inst zero", false,-1);
        tracep->declQuad(c+72,"top alu_inst opdata1", false,-1, 63,0);
        tracep->declQuad(c+88,"top alu_inst opdata2", false,-1, 63,0);
        tracep->declBus(c+68,"top controlor_inst inst", false,-1, 31,0);
        tracep->declBit(c+76,"top controlor_inst imm_en", false,-1);
        tracep->declBit(c+76,"top controlor_inst I_type", false,-1);
        tracep->declBit(c+76,"top controlor_inst wen", false,-1);
        tracep->declBus(c+81,"top controlor_inst alu_op", false,-1, 3,0);
        tracep->declBit(c+71,"top controlor_inst ebreak", false,-1);
        tracep->declBus(c+90,"top controlor_inst opcode", false,-1, 6,0);
        tracep->declBus(c+91,"top controlor_inst funct3", false,-1, 2,0);
        tracep->declBus(c+92,"top controlor_inst funct7", false,-1, 6,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__regfile_inst__DOT__gpr[0]),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__regfile_inst__DOT__gpr[1]),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__regfile_inst__DOT__gpr[2]),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__regfile_inst__DOT__gpr[3]),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__regfile_inst__DOT__gpr[4]),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__regfile_inst__DOT__gpr[5]),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__regfile_inst__DOT__gpr[6]),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__regfile_inst__DOT__gpr[7]),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__regfile_inst__DOT__gpr[8]),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__regfile_inst__DOT__gpr[9]),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__regfile_inst__DOT__gpr[10]),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__regfile_inst__DOT__gpr[11]),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__regfile_inst__DOT__gpr[12]),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__regfile_inst__DOT__gpr[13]),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__regfile_inst__DOT__gpr[14]),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__regfile_inst__DOT__gpr[15]),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__regfile_inst__DOT__gpr[16]),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__regfile_inst__DOT__gpr[17]),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__regfile_inst__DOT__gpr[18]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__regfile_inst__DOT__gpr[19]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__regfile_inst__DOT__gpr[20]),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__regfile_inst__DOT__gpr[21]),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__regfile_inst__DOT__gpr[22]),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__regfile_inst__DOT__gpr[23]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__regfile_inst__DOT__gpr[24]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__regfile_inst__DOT__gpr[25]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__regfile_inst__DOT__gpr[26]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__regfile_inst__DOT__gpr[27]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__regfile_inst__DOT__gpr[28]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__regfile_inst__DOT__gpr[29]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__regfile_inst__DOT__gpr[30]),64);
        tracep->fullIData(oldp+63,(vlSelf->top__DOT__regfile_inst__DOT__i),32);
        tracep->fullBit(oldp+64,(vlSelf->clk));
        tracep->fullBit(oldp+65,(vlSelf->rstn));
        tracep->fullQData(oldp+66,(vlSelf->pc),64);
        tracep->fullIData(oldp+68,(vlSelf->inst),32);
        tracep->fullQData(oldp+69,(vlSelf->gpr1),64);
        tracep->fullBit(oldp+71,(vlSelf->ebreak));
        tracep->fullQData(oldp+72,(((0U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0xfU)))
                                     ? 0ULL : ((0x1eU 
                                                >= 
                                                (0x1fU 
                                                 & ((vlSelf->inst 
                                                     >> 0xfU) 
                                                    - (IData)(1U))))
                                                ? vlSelf->top__DOT__regfile_inst__DOT__gpr
                                               [(0x1fU 
                                                 & ((vlSelf->inst 
                                                     >> 0xfU) 
                                                    - (IData)(1U)))]
                                                : 0ULL))),64);
        tracep->fullQData(oldp+74,(((0U == (0x1fU & 
                                            (vlSelf->inst 
                                             >> 0x14U)))
                                     ? 0ULL : ((0x1eU 
                                                >= 
                                                (0x1fU 
                                                 & ((vlSelf->inst 
                                                     >> 0x14U) 
                                                    - (IData)(1U))))
                                                ? vlSelf->top__DOT__regfile_inst__DOT__gpr
                                               [(0x1fU 
                                                 & ((vlSelf->inst 
                                                     >> 0x14U) 
                                                    - (IData)(1U)))]
                                                : 0ULL))),64);
        tracep->fullBit(oldp+76,((0x13U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->fullQData(oldp+77,(((- (QData)((IData)(
                                                       (0U 
                                                        == 
                                                        (7U 
                                                         & ((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (vlSelf->inst 
                                                                         >> 0x19U)))) 
                                                            & vlSelf->inst)))))) 
                                    & (((0U == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 0xfU)))
                                         ? 0ULL : (
                                                   (0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & ((vlSelf->inst 
                                                         >> 0xfU) 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->top__DOT__regfile_inst__DOT__gpr
                                                   [
                                                   (0x1fU 
                                                    & ((vlSelf->inst 
                                                        >> 0xfU) 
                                                       - (IData)(1U)))]
                                                    : 0ULL)) 
                                       + ((0x13U == 
                                           (vlSelf->inst 
                                            >> 0x19U))
                                           ? ((- (QData)((IData)(
                                                                 (0x13U 
                                                                  == 
                                                                  (vlSelf->inst 
                                                                   >> 0x19U))))) 
                                              & (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->inst 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))) 
                                                                     << 0xbU) 
                                                                    | (0x7ffU 
                                                                       & (vlSelf->inst 
                                                                          >> 0x14U)))))))
                                           : ((0U == 
                                               (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 0x14U)))
                                               ? 0ULL
                                               : ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & ((vlSelf->inst 
                                                        >> 0x14U) 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelf->top__DOT__regfile_inst__DOT__gpr
                                                  [
                                                  (0x1fU 
                                                   & ((vlSelf->inst 
                                                       >> 0x14U) 
                                                      - (IData)(1U)))]
                                                   : 0ULL)))))),64);
        tracep->fullQData(oldp+79,(((- (QData)((IData)(
                                                       (0x13U 
                                                        == 
                                                        (vlSelf->inst 
                                                         >> 0x19U))))) 
                                    & (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->inst 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (((- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))) 
                                                                      << 0xbU) 
                                                                     | (0x7ffU 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U)))))))),64);
        tracep->fullCData(oldp+81,((7U & ((- (IData)(
                                                     (0x13U 
                                                      == 
                                                      (vlSelf->inst 
                                                       >> 0x19U)))) 
                                          & vlSelf->inst))),4);
        tracep->fullBit(oldp+82,((0ULL == ((- (QData)((IData)(
                                                              (0U 
                                                               == 
                                                               (7U 
                                                                & ((- (IData)(
                                                                              (0x13U 
                                                                               == 
                                                                               (vlSelf->inst 
                                                                                >> 0x19U)))) 
                                                                   & vlSelf->inst)))))) 
                                           & (((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0xfU)))
                                                ? 0ULL
                                                : (
                                                   (0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & ((vlSelf->inst 
                                                         >> 0xfU) 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->top__DOT__regfile_inst__DOT__gpr
                                                   [
                                                   (0x1fU 
                                                    & ((vlSelf->inst 
                                                        >> 0xfU) 
                                                       - (IData)(1U)))]
                                                    : 0ULL)) 
                                              + ((0x13U 
                                                  == 
                                                  (vlSelf->inst 
                                                   >> 0x19U))
                                                  ? 
                                                 ((- (QData)((IData)(
                                                                     (0x13U 
                                                                      == 
                                                                      (vlSelf->inst 
                                                                       >> 0x19U))))) 
                                                  & (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))) 
                                                                         << 0xbU) 
                                                                        | (0x7ffU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))))))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 0x14U)))
                                                   ? 0ULL
                                                   : 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & ((vlSelf->inst 
                                                         >> 0x14U) 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->top__DOT__regfile_inst__DOT__gpr
                                                   [
                                                   (0x1fU 
                                                    & ((vlSelf->inst 
                                                        >> 0x14U) 
                                                       - (IData)(1U)))]
                                                    : 0ULL))))))));
        tracep->fullCData(oldp+83,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+84,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+85,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullQData(oldp+86,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((- (IData)(
                                                                              (vlSelf->inst 
                                                                               >> 0x1fU))) 
                                                                   << 0xbU) 
                                                                  | (0x7ffU 
                                                                     & (vlSelf->inst 
                                                                        >> 0x14U))))))),64);
        tracep->fullQData(oldp+88,(((0x13U == (vlSelf->inst 
                                               >> 0x19U))
                                     ? ((- (QData)((IData)(
                                                           (0x13U 
                                                            == 
                                                            (vlSelf->inst 
                                                             >> 0x19U))))) 
                                        & (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((- (IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x1fU))) 
                                                               << 0xbU) 
                                                              | (0x7ffU 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U)))))))
                                     : ((0U == (0x1fU 
                                                & (vlSelf->inst 
                                                   >> 0x14U)))
                                         ? 0ULL : (
                                                   (0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & ((vlSelf->inst 
                                                         >> 0x14U) 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->top__DOT__regfile_inst__DOT__gpr
                                                   [
                                                   (0x1fU 
                                                    & ((vlSelf->inst 
                                                        >> 0x14U) 
                                                       - (IData)(1U)))]
                                                    : 0ULL)))),64);
        tracep->fullCData(oldp+90,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+91,((7U & vlSelf->inst)),3);
        tracep->fullCData(oldp+92,((vlSelf->inst >> 0x19U)),7);
    }
}
