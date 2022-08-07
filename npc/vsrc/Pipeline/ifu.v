module ifu(
  input   wire        clk       ,
  input   wire        rstn      ,

  input   wire    mmu_jump_en   ,
  input   wire  mmu_branch_en   ,

  input   wire  [63:0]  jump_pc ,
  output  wire  [63:0]  snxt_pc ,
  output  wire  [63:0]  dnxt_pc ,

  output  reg   [63:0]    pc    ,

  input   wire  [31:0]    instr ,

  output  reg   [63:0]    ifu_pc     ,
  output  reg   [31:0]    ifu_instr  ,
  output  reg   [63:0]    ifu_snxt_pc,

  input   wire            ld_hz_stop,
  input   wire            flush_nop
);


assign  snxt_pc = pc + 4;
assign  dnxt_pc = (mmu_jump_en | mmu_branch_en) ? jump_pc : snxt_pc ;

always@(negedge clk) begin
  if(!rstn)
    pc <= 64'h80000000 ;
  else if( ld_hz_stop )
    pc <= pc ;
  else
    pc <= dnxt_pc;
end

always@(negedge clk) begin
  if(!rstn) begin
    ifu_pc       <= 64'b0;
    ifu_instr    <= 32'b0;
    ifu_snxt_pc  <= 64'b0;
  end else if (ld_hz_stop) begin
    ifu_pc    <= ifu_pc   ;
    ifu_instr <= ifu_instr;
    ifu_snxt_pc  <= ifu_snxt_pc;
  end else if (flush_nop) begin
    ifu_pc    <= pc    ;
    ifu_instr <= 32'h13;
    ifu_snxt_pc  <= snxt_pc;
  end else begin
    ifu_pc    <= pc    ;
    ifu_instr <= instr ;
    ifu_snxt_pc  <= snxt_pc;
  end
end

endmodule

