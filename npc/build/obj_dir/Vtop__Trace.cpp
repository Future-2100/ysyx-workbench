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
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__exu_alu_result),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__exu_gpr_data2),64);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__exu_store_len),4);
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__exu_store_en));
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__mm_rdata),64);
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__exu_load_en));
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__ifu_execute_en));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__idu_execute_en));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__exu_execute_en));
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__mmu_execute_en));
            tracep->chgQData(oldp+13,(vlSelf->top__DOT__mmu_pc),64);
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__exu_jump_en));
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__exu_branch_en));
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__ifu_pc),64);
            tracep->chgIData(oldp+19,(vlSelf->top__DOT__ifu_instr),32);
            tracep->chgIData(oldp+20,(vlSelf->top__DOT__idu_instr),32);
            tracep->chgIData(oldp+21,(vlSelf->top__DOT__exu_instr),32);
            tracep->chgIData(oldp+22,(vlSelf->top__DOT__mmu_instr),32);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__ifu_snxt_pc),64);
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__ld_hz_nop));
            tracep->chgBit(oldp+26,(vlSelf->top__DOT__flush_nop));
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__mmu_dnpc),64);
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__mmu_inst__DOT__branch_en));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__idu_inst__DOT__alu_en));
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__idu_index_rs1),5);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__idu_index_rs2),5);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__idu_index_rd),5);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__idu_pc),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__idu_gpr_data1),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__idu_imm),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__idu_gpr_data2),64);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__idu_alu_opcode),5);
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__idu_alu_en));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__idu_alu_imm_en));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__idu_alu_pc_en));
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__idu_branch_opcode),3);
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__idu_alu_halfop));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__idu_jump_en));
            tracep->chgBit(oldp+49,(vlSelf->top__DOT__idu_branch_en));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__idu_load_en));
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__idu_store_en));
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__idu_store_len),4);
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__idu_wb_en));
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__idu_wb_choose),4);
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__idu_ebreak));
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__idu_snxt_pc),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__mmu_wb_data),64);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__mmu_index_rd),5);
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__mmu_wb_en));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__fw_en1));
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__fw_data1),64);
            tracep->chgBit(oldp+65,(vlSelf->top__DOT__fw_en2));
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__fw_data2),64);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__exu_index_rd),5);
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__exu_index_rs1),5);
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__exu_index_rs2),5);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__exu_branch_pc),64);
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__exu_branch_result));
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__exu_imm),64);
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__exu_load_opcode),3);
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__exu_wb_en));
            tracep->chgCData(oldp+78,(vlSelf->top__DOT__exu_wb_choose),4);
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__exu_ebreak));
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__exu_snxt_pc),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__exu_pc),64);
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__mmu_ebreak));
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__exu_fwd_data),64);
            tracep->chgCData(oldp+87,((0x1fU & (vlSelf->top__DOT__ifu_instr 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+88,((0x1fU & (vlSelf->top__DOT__ifu_instr 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+89,((0x1fU & (vlSelf->top__DOT__ifu_instr 
                                                >> 7U))),5);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__idu_inst__DOT__gpr_data1),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__idu_inst__DOT__gpr_data2),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__idu_inst__DOT__reg_gpr_data1),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__idu_inst__DOT__reg_gpr_data2),64);
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__idu_inst__DOT__wb_forward_1));
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__idu_inst__DOT__wb_forward_2));
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__idu_inst__DOT__branch_en));
            tracep->chgCData(oldp+101,((7U & (vlSelf->top__DOT__ifu_instr 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__idu_inst__DOT__alu_pc_en));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__idu_inst__DOT__alu_imm_en));
            tracep->chgCData(oldp+104,(vlSelf->top__DOT__idu_inst__DOT__alu_opcode),5);
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__idu_inst__DOT__alu_halfop));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__idu_inst__DOT__jump_en));
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__idu_inst__DOT__load_en));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__idu_inst__DOT__store_en));
            tracep->chgCData(oldp+109,(vlSelf->top__DOT__idu_inst__DOT__store_len),4);
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__idu_inst__DOT__wb_en));
            tracep->chgCData(oldp+111,(vlSelf->top__DOT__idu_inst__DOT__wb_choose),4);
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__idu_inst__DOT__I_type));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__idu_inst__DOT__U_type));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__jal_en));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__idu_inst__DOT__ebreak));
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__idu_inst__DOT__imm),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[1]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[2]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[3]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[4]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[5]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[6]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[7]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[8]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[9]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[10]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[11]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[12]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[13]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[14]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[15]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[16]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[17]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[18]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[19]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[20]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[21]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[22]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[23]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[24]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[25]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[26]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[27]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[28]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[29]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[30]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[31]),64);
            tracep->chgIData(oldp+182,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__i),32);
            tracep->chgCData(oldp+183,((0x7fU & vlSelf->top__DOT__ifu_instr)),7);
            tracep->chgCData(oldp+184,((vlSelf->top__DOT__ifu_instr 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+185,((3U == (3U & vlSelf->top__DOT__ifu_instr))));
            tracep->chgBit(oldp+186,((0U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+187,((1U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+188,((2U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+189,((3U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+190,((4U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+191,((5U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+192,((6U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+193,((7U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 2U)))));
            tracep->chgBit(oldp+194,((0U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 5U)))));
            tracep->chgBit(oldp+195,((1U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 5U)))));
            tracep->chgBit(oldp+196,((2U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 5U)))));
            tracep->chgBit(oldp+197,((3U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 5U)))));
            tracep->chgBit(oldp+198,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__lui_en));
            tracep->chgBit(oldp+199,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__auipc_en));
            tracep->chgBit(oldp+200,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__jalr_en));
            tracep->chgBit(oldp+201,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__ioperate_en));
            tracep->chgBit(oldp+202,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__operate_en));
            tracep->chgBit(oldp+203,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__iwoperate_en));
            tracep->chgBit(oldp+204,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__woperate_en));
            tracep->chgBit(oldp+205,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__alu_adder_en));
            tracep->chgBit(oldp+206,((0U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+207,((1U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+208,((2U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+209,((3U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                   >> 0xcU)))));
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__exu_inst__DOT__alu_result),64);
            tracep->chgBit(oldp+212,(vlSelf->top__DOT__exu_inst__DOT__branch_result));
            tracep->chgQData(oldp+213,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__branch_pc_adder_inst__DOT__sum[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__branch_pc_adder_inst__DOT__sum[0U])))),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__exu_inst__DOT__store_data),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_1),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2),64);
            tracep->chgCData(oldp+221,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode),4);
            tracep->chgBit(oldp+222,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__gpr_en1));
            tracep->chgBit(oldp+223,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__gpr_en2));
            tracep->chgBit(oldp+224,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_en));
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sum),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_dif),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sll),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_slt),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sltu),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result),64);
            tracep->chgBit(oldp+247,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_en));
            tracep->chgWData(oldp+248,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss),128);
            tracep->chgWData(oldp+252,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu),128);
            tracep->chgWData(oldp+256,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su),128);
            tracep->chgQData(oldp+260,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U])))),64);
            tracep->chgQData(oldp+262,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U])))),64);
            tracep->chgQData(oldp+264,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U])))),64);
            tracep->chgQData(oldp+266,((((QData)((IData)(
                                                         vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U])))),64);
            tracep->chgQData(oldp+268,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_div),64);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_divu),64);
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_rem),64);
            tracep->chgQData(oldp+274,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result),64);
            tracep->chgBit(oldp+276,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_en));
            tracep->chgIData(oldp+277,((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_1)),32);
            tracep->chgIData(oldp+278,((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)),32);
            tracep->chgIData(oldp+279,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_sum),32);
            tracep->chgIData(oldp+280,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_dif),32);
            tracep->chgIData(oldp+281,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_sll),32);
            tracep->chgIData(oldp+282,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_srl),32);
            tracep->chgIData(oldp+283,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_sra),32);
            tracep->chgIData(oldp+284,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result),32);
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_en));
            tracep->chgIData(oldp+286,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_mulw),32);
            tracep->chgIData(oldp+287,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_divw),32);
            tracep->chgIData(oldp+288,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_divuw),32);
            tracep->chgIData(oldp+289,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_remw),32);
            tracep->chgIData(oldp+290,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_remuw),32);
            tracep->chgIData(oldp+291,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result),32);
            tracep->chgWData(oldp+292,(vlSelf->top__DOT__exu_inst__DOT__branch_pc_adder_inst__DOT__sum),65);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__mmu_inst__DOT__load_data),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_data),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__mmu_inst__DOT__mmu_imm_data),64);
            tracep->chgCData(oldp+303,(vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_choose),4);
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc),64);
            tracep->chgBit(oldp+306,(vlSelf->top__DOT__forward_inst__DOT__ex_forward_1));
            tracep->chgBit(oldp+307,(vlSelf->top__DOT__forward_inst__DOT__ex_forward_2));
            tracep->chgBit(oldp+308,(vlSelf->top__DOT__forward_inst__DOT__mm_forward_1));
            tracep->chgBit(oldp+309,(vlSelf->top__DOT__forward_inst__DOT__mm_forward_2));
        }
        tracep->chgBit(oldp+310,(vlSelf->clk));
        tracep->chgBit(oldp+311,(vlSelf->rstn));
        tracep->chgQData(oldp+312,(vlSelf->pc),64);
        tracep->chgIData(oldp+314,(vlSelf->instr),32);
        tracep->chgBit(oldp+315,(vlSelf->ebreak));
        tracep->chgQData(oldp+316,(vlSelf->snxt_pc),64);
        tracep->chgBit(oldp+318,(vlSelf->execute_en));
        tracep->chgQData(oldp+319,(vlSelf->execute_pc),64);
        tracep->chgIData(oldp+321,(vlSelf->execute_instr),32);
        tracep->chgQData(oldp+322,(vlSelf->dnxt_pc),64);
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
