module memory(

  input   wire          load_en     ,
  input   wire          store_en    ,
  input   wire  [3:0]   store_len   ,
  input   wire  [2:0]   load_opcode ,

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


  wire  [63:0]  memory_rdata;

  assign  memory_rdata = mm_rdata;

  assign  mm_addr  = address   ;
  assign  mm_wdata = store_data;
  assign  mm_wlen  = store_len ;
  assign  mm_wen   = store_en  ;

  assign  mm_ren   = load_en   ;

  assign  load_data = ( {64{ load_opcode==3'b000 }} & { {56{memory_rdata[7] }},memory_rdata[7:0] } ) |   //lb
                      ( {64{ load_opcode==3'b001 }} & { {48{memory_rdata[15]}},memory_rdata[15:0]} ) |   //lh
                      ( {64{ load_opcode==3'b010 }} & { {32{memory_rdata[31]}},memory_rdata[31:0]} ) |   //lw
                      ( {64{ load_opcode==3'b011 }} &                          memory_rdata        ) |   //ld
                      ( {64{ load_opcode==3'b100 }} & { {56{          1'b0  }},memory_rdata[7:0] } ) |   //lbu
                      ( {64{ load_opcode==3'b101 }} & { {48{          1'b0  }},memory_rdata[15:0]} ) |   //lhu
                      ( {64{ load_opcode==3'b110 }} & { {32{          1'b0  }},memory_rdata[31:0]} ) ;   //lwu


endmodule


