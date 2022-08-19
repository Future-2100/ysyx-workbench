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
            tracep->chgIData(oldp+0,(vlSelf->top__DOT__instr),32);
            tracep->chgBit(oldp+1,(vlSelf->top__DOT__instr_valid));
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__jump_en));
            tracep->chgQData(oldp+3,(vlSelf->top__DOT__exu_alu_result),64);
            tracep->chgQData(oldp+5,(vlSelf->top__DOT__ifu_pc),64);
            tracep->chgIData(oldp+7,(vlSelf->top__DOT__ifu_instr),32);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__ifu_snxt_pc),64);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__ifu_valid));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__hazard_nop));
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__need_rs1));
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__need_rs2));
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__mmu_wb_data),64);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__mmu_index_rd),5);
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__mmu_wb_en));
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__idu_index_rs1),5);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__idu_index_rs2),5);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__idu_index_rd),5);
            tracep->chgIData(oldp+21,(vlSelf->top__DOT__idu_instr),32);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__idu_funct3),3);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__idu_funct7),7);
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__idu_valid));
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__idu_snxt_pc),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__idu_pc),64);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__idu_data_rs1),64);
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__idu_imm),64);
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__idu_data_rs2),64);
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__idu_add_pc_en));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__idu_add_rs1_en));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__idu_add_zero_en));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__idu_imm_en));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__idu_rs2_en));
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__idu_addop_en));
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__idu_iop_en));
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__idu_rop_en));
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__idu_mop_en));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__idu_iwop_en));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__idu_rwop_en));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__idu_mwop_en));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__idu_jal_en));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__idu_jalr_en));
            tracep->chgBit(oldp+49,(vlSelf->top__DOT__idu_branch_en));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__idu_load_en));
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__idu_store_en));
            tracep->chgBit(oldp+52,(vlSelf->top__DOT__idu_wb_alu_en));
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__idu_ebreak_en));
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__fwd_en_1));
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__fwd_en_2));
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__fwd_data_rs1),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__fwd_data_rs2),64);
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__exu_jal_en));
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__exu_jalr_en));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__exu_branch_en));
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__exu_br_result));
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__exu_snxt_pc),64);
            tracep->chgBit(oldp+66,(vlSelf->top__DOT__exu_load_en));
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__exu_store_en));
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__exu_funct3),3);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__exu_data_rs2),64);
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__exu_wb_alu_en));
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__exu_wb_spc_en));
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__exu_wb_en));
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__exu_ebreak_en));
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__exu_index_rd),5);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__exu_pc),64);
            tracep->chgIData(oldp+78,(vlSelf->top__DOT__exu_instr),32);
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__exu_valid));
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__mmu_valid));
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__mmu_ebreak_en));
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__mmu_pc),64);
            tracep->chgIData(oldp+84,(vlSelf->top__DOT__mmu_instr),32);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__mm_wlen),4);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__mm_rdata),64);
            tracep->chgBit(oldp+88,(vlSelf->top__DOT__axi_interface_inst__DOT__delay_rstn));
            tracep->chgCData(oldp+89,(vlSelf->top__DOT__axi_interface_inst__DOT__cstate),2);
            tracep->chgCData(oldp+90,((0x1fU & (vlSelf->top__DOT__ifu_instr 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+91,((0x1fU & (vlSelf->top__DOT__ifu_instr 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+92,((0x1fU & (vlSelf->top__DOT__ifu_instr 
                                                >> 7U))),5);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__idu_inst__DOT__gpr_data_rs1),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__idu_inst__DOT__gpr_data_rs2),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__idu_inst__DOT__data_rs1),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__idu_inst__DOT__data_rs2),64);
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__idu_inst__DOT__wbfwd_en1));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__idu_inst__DOT__wbfwd_en2));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__idu_inst__DOT__I_type));
            tracep->chgBit(oldp+104,(vlSelf->top__DOT__idu_inst__DOT__store_en));
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__idu_inst__DOT__branch_en));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__idu_inst__DOT__U_type));
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__idu_inst__DOT__jal_en));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__idu_inst__DOT__add_pc_en));
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__idu_inst__DOT__add_rs1_en));
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__lui_en));
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__idu_inst__DOT__imm_en));
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__idu_inst__DOT__rs2_en));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__idu_inst__DOT__addop_en));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__idu_inst__DOT__iop_en));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__idu_inst__DOT__iwop_en));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__idu_inst__DOT__rop_en));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__idu_inst__DOT__rwop_en));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__idu_inst__DOT__mop_en));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__idu_inst__DOT__mwop_en));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__idu_inst__DOT__jalr_en));
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__idu_inst__DOT__load_en));
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__idu_inst__DOT__wb_alu_en));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__idu_inst__DOT__ebreak_en));
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__idu_inst__DOT__imm),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[1]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[2]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[3]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[4]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[5]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[6]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[7]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[8]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[9]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[10]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[11]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[12]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[13]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[14]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[15]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[16]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[17]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[18]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[19]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[20]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[21]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[22]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[23]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[24]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[25]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[26]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[27]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[28]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[29]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[30]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[31]),64);
            tracep->chgIData(oldp+190,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__i),32);
            tracep->chgCData(oldp+191,((0x7fU & vlSelf->top__DOT__ifu_instr)),7);
            tracep->chgCData(oldp+192,((7U & (vlSelf->top__DOT__ifu_instr 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+193,((vlSelf->top__DOT__ifu_instr 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+194,((3U == (3U & vlSelf->top__DOT__ifu_instr))));
            tracep->chgBit(oldp+195,((0U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+196,((1U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+197,((2U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+198,((3U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+199,((4U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+200,((5U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+201,((6U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+202,((7U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+203,((0U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 5U)))));
            tracep->chgBit(oldp+204,((1U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 5U)))));
            tracep->chgBit(oldp+205,((2U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 5U)))));
            tracep->chgBit(oldp+206,((3U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 5U)))));
            tracep->chgBit(oldp+207,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__auipc_en));
            tracep->chgBit(oldp+208,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__addi_en));
            tracep->chgBit(oldp+209,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__add_en));
            tracep->chgBit(oldp+210,(((IData)(vlSelf->top__DOT__idu_inst__DOT__rop_en) 
                                      | (IData)(vlSelf->top__DOT__idu_inst__DOT__iop_en))));
            tracep->chgBit(oldp+211,(((IData)(vlSelf->top__DOT__idu_inst__DOT__rwop_en) 
                                      | (IData)(vlSelf->top__DOT__idu_inst__DOT__iwop_en))));
            tracep->chgBit(oldp+212,(vlSelf->top__DOT__exu_inst__DOT__wb_spc_en));
            tracep->chgBit(oldp+213,(vlSelf->top__DOT__exu_inst__DOT__wb_en));
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__exu_inst__DOT__data_rs1),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__exu_inst__DOT__data_rs2),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__exu_inst__DOT__alu_result),64);
            tracep->chgBit(oldp+220,(vlSelf->top__DOT__exu_inst__DOT__br_result));
            tracep->chgBit(oldp+221,((1U & ((IData)(vlSelf->top__DOT__idu_funct7) 
                                            >> 5U))));
            tracep->chgIData(oldp+222,((IData)(vlSelf->top__DOT__exu_inst__DOT__data_rs1)),32);
            tracep->chgIData(oldp+223,((IData)(vlSelf->top__DOT__exu_inst__DOT__data_rs2)),32);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_1),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2),64);
            tracep->chgIData(oldp+228,((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)),32);
            tracep->chgBit(oldp+229,((0U == (IData)(vlSelf->top__DOT__idu_funct3))));
            tracep->chgBit(oldp+230,((1U == (IData)(vlSelf->top__DOT__idu_funct3))));
            tracep->chgBit(oldp+231,((2U == (IData)(vlSelf->top__DOT__idu_funct3))));
            tracep->chgBit(oldp+232,((3U == (IData)(vlSelf->top__DOT__idu_funct3))));
            tracep->chgBit(oldp+233,((4U == (IData)(vlSelf->top__DOT__idu_funct3))));
            tracep->chgBit(oldp+234,((5U == (IData)(vlSelf->top__DOT__idu_funct3))));
            tracep->chgBit(oldp+235,((6U == (IData)(vlSelf->top__DOT__idu_funct3))));
            tracep->chgBit(oldp+236,((7U == (IData)(vlSelf->top__DOT__idu_funct3))));
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__sum),64);
            tracep->chgWData(oldp+239,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss),128);
            tracep->chgWData(oldp+243,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su),128);
            tracep->chgQData(oldp+247,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U])))),64);
            tracep->chgQData(oldp+249,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U])))),64);
            tracep->chgQData(oldp+251,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U])))),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_div),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_divu),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_rem),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__m_result),64);
            tracep->chgIData(oldp+261,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_mulw),32);
            tracep->chgIData(oldp+262,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_divw),32);
            tracep->chgIData(oldp+263,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_divuw),32);
            tracep->chgIData(oldp+264,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_remw),32);
            tracep->chgIData(oldp+265,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_remuw),32);
            tracep->chgIData(oldp+266,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result),32);
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll),64);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu),64);
            tracep->chgQData(oldp+275,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor),64);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl),64);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and),64);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result),64);
            tracep->chgIData(oldp+287,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add),32);
            tracep->chgIData(oldp+288,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub),32);
            tracep->chgIData(oldp+289,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll),32);
            tracep->chgIData(oldp+290,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl),32);
            tracep->chgIData(oldp+291,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra),32);
            tracep->chgBit(oldp+292,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__addiw_en));
            tracep->chgBit(oldp+293,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__addw_en));
            tracep->chgBit(oldp+294,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__subw_en));
            tracep->chgIData(oldp+295,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result),32);
            tracep->chgQData(oldp+296,(vlSelf->top__DOT__mmu_inst__DOT__load_data),64);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_result),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc),64);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data),64);
            tracep->chgBit(oldp+304,(vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_alu_en));
            tracep->chgBit(oldp+305,(vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_spc_en));
            tracep->chgBit(oldp+306,(vlSelf->top__DOT__mmu_inst__DOT__mmu_load_en));
            tracep->chgBit(oldp+307,((0U == (IData)(vlSelf->top__DOT__exu_funct3))));
            tracep->chgBit(oldp+308,((1U == (IData)(vlSelf->top__DOT__exu_funct3))));
            tracep->chgBit(oldp+309,((2U == (IData)(vlSelf->top__DOT__exu_funct3))));
            tracep->chgBit(oldp+310,((3U == (IData)(vlSelf->top__DOT__exu_funct3))));
            tracep->chgBit(oldp+311,((4U == (IData)(vlSelf->top__DOT__exu_funct3))));
            tracep->chgBit(oldp+312,((5U == (IData)(vlSelf->top__DOT__exu_funct3))));
            tracep->chgBit(oldp+313,((6U == (IData)(vlSelf->top__DOT__exu_funct3))));
            tracep->chgBit(oldp+314,((7U == (IData)(vlSelf->top__DOT__exu_funct3))));
            tracep->chgBit(oldp+315,(vlSelf->top__DOT__hazard_inst__DOT__hazard_rs1));
            tracep->chgBit(oldp+316,(vlSelf->top__DOT__hazard_inst__DOT__hazard_rs2));
            tracep->chgBit(oldp+317,(vlSelf->top__DOT__forward_inst__DOT__ex_forward_1));
            tracep->chgBit(oldp+318,(vlSelf->top__DOT__forward_inst__DOT__ex_forward_2));
            tracep->chgBit(oldp+319,(vlSelf->top__DOT__forward_inst__DOT__mm_forward_1));
            tracep->chgBit(oldp+320,(vlSelf->top__DOT__forward_inst__DOT__mm_forward_2));
        }
        tracep->chgBit(oldp+321,(vlSelf->clk));
        tracep->chgBit(oldp+322,(vlSelf->rstn));
        tracep->chgQData(oldp+323,(vlSelf->pc),64);
        tracep->chgQData(oldp+325,(vlSelf->snxt_pc),64);
        tracep->chgQData(oldp+327,(vlSelf->dnxt_pc),64);
        tracep->chgBit(oldp+329,(vlSelf->this_ebreak));
        tracep->chgBit(oldp+330,(vlSelf->this_valid));
        tracep->chgQData(oldp+331,(vlSelf->this_pc),64);
        tracep->chgIData(oldp+333,(vlSelf->this_instr),32);
        tracep->chgCData(oldp+334,(vlSelf->ARID),4);
        tracep->chgQData(oldp+335,(vlSelf->ARADDR),64);
        tracep->chgCData(oldp+337,(vlSelf->ARLEN),8);
        tracep->chgCData(oldp+338,(vlSelf->ARSIZE),3);
        tracep->chgCData(oldp+339,(vlSelf->ARBURST),2);
        tracep->chgCData(oldp+340,(vlSelf->ARPORT),3);
        tracep->chgBit(oldp+341,(vlSelf->ARVALID));
        tracep->chgBit(oldp+342,(vlSelf->ARREADY));
        tracep->chgQData(oldp+343,(vlSelf->RDATA),64);
        tracep->chgCData(oldp+345,(vlSelf->RRESP),2);
        tracep->chgBit(oldp+346,(vlSelf->RVALID));
        tracep->chgBit(oldp+347,(vlSelf->RREADY));
        tracep->chgBit(oldp+348,(vlSelf->top__DOT__axi_interface_inst__DOT__posedge_rstn));
        tracep->chgCData(oldp+349,(vlSelf->top__DOT__axi_interface_inst__DOT__nstate),2);
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
    }
}
