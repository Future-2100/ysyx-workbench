module exu(

  input   wire                   clk  ,
  input   wire                  rstn  ,
  input   wire         flush_nop      ,

  input   wire  [4:0]  idu_index_rd   ,
  input   wire  [4:0]  idu_index_rs1  ,
  input   wire  [4:0]  idu_index_rs2  ,

  input   wire         idu_jump_en    ,
  input   wire         idu_branch_en  ,

  input   wire         idu_execute_en ,
  output  reg          exu_execute_en ,

  //alu operate data 1
  input   wire         fw_en1         ,
  input   wire         idu_alu_pc_en  ,
  input   wire  [63:0] idu_pc         ,
  input   wire  [63:0] idu_gpr_data1  ,
  input   wire  [63:0] fw_data1       ,

  //alu operate data 2
  input   wire         fw_en2         ,
  input   wire         idu_alu_imm_en ,
  input   wire  [63:0] idu_imm        ,
  input   wire  [63:0] idu_gpr_data2  ,
  input   wire  [63:0] fw_data2       ,

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
  input   wire  [3:0]  idu_wb_choose     ,
  input   wire         idu_ebreak        ,
  input   wire  [63:0] idu_snxt_pc       ,
  input   wire  [31:0] idu_instr         ,

  output  wire  [63:0] exu_pc            ,
  output  reg   [4:0]  exu_index_rd      ,
  output  reg   [4:0]  exu_index_rs1     ,
  output  reg   [4:0]  exu_index_rs2     ,

  output  reg          exu_jump_en       ,
  output  reg          exu_branch_en     ,

  output  reg   [63:0] exu_branch_pc      ,
  output  reg          exu_branch_result  ,
  output  reg   [63:0] exu_alu_result     ,
  output  reg   [63:0] exu_gpr_data2      ,
  output  reg   [63:0] exu_imm            ,
  output  reg   [31:0] exu_instr          ,

  output  reg          exu_load_en        ,
  output  reg   [2:0]  exu_load_opcode    ,
  output  reg          exu_store_en       ,
  output  reg   [3:0]  exu_store_len      ,
  output  reg          exu_wb_en          ,
  output  reg   [3:0]  exu_wb_choose      ,
  output  reg   [63:0] exu_snxt_pc        ,
  output  reg          exu_ebreak         

);

wire  [63:0]     alu_result;
wire          branch_result;
alu alu_inst(
     .pc_en           ( idu_alu_pc_en      ),
     .pc              ( idu_pc             ),
     .fw_en1          (     fw_en1         ),
     .fw_data1        (     fw_data1       ),
     .gpr_data1       ( idu_gpr_data1      ),
     .imm_en          ( idu_alu_imm_en     ),
     .imm             ( idu_imm            ),
     .fw_en2          (     fw_en2         ),
     .fw_data2        (     fw_data2       ),
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

wire   [63:0] store_data ;
assign store_data = fw_en2 ? fw_data2 : idu_gpr_data2  ;

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
         exu_imm            <=   'b0  ;
         exu_load_en        <=   'b0  ; 
         exu_load_opcode    <=   'b0  ; 
         exu_store_en       <=   'b0  ; 
         exu_store_len      <=   'b0  ; 
         exu_wb_en          <=   'b0  ; 
         exu_wb_choose      <=   'b0  ; 
         exu_ebreak         <=   'b0  ;
         exu_snxt_pc        <=   'b0  ;
         exu_instr          <=   'b0  ;
         exu_execute_en     <=   'b0  ;   
         exu_pc             <=   'b0  ;
    end
    else if(flush_nop) begin
         exu_index_rd       <=   idu_index_rd       ; 
         exu_index_rs1      <=   idu_index_rs1      ; 
         exu_index_rs2      <=   idu_index_rs2      ; 
         exu_jump_en        <=             'b0      ; 
         exu_branch_en      <=             'b0      ; 
         exu_branch_pc      <=       branch_pc      ; 
         exu_branch_result  <=             'b0      ; 
         exu_alu_result     <=       alu_result     ; 
         exu_gpr_data2      <=   store_data         ; 
         exu_imm            <=   idu_imm            ;
         exu_load_en        <=             'b0      ; 
         exu_load_opcode    <=   idu_load_opcode    ; 
         exu_store_en       <=             'b0      ; 
         exu_store_len      <=   idu_store_len      ; 
         exu_wb_en          <=             'b0      ; 
         exu_wb_choose      <=   idu_wb_choose      ; 
         exu_ebreak         <=             'b0      ;
         exu_snxt_pc        <=   idu_snxt_pc        ;
         exu_instr          <=   idu_instr          ;
         exu_execute_en     <=             'b0      ;   
         exu_pc             <=   idu_pc             ;
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
         exu_gpr_data2      <=   store_data         ; 
         exu_imm            <=   idu_imm            ;
         exu_load_en        <=   idu_load_en        ; 
         exu_load_opcode    <=   idu_load_opcode    ; 
         exu_store_en       <=   idu_store_en       ; 
         exu_store_len      <=   idu_store_len      ; 
         exu_wb_en          <=   idu_wb_en          ; 
         exu_wb_choose      <=   idu_wb_choose      ; 
         exu_ebreak         <=   idu_ebreak         ;
         exu_snxt_pc        <=   idu_snxt_pc        ;
         exu_instr          <=   idu_instr          ;
         exu_execute_en     <=   idu_execute_en     ;   
         exu_pc             <=   idu_pc             ;
    end
  end

endmodule


