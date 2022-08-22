module memory(

  input   wire          load_en     ,
  input   wire          store_en    ,
  input   wire  [2:0]   funct3      ,

  input   wire  [63:0]  store_data  ,
  input   wire  [63:0]  address     ,

  output  wire  [63:0]  load_data   ,

  output  wire  [63:0]  mm_addr     ,
  output  wire  [63:0]  mm_wdata    ,
  output  wire  [3:0]   mm_wlen     ,
  output  wire          mm_wen      ,

  output  wire          mm_ren      ,
  input   wire  [63:0]  mm_rdata      

);

  wire    funct3_000  =  ( funct3 == 3'b000 ) ;
  wire    funct3_001  =  ( funct3 == 3'b001 ) ;
  wire    funct3_010  =  ( funct3 == 3'b010 ) ;
  wire    funct3_011  =  ( funct3 == 3'b011 ) ;
  wire    funct3_100  =  ( funct3 == 3'b100 ) ;
  wire    funct3_101  =  ( funct3 == 3'b101 ) ;
  wire    funct3_110  =  ( funct3 == 3'b110 ) ;
  wire    funct3_111  =  ( funct3 == 3'b111 ) ;

  wire  [63:0]  memory_rdata = mm_rdata ;

  assign  mm_wlen = ( {4{ funct3_000 }} & 4'd1 ) |  //sb
                    ( {4{ funct3_001 }} & 4'd2 ) |  //sh
                    ( {4{ funct3_010 }} & 4'd4 ) |  //sw
                    ( {4{ funct3_011 }} & 4'd8 ) ;  //sd

  assign  mm_addr  = address   ;
  assign  mm_wdata = store_data;
  assign  mm_wen   = store_en  ;
  assign  mm_ren   = load_en   ;

  assign  load_data = ( {64{ funct3_000 }} & { {56{memory_rdata[7] }},memory_rdata[7:0] } ) |   //lb
                      ( {64{ funct3_001 }} & { {48{memory_rdata[15]}},memory_rdata[15:0]} ) |   //lh
                      ( {64{ funct3_010 }} & { {32{memory_rdata[31]}},memory_rdata[31:0]} ) |   //lw
                      ( {64{ funct3_011 }} &                          memory_rdata        ) |   //ld
                      ( {64{ funct3_100 }} & { {56{          1'b0  }},memory_rdata[7:0] } ) |   //lbu
                      ( {64{ funct3_101 }} & { {48{          1'b0  }},memory_rdata[15:0]} ) |   //lhu
                      ( {64{ funct3_110 }} & { {32{          1'b0  }},memory_rdata[31:0]} ) ;   //lwu

endmodule


