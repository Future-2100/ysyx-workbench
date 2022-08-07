module decoder (
  input   wire    [31:0]  instr         ,

  output  wire            branch_en     ,
  output  wire    [2:0]   branch_opcode ,

  output  wire            alu_en        ,
  output  wire            alu_pc_en     ,
  output  wire            alu_imm_en    ,
  output  wire    [4:0]   alu_opcode    ,
  output  wire            alu_halfop    ,

  output  wire            jump_en       ,
  output  wire            load_en       ,
  output  wire    [2:0]   load_opcode   ,
  output  wire            store_en      ,
  output  wire    [3:0]   store_len     ,
  output  wire            wb_en         ,
  output  wire    [2:0]   wb_choose     ,

  output  wire            I_type        ,
  output  wire            S_type        ,
  output  wire            B_type        ,
  output  wire            U_type        ,
  output  wire            J_type        ,
  output  wire            ebreak      
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
  wire       jal_en  = opcode6_5__11 & opcode4_2__011 & opcode1_0__11 ;
  wire      jalr_en  = opcode6_5__11 & opcode4_2__001 & opcode1_0__11 ;
assign    branch_en  = opcode6_5__11 & opcode4_2__000 & opcode1_0__11 ;
assign      load_en  = opcode6_5__00 & opcode4_2__000 & opcode1_0__11 ;
assign     store_en  = opcode6_5__01 & opcode4_2__000 & opcode1_0__11 ;
  wire  ioperate_en  = opcode6_5__00 & opcode4_2__100 & opcode1_0__11 ;
  wire   operate_en  = opcode6_5__01 & opcode4_2__100 & opcode1_0__11 ;
  wire iwoperate_en  = opcode6_5__00 & opcode4_2__110 & opcode1_0__11 ;
  wire  woperate_en  = opcode6_5__01 & opcode4_2__110 & opcode1_0__11 ;

  assign     alu_en  = jal_en |      jalr_en |     branch_en |  load_en      |  
                     store_en |  ioperate_en |    operate_en |  iwoperate_en |  
                  woperate_en |     auipc_en ;

  assign  alu_imm_en = auipc_en |   jal_en |     jalr_en | 
                        load_en | store_en | ioperate_en | iwoperate_en ;

  assign  alu_pc_en  = auipc_en | jal_en  ;

  wire    alu_adder_en = auipc_en | jal_en | jalr_en | load_en | store_en ;
  assign  alu_opcode = ( {5{ alu_adder_en}} &  5'b00000 ) |
                       ( {5{ (ioperate_en|iwoperate_en)  & !funct3_1_0__01 }} & { 2'b0, funct3 }) |
                       ( {5{ (ioperate_en|iwoperate_en)  &  funct3_1_0__01 }} & { funct7[5], 1'b0, funct3 }) |
                       ( {5{!alu_adder_en & !ioperate_en & !iwoperate_en   }} & { funct7[5], funct7[0], funct3 } ) ;
  assign  alu_halfop = iwoperate_en | woperate_en ;

  assign  branch_opcode = funct3;

  wire    funct3_1_0__00 = ( funct3[1:0] == 2'b00 ) ;
  wire    funct3_1_0__01 = ( funct3[1:0] == 2'b01 ) ;
  wire    funct3_1_0__10 = ( funct3[1:0] == 2'b10 ) ;
  wire    funct3_1_0__11 = ( funct3[1:0] == 2'b11 ) ;

  assign  load_opcode = funct3 ;
  assign  store_len   = ( { 4{funct3_1_0__00} } & ( 4'b0001 ) ) |
                        ( { 4{funct3_1_0__01} } & ( 4'b0010 ) ) |
                        ( { 4{funct3_1_0__10} } & ( 4'b0100 ) ) |
                        ( { 4{funct3_1_0__11} } & ( 4'b1000 ) ) ;

  assign  wb_en = lui_en |    auipc_en |       jal_en |      jalr_en | 
                 load_en | ioperate_en |   operate_en | iwoperate_en | 
             woperate_en ;

  assign  wb_choose = ( { 3{ lui_en} } & ( 3'b001 ) ) |
                      ( { 3{load_en} } & ( 3'b010 ) ) |
                      ( { 3{ alu_en & !branch_en} } & ( 3'b100 ) ) ;

  assign  U_type = lui_en | auipc_en ;
  assign  J_type = jal_en ;
  assign  I_type = jalr_en | load_en | ioperate_en | iwoperate_en ;
  assign  B_type = branch_en ;
  assign  S_type =  store_en ;

  assign  jump_en = jal_en | jalr_en ;

  assign  ebreak = opcode6_5__11 & opcode4_2__100 & opcode1_0__11 & instr[20] & ( {instr[31:21], instr[19:7]} == 0 ) ;

endmodule

