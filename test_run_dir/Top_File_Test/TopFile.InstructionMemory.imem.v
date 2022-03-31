module BindsTo_0_InstructionMemory(
  input         clock,
  input  [9:0]  io_addr,
  output [31:0] io_inst
);

initial begin
  $readmemh("src/main/scala/Datapath/instrFile.txt", InstructionMemory.imem);
end
                      endmodule

bind InstructionMemory BindsTo_0_InstructionMemory BindsTo_0_InstructionMemory_Inst(.*);