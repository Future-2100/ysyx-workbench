module hazard (
  input   wire           decoder_alu_en  ,
  input   wire    [4:0]  index_rs1       ,
  input   wire    [4:0]  index_rs2       ,
  input   wire    [4:0]  index_rd        ,
  input   wire           load_en         ,

  output  wire         ld_hz_nop         ,
  output  wire         ld_hz_stop        
);

  assign  ld_hz_nop = load_en & decoder_alu_en & ( ( index_rd == index_rs1 ) | ( index_rd == index_rs2 ) ) ;
  assign  ld_hz_stop = ld_hz_nop ;

endmodule

