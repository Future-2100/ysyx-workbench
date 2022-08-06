module exu(

  input   wire                   clk  ,
  input   wire                  rstn  ,
  input   wire         flush_nop      ,

  input   wire  [4:0]  idu_index_rd   ,
  input   wire  [4:0]  idu_index_rs1  ,
  input   wire  [4:0]  idu_index_rs2  ,

  input   wire         idu_jump_en    ,
  input   wire         idu_branch_en  ,

  //alu operate data 1
  input   wire         fw_en1         ,
  input   wire         idu_alu_pc_en  ,
  input   wire  [63:0] idu_pc         ,
  input   wire  [63:0] idu_gpr_data1  ,
  input   wire  [63:0] fw_data        ,

  //alu operate data 2
  input   wire         fw_en2         ,
  input   wire         idu_alu_imm_en ,
  input   wire  [63:0] idu_imm        ,
  input   wire  [63:0] idu_gpr_data2  ,
//input   wire  [63:0] fw_data        ,

  //alu control signals
  input   wire         idu_alu_en        ,
  input   wire         idu_alu_halfop    ,
  input   wire  [4:0]  idu_alu_opcode    ,
  input   wire  [2:0]  idu_branch_opcode ,

  //other signals
  input   wire         idu_load_en       ,
  input   wire         idu_store_en      ,
  input   wire  [2:0]  idu_load_opcode   ,
  input   wire  [3:0]  idu_store_len     ,
  input   wire         idu_wb_en         ,
  input   wire  [2:0]  idu_wb_choose     ,

  output  wire  [4:0]  exu_index_rd      ,
  output  wire  [4:0]  exu_index_rs1     ,
  output  wire  [4:0]  exu_index_rs2     ,

  output  wire         exu_jump_en       ,
  output  wire         exu_branch_en     ,

  output  wire  [63:0] exu_branch_pc      ,
  output  wire         exu_branch_result  ,
  output  wire  [63:0] exu_alu_result     ,
  output  wire  [63:0] exu_gpr_data2      ,

  output  wire         exu_load_en        ,
  output  wire  [2:0]  exu_load_opcode    ,
  output  wire         exu_store_en       ,
  output  wire  [3:0]  exu_store_len      ,
  output  wire         exu_wb_en          ,
  output  wire  [2:0]  exu_wb_choose      

);

wire  [63:0]     alu_result;
wire          branch_result;
alu alu_inst(
     .pc_en           ( idu_alu_pc_en      ),
     .pc              ( idu_pc             ),
     .fw_en1          (     fw_en1         ),
     .fw_data         (     fw_data        ),
     .gpr_data1       ( idu_gpr_data1      ),
     .imm_en          ( idu_imm_en         ),
     .imm             ( idu_imm            ),
     .fw_en2          (     fw_en2         ),
     .gpr_data2       ( idu_gpr_data2      ),
     .alu_en          ( idu_alu_en         ),
     .alu_opcode      ( idu_alu_opcode     ),
     .alu_halfop      ( idu_alu_halfop     ),
     .branch_en       ( idu_branch_en      ),
     .branch_opcode   ( idu_branch_opcode  ),
     .alu_result      (     alu_result     ),
     .branch_result   (  branch_result     )     
);

wire  [63:0]  branch_pc;
branch_pc_adder branch_pc_adder_inst(
  .imm_B     ( idu_imm   ) ,
  .pc        ( idu_pc    ) ,
  .branch_pc ( branch_pc )
);

  always@(posedge clk) begin
    if(!rstn) begin
         exu_index_rd       <=   'b0  ; 
         exu_index_rs1      <=   'b0  ; 
         exu_index_rs2      <=   'b0  ; 
         exu_jump_en        <=   'b0  ; 
         exu_branch_en      <=   'b0  ; 
         exu_branch_pc      <=   'b0  ; 
         exu_branch_result  <=   'b0  ; 
         exu_alu_result     <=   'b0  ; 
         exu_gpr_data2      <=   'b0  ; 
         exu_load_en        <=   'b0  ; 
         exu_load_opcode    <=   'b0  ; 
         exu_store_en       <=   'b0  ; 
         exu_store_len      <=   'b0  ; 
         exu_wb_en          <=   'b0  ; 
         exu_wb_choose      <=   'b0  ; 
    end
    else if(flush_nop) begin
         exu_index_rd       <=   idu_index_rd       ; 
         exu_index_rs1      <=   idu_index_rs1      ; 
         exu_index_rs2      <=   idu_index_rs2      ; 
         exu_jump_en        <=             'b0      ; 
         exu_branch_en      <=             'b0      ; 
         exu_branch_pc      <=   idu_branch_pc      ; 
         exu_branch_result  <=             'b0      ; 
         exu_alu_result     <=   idu_alu_result     ; 
         exu_gpr_data2      <=   idu_gpr_data2      ; 
         exu_load_en        <=             'b0      ; 
         exu_load_opcode    <=   idu_load_opcode    ; 
         exu_store_en       <=             'b0      ; 
         exu_store_len      <=   idu_store_len      ; 
         exu_wb_en          <=             'b0      ; 
         exu_wb_choose      <=   idu_wb_choose      ; 
    end
    else begin
         exu_index_rd       <=   idu_index_rd       ; 
         exu_index_rs1      <=   idu_index_rs1      ; 
         exu_index_rs2      <=   idu_index_rs2      ; 
         exu_jump_en        <=   idu_jump_en        ; 
         exu_branch_en      <=   idu_branch_en      ; 
         exu_branch_pc      <=       branch_pc      ; 
         exu_branch_result  <=       branch_result  ; 
         exu_alu_result     <=       alu_result     ; 
         exu_gpr_data2      <=   idu_gpr_data2      ; 
         exu_load_en        <=   idu_load_en        ; 
         exu_load_opcode    <=   idu_load_opcode    ; 
         exu_store_en       <=   idu_store_en       ; 
         exu_store_len      <=   idu_store_len      ; 
         exu_wb_en          <=   idu_wb_en          ; 
         exu_wb_choose      <=   idu_wb_choose      ; 
    end
  end

endmodule


