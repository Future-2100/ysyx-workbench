// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_OUT8(ebreak,0,0);
    VL_OUT8(execute_en,0,0);
    VL_IN(instr,31,0);
    VL_OUT(execute_instr,31,0);
    VL_OUT64(pc,63,0);
    VL_OUT64(snxt_pc,63,0);
    VL_OUT64(execute_pc,63,0);
    VL_OUT64(dnxt_pc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__ifu_execute_en;
        CData/*0:0*/ top__DOT__idu_execute_en;
        CData/*0:0*/ top__DOT__exu_execute_en;
        CData/*0:0*/ top__DOT__mmu_execute_en;
        CData/*0:0*/ top__DOT__exu_jump_en;
        CData/*0:0*/ top__DOT__exu_branch_en;
        CData/*0:0*/ top__DOT__flush_nop;
        CData/*0:0*/ top__DOT__ld_hz_nop;
        CData/*4:0*/ top__DOT__idu_index_rs1;
        CData/*4:0*/ top__DOT__idu_index_rs2;
        CData/*4:0*/ top__DOT__idu_index_rd;
        CData/*4:0*/ top__DOT__idu_alu_opcode;
        CData/*0:0*/ top__DOT__idu_alu_en;
        CData/*0:0*/ top__DOT__idu_alu_imm_en;
        CData/*0:0*/ top__DOT__idu_alu_pc_en;
        CData/*2:0*/ top__DOT__idu_branch_opcode;
        CData/*0:0*/ top__DOT__idu_alu_halfop;
        CData/*0:0*/ top__DOT__idu_jump_en;
        CData/*0:0*/ top__DOT__idu_branch_en;
        CData/*0:0*/ top__DOT__idu_load_en;
        CData/*0:0*/ top__DOT__idu_store_en;
        CData/*3:0*/ top__DOT__idu_store_len;
        CData/*0:0*/ top__DOT__idu_wb_en;
        CData/*3:0*/ top__DOT__idu_wb_choose;
        CData/*0:0*/ top__DOT__idu_ebreak;
        CData/*4:0*/ top__DOT__mmu_index_rd;
        CData/*0:0*/ top__DOT__mmu_wb_en;
        CData/*0:0*/ top__DOT__fw_en1;
        CData/*0:0*/ top__DOT__fw_en2;
        CData/*4:0*/ top__DOT__exu_index_rd;
        CData/*4:0*/ top__DOT__exu_index_rs1;
        CData/*4:0*/ top__DOT__exu_index_rs2;
        CData/*0:0*/ top__DOT__exu_branch_result;
        CData/*0:0*/ top__DOT__exu_load_en;
        CData/*2:0*/ top__DOT__exu_load_opcode;
        CData/*0:0*/ top__DOT__exu_store_en;
        CData/*3:0*/ top__DOT__exu_store_len;
        CData/*0:0*/ top__DOT__exu_wb_en;
        CData/*3:0*/ top__DOT__exu_wb_choose;
        CData/*0:0*/ top__DOT__exu_ebreak;
        CData/*0:0*/ top__DOT__mmu_ebreak;
        CData/*0:0*/ top__DOT__idu_inst__DOT__wb_forward_1;
        CData/*0:0*/ top__DOT__idu_inst__DOT__wb_forward_2;
        CData/*0:0*/ top__DOT__idu_inst__DOT__branch_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__alu_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__alu_pc_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__alu_imm_en;
        CData/*4:0*/ top__DOT__idu_inst__DOT__alu_opcode;
        CData/*0:0*/ top__DOT__idu_inst__DOT__alu_halfop;
        CData/*0:0*/ top__DOT__idu_inst__DOT__jump_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__load_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__store_en;
        CData/*3:0*/ top__DOT__idu_inst__DOT__store_len;
        CData/*0:0*/ top__DOT__idu_inst__DOT__wb_en;
        CData/*3:0*/ top__DOT__idu_inst__DOT__wb_choose;
        CData/*0:0*/ top__DOT__idu_inst__DOT__I_type;
        CData/*0:0*/ top__DOT__idu_inst__DOT__U_type;
        CData/*0:0*/ top__DOT__idu_inst__DOT__ebreak;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__lui_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__auipc_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__jal_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__jalr_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__ioperate_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__operate_en;
    };
    struct {
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__iwoperate_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__woperate_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__alu_adder_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__branch_result;
        CData/*3:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opcode;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__gpr_en1;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__gpr_en2;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_en;
        CData/*0:0*/ top__DOT__mmu_inst__DOT__branch_en;
        CData/*3:0*/ top__DOT__mmu_inst__DOT__mmu_wb_choose;
        CData/*0:0*/ top__DOT__forward_inst__DOT__ex_forward_1;
        CData/*0:0*/ top__DOT__forward_inst__DOT__ex_forward_2;
        CData/*0:0*/ top__DOT__forward_inst__DOT__mm_forward_1;
        CData/*0:0*/ top__DOT__forward_inst__DOT__mm_forward_2;
        IData/*31:0*/ top__DOT__ifu_instr;
        IData/*31:0*/ top__DOT__idu_instr;
        IData/*31:0*/ top__DOT__exu_instr;
        IData/*31:0*/ top__DOT__mmu_instr;
        IData/*31:0*/ top__DOT__idu_inst__DOT__regfile_inst__DOT__i;
        VlWide<4>/*127:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__mul_ss;
        VlWide<4>/*127:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__mul_uu;
        VlWide<4>/*127:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_sum;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_dif;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_sll;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_srl;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_sra;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opiw_result;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_mulw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_divw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_divuw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_remw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_remuw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmw_result;
        VlWide<3>/*64:0*/ top__DOT__exu_inst__DOT__branch_pc_adder_inst__DOT__sum;
        QData/*63:0*/ top__DOT__mm_rdata;
        QData/*63:0*/ top__DOT__mmu_pc;
        QData/*63:0*/ top__DOT__dnpc;
        QData/*63:0*/ top__DOT__ifu_pc;
        QData/*63:0*/ top__DOT__ifu_snxt_pc;
        QData/*63:0*/ top__DOT__mmu_dnpc;
        QData/*63:0*/ top__DOT__idu_pc;
        QData/*63:0*/ top__DOT__idu_gpr_data1;
        QData/*63:0*/ top__DOT__idu_imm;
        QData/*63:0*/ top__DOT__idu_gpr_data2;
        QData/*63:0*/ top__DOT__idu_snxt_pc;
        QData/*63:0*/ top__DOT__mmu_wb_data;
        QData/*63:0*/ top__DOT__fw_data1;
        QData/*63:0*/ top__DOT__fw_data2;
        QData/*63:0*/ top__DOT__exu_branch_pc;
        QData/*63:0*/ top__DOT__exu_alu_result;
        QData/*63:0*/ top__DOT__exu_gpr_data2;
        QData/*63:0*/ top__DOT__exu_imm;
        QData/*63:0*/ top__DOT__exu_snxt_pc;
        QData/*63:0*/ top__DOT__exu_pc;
        QData/*63:0*/ top__DOT__mmu_snxt_pc;
        QData/*63:0*/ top__DOT__exu_fwd_data;
        QData/*63:0*/ top__DOT__idu_inst__DOT__gpr_data1;
        QData/*63:0*/ top__DOT__idu_inst__DOT__gpr_data2;
        QData/*63:0*/ top__DOT__idu_inst__DOT__reg_gpr_data1;
        QData/*63:0*/ top__DOT__idu_inst__DOT__reg_gpr_data2;
    };
    struct {
        QData/*63:0*/ top__DOT__idu_inst__DOT__imm;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_result;
        QData/*63:0*/ top__DOT__exu_inst__DOT__store_data;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_1;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sum;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_dif;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sll;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_slt;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sltu;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_xor;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_srl;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_sra;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_or;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_and;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opid_result;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_div;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_divu;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_rem;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opmd_result;
        QData/*63:0*/ top__DOT__mmu_inst__DOT__load_data;
        QData/*63:0*/ top__DOT__mmu_inst__DOT__mmu_alu_data;
        QData/*63:0*/ top__DOT__mmu_inst__DOT__mmu_load_data;
        QData/*63:0*/ top__DOT__mmu_inst__DOT__mmu_imm_data;
        QData/*63:0*/ top__DOT__mmu_inst__DOT__mmu_snxt_pc;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr;
    };

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__rstn;
        CData/*0:0*/ top__DOT____Vtogcov__ebreak;
        CData/*0:0*/ top__DOT____Vtogcov__execute_en;
        CData/*3:0*/ top__DOT____Vtogcov__mm_wlen;
        CData/*0:0*/ top__DOT____Vtogcov__mm_wen;
        CData/*0:0*/ top__DOT____Vtogcov__mm_ren;
        CData/*0:0*/ top__DOT____Vtogcov__ifu_execute_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_execute_en;
        CData/*0:0*/ top__DOT____Vtogcov__exu_execute_en;
        CData/*0:0*/ top__DOT____Vtogcov__mmu_execute_en;
        CData/*0:0*/ top__DOT____Vtogcov__exu_jump_en;
        CData/*0:0*/ top__DOT____Vtogcov__exu_branch_en;
        CData/*0:0*/ top__DOT____Vtogcov__ld_hz_stop;
        CData/*0:0*/ top__DOT____Vtogcov__flush_nop;
        CData/*0:0*/ top__DOT____Vtogcov__mmu_branch_en;
        CData/*0:0*/ top__DOT____Vtogcov__decoder_alu_en;
        CData/*4:0*/ top__DOT____Vtogcov__idu_index_rs1;
        CData/*4:0*/ top__DOT____Vtogcov__idu_index_rs2;
        CData/*4:0*/ top__DOT____Vtogcov__idu_index_rd;
        CData/*4:0*/ top__DOT____Vtogcov__idu_alu_opcode;
        CData/*0:0*/ top__DOT____Vtogcov__idu_alu_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_alu_imm_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_alu_pc_en;
        CData/*2:0*/ top__DOT____Vtogcov__idu_branch_opcode;
        CData/*0:0*/ top__DOT____Vtogcov__idu_alu_halfop;
        CData/*0:0*/ top__DOT____Vtogcov__idu_jump_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_branch_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_load_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_store_en;
        CData/*3:0*/ top__DOT____Vtogcov__idu_store_len;
        CData/*0:0*/ top__DOT____Vtogcov__idu_wb_en;
        CData/*3:0*/ top__DOT____Vtogcov__idu_wb_choose;
        CData/*0:0*/ top__DOT____Vtogcov__idu_ebreak;
        CData/*4:0*/ top__DOT____Vtogcov__mmu_index_rd;
        CData/*0:0*/ top__DOT____Vtogcov__mmu_wb_en;
        CData/*0:0*/ top__DOT____Vtogcov__fw_en1;
        CData/*0:0*/ top__DOT____Vtogcov__fw_en2;
        CData/*4:0*/ top__DOT____Vtogcov__exu_index_rd;
        CData/*4:0*/ top__DOT____Vtogcov__exu_index_rs1;
        CData/*4:0*/ top__DOT____Vtogcov__exu_index_rs2;
        CData/*0:0*/ top__DOT____Vtogcov__exu_branch_result;
        CData/*2:0*/ top__DOT____Vtogcov__exu_load_opcode;
        CData/*0:0*/ top__DOT____Vtogcov__exu_wb_en;
        CData/*3:0*/ top__DOT____Vtogcov__exu_wb_choose;
        CData/*0:0*/ top__DOT____Vtogcov__exu_ebreak;
        CData/*0:0*/ top__DOT____Vtogcov__mmu_ebreak;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__wb_forward_1;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__wb_forward_2;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__branch_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__alu_pc_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__alu_imm_en;
        CData/*4:0*/ top__DOT__idu_inst__DOT____Vtogcov__alu_opcode;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__alu_halfop;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__jump_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__load_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__store_en;
        CData/*3:0*/ top__DOT__idu_inst__DOT____Vtogcov__store_len;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__wb_en;
        CData/*3:0*/ top__DOT__idu_inst__DOT____Vtogcov__wb_choose;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__I_type;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__U_type;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__J_type;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__ebreak;
    };
    struct {
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode1_0___05F11;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode4_2___05F000;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode4_2___05F001;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode4_2___05F010;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode4_2___05F011;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode4_2___05F100;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode4_2___05F101;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode4_2___05F110;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode4_2___05F111;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode6_5___05F00;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode6_5___05F01;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode6_5___05F10;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__opcode6_5___05F11;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__lui_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__auipc_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__jalr_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__ioperate_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__operate_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__iwoperate_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__woperate_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__alu_adder_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3_1_0___05F00;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3_1_0___05F01;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3_1_0___05F10;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__funct3_1_0___05F11;
        CData/*0:0*/ top__DOT__exu_inst__DOT____Vtogcov__branch_result;
        CData/*3:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opcode;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gpr_en1;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__gpr_en2;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_en;
        CData/*3:0*/ top__DOT__mmu_inst__DOT____Vtogcov__mmu_wb_choose;
        CData/*0:0*/ top__DOT__forward_inst__DOT____Vtogcov__ex_forward_1;
        CData/*0:0*/ top__DOT__forward_inst__DOT____Vtogcov__ex_forward_2;
        CData/*0:0*/ top__DOT__forward_inst__DOT____Vtogcov__mm_forward_1;
        CData/*0:0*/ top__DOT__forward_inst__DOT____Vtogcov__mm_forward_2;
        CData/*0:0*/ __Vdly__top__DOT__ifu_execute_en;
        CData/*0:0*/ __Vclklast__TOP__clk;
        IData/*31:0*/ top__DOT____Vtogcov__instr;
        IData/*31:0*/ top__DOT____Vtogcov__execute_instr;
        IData/*31:0*/ top__DOT____Vtogcov__ifu_instr;
        IData/*31:0*/ top__DOT____Vtogcov__idu_instr;
        IData/*31:0*/ top__DOT____Vtogcov__exu_instr;
        IData/*31:0*/ top__DOT____Vtogcov__mmu_instr;
        VlWide<4>/*127:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss;
        VlWide<4>/*127:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu;
        VlWide<4>/*127:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_su;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_sum;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_dif;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_sll;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_srl;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_sra;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opiw_result;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_mulw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_divw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_divuw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_remw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_remuw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmw_result;
        VlWide<3>/*64:0*/ top__DOT__exu_inst__DOT__branch_pc_adder_inst__DOT____Vtogcov__sum;
        IData/*31:0*/ __Vdly__top__DOT__ifu_instr;
        QData/*63:0*/ top__DOT____Vtogcov__pc;
    };
    struct {
        QData/*63:0*/ top__DOT____Vtogcov__snxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__execute_pc;
        QData/*63:0*/ top__DOT____Vtogcov__dnxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__mm_addr;
        QData/*63:0*/ top__DOT____Vtogcov__mm_wdata;
        QData/*63:0*/ top__DOT____Vtogcov__mm_rdata;
        QData/*63:0*/ top__DOT____Vtogcov__mmu_pc;
        QData/*63:0*/ top__DOT____Vtogcov__dnpc;
        QData/*63:0*/ top__DOT____Vtogcov__ifu_pc;
        QData/*63:0*/ top__DOT____Vtogcov__ifu_snxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__mmu_dnpc;
        QData/*63:0*/ top__DOT____Vtogcov__idu_pc;
        QData/*63:0*/ top__DOT____Vtogcov__idu_gpr_data1;
        QData/*63:0*/ top__DOT____Vtogcov__idu_imm;
        QData/*63:0*/ top__DOT____Vtogcov__idu_gpr_data2;
        QData/*63:0*/ top__DOT____Vtogcov__idu_snxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__mmu_wb_data;
        QData/*63:0*/ top__DOT____Vtogcov__fw_data1;
        QData/*63:0*/ top__DOT____Vtogcov__fw_data2;
        QData/*63:0*/ top__DOT____Vtogcov__exu_branch_pc;
        QData/*63:0*/ top__DOT____Vtogcov__exu_imm;
        QData/*63:0*/ top__DOT____Vtogcov__exu_snxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__exu_pc;
        QData/*63:0*/ top__DOT____Vtogcov__mmu_snxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__exu_fwd_data;
        QData/*63:0*/ top__DOT__idu_inst__DOT____Vtogcov__gpr_data1;
        QData/*63:0*/ top__DOT__idu_inst__DOT____Vtogcov__gpr_data2;
        QData/*63:0*/ top__DOT__idu_inst__DOT____Vtogcov__reg_gpr_data1;
        QData/*63:0*/ top__DOT__idu_inst__DOT____Vtogcov__reg_gpr_data2;
        QData/*63:0*/ top__DOT__idu_inst__DOT____Vtogcov__imm;
        QData/*63:0*/ top__DOT__exu_inst__DOT____Vtogcov__alu_result;
        QData/*63:0*/ top__DOT__exu_inst__DOT____Vtogcov__branch_pc;
        QData/*63:0*/ top__DOT__exu_inst__DOT____Vtogcov__store_data;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_1;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sum;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_dif;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sll;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_slt;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sltu;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_xor;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_srl;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_sra;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_or;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_and;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opid_result;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_div;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_divu;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_rem;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opmd_result;
        QData/*63:0*/ top__DOT__mmu_inst__DOT____Vtogcov__load_data;
        QData/*63:0*/ top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_data;
        QData/*63:0*/ top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data;
        QData/*63:0*/ top__DOT__mmu_inst__DOT____Vtogcov__mmu_imm_data;
        QData/*63:0*/ top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc;
        QData/*63:0*/ __Vtask_top__DOT__vmem_read__1__rdata;
        QData/*63:0*/ __Vdly__top__DOT__ifu_pc;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
