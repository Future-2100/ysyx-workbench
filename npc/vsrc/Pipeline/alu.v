module alu(
  input   wire              add_pc_en    ,
  input   wire              add_rs1_en   ,
  input   wire              add_zero_en  ,
  input   wire              imm_en       ,
  input   wire              rs2_en       ,

  input   wire    [63:0]    pc           ,
  input   wire    [63:0]    data_rs1     ,
  input   wire    [63:0]    imm          ,
  input   wire    [63:0]    data_rs2     ,

  input   wire              mop_en       ,
  input   wire             mwop_en       ,
  input   wire              iop_en       ,
  input   wire              rop_en       ,
  input   wire             iwop_en       ,
  input   wire             rwop_en       ,
  input   wire            addop_en       ,

  input   wire             funct7_5      ,
  input   wire    [2:0]    funct3        ,

  input   wire             branch_en     ,

  output  wire    [63:0]   alu_result    ,
  output  wire             br_result 
);

  wire  [31:0]  wdata_rs1 = data_rs1[31:0];
  wire  [31:0]  wdata_rs2 = data_rs2[31:0];
  wire  [63:0]  opdata_1;
  wire  [63:0]  opdata_2;
  wire  [31:0]  wopdata_2 = opdata_2[31:0] ;

  assign  opdata_1 =     ( { 64{add_rs1_en } } & data_rs1  ) |
                         ( { 64{add_pc_en  } } & pc        ) |
                         ( { 64{add_zero_en} } & 64'b0     ) ;

  assign  opdata_2 =     ( { 64{rs2_en } } & data_rs2  ) |
                         ( { 64{imm_en } } & imm       ) ;

  wire   funct3_000 = funct3 == 3'b000; 
  wire   funct3_001 = funct3 == 3'b001; 
  wire   funct3_010 = funct3 == 3'b010; 
  wire   funct3_011 = funct3 == 3'b011; 
  wire   funct3_100 = funct3 == 3'b100; 
  wire   funct3_101 = funct3 == 3'b101; 
  wire   funct3_110 = funct3 == 3'b110; 
  wire   funct3_111 = funct3 == 3'b111; 

  // ************************** addop  **************************************** //
  wire    [63:0]  sum = $signed(opdata_1) + $signed(opdata_2) ;


  // ************************** mop   **************************************** //
  wire   [127:0] mul_ss   =   $signed(data_rs1) *   $signed(data_rs2) ;
  wire   [127:0] mul_uu   = $unsigned(data_rs1) * $unsigned(data_rs2) ;
  wire   [127:0] mul_su   =   $signed(data_rs1) * $unsigned(data_rs2) ;

  wire   [63:0]  m_mul    =        mul_ss[63:0]   ;
  wire   [63:0]  m_mulh   =        mul_ss[127:64] ;
  wire   [63:0]  m_mulhsu =        mul_su[127:64] ;
  wire   [63:0]  m_mulhu  =        mul_uu[127:64] ;
  wire   [63:0]  m_div    = (   $signed(data_rs1) /   $signed(data_rs2) ) ;
  wire   [63:0]  m_divu   = ( $unsigned(data_rs1) / $unsigned(data_rs2) ) ;
  wire   [63:0]  m_rem    = (   $signed(data_rs1) %   $signed(data_rs2) ) ;
  wire   [63:0]  m_remu   = ( $unsigned(data_rs1) / $unsigned(data_rs2) ) ;

  wire   [63:0]  m_result = ( { 64{ funct3_000 } } & m_mul     ) |
                            ( { 64{ funct3_001 } } & m_mulh    ) |
                            ( { 64{ funct3_010 } } & m_mulhsu  ) |
                            ( { 64{ funct3_011 } } & m_mulhu   ) |
                            ( { 64{ funct3_100 } } & m_div     ) |
                            ( { 64{ funct3_101 } } & m_divu    ) |
                            ( { 64{ funct3_110 } } & m_rem     ) |
                            ( { 64{ funct3_111 } } & m_remu    ) ;

  // ************************** wmop **************************************** //

  wire   [31:0]  wm_mulw   = (   $signed(wdata_rs1) *   $signed(wdata_rs2) ) ;
  wire   [31:0]  wm_divw   = (   $signed(wdata_rs1) /   $signed(wdata_rs2) ) ;
  wire   [31:0]  wm_divuw  = ( $unsigned(wdata_rs1) / $unsigned(wdata_rs2) ) ;
  wire   [31:0]  wm_remw   = (   $signed(wdata_rs1) %   $signed(wdata_rs2) ) ;
  wire   [31:0]  wm_remuw  = ( $unsigned(wdata_rs1) % $unsigned(wdata_rs2) ) ;

  wire   [31:0]  wm_result =   ( { 32{ funct3_000 } } & wm_mulw ) |
                               ( { 32{ funct3_100 } } & wm_divw ) |
                               ( { 32{ funct3_101 } } & wm_divuw) |
                               ( { 32{ funct3_110 } } & wm_remw ) |
                               ( { 32{ funct3_111 } } & wm_remuw) ;

                        
  // ************************** rop and iop **************************************** //

  wire   [63:0]  riop_sub  = (  $signed(data_rs1) - $signed(opdata_2)      )  ;
  wire   [63:0]  riop_sll  = (  data_rs1 <<    opdata_2[5:0]               )  ;
  wire   [63:0]  riop_slt  = (  { 63'b0, (  $signed(data_rs1) <    $signed(opdata_2)) }  )  ;
  wire   [63:0]  riop_sltu = (  { 63'b0, ($unsigned(data_rs1) <  $unsigned(opdata_2)) }  )  ;
  wire   [63:0]  riop_xor  = (  data_rs1 ^   opdata_2                      )  ;
  wire   [63:0]  riop_srl  = (  data_rs1 >>  opdata_2[5:0]                 )  ;
  wire   [63:0]  riop_sra  = (  $signed(data_rs1) >>> opdata_2[5:0]                 )  ;
  wire   [63:0]  riop_or   = (  data_rs1 | opdata_2                        )  ;
  wire   [63:0]  riop_and  = (  data_rs1 & opdata_2                        )  ;

  wire   [63:0]  riop_result = ( { 64{ funct3_000 } } &  riop_sub ) |
                               ( { 64{ funct3_001 } } &  riop_sll ) |
                               ( { 64{ funct3_010 } } &  riop_slt ) |
                               ( { 64{ funct3_011 } } &  riop_sltu) |
                               ( { 64{ funct3_100 } } &  riop_xor ) |
                               ( { 64{ funct3_101 & !funct7_5 } } &  riop_srl ) |
                               ( { 64{ funct3_101 &  funct7_5 } } &  riop_sra ) |
                               ( { 64{ funct3_110 } } &  riop_or  ) |
                               ( { 64{ funct3_111 } } &  riop_and ) ;

  // ************************** iwop and rwop **************************************** //
  
  wire   [31:0]  riwop_add  = ( $signed(wdata_rs1) + $signed(wopdata_2) ) ;
  wire   [31:0]  riwop_sub  = ( $signed(wdata_rs1) - $signed(wopdata_2) ) ;
  wire   [31:0]  riwop_sll  = ( wdata_rs1 <<  wopdata_2[4:0] ) ;
  wire   [31:0]  riwop_srl  = ( wdata_rs1 >>  wopdata_2[4:0] ) ;
  wire   [31:0]  riwop_sra  = ( $signed(wdata_rs1) >>> wopdata_2[4:0] ) ;

  wire  addiw_en = iwop_en & funct3_000 ;
  wire  addw_en  = rwop_en & funct3_000 & !funct7_5;
  wire  subw_en  = rwop_en & funct3_000 &  funct7_5;

  wire   [31:0]  riwop_result = ( { 32{ addiw_en | addw_en } } & riwop_add ) |
                                ( { 32{  subw_en } } & riwop_sub ) |
                                ( { 32{ funct3_001 } } & riwop_sll ) |
                                ( { 32{ funct3_101 & !funct7_5} } & riwop_srl ) |
                                ( { 32{ funct3_101 &  funct7_5} } & riwop_sra ) ;

  assign  alu_result =  ( {64{addop_en}} & sum ) | 
                        ( {64{  mop_en}} & m_result) | 
                        ( {64{  iop_en |  rop_en }} & riop_result ) | 
                        ( {64{ mwop_en}} & { {32{wm_result[31]}}, wm_result } ) | 
                        ( {64{ iwop_en | rwop_en }} & { {32{ riwop_result[31]}}, riwop_result } ) ;

  // ************************** branch **************************************** //
  assign  br_result = ( funct3_000 & (   $signed(data_rs1) ==   $signed(data_rs2) ) ) |
                      ( funct3_001 & (   $signed(data_rs1) !=   $signed(data_rs2) ) ) |
                      ( funct3_100 & (   $signed(data_rs1) <    $signed(data_rs2) ) ) |
                      ( funct3_101 & (   $signed(data_rs1) >=   $signed(data_rs2) ) ) |
                      ( funct3_110 & ( $unsigned(data_rs1) <  $unsigned(data_rs2) ) ) |
                      ( funct3_111 & ( $unsigned(data_rs1) >= $unsigned(data_rs2) ) ) ;

endmodule

