module forward(
  input   wire  [4:0]   idu_index_rs1   ,
  input   wire  [4:0]   idu_index_rs2   ,
  input   wire  [4:0]   exu_index_rd    ,
  input   wire  [4:0]   mmu_index_rd    ,
  input   wire  [63:0]  exu_alu_result  ,
  input   wire  [63:0]  mmu_wb_data     ,

  output  wire          fw_en1          ,
  output  wire          fw_en2          ,
  output  wire  [63:0]  fw_data

);


  wire  ex_forward = ( idu_index_rs1 == exu_index_rd ) ||
                     ( idu_index_rs2 == exu_index_rd ) ;

  wire  mm_forward = ( idu_index_rs1 == mmu_index_rd ) ||
                     ( idu_index_rs2 == mmu_index_rd ) ;

  assign  fw_en1 = ( idu_index_rs1 == exu_index_rd ) ||
                   ( idu_index_rs1 == mmu_index_rd ) ;

  assign  fw_en2 = ( idu_index_rs2 == exu_index_rd ) ||
                   ( idu_index_rs2 == mmu_index_rd ) ;

  assign  fw_data =  ex_forward ? exu_alu_result : 
                   ( mm_forward ? mmu_wb_data : 64'b0 )  ;


endmodule

