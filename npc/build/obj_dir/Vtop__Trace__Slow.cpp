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
        tracep->declBit(c+290,"clk", false,-1);
        tracep->declBit(c+291,"rstn", false,-1);
        tracep->declQuad(c+292,"pc", false,-1, 63,0);
        tracep->declBus(c+294,"instr", false,-1, 31,0);
        tracep->declBit(c+295,"ebreak", false,-1);
        tracep->declQuad(c+296,"snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+298,"dnxt_pc", false,-1, 63,0);
        tracep->declBit(c+290,"top clk", false,-1);
        tracep->declBit(c+291,"top rstn", false,-1);
        tracep->declQuad(c+292,"top pc", false,-1, 63,0);
        tracep->declBus(c+294,"top instr", false,-1, 31,0);
        tracep->declBit(c+295,"top ebreak", false,-1);
        tracep->declQuad(c+296,"top snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+298,"top dnxt_pc", false,-1, 63,0);
        tracep->declQuad(c+1,"top mm_addr", false,-1, 63,0);
        tracep->declQuad(c+3,"top mm_wdata", false,-1, 63,0);
        tracep->declBus(c+5,"top mm_wlen", false,-1, 3,0);
        tracep->declBit(c+6,"top mm_wen", false,-1);
        tracep->declQuad(c+7,"top mm_rdata", false,-1, 63,0);
        tracep->declBit(c+9,"top mm_ren", false,-1);
        tracep->declBit(c+10,"top exu_jump_en", false,-1);
        tracep->declBit(c+11,"top exu_branch_en", false,-1);
        tracep->declQuad(c+300,"top dnpc", false,-1, 63,0);
        tracep->declQuad(c+12,"top ifu_pc", false,-1, 63,0);
        tracep->declBus(c+14,"top ifu_instr", false,-1, 31,0);
        tracep->declBus(c+15,"top idu_instr", false,-1, 31,0);
        tracep->declBus(c+16,"top exu_instr", false,-1, 31,0);
        tracep->declBus(c+17,"top mmu_instr", false,-1, 31,0);
        tracep->declQuad(c+18,"top ifu_snxt_pc", false,-1, 63,0);
        tracep->declBit(c+20,"top ld_hz_stop", false,-1);
        tracep->declBit(c+21,"top flush_nop", false,-1);
        tracep->declQuad(c+22,"top mmu_dnpc", false,-1, 63,0);
        tracep->declBit(c+10,"top mmu_jump_en", false,-1);
        tracep->declBit(c+24,"top mmu_branch_en", false,-1);
        tracep->declBit(c+20,"top ld_hz_nop", false,-1);
        tracep->declBit(c+25,"top decoder_alu_en", false,-1);
        tracep->declBus(c+26,"top idu_index_rs1", false,-1, 4,0);
        tracep->declBus(c+27,"top idu_index_rs2", false,-1, 4,0);
        tracep->declBus(c+28,"top idu_index_rd", false,-1, 4,0);
        tracep->declQuad(c+29,"top idu_pc", false,-1, 63,0);
        tracep->declQuad(c+31,"top idu_gpr_data1", false,-1, 63,0);
        tracep->declQuad(c+33,"top idu_imm", false,-1, 63,0);
        tracep->declQuad(c+35,"top idu_gpr_data2", false,-1, 63,0);
        tracep->declBus(c+37,"top idu_alu_opcode", false,-1, 4,0);
        tracep->declBit(c+38,"top idu_alu_en", false,-1);
        tracep->declBit(c+39,"top idu_alu_imm_en", false,-1);
        tracep->declBit(c+40,"top idu_alu_pc_en", false,-1);
        tracep->declBus(c+41,"top idu_branch_opcode", false,-1, 2,0);
        tracep->declBit(c+42,"top idu_alu_halfop", false,-1);
        tracep->declBit(c+43,"top idu_jump_en", false,-1);
        tracep->declBit(c+44,"top idu_branch_en", false,-1);
        tracep->declBit(c+45,"top idu_load_en", false,-1);
        tracep->declBus(c+41,"top idu_load_opcode", false,-1, 2,0);
        tracep->declBit(c+46,"top idu_store_en", false,-1);
        tracep->declBus(c+47,"top idu_store_len", false,-1, 3,0);
        tracep->declBit(c+48,"top idu_wb_en", false,-1);
        tracep->declBus(c+49,"top idu_wb_choose", false,-1, 3,0);
        tracep->declBit(c+50,"top idu_ebreak", false,-1);
        tracep->declQuad(c+51,"top idu_snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+53,"top mmu_wb_data", false,-1, 63,0);
        tracep->declBus(c+55,"top mmu_index_rd", false,-1, 4,0);
        tracep->declBit(c+56,"top mmu_wb_en", false,-1);
        tracep->declBit(c+57,"top fw_en1", false,-1);
        tracep->declQuad(c+58,"top fw_data1", false,-1, 63,0);
        tracep->declBit(c+60,"top fw_en2", false,-1);
        tracep->declQuad(c+61,"top fw_data2", false,-1, 63,0);
        tracep->declBus(c+63,"top exu_index_rd", false,-1, 4,0);
        tracep->declBus(c+64,"top exu_index_rs1", false,-1, 4,0);
        tracep->declBus(c+65,"top exu_index_rs2", false,-1, 4,0);
        tracep->declQuad(c+66,"top exu_branch_pc", false,-1, 63,0);
        tracep->declBit(c+68,"top exu_branch_result", false,-1);
        tracep->declQuad(c+1,"top exu_alu_result", false,-1, 63,0);
        tracep->declQuad(c+3,"top exu_gpr_data2", false,-1, 63,0);
        tracep->declQuad(c+69,"top exu_imm", false,-1, 63,0);
        tracep->declBit(c+9,"top exu_load_en", false,-1);
        tracep->declBus(c+71,"top exu_load_opcode", false,-1, 2,0);
        tracep->declBit(c+6,"top exu_store_en", false,-1);
        tracep->declBus(c+5,"top exu_store_len", false,-1, 3,0);
        tracep->declBit(c+72,"top exu_wb_en", false,-1);
        tracep->declBus(c+73,"top exu_wb_choose", false,-1, 3,0);
        tracep->declBit(c+74,"top exu_ebreak", false,-1);
        tracep->declQuad(c+75,"top exu_snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+302,"top mmu_snxt_pc", false,-1, 63,0);
        tracep->declBit(c+77,"top mmu_ebreak", false,-1);
        tracep->declBit(c+290,"top ifu_inst clk", false,-1);
        tracep->declBit(c+291,"top ifu_inst rstn", false,-1);
        tracep->declBit(c+10,"top ifu_inst mmu_jump_en", false,-1);
        tracep->declBit(c+24,"top ifu_inst mmu_branch_en", false,-1);
        tracep->declQuad(c+22,"top ifu_inst jump_pc", false,-1, 63,0);
        tracep->declQuad(c+296,"top ifu_inst snxt_pc", false,-1, 63,0);
        tracep->declQuad(c+298,"top ifu_inst dnxt_pc", false,-1, 63,0);
        tracep->declQuad(c+292,"top ifu_inst pc", false,-1, 63,0);
        tracep->declBus(c+294,"top ifu_inst instr", false,-1, 31,0);
        tracep->declQuad(c+12,"top ifu_inst ifu_pc", false,-1, 63,0);
        tracep->declBus(c+14,"top ifu_inst ifu_instr", false,-1, 31,0);
        tracep->declQuad(c+18,"top ifu_inst ifu_snxt_pc", false,-1, 63,0);
        tracep->declBit(c+20,"top ifu_inst ld_hz_stop", false,-1);
        tracep->declBit(c+21,"top ifu_inst flush_nop", false,-1);
        tracep->declBit(c+290,"top idu_inst clk", false,-1);
        tracep->declBit(c+291,"top idu_inst rstn", false,-1);
        tracep->declBit(c+21,"top idu_inst flush_nop", false,-1);
        tracep->declBit(c+20,"top idu_inst ld_hz_nop", false,-1);
        tracep->declBit(c+25,"top idu_inst decoder_alu_en", false,-1);
        tracep->declBus(c+14,"top idu_inst ifu_instr", false,-1, 31,0);
        tracep->declQuad(c+12,"top idu_inst ifu_pc", false,-1, 63,0);
        tracep->declQuad(c+18,"top idu_inst ifu_snxt_pc", false,-1, 63,0);
        tracep->declBus(c+26,"top idu_inst idu_index_rs1", false,-1, 4,0);
        tracep->declBus(c+27,"top idu_inst idu_index_rs2", false,-1, 4,0);
        tracep->declBus(c+28,"top idu_inst idu_index_rd", false,-1, 4,0);
        tracep->declQuad(c+29,"top idu_inst idu_pc", false,-1, 63,0);
        tracep->declQuad(c+31,"top idu_inst idu_gpr_data1", false,-1, 63,0);
        tracep->declQuad(c+33,"top idu_inst idu_imm", false,-1, 63,0);
        tracep->declQuad(c+35,"top idu_inst idu_gpr_data2", false,-1, 63,0);
        tracep->declBus(c+37,"top idu_inst idu_alu_opcode", false,-1, 4,0);
        tracep->declBit(c+38,"top idu_inst idu_alu_en", false,-1);
        tracep->declBit(c+39,"top idu_inst idu_alu_imm_en", false,-1);
        tracep->declBit(c+40,"top idu_inst idu_alu_pc_en", false,-1);
        tracep->declBus(c+41,"top idu_inst idu_branch_opcode", false,-1, 2,0);
        tracep->declBit(c+42,"top idu_inst idu_alu_halfop", false,-1);
        tracep->declBit(c+43,"top idu_inst idu_jump_en", false,-1);
        tracep->declBit(c+44,"top idu_inst idu_branch_en", false,-1);
        tracep->declBit(c+45,"top idu_inst idu_load_en", false,-1);
        tracep->declBus(c+41,"top idu_inst idu_load_opcode", false,-1, 2,0);
        tracep->declBit(c+46,"top idu_inst idu_store_en", false,-1);
        tracep->declBus(c+47,"top idu_inst idu_store_len", false,-1, 3,0);
        tracep->declBit(c+48,"top idu_inst idu_wb_en", false,-1);
        tracep->declBus(c+49,"top idu_inst idu_wb_choose", false,-1, 3,0);
        tracep->declBit(c+50,"top idu_inst idu_ebreak", false,-1);
        tracep->declQuad(c+51,"top idu_inst idu_snxt_pc", false,-1, 63,0);
        tracep->declBus(c+15,"top idu_inst idu_instr", false,-1, 31,0);
        tracep->declQuad(c+53,"top idu_inst mmu_wb_data", false,-1, 63,0);
        tracep->declBus(c+55,"top idu_inst mmu_index_rd", false,-1, 4,0);
        tracep->declBit(c+56,"top idu_inst mmu_wb_en", false,-1);
        tracep->declBus(c+78,"top idu_inst index_rs1", false,-1, 4,0);
        tracep->declBus(c+79,"top idu_inst index_rs2", false,-1, 4,0);
        tracep->declBus(c+80,"top idu_inst index_rd", false,-1, 4,0);
        tracep->declQuad(c+12,"top idu_inst pc", false,-1, 63,0);
        tracep->declQuad(c+81,"top idu_inst gpr_data1", false,-1, 63,0);
        tracep->declQuad(c+83,"top idu_inst gpr_data2", false,-1, 63,0);
        tracep->declBit(c+85,"top idu_inst branch_en", false,-1);
        tracep->declBus(c+86,"top idu_inst branch_opcode", false,-1, 2,0);
        tracep->declBit(c+25,"top idu_inst alu_en", false,-1);
        tracep->declBit(c+87,"top idu_inst alu_pc_en", false,-1);
        tracep->declBit(c+88,"top idu_inst alu_imm_en", false,-1);
        tracep->declBus(c+89,"top idu_inst alu_opcode", false,-1, 4,0);
        tracep->declBit(c+90,"top idu_inst alu_halfop", false,-1);
        tracep->declBit(c+91,"top idu_inst jump_en", false,-1);
        tracep->declBit(c+92,"top idu_inst load_en", false,-1);
        tracep->declBus(c+86,"top idu_inst load_opcode", false,-1, 2,0);
        tracep->declBit(c+93,"top idu_inst store_en", false,-1);
        tracep->declBus(c+94,"top idu_inst store_len", false,-1, 3,0);
        tracep->declBit(c+95,"top idu_inst wb_en", false,-1);
        tracep->declBus(c+96,"top idu_inst wb_choose", false,-1, 3,0);
        tracep->declBit(c+97,"top idu_inst I_type", false,-1);
        tracep->declBit(c+93,"top idu_inst S_type", false,-1);
        tracep->declBit(c+85,"top idu_inst B_type", false,-1);
        tracep->declBit(c+98,"top idu_inst U_type", false,-1);
        tracep->declBit(c+99,"top idu_inst J_type", false,-1);
        tracep->declBit(c+100,"top idu_inst ebreak", false,-1);
        tracep->declQuad(c+101,"top idu_inst imm", false,-1, 63,0);
        tracep->declBit(c+290,"top idu_inst regfile_inst clk", false,-1);
        tracep->declBit(c+291,"top idu_inst regfile_inst rstn", false,-1);
        tracep->declBus(c+78,"top idu_inst regfile_inst index_rs1", false,-1, 4,0);
        tracep->declBus(c+79,"top idu_inst regfile_inst index_rs2", false,-1, 4,0);
        tracep->declQuad(c+81,"top idu_inst regfile_inst data_rs1", false,-1, 63,0);
        tracep->declQuad(c+83,"top idu_inst regfile_inst data_rs2", false,-1, 63,0);
        tracep->declBit(c+56,"top idu_inst regfile_inst wb_en", false,-1);
        tracep->declBus(c+55,"top idu_inst regfile_inst index_rd", false,-1, 4,0);
        tracep->declQuad(c+53,"top idu_inst regfile_inst data_rd", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+103+i*2,"top idu_inst regfile_inst gpr", true,(i+0), 63,0);}}
        tracep->declBus(c+167,"top idu_inst regfile_inst i", false,-1, 31,0);
        tracep->declBus(c+14,"top idu_inst decoder_inst instr", false,-1, 31,0);
        tracep->declBit(c+85,"top idu_inst decoder_inst branch_en", false,-1);
        tracep->declBus(c+86,"top idu_inst decoder_inst branch_opcode", false,-1, 2,0);
        tracep->declBit(c+25,"top idu_inst decoder_inst alu_en", false,-1);
        tracep->declBit(c+87,"top idu_inst decoder_inst alu_pc_en", false,-1);
        tracep->declBit(c+88,"top idu_inst decoder_inst alu_imm_en", false,-1);
        tracep->declBus(c+89,"top idu_inst decoder_inst alu_opcode", false,-1, 4,0);
        tracep->declBit(c+90,"top idu_inst decoder_inst alu_halfop", false,-1);
        tracep->declBit(c+91,"top idu_inst decoder_inst jump_en", false,-1);
        tracep->declBit(c+92,"top idu_inst decoder_inst load_en", false,-1);
        tracep->declBus(c+86,"top idu_inst decoder_inst load_opcode", false,-1, 2,0);
        tracep->declBit(c+93,"top idu_inst decoder_inst store_en", false,-1);
        tracep->declBus(c+94,"top idu_inst decoder_inst store_len", false,-1, 3,0);
        tracep->declBit(c+95,"top idu_inst decoder_inst wb_en", false,-1);
        tracep->declBus(c+96,"top idu_inst decoder_inst wb_choose", false,-1, 3,0);
        tracep->declBit(c+97,"top idu_inst decoder_inst I_type", false,-1);
        tracep->declBit(c+93,"top idu_inst decoder_inst S_type", false,-1);
        tracep->declBit(c+85,"top idu_inst decoder_inst B_type", false,-1);
        tracep->declBit(c+98,"top idu_inst decoder_inst U_type", false,-1);
        tracep->declBit(c+99,"top idu_inst decoder_inst J_type", false,-1);
        tracep->declBit(c+100,"top idu_inst decoder_inst ebreak", false,-1);
        tracep->declBus(c+168,"top idu_inst decoder_inst opcode", false,-1, 6,0);
        tracep->declBus(c+86,"top idu_inst decoder_inst funct3", false,-1, 2,0);
        tracep->declBus(c+169,"top idu_inst decoder_inst funct7", false,-1, 6,0);
        tracep->declBit(c+170,"top idu_inst decoder_inst opcode1_0__11", false,-1);
        tracep->declBit(c+171,"top idu_inst decoder_inst opcode4_2__000", false,-1);
        tracep->declBit(c+172,"top idu_inst decoder_inst opcode4_2__001", false,-1);
        tracep->declBit(c+173,"top idu_inst decoder_inst opcode4_2__010", false,-1);
        tracep->declBit(c+174,"top idu_inst decoder_inst opcode4_2__011", false,-1);
        tracep->declBit(c+175,"top idu_inst decoder_inst opcode4_2__100", false,-1);
        tracep->declBit(c+176,"top idu_inst decoder_inst opcode4_2__101", false,-1);
        tracep->declBit(c+177,"top idu_inst decoder_inst opcode4_2__110", false,-1);
        tracep->declBit(c+178,"top idu_inst decoder_inst opcode4_2__111", false,-1);
        tracep->declBit(c+179,"top idu_inst decoder_inst opcode6_5__00", false,-1);
        tracep->declBit(c+180,"top idu_inst decoder_inst opcode6_5__01", false,-1);
        tracep->declBit(c+181,"top idu_inst decoder_inst opcode6_5__10", false,-1);
        tracep->declBit(c+182,"top idu_inst decoder_inst opcode6_5__11", false,-1);
        tracep->declBit(c+183,"top idu_inst decoder_inst lui_en", false,-1);
        tracep->declBit(c+184,"top idu_inst decoder_inst auipc_en", false,-1);
        tracep->declBit(c+99,"top idu_inst decoder_inst jal_en", false,-1);
        tracep->declBit(c+185,"top idu_inst decoder_inst jalr_en", false,-1);
        tracep->declBit(c+186,"top idu_inst decoder_inst ioperate_en", false,-1);
        tracep->declBit(c+187,"top idu_inst decoder_inst operate_en", false,-1);
        tracep->declBit(c+188,"top idu_inst decoder_inst iwoperate_en", false,-1);
        tracep->declBit(c+189,"top idu_inst decoder_inst woperate_en", false,-1);
        tracep->declBit(c+190,"top idu_inst decoder_inst alu_adder_en", false,-1);
        tracep->declBit(c+191,"top idu_inst decoder_inst funct3_1_0__00", false,-1);
        tracep->declBit(c+192,"top idu_inst decoder_inst funct3_1_0__01", false,-1);
        tracep->declBit(c+193,"top idu_inst decoder_inst funct3_1_0__10", false,-1);
        tracep->declBit(c+194,"top idu_inst decoder_inst funct3_1_0__11", false,-1);
        tracep->declBus(c+14,"top idu_inst imm_gen_inst instr", false,-1, 31,0);
        tracep->declBit(c+97,"top idu_inst imm_gen_inst I_type", false,-1);
        tracep->declBit(c+93,"top idu_inst imm_gen_inst S_type", false,-1);
        tracep->declBit(c+98,"top idu_inst imm_gen_inst U_type", false,-1);
        tracep->declBit(c+85,"top idu_inst imm_gen_inst B_type", false,-1);
        tracep->declBit(c+99,"top idu_inst imm_gen_inst J_type", false,-1);
        tracep->declQuad(c+101,"top idu_inst imm_gen_inst imm", false,-1, 63,0);
        tracep->declBit(c+290,"top exu_inst clk", false,-1);
        tracep->declBit(c+291,"top exu_inst rstn", false,-1);
        tracep->declBit(c+21,"top exu_inst flush_nop", false,-1);
        tracep->declBus(c+28,"top exu_inst idu_index_rd", false,-1, 4,0);
        tracep->declBus(c+26,"top exu_inst idu_index_rs1", false,-1, 4,0);
        tracep->declBus(c+27,"top exu_inst idu_index_rs2", false,-1, 4,0);
        tracep->declBit(c+43,"top exu_inst idu_jump_en", false,-1);
        tracep->declBit(c+44,"top exu_inst idu_branch_en", false,-1);
        tracep->declBit(c+57,"top exu_inst fw_en1", false,-1);
        tracep->declBit(c+40,"top exu_inst idu_alu_pc_en", false,-1);
        tracep->declQuad(c+29,"top exu_inst idu_pc", false,-1, 63,0);
        tracep->declQuad(c+31,"top exu_inst idu_gpr_data1", false,-1, 63,0);
        tracep->declQuad(c+58,"top exu_inst fw_data1", false,-1, 63,0);
        tracep->declBit(c+60,"top exu_inst fw_en2", false,-1);
        tracep->declBit(c+39,"top exu_inst idu_alu_imm_en", false,-1);
        tracep->declQuad(c+33,"top exu_inst idu_imm", false,-1, 63,0);
        tracep->declQuad(c+35,"top exu_inst idu_gpr_data2", false,-1, 63,0);
        tracep->declQuad(c+61,"top exu_inst fw_data2", false,-1, 63,0);
        tracep->declBit(c+38,"top exu_inst idu_alu_en", false,-1);
        tracep->declBit(c+42,"top exu_inst idu_alu_halfop", false,-1);
        tracep->declBus(c+37,"top exu_inst idu_alu_opcode", false,-1, 4,0);
        tracep->declBus(c+41,"top exu_inst idu_branch_opcode", false,-1, 2,0);
        tracep->declBit(c+45,"top exu_inst idu_load_en", false,-1);
        tracep->declBit(c+46,"top exu_inst idu_store_en", false,-1);
        tracep->declBus(c+41,"top exu_inst idu_load_opcode", false,-1, 2,0);
        tracep->declBus(c+47,"top exu_inst idu_store_len", false,-1, 3,0);
        tracep->declBit(c+48,"top exu_inst idu_wb_en", false,-1);
        tracep->declBus(c+49,"top exu_inst idu_wb_choose", false,-1, 3,0);
        tracep->declBit(c+50,"top exu_inst idu_ebreak", false,-1);
        tracep->declQuad(c+51,"top exu_inst idu_snxt_pc", false,-1, 63,0);
        tracep->declBus(c+15,"top exu_inst idu_instr", false,-1, 31,0);
        tracep->declBus(c+63,"top exu_inst exu_index_rd", false,-1, 4,0);
        tracep->declBus(c+64,"top exu_inst exu_index_rs1", false,-1, 4,0);
        tracep->declBus(c+65,"top exu_inst exu_index_rs2", false,-1, 4,0);
        tracep->declBit(c+10,"top exu_inst exu_jump_en", false,-1);
        tracep->declBit(c+11,"top exu_inst exu_branch_en", false,-1);
        tracep->declQuad(c+66,"top exu_inst exu_branch_pc", false,-1, 63,0);
        tracep->declBit(c+68,"top exu_inst exu_branch_result", false,-1);
        tracep->declQuad(c+1,"top exu_inst exu_alu_result", false,-1, 63,0);
        tracep->declQuad(c+3,"top exu_inst exu_gpr_data2", false,-1, 63,0);
        tracep->declQuad(c+69,"top exu_inst exu_imm", false,-1, 63,0);
        tracep->declBus(c+16,"top exu_inst exu_instr", false,-1, 31,0);
        tracep->declBit(c+9,"top exu_inst exu_load_en", false,-1);
        tracep->declBus(c+71,"top exu_inst exu_load_opcode", false,-1, 2,0);
        tracep->declBit(c+6,"top exu_inst exu_store_en", false,-1);
        tracep->declBus(c+5,"top exu_inst exu_store_len", false,-1, 3,0);
        tracep->declBit(c+72,"top exu_inst exu_wb_en", false,-1);
        tracep->declBus(c+73,"top exu_inst exu_wb_choose", false,-1, 3,0);
        tracep->declQuad(c+75,"top exu_inst exu_snxt_pc", false,-1, 63,0);
        tracep->declBit(c+74,"top exu_inst exu_ebreak", false,-1);
        tracep->declQuad(c+195,"top exu_inst alu_result", false,-1, 63,0);
        tracep->declBit(c+197,"top exu_inst branch_result", false,-1);
        tracep->declQuad(c+198,"top exu_inst branch_pc", false,-1, 63,0);
        tracep->declBit(c+40,"top exu_inst alu_inst pc_en", false,-1);
        tracep->declQuad(c+29,"top exu_inst alu_inst pc", false,-1, 63,0);
        tracep->declBit(c+57,"top exu_inst alu_inst fw_en1", false,-1);
        tracep->declQuad(c+58,"top exu_inst alu_inst fw_data1", false,-1, 63,0);
        tracep->declQuad(c+31,"top exu_inst alu_inst gpr_data1", false,-1, 63,0);
        tracep->declBit(c+39,"top exu_inst alu_inst imm_en", false,-1);
        tracep->declQuad(c+33,"top exu_inst alu_inst imm", false,-1, 63,0);
        tracep->declBit(c+60,"top exu_inst alu_inst fw_en2", false,-1);
        tracep->declQuad(c+61,"top exu_inst alu_inst fw_data2", false,-1, 63,0);
        tracep->declQuad(c+35,"top exu_inst alu_inst gpr_data2", false,-1, 63,0);
        tracep->declBit(c+38,"top exu_inst alu_inst alu_en", false,-1);
        tracep->declBus(c+37,"top exu_inst alu_inst alu_opcode", false,-1, 4,0);
        tracep->declBit(c+42,"top exu_inst alu_inst alu_halfop", false,-1);
        tracep->declBit(c+44,"top exu_inst alu_inst branch_en", false,-1);
        tracep->declBus(c+41,"top exu_inst alu_inst branch_opcode", false,-1, 2,0);
        tracep->declQuad(c+195,"top exu_inst alu_inst alu_result", false,-1, 63,0);
        tracep->declBit(c+197,"top exu_inst alu_inst branch_result", false,-1);
        tracep->declQuad(c+200,"top exu_inst alu_inst opdata_1", false,-1, 63,0);
        tracep->declQuad(c+202,"top exu_inst alu_inst opdata_2", false,-1, 63,0);
        tracep->declBus(c+204,"top exu_inst alu_inst opcode", false,-1, 3,0);
        tracep->declBit(c+205,"top exu_inst alu_inst gpr_en1", false,-1);
        tracep->declBit(c+206,"top exu_inst alu_inst gpr_en2", false,-1);
        tracep->declBit(c+207,"top exu_inst alu_inst opid_en", false,-1);
        tracep->declQuad(c+208,"top exu_inst alu_inst opid_sum", false,-1, 63,0);
        tracep->declQuad(c+210,"top exu_inst alu_inst opid_dif", false,-1, 63,0);
        tracep->declQuad(c+212,"top exu_inst alu_inst opid_sll", false,-1, 63,0);
        tracep->declQuad(c+214,"top exu_inst alu_inst opid_slt", false,-1, 63,0);
        tracep->declQuad(c+216,"top exu_inst alu_inst opid_sltu", false,-1, 63,0);
        tracep->declQuad(c+218,"top exu_inst alu_inst opid_xor", false,-1, 63,0);
        tracep->declQuad(c+220,"top exu_inst alu_inst opid_srl", false,-1, 63,0);
        tracep->declQuad(c+220,"top exu_inst alu_inst opid_sra", false,-1, 63,0);
        tracep->declQuad(c+222,"top exu_inst alu_inst opid_or", false,-1, 63,0);
        tracep->declQuad(c+224,"top exu_inst alu_inst opid_and", false,-1, 63,0);
        tracep->declQuad(c+226,"top exu_inst alu_inst opid_result", false,-1, 63,0);
        tracep->declArray(c+228,"top exu_inst alu_inst mul_ss", false,-1, 127,0);
        tracep->declArray(c+232,"top exu_inst alu_inst mul_uu", false,-1, 127,0);
        tracep->declArray(c+236,"top exu_inst alu_inst mul_su", false,-1, 127,0);
        tracep->declBit(c+240,"top exu_inst alu_inst opmd_en", false,-1);
        tracep->declQuad(c+241,"top exu_inst alu_inst opmd_mul", false,-1, 63,0);
        tracep->declQuad(c+243,"top exu_inst alu_inst opmd_mulh", false,-1, 63,0);
        tracep->declQuad(c+245,"top exu_inst alu_inst opmd_mulhsu", false,-1, 63,0);
        tracep->declQuad(c+247,"top exu_inst alu_inst opmd_mulhu", false,-1, 63,0);
        tracep->declQuad(c+249,"top exu_inst alu_inst opmd_div", false,-1, 63,0);
        tracep->declQuad(c+251,"top exu_inst alu_inst opmd_divu", false,-1, 63,0);
        tracep->declQuad(c+253,"top exu_inst alu_inst opmd_rem", false,-1, 63,0);
        tracep->declQuad(c+251,"top exu_inst alu_inst opmd_remu", false,-1, 63,0);
        tracep->declQuad(c+255,"top exu_inst alu_inst opmd_result", false,-1, 63,0);
        tracep->declBus(c+257,"top exu_inst alu_inst wopdata_1", false,-1, 31,0);
        tracep->declBus(c+258,"top exu_inst alu_inst wopdata_2", false,-1, 31,0);
        tracep->declBit(c+259,"top exu_inst alu_inst opiw_en", false,-1);
        tracep->declBus(c+260,"top exu_inst alu_inst opiw_sum", false,-1, 31,0);
        tracep->declBus(c+261,"top exu_inst alu_inst opiw_dif", false,-1, 31,0);
        tracep->declBus(c+262,"top exu_inst alu_inst opiw_sll", false,-1, 31,0);
        tracep->declBus(c+263,"top exu_inst alu_inst opiw_srl", false,-1, 31,0);
        tracep->declBus(c+263,"top exu_inst alu_inst opiw_sra", false,-1, 31,0);
        tracep->declBus(c+264,"top exu_inst alu_inst opiw_result", false,-1, 31,0);
        tracep->declBit(c+265,"top exu_inst alu_inst opmw_en", false,-1);
        tracep->declBus(c+266,"top exu_inst alu_inst opmw_mulw", false,-1, 31,0);
        tracep->declBus(c+267,"top exu_inst alu_inst opmw_divw", false,-1, 31,0);
        tracep->declBus(c+268,"top exu_inst alu_inst opmw_divuw", false,-1, 31,0);
        tracep->declBus(c+269,"top exu_inst alu_inst opmw_remw", false,-1, 31,0);
        tracep->declBus(c+270,"top exu_inst alu_inst opmw_remuw", false,-1, 31,0);
        tracep->declBus(c+271,"top exu_inst alu_inst opmw_result", false,-1, 31,0);
        tracep->declQuad(c+33,"top exu_inst branch_pc_adder_inst imm_B", false,-1, 63,0);
        tracep->declQuad(c+29,"top exu_inst branch_pc_adder_inst pc", false,-1, 63,0);
        tracep->declQuad(c+198,"top exu_inst branch_pc_adder_inst branch_pc", false,-1, 63,0);
        tracep->declArray(c+272,"top exu_inst branch_pc_adder_inst sum", false,-1, 64,0);
        tracep->declBit(c+290,"top mmu_inst clk", false,-1);
        tracep->declBit(c+291,"top mmu_inst rstn", false,-1);
        tracep->declBus(c+63,"top mmu_inst exu_index_rd", false,-1, 4,0);
        tracep->declBus(c+64,"top mmu_inst exu_index_rs1", false,-1, 4,0);
        tracep->declBus(c+65,"top mmu_inst exu_index_rs2", false,-1, 4,0);
        tracep->declBit(c+10,"top mmu_inst exu_jump_en", false,-1);
        tracep->declBit(c+11,"top mmu_inst exu_branch_en", false,-1);
        tracep->declQuad(c+66,"top mmu_inst exu_branch_pc", false,-1, 63,0);
        tracep->declBit(c+68,"top mmu_inst exu_branch_result", false,-1);
        tracep->declQuad(c+1,"top mmu_inst exu_alu_result", false,-1, 63,0);
        tracep->declBus(c+16,"top mmu_inst exu_instr", false,-1, 31,0);
        tracep->declBit(c+9,"top mmu_inst exu_load_en", false,-1);
        tracep->declBit(c+6,"top mmu_inst exu_store_en", false,-1);
        tracep->declBus(c+5,"top mmu_inst exu_store_len", false,-1, 3,0);
        tracep->declQuad(c+3,"top mmu_inst exu_gpr_data2", false,-1, 63,0);
        tracep->declQuad(c+69,"top mmu_inst exu_imm", false,-1, 63,0);
        tracep->declBus(c+71,"top mmu_inst exu_load_opcode", false,-1, 2,0);
        tracep->declBit(c+72,"top mmu_inst exu_wb_en", false,-1);
        tracep->declBus(c+73,"top mmu_inst exu_wb_choose", false,-1, 3,0);
        tracep->declBit(c+74,"top mmu_inst exu_ebreak", false,-1);
        tracep->declQuad(c+75,"top mmu_inst exu_snxt_pc", false,-1, 63,0);
        tracep->declBus(c+55,"top mmu_inst mmu_index_rd", false,-1, 4,0);
        tracep->declBit(c+56,"top mmu_inst mmu_wb_en", false,-1);
        tracep->declQuad(c+53,"top mmu_inst mmu_wb_data", false,-1, 63,0);
        tracep->declQuad(c+22,"top mmu_inst mmu_dnpc", false,-1, 63,0);
        tracep->declBit(c+10,"top mmu_inst mmu_jump_en", false,-1);
        tracep->declBit(c+24,"top mmu_inst mmu_branch_en", false,-1);
        tracep->declBus(c+17,"top mmu_inst mmu_instr", false,-1, 31,0);
        tracep->declBit(c+77,"top mmu_inst mmu_ebreak", false,-1);
        tracep->declQuad(c+1,"top mmu_inst mm_addr", false,-1, 63,0);
        tracep->declQuad(c+3,"top mmu_inst mm_wdata", false,-1, 63,0);
        tracep->declBus(c+5,"top mmu_inst mm_wlen", false,-1, 3,0);
        tracep->declBit(c+6,"top mmu_inst mm_wen", false,-1);
        tracep->declBit(c+9,"top mmu_inst mm_ren", false,-1);
        tracep->declQuad(c+7,"top mmu_inst mm_rdata", false,-1, 63,0);
        tracep->declBit(c+10,"top mmu_inst jump_en", false,-1);
        tracep->declBit(c+24,"top mmu_inst branch_en", false,-1);
        tracep->declQuad(c+66,"top mmu_inst branch_pc", false,-1, 63,0);
        tracep->declQuad(c+1,"top mmu_inst jump_pc", false,-1, 63,0);
        tracep->declQuad(c+1,"top mmu_inst address", false,-1, 63,0);
        tracep->declQuad(c+3,"top mmu_inst store_data", false,-1, 63,0);
        tracep->declQuad(c+275,"top mmu_inst load_data", false,-1, 63,0);
        tracep->declQuad(c+277,"top mmu_inst mmu_alu_data", false,-1, 63,0);
        tracep->declQuad(c+279,"top mmu_inst mmu_load_data", false,-1, 63,0);
        tracep->declQuad(c+281,"top mmu_inst mmu_imm_data", false,-1, 63,0);
        tracep->declBus(c+283,"top mmu_inst mmu_wb_choose", false,-1, 3,0);
        tracep->declQuad(c+284,"top mmu_inst mmu_snxt_pc", false,-1, 63,0);
        tracep->declBit(c+9,"top mmu_inst memory_inst load_en", false,-1);
        tracep->declBit(c+6,"top mmu_inst memory_inst store_en", false,-1);
        tracep->declBus(c+5,"top mmu_inst memory_inst store_len", false,-1, 3,0);
        tracep->declBus(c+71,"top mmu_inst memory_inst load_opcode", false,-1, 2,0);
        tracep->declQuad(c+3,"top mmu_inst memory_inst store_data", false,-1, 63,0);
        tracep->declQuad(c+1,"top mmu_inst memory_inst address", false,-1, 63,0);
        tracep->declQuad(c+275,"top mmu_inst memory_inst load_data", false,-1, 63,0);
        tracep->declQuad(c+1,"top mmu_inst memory_inst mm_addr", false,-1, 63,0);
        tracep->declQuad(c+3,"top mmu_inst memory_inst mm_wdata", false,-1, 63,0);
        tracep->declBus(c+5,"top mmu_inst memory_inst mm_wlen", false,-1, 3,0);
        tracep->declBit(c+6,"top mmu_inst memory_inst mm_wen", false,-1);
        tracep->declBit(c+9,"top mmu_inst memory_inst mm_ren", false,-1);
        tracep->declQuad(c+7,"top mmu_inst memory_inst mm_rdata", false,-1, 63,0);
        tracep->declQuad(c+7,"top mmu_inst memory_inst memory_rdata", false,-1, 63,0);
        tracep->declBit(c+25,"top hazard_inst decoder_alu_en", false,-1);
        tracep->declBus(c+78,"top hazard_inst index_rs1", false,-1, 4,0);
        tracep->declBus(c+79,"top hazard_inst index_rs2", false,-1, 4,0);
        tracep->declBus(c+28,"top hazard_inst index_rd", false,-1, 4,0);
        tracep->declBit(c+45,"top hazard_inst load_en", false,-1);
        tracep->declBit(c+20,"top hazard_inst ld_hz_nop", false,-1);
        tracep->declBit(c+20,"top hazard_inst ld_hz_stop", false,-1);
        tracep->declBit(c+10,"top flush_inst mmu_jump_en", false,-1);
        tracep->declBit(c+24,"top flush_inst mmu_branch_en", false,-1);
        tracep->declBit(c+21,"top flush_inst flush_nop", false,-1);
        tracep->declBus(c+26,"top forward_inst idu_index_rs1", false,-1, 4,0);
        tracep->declBus(c+27,"top forward_inst idu_index_rs2", false,-1, 4,0);
        tracep->declBus(c+63,"top forward_inst exu_index_rd", false,-1, 4,0);
        tracep->declBus(c+55,"top forward_inst mmu_index_rd", false,-1, 4,0);
        tracep->declQuad(c+1,"top forward_inst exu_alu_result", false,-1, 63,0);
        tracep->declQuad(c+53,"top forward_inst mmu_wb_data", false,-1, 63,0);
        tracep->declBit(c+72,"top forward_inst exu_wb_en", false,-1);
        tracep->declBit(c+56,"top forward_inst mmu_wb_en", false,-1);
        tracep->declBit(c+57,"top forward_inst fw_en1", false,-1);
        tracep->declBit(c+60,"top forward_inst fw_en2", false,-1);
        tracep->declQuad(c+58,"top forward_inst fw_data1", false,-1, 63,0);
        tracep->declQuad(c+61,"top forward_inst fw_data2", false,-1, 63,0);
        tracep->declBit(c+286,"top forward_inst ex_forward_1", false,-1);
        tracep->declBit(c+287,"top forward_inst ex_forward_2", false,-1);
        tracep->declBit(c+288,"top forward_inst mm_forward_1", false,-1);
        tracep->declBit(c+289,"top forward_inst mm_forward_2", false,-1);
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
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__exu_alu_result),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__exu_gpr_data2),64);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__exu_store_len),4);
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__exu_store_en));
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__mm_rdata),64);
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__exu_load_en));
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__exu_jump_en));
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__exu_branch_en));
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__ifu_pc),64);
        tracep->fullIData(oldp+14,(vlSelf->top__DOT__ifu_instr),32);
        tracep->fullIData(oldp+15,(vlSelf->top__DOT__idu_instr),32);
        tracep->fullIData(oldp+16,(vlSelf->top__DOT__exu_instr),32);
        tracep->fullIData(oldp+17,(vlSelf->top__DOT__mmu_instr),32);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__ifu_snxt_pc),64);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__ld_hz_nop));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__flush_nop));
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__mmu_dnpc),64);
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__mmu_inst__DOT__branch_en));
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__idu_inst__DOT__alu_en));
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__idu_index_rs1),5);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__idu_index_rs2),5);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__idu_index_rd),5);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__idu_pc),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__idu_gpr_data1),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__idu_imm),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__idu_gpr_data2),64);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__idu_alu_opcode),5);
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__idu_alu_en));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__idu_alu_imm_en));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__idu_alu_pc_en));
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__idu_branch_opcode),3);
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__idu_alu_halfop));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__idu_jump_en));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__idu_branch_en));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__idu_load_en));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__idu_store_en));
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__idu_store_len),4);
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__idu_wb_en));
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__idu_wb_choose),4);
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__idu_ebreak));
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__idu_snxt_pc),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__mmu_wb_data),64);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__mmu_index_rd),5);
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__mmu_wb_en));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__fw_en1));
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__fw_data1),64);
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__fw_en2));
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__fw_data2),64);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__exu_index_rd),5);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__exu_index_rs1),5);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__exu_index_rs2),5);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__exu_branch_pc),64);
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__exu_branch_result));
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__exu_imm),64);
        tracep->fullCData(oldp+71,(vlSelf->top__DOT__exu_load_opcode),3);
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__exu_wb_en));
        tracep->fullCData(oldp+73,(vlSelf->top__DOT__exu_wb_choose),4);
        tracep->fullBit(oldp+74,(vlSelf->top__DOT__exu_ebreak));
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__exu_snxt_pc),64);
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__mmu_ebreak));
        tracep->fullCData(oldp+78,((0x1fU & (vlSelf->top__DOT__ifu_instr 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+79,((0x1fU & (vlSelf->top__DOT__ifu_instr 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+80,((0x1fU & (vlSelf->top__DOT__ifu_instr 
                                             >> 7U))),5);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__idu_inst__DOT__gpr_data1),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__idu_inst__DOT__gpr_data2),64);
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__idu_inst__DOT__branch_en));
        tracep->fullCData(oldp+86,((7U & (vlSelf->top__DOT__ifu_instr 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__idu_inst__DOT__alu_pc_en));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__idu_inst__DOT__alu_imm_en));
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__idu_inst__DOT__alu_opcode),5);
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__idu_inst__DOT__alu_halfop));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__idu_inst__DOT__jump_en));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__idu_inst__DOT__load_en));
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__idu_inst__DOT__store_en));
        tracep->fullCData(oldp+94,(vlSelf->top__DOT__idu_inst__DOT__store_len),4);
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__idu_inst__DOT__wb_en));
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__idu_inst__DOT__wb_choose),4);
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__idu_inst__DOT__I_type));
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__idu_inst__DOT__U_type));
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__jal_en));
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__idu_inst__DOT__ebreak));
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__idu_inst__DOT__imm),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[0]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[1]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[2]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[3]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[4]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[5]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[6]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[7]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[8]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[9]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[10]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[11]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[12]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[13]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[14]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[15]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[16]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[17]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[18]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[19]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[20]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[21]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[22]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[23]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[24]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[25]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[26]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[27]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[28]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[29]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[30]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr[31]),64);
        tracep->fullIData(oldp+167,(vlSelf->top__DOT__idu_inst__DOT__regfile_inst__DOT__i),32);
        tracep->fullCData(oldp+168,((0x7fU & vlSelf->top__DOT__ifu_instr)),7);
        tracep->fullCData(oldp+169,((vlSelf->top__DOT__ifu_instr 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+170,((3U == (3U & vlSelf->top__DOT__ifu_instr))));
        tracep->fullBit(oldp+171,((0U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                >> 2U)))));
        tracep->fullBit(oldp+172,((1U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                >> 2U)))));
        tracep->fullBit(oldp+173,((2U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                >> 2U)))));
        tracep->fullBit(oldp+174,((3U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                >> 2U)))));
        tracep->fullBit(oldp+175,((4U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                >> 2U)))));
        tracep->fullBit(oldp+176,((5U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                >> 2U)))));
        tracep->fullBit(oldp+177,((6U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                >> 2U)))));
        tracep->fullBit(oldp+178,((7U == (7U & (vlSelf->top__DOT__ifu_instr 
                                                >> 2U)))));
        tracep->fullBit(oldp+179,((0U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                >> 5U)))));
        tracep->fullBit(oldp+180,((1U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                >> 5U)))));
        tracep->fullBit(oldp+181,((2U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                >> 5U)))));
        tracep->fullBit(oldp+182,((3U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                >> 5U)))));
        tracep->fullBit(oldp+183,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__lui_en));
        tracep->fullBit(oldp+184,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__auipc_en));
        tracep->fullBit(oldp+185,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__jalr_en));
        tracep->fullBit(oldp+186,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__ioperate_en));
        tracep->fullBit(oldp+187,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__operate_en));
        tracep->fullBit(oldp+188,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__iwoperate_en));
        tracep->fullBit(oldp+189,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__woperate_en));
        tracep->fullBit(oldp+190,(vlSelf->top__DOT__idu_inst__DOT__decoder_inst__DOT__alu_adder_en));
        tracep->fullBit(oldp+191,((0U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+192,((1U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+193,((2U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+194,((3U == (3U & (vlSelf->top__DOT__ifu_instr 
                                                >> 0xcU)))));
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__exu_inst__DOT__alu_result),64);
        tracep->fullBit(oldp+197,(vlSelf->top__DOT__exu_inst__DOT__branch_result));
        tracep->fullQData(oldp+198,((((QData)((IData)(
                                                      vlSelf->top__DOT__exu_inst__DOT__branch_pc_adder_inst__DOT__sum[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__exu_inst__DOT__branch_pc_adder_inst__DOT__sum[0U])))),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_1),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2),64);
        tracep->fullCData(oldp+204,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opcode),4);
        tracep->fullBit(oldp+205,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__gpr_en1));
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__gpr_en2));
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_en));
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sum),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_dif),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sll),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_slt),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sltu),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result),64);
        tracep->fullWData(oldp+228,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss),128);
        tracep->fullWData(oldp+232,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu),128);
        tracep->fullWData(oldp+236,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su),128);
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_en));
        tracep->fullQData(oldp+241,((((QData)((IData)(
                                                      vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[0U])))),64);
        tracep->fullQData(oldp+243,((((QData)((IData)(
                                                      vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss[2U])))),64);
        tracep->fullQData(oldp+245,((((QData)((IData)(
                                                      vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su[2U])))),64);
        tracep->fullQData(oldp+247,((((QData)((IData)(
                                                      vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu[2U])))),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_div),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_divu),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_rem),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result),64);
        tracep->fullIData(oldp+257,((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_1)),32);
        tracep->fullIData(oldp+258,((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2)),32);
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_en));
        tracep->fullIData(oldp+260,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_sum),32);
        tracep->fullIData(oldp+261,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_dif),32);
        tracep->fullIData(oldp+262,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_sll),32);
        tracep->fullIData(oldp+263,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_srl),32);
        tracep->fullIData(oldp+264,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result),32);
        tracep->fullBit(oldp+265,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_en));
        tracep->fullIData(oldp+266,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_mulw),32);
        tracep->fullIData(oldp+267,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_divw),32);
        tracep->fullIData(oldp+268,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_divuw),32);
        tracep->fullIData(oldp+269,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_remw),32);
        tracep->fullIData(oldp+270,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_remuw),32);
        tracep->fullIData(oldp+271,(vlSelf->top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result),32);
        tracep->fullWData(oldp+272,(vlSelf->top__DOT__exu_inst__DOT__branch_pc_adder_inst__DOT__sum),65);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__mmu_inst__DOT__load_data),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__mmu_inst__DOT__mmu_alu_data),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__mmu_inst__DOT__mmu_load_data),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__mmu_inst__DOT__mmu_imm_data),64);
        tracep->fullCData(oldp+283,(vlSelf->top__DOT__mmu_inst__DOT__mmu_wb_choose),4);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__mmu_inst__DOT__mmu_snxt_pc),64);
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__forward_inst__DOT__ex_forward_1));
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__forward_inst__DOT__ex_forward_2));
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__forward_inst__DOT__mm_forward_1));
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__forward_inst__DOT__mm_forward_2));
        tracep->fullBit(oldp+290,(vlSelf->clk));
        tracep->fullBit(oldp+291,(vlSelf->rstn));
        tracep->fullQData(oldp+292,(vlSelf->pc),64);
        tracep->fullIData(oldp+294,(vlSelf->instr),32);
        tracep->fullBit(oldp+295,(vlSelf->ebreak));
        tracep->fullQData(oldp+296,(vlSelf->snxt_pc),64);
        tracep->fullQData(oldp+298,(vlSelf->dnxt_pc),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__dnpc),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__mmu_snxt_pc),64);
    }
}
