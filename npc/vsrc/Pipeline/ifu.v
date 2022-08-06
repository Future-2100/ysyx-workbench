module ifu(
  input   wire        clk       ,
  input   wire        rstn      ,

  input   wire    mmu_jump_en   ,
  input   wire  mmu_branch_en   ,

  input   wire  [63:0]    dnpc  ,

  output  reg   [63:0]    pc    ,

  input   wire  [63:0]    instr ,

  output  reg   [63:0]       ifu_pc,
  output  reg   [63:0]    ifu_instr,

  input   wire            ld_hz_stop,
  input   wire            flush_nop
);

always@(posedge clk) begin
  if(!rstn)
    pc <= 64'h80000000;
  else if( mmu_jump_en | mmu_branch_en )
    pc <= dnpc;
  else if( ld_hz_stop )
    pc <= pc ;
  else
    pc <= pc + 4;
end

always@(posedge clk) begin
  if(!rstn) begin
    ifu_pc    <= 64'b0;
    ifu_instr <= 32'b0;
  end else if (ld_hz_stop) begin
    ifu_pc    <= ifu_pc   ;
    ifu_instr <= ifu_instr;
  end else if (flush_nop) begin
    ifu_pc    <= pc    ;
    ifu_instr <= 32'h13;
  end
  end else begin
    ifu_pc    <= pc    ;
    ifu_instr <= instr ;
  end
end

endmodule

