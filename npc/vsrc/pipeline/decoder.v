module decoder (
  input   wire    [31:0]  instr         ,

  output  wire            I_type        ,
  output  wire            S_type        ,
  output  wire            B_type        ,
  output  wire            U_type        ,
  output  wire            J_type        ,

  output  wire            need_rs1      ,
  output  wire            need_rs2      ,

  output  wire            add_pc_en     ,
  output  wire            add_rs1_en    ,
  output  wire            add_zero_en   ,
  output  wire            imm_en    ,
  output  wire            rs2_en    ,
  output  wire            addop_en      ,
  output  wire              iop_en      ,
  output  wire             iwop_en      ,
  output  wire              rop_en      ,
  output  wire             rwop_en      ,
  output  wire              mop_en      ,
  output  wire             mwop_en      ,

  output  wire              jal_en      ,
  output  wire             jalr_en      ,
  output  wire            branch_en     ,
  output  wire            load_en       ,
  output  wire            store_en      ,

  output  wire            wb_alu_en     ,

  output  wire            ebreak_en
);

  wire  [6:0]   opcode  =   instr[6:0]    ;
  wire  [2:0]   funct3  =   instr[14:12]  ;
  wire  [6:0]   funct7  =   instr[31:25]  ;

  wire  opcode1_0__11  = ( opcode[1:0]== 2'b11  ) ;

  wire  opcode4_2__000 = ( opcode[4:2]== 3'b000 ) ;
  wire  opcode4_2__001 = ( opcode[4:2]== 3'b001 ) ;
  wire  opcode4_2__010 = ( opcode[4:2]== 3'b010 ) ;
  wire  opcode4_2__011 = ( opcode[4:2]== 3'b011 ) ;
  wire  opcode4_2__100 = ( opcode[4:2]== 3'b100 ) ;
  wire  opcode4_2__101 = ( opcode[4:2]== 3'b101 ) ;
  wire  opcode4_2__110 = ( opcode[4:2]== 3'b110 ) ;
  wire  opcode4_2__111 = ( opcode[4:2]== 3'b111 ) ;

  wire  opcode6_5__00  = ( opcode[6:5]== 2'b00 ) ;
  wire  opcode6_5__01  = ( opcode[6:5]== 2'b01 ) ;
  wire  opcode6_5__10  = ( opcode[6:5]== 2'b10 ) ;
  wire  opcode6_5__11  = ( opcode[6:5]== 2'b11 ) ;

  wire       lui_en  = opcode6_5__01 & opcode4_2__101 & opcode1_0__11 ;
  wire     auipc_en  = opcode6_5__00 & opcode4_2__101 & opcode1_0__11 ;
assign       jal_en  = opcode6_5__11 & opcode4_2__011 & opcode1_0__11 ;
assign      jalr_en  = opcode6_5__11 & opcode4_2__001 & opcode1_0__11 ;
assign    branch_en  = opcode6_5__11 & opcode4_2__000 & opcode1_0__11 ;
assign      load_en  = opcode6_5__00 & opcode4_2__000 & opcode1_0__11 ;
assign     store_en  = opcode6_5__01 & opcode4_2__000 & opcode1_0__11 ;
  wire      addi_en  = opcode6_5__00 & opcode4_2__100 & opcode1_0__11 & ( funct3 == 3'b000 );
  wire       add_en  = opcode6_5__01 & opcode4_2__100 & opcode1_0__11 & ( funct3 == 3'b000 ) & ( funct7[5] == 1'b0 ) & ( funct7[0] == 1'b0 ) ;
assign       iop_en  = opcode6_5__00 & opcode4_2__100 & opcode1_0__11 & ( funct3 != 3'b000 );
assign       rop_en  = opcode6_5__01 & opcode4_2__100 & opcode1_0__11 & ( funct7[0] == 1'b0) & !add_en  ;
assign       mop_en  = opcode6_5__01 & opcode4_2__100 & opcode1_0__11 & ( funct7[0] == 1'b1);
assign      iwop_en  = opcode6_5__00 & opcode4_2__110 & opcode1_0__11 ;
assign      rwop_en  = opcode6_5__01 & opcode4_2__110 & opcode1_0__11 & ( funct7[0] == 1'b0 );
assign      mwop_en  = opcode6_5__01 & opcode4_2__110 & opcode1_0__11 & ( funct7[0] == 1'b1 );
assign    ebreak_en  = opcode6_5__11 & opcode4_2__100 & opcode1_0__11 & instr[20] & ( {instr[31:21], instr[19:7]} == 0 ) ;

assign  add_pc_en = auipc_en | jal_en | branch_en;
assign  add_rs1_en = jalr_en | load_en | store_en | addi_en | add_en;
assign  add_zero_en = lui_en ;
assign  imm_en = lui_en | auipc_en | jal_en  | jalr_en | branch_en | 
                load_en | store_en | addi_en | iop_en  | iwop_en   ;
assign  rs2_en = add_en | rop_en | rwop_en ;

assign addop_en = add_pc_en | add_rs1_en | add_zero_en ;
  wire     op_en =  rop_en |  iop_en ;
  wire    wop_en = rwop_en | iwop_en ;

  assign  wb_alu_en = lui_en  | auipc_en | addi_en |  add_en | 
                      iop_en  | rop_en   | mop_en  | iwop_en | 
                      rwop_en | mwop_en  ;


assign  need_rs1 = jalr_en | branch_en | load_en | store_en | addi_en | iop_en  |
                   add_en  | rop_en    | iwop_en | rwop_en  | mop_en  | mwop_en ;

assign  need_rs2 = branch_en | store_en | add_en  | rop_en | 
                     rwop_en | mop_en   | mwop_en ;

  assign  U_type = lui_en | auipc_en ;
  assign  J_type = jal_en ;
  assign  I_type = jalr_en | load_en | iop_en | iwop_en | addi_en ;
  assign  B_type = branch_en ;
  assign  S_type = store_en  ;

endmodule

