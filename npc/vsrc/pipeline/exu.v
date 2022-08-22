module exu(

  input   wire                   clk         ,
  input   wire                  rstn         ,

  input   wire             update            ,

  input   wire             flush_nop         ,
  input   wire             fwd_en_1          ,
  input   wire             fwd_en_2          ,
  input   wire  [63:0]     fwd_data_rs1      ,
  input   wire  [63:0]     fwd_data_rs2      ,

  input   wire  [63:0]     idu_snxt_pc       ,
  input   wire  [63:0]     idu_pc            ,
  input   wire  [63:0]     idu_data_rs1      ,
  input   wire  [63:0]     idu_data_rs2      ,
  input   wire  [63:0]     idu_imm           ,

  input   wire             idu_add_pc_en     ,
  input   wire             idu_add_rs1_en    ,
  input   wire             idu_add_zero_en   ,
  input   wire             idu_imm_en        ,
  input   wire             idu_rs2_en        ,
  input   wire             idu_addop_en      ,
  input   wire             idu_iop_en        ,
  input   wire             idu_iwop_en       ,
  input   wire             idu_rop_en        ,
  input   wire             idu_rwop_en       ,
  input   wire             idu_mop_en        ,
  input   wire             idu_mwop_en       ,

  input   wire             idu_jal_en        ,
  input   wire             idu_jalr_en       ,
  input   wire             idu_branch_en     ,
  input   wire             idu_load_en       ,
  input   wire             idu_store_en      ,
  input   wire             idu_wb_alu_en     ,
  input   wire             idu_ebreak_en     ,

  input   wire  [4:0]      idu_index_rd      ,
  input   wire  [4:0]      idu_index_rs1     ,
  input   wire  [4:0]      idu_index_rs2     ,
  input   wire  [31:0]     idu_instr         ,
  input   wire             idu_valid         ,
  input   wire  [6:0]      idu_funct7        ,
  input   wire  [2:0]      idu_funct3        ,

  output  reg              exu_jal_en        ,
  output  reg              exu_jalr_en       ,
  output  reg              exu_branch_en     ,
  output  reg              exu_br_result     ,

  output  reg   [63:0]     exu_snxt_pc       ,
  output  reg   [63:0]     exu_alu_result    ,
  output  reg              exu_load_en       ,
  output  reg              exu_store_en      ,
  output  reg   [2:0]      exu_funct3        ,
  output  reg   [63:0]     exu_data_rs2      ,

  output  reg              exu_wb_alu_en     ,
  output  reg              exu_wb_spc_en     ,
  output  reg              exu_wb_en         ,

  output  reg              exu_ebreak_en     ,

  output  reg   [4:0]      exu_index_rd      ,
  output  reg   [63:0]     exu_pc            ,
  output  reg   [31:0]     exu_instr         ,

  output  reg              exu_valid            

);


  wire   wb_spc_en = idu_jal_en | idu_jalr_en ;
  wire   wb_en     = idu_wb_alu_en | wb_spc_en | idu_load_en ;


  wire  [63:0] data_rs1 =  fwd_en_1 ? fwd_data_rs1 : idu_data_rs1 ;
  wire  [63:0] data_rs2 =  fwd_en_2 ? fwd_data_rs2 : idu_data_rs2 ;
  wire  [63:0] alu_result ;
  wire          br_result ;


alu alu_inst(
  .add_pc_en    ( idu_add_pc_en    )  ,
  .add_rs1_en   ( idu_add_rs1_en   )  ,
  .add_zero_en  ( idu_add_zero_en  )  ,
  .imm_en       ( idu_imm_en       )  ,
  .rs2_en       ( idu_rs2_en       )  ,
  .pc           ( idu_pc           )  ,
  .data_rs1     ( data_rs1         )  ,
  .imm          ( idu_imm          )  ,
  .data_rs2     ( data_rs2         )  ,
  .mop_en       ( idu_mop_en       )  ,
  .mwop_en      ( idu_mwop_en      )  ,
  .iop_en       ( idu_iop_en       )  ,
  .rop_en       ( idu_rop_en       )  ,
  .iwop_en      ( idu_iwop_en      )  ,
  .rwop_en      ( idu_rwop_en      )  ,
  .addop_en     ( idu_addop_en     )  ,
  .funct7_5     ( idu_funct7[5]    )  ,
  .funct3       ( idu_funct3       )  ,
  .branch_en    ( idu_branch_en    )  ,
  .alu_result   ( alu_result       )  ,
  .br_result    ( br_result        )   
);

always@(posedge clk) begin
  if(!rstn) begin
     exu_jal_en      <=   'b0  ;      
     exu_jalr_en     <=   'b0  ;   
     exu_branch_en   <=   'b0  ;   
     exu_br_result   <=   'b0  ;   
     exu_snxt_pc     <=   'b0  ;   
     exu_alu_result  <=   'b0  ;   
     exu_load_en     <=   'b0  ;   
     exu_store_en    <=   'b0  ;   
     exu_funct3      <=   'b0  ;   
     exu_data_rs2    <=   'b0  ;   
     exu_wb_alu_en   <=   'b0  ;   
     exu_wb_spc_en   <=   'b0  ;   
     exu_wb_en       <=   'b0  ;   
     exu_ebreak_en   <=   'b0  ;   
     exu_index_rd    <=   'b0  ;   
     exu_pc          <=   'b0  ;   
     exu_instr       <=   'b0  ;   
     exu_valid       <=   'b0  ;   
  end else if ( update & flush_nop) begin
     exu_jal_en      <=   'b0  ;      
     exu_jalr_en     <=   'b0  ;   
     exu_branch_en   <=   'b0  ;   
     exu_br_result   <=   'b0  ;   
     exu_snxt_pc     <=   'b0  ;   
     exu_alu_result  <=   'b0  ;   
     exu_load_en     <=   'b0  ;   
     exu_store_en    <=   'b0  ;   
     exu_funct3      <=   'b0  ;   
     exu_data_rs2    <=   'b0  ;   
     exu_wb_alu_en   <=   'b0  ;   
     exu_wb_spc_en   <=   'b0  ;   
     exu_wb_en       <=   'b0  ;   
     exu_ebreak_en   <=   'b0  ;   
     exu_index_rd    <=   'b0  ;   
     exu_pc          <=   'b0  ;   
     exu_instr       <=   'b0  ;   
     exu_valid       <=   'b0  ;   
  end else if( update )begin
     exu_jal_en      <=   idu_jal_en      ;      
     exu_jalr_en     <=   idu_jalr_en     ;   
     exu_branch_en   <=   idu_branch_en   ;   
     exu_br_result   <=   br_result       ;   
     exu_snxt_pc     <=   idu_snxt_pc     ;   
     exu_alu_result  <=   alu_result      ;   
     exu_load_en     <=   idu_load_en     ;   
     exu_store_en    <=   idu_store_en    ;   
     exu_funct3      <=   idu_funct3      ;   
     exu_data_rs2    <=   data_rs2        ;   
     exu_wb_alu_en   <=   idu_wb_alu_en   ;   
     exu_wb_spc_en   <=   wb_spc_en       ;   
     exu_wb_en       <=   wb_en           ;   
     exu_ebreak_en   <=   idu_ebreak_en   ;   
     exu_index_rd    <=   idu_index_rd    ;   
     exu_pc          <=   idu_pc          ;   
     exu_instr       <=   idu_instr       ;   
     exu_valid       <=   idu_valid       ;   
  end
end


endmodule


