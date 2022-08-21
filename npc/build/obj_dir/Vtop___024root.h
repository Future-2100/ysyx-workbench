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
    VL_OUT8(this_ebreak,0,0);
    VL_OUT8(this_valid,0,0);
    VL_OUT8(ARID,3,0);
    VL_OUT8(ARLEN,7,0);
    VL_OUT8(ARSIZE,2,0);
    VL_OUT8(ARBURST,1,0);
    VL_OUT8(ARLOCK,0,0);
    VL_OUT8(ARCACHE,3,0);
    VL_OUT8(ARPORT,2,0);
    VL_OUT8(ARQOS,3,0);
    VL_OUT8(ARREGION,3,0);
    VL_OUT8(ARVALID,0,0);
    VL_IN8(ARREADY,0,0);
    VL_IN8(RID,3,0);
    VL_IN8(RRESP,1,0);
    VL_IN8(RLAST,0,0);
    VL_IN8(RVALID,0,0);
    VL_OUT8(RREADY,0,0);
    VL_OUT(this_instr,31,0);
    VL_OUT64(pc,63,0);
    VL_OUT64(snxt_pc,63,0);
    VL_OUT64(dnxt_pc,63,0);
    VL_OUT64(this_pc,63,0);
    VL_OUT64(ARADDR,63,0);
    VL_IN64(RDATA,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__jump_en;
        CData/*0:0*/ top__DOT__ifu_valid;
        CData/*0:0*/ top__DOT__hazard_nop;
        CData/*0:0*/ top__DOT__need_rs1;
        CData/*0:0*/ top__DOT__need_rs2;
        CData/*4:0*/ top__DOT__mmu_index_rd;
        CData/*0:0*/ top__DOT__mmu_wb_en;
        CData/*4:0*/ top__DOT__idu_index_rs1;
        CData/*4:0*/ top__DOT__idu_index_rs2;
        CData/*4:0*/ top__DOT__idu_index_rd;
        CData/*2:0*/ top__DOT__idu_funct3;
        CData/*6:0*/ top__DOT__idu_funct7;
        CData/*0:0*/ top__DOT__idu_valid;
        CData/*0:0*/ top__DOT__idu_add_pc_en;
        CData/*0:0*/ top__DOT__idu_add_rs1_en;
        CData/*0:0*/ top__DOT__idu_add_zero_en;
        CData/*0:0*/ top__DOT__idu_imm_en;
        CData/*0:0*/ top__DOT__idu_rs2_en;
        CData/*0:0*/ top__DOT__idu_addop_en;
        CData/*0:0*/ top__DOT__idu_iop_en;
        CData/*0:0*/ top__DOT__idu_rop_en;
        CData/*0:0*/ top__DOT__idu_mop_en;
        CData/*0:0*/ top__DOT__idu_iwop_en;
        CData/*0:0*/ top__DOT__idu_rwop_en;
        CData/*0:0*/ top__DOT__idu_mwop_en;
        CData/*0:0*/ top__DOT__idu_jal_en;
        CData/*0:0*/ top__DOT__idu_jalr_en;
        CData/*0:0*/ top__DOT__idu_branch_en;
        CData/*0:0*/ top__DOT__idu_load_en;
        CData/*0:0*/ top__DOT__idu_store_en;
        CData/*0:0*/ top__DOT__idu_wb_alu_en;
        CData/*0:0*/ top__DOT__idu_ebreak_en;
        CData/*0:0*/ top__DOT__fwd_en_1;
        CData/*0:0*/ top__DOT__fwd_en_2;
        CData/*0:0*/ top__DOT__exu_jal_en;
        CData/*0:0*/ top__DOT__exu_jalr_en;
        CData/*0:0*/ top__DOT__exu_branch_en;
        CData/*0:0*/ top__DOT__exu_br_result;
        CData/*0:0*/ top__DOT__exu_load_en;
        CData/*0:0*/ top__DOT__exu_store_en;
        CData/*2:0*/ top__DOT__exu_funct3;
        CData/*0:0*/ top__DOT__exu_wb_alu_en;
        CData/*0:0*/ top__DOT__exu_wb_spc_en;
        CData/*0:0*/ top__DOT__exu_wb_en;
        CData/*0:0*/ top__DOT__exu_ebreak_en;
        CData/*4:0*/ top__DOT__exu_index_rd;
        CData/*0:0*/ top__DOT__exu_valid;
        CData/*0:0*/ top__DOT__mmu_valid;
        CData/*0:0*/ top__DOT__mmu_ebreak_en;
        CData/*3:0*/ top__DOT__mm_wlen;
        CData/*0:0*/ top__DOT__idu_inst__DOT__wbfwd_en1;
        CData/*0:0*/ top__DOT__idu_inst__DOT__wbfwd_en2;
        CData/*0:0*/ top__DOT__idu_inst__DOT__I_type;
        CData/*0:0*/ top__DOT__idu_inst__DOT__U_type;
        CData/*0:0*/ top__DOT__idu_inst__DOT__add_pc_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__add_rs1_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__imm_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__rs2_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__addop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__iop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__iwop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__rop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__rwop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__mop_en;
    };
    struct {
        CData/*0:0*/ top__DOT__idu_inst__DOT__mwop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__jal_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__jalr_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__branch_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__load_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__store_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__wb_alu_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__ebreak_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__lui_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__auipc_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__addi_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT__add_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__wb_spc_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__wb_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__br_result;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__addiw_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__addw_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__subw_en;
        CData/*0:0*/ top__DOT__mmu_inst__DOT__mmu_wb_alu_en;
        CData/*0:0*/ top__DOT__mmu_inst__DOT__mmu_wb_spc_en;
        CData/*0:0*/ top__DOT__mmu_inst__DOT__mmu_load_en;
        CData/*0:0*/ top__DOT__axi_interface_inst__DOT__delay_rstn;
        CData/*0:0*/ top__DOT__axi_interface_inst__DOT__posedge_rstn;
        CData/*3:0*/ top__DOT__axi_interface_inst__DOT__nstate;
        CData/*3:0*/ top__DOT__axi_interface_inst__DOT__cstate;
        CData/*0:0*/ top__DOT__axi_interface_inst__DOT__rresp_instr_en;
        CData/*0:0*/ top__DOT__axi_interface_inst__DOT__rresp_data_en;
        CData/*0:0*/ top__DOT__hazard_inst__DOT__hazard_rs1;
        CData/*0:0*/ top__DOT__hazard_inst__DOT__hazard_rs2;
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
        VlWide<4>/*127:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__mul_su;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__wm_mulw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__wm_divw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__wm_divuw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__wm_remw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__wm_remuw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__wm_result;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_add;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sub;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sll;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_srl;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_sra;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riwop_result;
        QData/*63:0*/ top__DOT__ifu_pc;
        QData/*63:0*/ top__DOT__ifu_snxt_pc;
        QData/*63:0*/ top__DOT__mmu_wb_data;
        QData/*63:0*/ top__DOT__idu_snxt_pc;
        QData/*63:0*/ top__DOT__idu_pc;
        QData/*63:0*/ top__DOT__idu_data_rs1;
        QData/*63:0*/ top__DOT__idu_imm;
        QData/*63:0*/ top__DOT__idu_data_rs2;
        QData/*63:0*/ top__DOT__fwd_data_rs1;
        QData/*63:0*/ top__DOT__fwd_data_rs2;
        QData/*63:0*/ top__DOT__exu_snxt_pc;
        QData/*63:0*/ top__DOT__exu_alu_result;
    };
    struct {
        QData/*63:0*/ top__DOT__exu_data_rs2;
        QData/*63:0*/ top__DOT__exu_pc;
        QData/*63:0*/ top__DOT__mmu_pc;
        QData/*63:0*/ top__DOT__mm_rdata;
        QData/*63:0*/ top__DOT__idu_inst__DOT__gpr_data_rs1;
        QData/*63:0*/ top__DOT__idu_inst__DOT__gpr_data_rs2;
        QData/*63:0*/ top__DOT__idu_inst__DOT__data_rs1;
        QData/*63:0*/ top__DOT__idu_inst__DOT__data_rs2;
        QData/*63:0*/ top__DOT__idu_inst__DOT__imm;
        QData/*63:0*/ top__DOT__exu_inst__DOT__data_rs1;
        QData/*63:0*/ top__DOT__exu_inst__DOT__data_rs2;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_result;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_1;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__opdata_2;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__sum;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__m_div;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__m_divu;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__m_rem;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__m_result;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sub;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sll;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riop_slt;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sltu;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riop_xor;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riop_srl;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riop_sra;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riop_or;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riop_and;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT__riop_result;
        QData/*63:0*/ top__DOT__mmu_inst__DOT__load_data;
        QData/*63:0*/ top__DOT__mmu_inst__DOT__mmu_alu_result;
        QData/*63:0*/ top__DOT__mmu_inst__DOT__mmu_snxt_pc;
        QData/*63:0*/ top__DOT__mmu_inst__DOT__mmu_load_data;
        QData/*63:0*/ top__DOT__axi_interface_inst__DOT__mm_raddr;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__idu_inst__DOT__regfile_inst__DOT__gpr;
    };

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__rstn;
        CData/*0:0*/ top__DOT____Vtogcov__this_ebreak;
        CData/*0:0*/ top__DOT____Vtogcov__this_valid;
        CData/*3:0*/ top__DOT____Vtogcov__ARID;
        CData/*7:0*/ top__DOT____Vtogcov__ARLEN;
        CData/*2:0*/ top__DOT____Vtogcov__ARSIZE;
        CData/*1:0*/ top__DOT____Vtogcov__ARBURST;
        CData/*0:0*/ top__DOT____Vtogcov__ARLOCK;
        CData/*3:0*/ top__DOT____Vtogcov__ARCACHE;
        CData/*2:0*/ top__DOT____Vtogcov__ARPORT;
        CData/*3:0*/ top__DOT____Vtogcov__ARQOS;
        CData/*3:0*/ top__DOT____Vtogcov__ARREGION;
        CData/*0:0*/ top__DOT____Vtogcov__ARVALID;
        CData/*0:0*/ top__DOT____Vtogcov__ARREADY;
        CData/*3:0*/ top__DOT____Vtogcov__RID;
        CData/*1:0*/ top__DOT____Vtogcov__RRESP;
        CData/*0:0*/ top__DOT____Vtogcov__RLAST;
        CData/*0:0*/ top__DOT____Vtogcov__RVALID;
        CData/*0:0*/ top__DOT____Vtogcov__RREADY;
        CData/*0:0*/ top__DOT____Vtogcov__instr_valid;
        CData/*0:0*/ top__DOT____Vtogcov__jump_en;
        CData/*0:0*/ top__DOT____Vtogcov__ifu_valid;
        CData/*0:0*/ top__DOT____Vtogcov__hazard_stop;
        CData/*0:0*/ top__DOT____Vtogcov__need_rs1;
        CData/*0:0*/ top__DOT____Vtogcov__need_rs2;
        CData/*4:0*/ top__DOT____Vtogcov__mmu_index_rd;
        CData/*0:0*/ top__DOT____Vtogcov__mmu_wb_en;
        CData/*4:0*/ top__DOT____Vtogcov__idu_index_rs1;
        CData/*4:0*/ top__DOT____Vtogcov__idu_index_rs2;
        CData/*4:0*/ top__DOT____Vtogcov__idu_index_rd;
        CData/*2:0*/ top__DOT____Vtogcov__idu_funct3;
        CData/*6:0*/ top__DOT____Vtogcov__idu_funct7;
        CData/*0:0*/ top__DOT____Vtogcov__idu_valid;
        CData/*0:0*/ top__DOT____Vtogcov__idu_add_pc_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_add_rs1_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_add_zero_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_imm_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_rs2_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_addop_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_iop_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_rop_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_mop_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_iwop_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_rwop_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_mwop_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_jal_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_jalr_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_branch_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_load_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_store_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_wb_alu_en;
        CData/*0:0*/ top__DOT____Vtogcov__idu_ebreak_en;
        CData/*0:0*/ top__DOT____Vtogcov__fwd_en_1;
        CData/*0:0*/ top__DOT____Vtogcov__fwd_en_2;
        CData/*0:0*/ top__DOT____Vtogcov__exu_jal_en;
        CData/*0:0*/ top__DOT____Vtogcov__exu_jalr_en;
        CData/*0:0*/ top__DOT____Vtogcov__exu_branch_en;
        CData/*0:0*/ top__DOT____Vtogcov__exu_br_result;
        CData/*0:0*/ top__DOT____Vtogcov__exu_load_en;
        CData/*0:0*/ top__DOT____Vtogcov__exu_store_en;
        CData/*2:0*/ top__DOT____Vtogcov__exu_funct3;
        CData/*0:0*/ top__DOT____Vtogcov__exu_wb_alu_en;
        CData/*0:0*/ top__DOT____Vtogcov__exu_wb_spc_en;
    };
    struct {
        CData/*0:0*/ top__DOT____Vtogcov__exu_wb_en;
        CData/*0:0*/ top__DOT____Vtogcov__exu_ebreak_en;
        CData/*4:0*/ top__DOT____Vtogcov__exu_index_rd;
        CData/*0:0*/ top__DOT____Vtogcov__exu_valid;
        CData/*0:0*/ top__DOT____Vtogcov__mmu_valid;
        CData/*0:0*/ top__DOT____Vtogcov__mmu_ebreak_en;
        CData/*3:0*/ top__DOT____Vtogcov__mm_wlen;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__wbfwd_en1;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__wbfwd_en2;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__I_type;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__S_type;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__B_type;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__U_type;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__J_type;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__add_pc_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__add_rs1_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__add_zero_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__imm_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__rs2_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__addop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__iop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__iwop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__rop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__rwop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__mop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__mwop_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__jalr_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__load_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__wb_alu_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT____Vtogcov__ebreak_en;
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
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__auipc_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__addi_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__add_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__op_en;
        CData/*0:0*/ top__DOT__idu_inst__DOT__decoder_inst__DOT____Vtogcov__wop_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT____Vtogcov__wb_spc_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT____Vtogcov__wb_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT____Vtogcov__br_result;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct7_5;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_000;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_001;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_010;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_011;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_100;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_101;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_110;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__funct3_111;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__addiw_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__addw_en;
        CData/*0:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__subw_en;
        CData/*0:0*/ top__DOT__mmu_inst__DOT____Vtogcov__mmu_wb_alu_en;
    };
    struct {
        CData/*0:0*/ top__DOT__mmu_inst__DOT____Vtogcov__mmu_wb_spc_en;
        CData/*0:0*/ top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_en;
        CData/*0:0*/ top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_000;
        CData/*0:0*/ top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_001;
        CData/*0:0*/ top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_010;
        CData/*0:0*/ top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_011;
        CData/*0:0*/ top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_100;
        CData/*0:0*/ top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_101;
        CData/*0:0*/ top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_110;
        CData/*0:0*/ top__DOT__mmu_inst__DOT__memory_inst__DOT____Vtogcov__funct3_111;
        CData/*0:0*/ top__DOT__axi_interface_inst__DOT____Vtogcov__delay_rstn;
        CData/*0:0*/ top__DOT__axi_interface_inst__DOT____Vtogcov__posedge_rstn;
        CData/*3:0*/ top__DOT__axi_interface_inst__DOT____Vtogcov__nstate;
        CData/*3:0*/ top__DOT__axi_interface_inst__DOT____Vtogcov__cstate;
        CData/*0:0*/ top__DOT__axi_interface_inst__DOT____Vtogcov__rresp_data_en;
        CData/*0:0*/ top__DOT__hazard_inst__DOT____Vtogcov__hazard_rs1;
        CData/*0:0*/ top__DOT__hazard_inst__DOT____Vtogcov__hazard_rs2;
        CData/*0:0*/ top__DOT__forward_inst__DOT____Vtogcov__ex_forward_1;
        CData/*0:0*/ top__DOT__forward_inst__DOT____Vtogcov__ex_forward_2;
        CData/*0:0*/ top__DOT__forward_inst__DOT____Vtogcov__mm_forward_1;
        CData/*0:0*/ top__DOT__forward_inst__DOT____Vtogcov__mm_forward_2;
        CData/*0:0*/ __Vdly__top__DOT__ifu_valid;
        CData/*0:0*/ __Vclklast__TOP__clk;
        IData/*31:0*/ top__DOT____Vtogcov__this_instr;
        IData/*31:0*/ top__DOT____Vtogcov__ifu_instr;
        IData/*31:0*/ top__DOT____Vtogcov__idu_instr;
        IData/*31:0*/ top__DOT____Vtogcov__exu_instr;
        IData/*31:0*/ top__DOT____Vtogcov__mmu_instr;
        VlWide<4>/*127:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_ss;
        VlWide<4>/*127:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__mul_uu;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_mulw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_divw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_divuw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_remw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_remuw;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__wm_result;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_add;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sub;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sll;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_srl;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_sra;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riwop_result;
        IData/*31:0*/ __Vdly__top__DOT__ifu_instr;
        QData/*63:0*/ top__DOT____Vtogcov__pc;
        QData/*63:0*/ top__DOT____Vtogcov__snxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__dnxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__this_pc;
        QData/*63:0*/ top__DOT____Vtogcov__ARADDR;
        QData/*63:0*/ top__DOT____Vtogcov__RDATA;
        QData/*63:0*/ top__DOT____Vtogcov__jump_pc;
        QData/*63:0*/ top__DOT____Vtogcov__ifu_pc;
        QData/*63:0*/ top__DOT____Vtogcov__ifu_snxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__mmu_wb_data;
        QData/*63:0*/ top__DOT____Vtogcov__idu_snxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__idu_pc;
        QData/*63:0*/ top__DOT____Vtogcov__idu_data_rs1;
        QData/*63:0*/ top__DOT____Vtogcov__idu_imm;
        QData/*63:0*/ top__DOT____Vtogcov__idu_data_rs2;
        QData/*63:0*/ top__DOT____Vtogcov__fwd_data_rs1;
        QData/*63:0*/ top__DOT____Vtogcov__fwd_data_rs2;
        QData/*63:0*/ top__DOT____Vtogcov__exu_snxt_pc;
        QData/*63:0*/ top__DOT____Vtogcov__exu_data_rs2;
        QData/*63:0*/ top__DOT____Vtogcov__exu_pc;
        QData/*63:0*/ top__DOT____Vtogcov__mmu_pc;
    };
    struct {
        QData/*63:0*/ top__DOT____Vtogcov__mm_rdata;
        QData/*63:0*/ top__DOT__idu_inst__DOT____Vtogcov__gpr_data_rs1;
        QData/*63:0*/ top__DOT__idu_inst__DOT____Vtogcov__gpr_data_rs2;
        QData/*63:0*/ top__DOT__idu_inst__DOT____Vtogcov__data_rs1;
        QData/*63:0*/ top__DOT__idu_inst__DOT____Vtogcov__data_rs2;
        QData/*63:0*/ top__DOT__idu_inst__DOT____Vtogcov__imm;
        QData/*63:0*/ top__DOT__exu_inst__DOT____Vtogcov__data_rs1;
        QData/*63:0*/ top__DOT__exu_inst__DOT____Vtogcov__data_rs2;
        QData/*63:0*/ top__DOT__exu_inst__DOT____Vtogcov__alu_result;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_1;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__opdata_2;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__sum;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_div;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_divu;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_rem;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__m_result;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sub;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sll;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_slt;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sltu;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_xor;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_srl;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_sra;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_or;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_and;
        QData/*63:0*/ top__DOT__exu_inst__DOT__alu_inst__DOT____Vtogcov__riop_result;
        QData/*63:0*/ top__DOT__mmu_inst__DOT____Vtogcov__load_data;
        QData/*63:0*/ top__DOT__mmu_inst__DOT____Vtogcov__mmu_alu_result;
        QData/*63:0*/ top__DOT__mmu_inst__DOT____Vtogcov__mmu_snxt_pc;
        QData/*63:0*/ top__DOT__mmu_inst__DOT____Vtogcov__mmu_load_data;
        QData/*63:0*/ top__DOT__axi_interface_inst__DOT____Vtogcov__mm_raddr;
        QData/*63:0*/ __Vdly__top__DOT__ifu_pc;
        QData/*63:0*/ __Vdly__top__DOT__ifu_snxt_pc;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
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
