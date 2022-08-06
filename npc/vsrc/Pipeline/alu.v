module alu(
  input   wire              pc_en        ,
  input   wire    [63:0]    pc           ,
  input   wire              fw_en1       ,
  input   wire    [63:0]    fw_data      ,
  input   wire    [63:0]    gpr_data1    ,

  input   wire              imm_en       ,
  input   wire    [63:0]    imm          ,
  input   wire              fw_en2       ,
//input   wire    [63:0]    fw_data      ,
  input   wire    [63:0]    gpr_data2    ,

  input   wire              alu_en       ,
  input   wire    [4:0]     alu_opcode   ,
  input   wire              alu_halfop   ,
  input   wire              branch_en    ,
  input   wire    [2:0]     branch_opcode,

  output  wire    [63:0]    alu_result   ,
  output  wire              branch_result 
);

  wire  [63:0]  opdata_1;
  wire  [63:0]  opdata_2;

  wire  [3:0]   opcode = { alu_opcode[4], alu_opcode[2:0] } ;

  wire    gpr_en1 = ( !pc_en  && !fw_en1);
  wire    gpr_en2 = ( !imm_en && !fw_en2);

  assign  opdata_1 =     ( { 64{gpr_en1} } & gpr_data1 ) |
                         ( { 64{ pc_en } } & pc        ) |
                         ( { 64{ fw_en1} } & fw_data   ) ;

  assign  opdata_2 =     ( { 64{gpr_en2} } & gpr_data2 ) |
                         ( { 64{imm_en } } & imm       ) |
                         ( { 64{ fw_en2} } & fw_data   ) ;

  // ************************** RV64I-d **************************************** //
  wire   opid_en = alu_en & (!alu_halfop) & (!alu_opcode[3]) ;

  wire   [63:0]  opid_sum  = (  $signed(opdata_1) + $signed(opdata_2)      )  ;
  wire   [63:0]  opid_dif  = (  $signed(opdata_1) - $signed(opdata_2)      )  ;
  wire   [63:0]  opid_sll  = (  opdata_1 <<    opdata_2[5:0]               )  ;
  wire   [63:0]  opid_slt  = (  { 63'b0, (  $signed(opdata_1) <    $signed(opdata_2)) }  )  ;
  wire   [63:0]  opid_sltu = (  { 63'b0, ($unsigned(opdata_1) <  $unsigned(opdata_2)) }  )  ;
  wire   [63:0]  opid_xor  = (  opdata_1 ^   opdata_2                      )  ;
  wire   [63:0]  opid_srl  = (  opdata_1 >>  opdata_2[5:0]                 )  ;
  wire   [63:0]  opid_sra  = (  opdata_1 >>> opdata_2[5:0]                 )  ;
  wire   [63:0]  opid_or   = (  opdata_1 | opdata_2                        )  ;
  wire   [63:0]  opid_and  = (  opdata_1 & opdata_2                        )  ;

  wire   [63:0]  opid_result = ( { 64{ opcode ==  4'b0000 } } &  opid_sum ) |
                               ( { 64{ opcode ==  4'b1000 } } &  opid_dif ) |
                               ( { 64{ opcode ==  4'b0001 } } &  opid_sll ) |
                               ( { 64{ opcode ==  4'b0010 } } &  opid_slt ) |
                               ( { 64{ opcode ==  4'b0011 } } &  opid_sltu) |
                               ( { 64{ opcode ==  4'b0100 } } &  opid_xor ) |
                               ( { 64{ opcode ==  4'b0101 } } &  opid_srl ) |
                               ( { 64{ opcode ==  4'b1101 } } &  opid_sra ) |
                               ( { 64{ opcode ==  4'b0110 } } &  opid_or  ) |
                               ( { 64{ opcode ==  4'b0111 } } &  opid_and ) ;

  // ************************** RV64M-d **************************************** //
  wire   [127:0]  mul_ss =   $signed(opdata_1) *   $signed(opdata_2) ;
  wire   [127:0]  mul_uu = $unsigned(opdata_1) * $unsigned(opdata_2) ;
  wire   [127:0]  mul_su =   $signed(opdata_1) * $unsigned(opdata_2) ;

  wire   opmd_en = alu_en & (!alu_halfop) & (alu_opcode[3]) ;

  wire   [63:0]  opmd_mul    = mul_ss[63:0]   ;
  wire   [63:0]  opmd_mulh   = mul_ss[127:64] ;
  wire   [63:0]  opmd_mulhsu = mul_su[127:64] ;
  wire   [63:0]  opmd_mulhu  = mul_uu[127:64] ;
  wire   [63:0]  opmd_div    = (   $signed(opdata_1) /   $signed(opdata_2) ) ;
  wire   [63:0]  opmd_divu   = ( $unsigned(opdata_1) / $unsigned(opdata_2) ) ;
  wire   [63:0]  opmd_rem    = (   $signed(opdata_1) %   $signed(opdata_2) ) ;
  wire   [63:0]  opmd_remu   = ( $unsigned(opdata_1) / $unsigned(opdata_2) ) ;

  wire   [63:0]  opmd_result = ( { 64{ opcode == 4'b0000 } } & opmd_mul     ) |
                               ( { 64{ opcode == 4'b0001 } } & opmd_mulh    ) |
                               ( { 64{ opcode == 4'b0010 } } & opmd_mulhsu  ) |
                               ( { 64{ opcode == 4'b0011 } } & opmd_mulhu   ) |
                               ( { 64{ opcode == 4'b0100 } } & opmd_div     ) |
                               ( { 64{ opcode == 4'b0101 } } & opmd_divu    ) |
                               ( { 64{ opcode == 4'b0110 } } & opmd_rem     ) |
                               ( { 64{ opcode == 4'b0111 } } & opmd_remu    ) ;

  // ************************** RV64I-w **************************************** //
  wire   [31:0]  wopdata_1 = opdata_1[31:0] ;
  wire   [31:0]  wopdata_2 = opdata_2[31:0] ;

  wire   opiw_en   = alu_en & alu_halfop & (!alu_opcode[3] ) ;

  wire   [31:0]  opiw_sum  = ( $signed(wopdata_1) + $signed(wopdata_2)   ) ;
  wire   [31:0]  opiw_dif  = ( $signed(wopdata_1) - $signed(wopdata_2)   ) ;
  wire   [31:0]  opiw_sll  = ( wopdata_1 <<  wopdata_2[4:0] ) ;
  wire   [31:0]  opiw_srl  = ( wopdata_1 >>  wopdata_2[4:0] ) ;
  wire   [31:0]  opiw_sra  = ( wopdata_1 >>> wopdata_2[4:0] ) ;

  wire   [31:0]  opiw_result = ( { 32{ opcode == 4'b0000 } } & opiw_sum ) |
                               ( { 32{ opcode == 4'b1000 } } & opiw_dif ) |
                               ( { 32{ opcode == 4'b0001 } } & opiw_sll ) |
                               ( { 32{ opcode == 4'b0101 } } & opiw_srl ) |
                               ( { 32{ opcode == 4'b1101 } } & opiw_sra ) ;

  // ************************** RV64M-w **************************************** //
  wire   opmw_en = alu_en & alu_halfop & alu_opcode[3] ;

  wire   [31:0]  opmw_mulw   = (   $signed(wopdata_1) *   $signed(wopdata_2) ) ;
  wire   [31:0]  opmw_divw   = (   $signed(wopdata_1) /   $signed(wopdata_2) ) ;
  wire   [31:0]  opmw_divuw  = ( $unsigned(wopdata_1) / $unsigned(wopdata_2) ) ;
  wire   [31:0]  opmw_remw   = (   $signed(wopdata_1) %   $signed(wopdata_2) ) ;
  wire   [31:0]  opmw_remuw  = ( $unsigned(wopdata_1) % $unsigned(wopdata_2) ) ;

  wire   [31:0]  opmw_result = ( { 32{ opcode == 4'b0000 } } & opiw_mulw ) |
                               ( { 32{ opcode == 4'b0100 } } & opiw_divw ) |
                               ( { 32{ opcode == 4'b0101 } } & opiw_divuw) |
                               ( { 32{ opcode == 4'b0110 } } & opiw_remw ) |
                               ( { 32{ opcode == 4'b0111 } } & opiw_remuw) ;

  assign  alu_result =  {64{opid_en}} & opid_result | 
                        {64{opmd_en}} & opmd_result | 
                        {64{opiw_en}} & { 32{opiw_result[31]}, opiw_result } | 
                        {64{opmw_en}} & { 32{opmw_result[31]}, opmw_result } ;


  assign  branch_result = ( (branch_opcode == 3'b000) & (   $singed(opdata_1) ==   $signed(opdata_2) ) ) |
                          ( (branch_opcode == 3'b001) & (   $singed(opdata_1) !=   $signed(opdata_2) ) ) |
                          ( (branch_opcode == 3'b100) & (   $singed(opdata_1) >    $signed(opdata_2) ) ) |
                          ( (branch_opcode == 3'b101) & (   $singed(opdata_1) <=   $signed(opdata_2) ) ) |
                          ( (branch_opcode == 3'b110) & ( $unsigned(opdata_1) >  $unsigned(opdata_2) ) ) |
                          ( (branch_opcode == 3'b111) & ( $unsigned(opdata_1) <= $unsigned(opdata_2) ) ) ;

endmodule

