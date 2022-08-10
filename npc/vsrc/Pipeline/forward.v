module forward(
  input   wire  [4:0]   idu_index_rs1   ,
  input   wire  [4:0]   idu_index_rs2   ,
  input   wire  [4:0]   exu_index_rd    ,
  input   wire  [4:0]   mmu_index_rd    ,
  input   wire  [63:0]  exu_alu_result  ,
  input   wire  [63:0]  mmu_wb_data     ,

  input   wire          exu_wb_en       ,
  input   wire          mmu_wb_en       ,

  output  wire          fwd_en_1          ,
  output  wire          fwd_en_2          ,
  output  wire  [63:0]  fwd_data_rs1     ,
  output  wire  [63:0]  fwd_data_rs2        

);

  wire   ex_forward_1 = exu_wb_en & ( exu_index_rd !=0 ) & ( exu_index_rd == idu_index_rs1 ) ;
  wire   ex_forward_2 = exu_wb_en & ( exu_index_rd !=0 ) & ( exu_index_rd == idu_index_rs2 ) ;

  wire   mm_forward_1 = mmu_wb_en & ( mmu_index_rd !=0 ) & !( exu_wb_en & ( exu_index_rd != 0 ) & ( exu_index_rd == idu_index_rs1 )) & ( mmu_index_rd == idu_index_rs1 ) ;
  wire   mm_forward_2 = mmu_wb_en & ( mmu_index_rd !=0 ) & !( exu_wb_en & ( exu_index_rd != 0 ) & ( exu_index_rd == idu_index_rs2 )) & ( mmu_index_rd == idu_index_rs2 ) ;

  assign fwd_en_1   = ex_forward_1 | mm_forward_1;
  assign fwd_data_rs1 = ex_forward_1 ? exu_alu_result :
                  ( mm_forward_1 ? mmu_wb_data : 64'b0 ) ;

  assign fwd_en_2   = ex_forward_2 | mm_forward_2;
  assign fwd_data_rs2 = ex_forward_2 ? exu_alu_result :
                  ( mm_forward_2 ? mmu_wb_data : 64'b0 ) ;


endmodule

