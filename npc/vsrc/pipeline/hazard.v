module hazard (
  input   wire    [4:0]  index_rs1       ,
  input   wire    [4:0]  index_rs2       ,
  input   wire    [4:0]  index_rd        ,
  input   wire           need_rs1        ,
  input   wire           need_rs2        ,
  input   wire           load_en         ,

  output  wire           hazard_nop      ,
  output  wire           hazard_stop        
);

  wire    hazard_rs1 = ( index_rd == index_rs1 ) & need_rs1 ;
  wire    hazard_rs2 = ( index_rd == index_rs2 ) & need_rs2 ;

  assign  hazard_nop  = load_en & ( hazard_rs1 | hazard_rs2 ) ;

  assign  hazard_stop = hazard_nop ;

endmodule

