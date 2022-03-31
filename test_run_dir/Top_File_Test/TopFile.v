module Alu(
  input  [4:0]  io_AluControl,
  input  [31:0] io_in1,
  input  [31:0] io_in2,
  output        io_Branch,
  output [31:0] io_out
);
  wire [31:0] _io_out_T_2 = $signed(io_in1) + $signed(io_in2); // @[Alu.scala 22:62]
  wire [62:0] _GEN_21 = {{31{io_in1[31]}},io_in1}; // @[Alu.scala 24:67]
  wire [62:0] _io_out_T_4 = $signed(_GEN_21) << io_in2[4:0]; // @[Alu.scala 24:67]
  wire [31:0] _io_out_T_6 = $signed(io_in1) ^ $signed(io_in2); // @[Alu.scala 26:67]
  wire [31:0] _io_out_T_8 = $signed(io_in1) >>> io_in2[4:0]; // @[Alu.scala 28:99]
  wire [31:0] _io_out_T_10 = $signed(io_in1) | $signed(io_in2); // @[Alu.scala 30:67]
  wire [31:0] _io_out_T_12 = $signed(io_in1) & $signed(io_in2); // @[Alu.scala 32:67]
  wire [31:0] _io_out_T_15 = $signed(io_in1) - $signed(io_in2); // @[Alu.scala 34:67]
  wire [1:0] _GEN_0 = $signed(io_in1) >= $signed(io_in2) ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 39:40 Alu.scala 39:48 Alu.scala 19:16]
  wire [1:0] _GEN_1 = io_in1 >= io_in2 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 43:54 Alu.scala 43:62 Alu.scala 44:36]
  wire [1:0] _GEN_2 = io_in1 < io_in2 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 47:53 Alu.scala 47:61 Alu.scala 48:36]
  wire [1:0] _GEN_3 = $signed(io_in1) == $signed(io_in2) ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 51:41 Alu.scala 51:49 Alu.scala 52:36]
  wire [1:0] _GEN_4 = $signed(io_in1) < $signed(io_in2) ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 55:39 Alu.scala 55:47 Alu.scala 56:36]
  wire [1:0] _GEN_5 = $signed(io_in1) != $signed(io_in2) ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 60:41 Alu.scala 61:32 Alu.scala 65:32]
  wire [1:0] _GEN_7 = io_AluControl == 5'h2 | io_AluControl == 5'h14 ? $signed(_GEN_4) : $signed(_GEN_5); // @[Alu.scala 54:81]
  wire [1:0] _GEN_8 = io_AluControl == 5'h10 ? $signed(_GEN_3) : $signed(_GEN_7); // @[Alu.scala 50:49]
  wire [1:0] _GEN_9 = io_AluControl == 5'h3 | io_AluControl == 5'h16 ? $signed(_GEN_2) : $signed(_GEN_8); // @[Alu.scala 46:81]
  wire [1:0] _GEN_10 = io_AluControl == 5'h17 ? $signed(_GEN_1) : $signed(_GEN_9); // @[Alu.scala 42:49]
  wire [1:0] _GEN_11 = io_AluControl == 5'h15 ? $signed(_GEN_0) : $signed(_GEN_10); // @[Alu.scala 38:49]
  wire [31:0] _GEN_12 = io_AluControl == 5'h1f ? $signed(io_in1) : $signed({{30{_GEN_11[1]}},_GEN_11}); // @[Alu.scala 36:49 Alu.scala 36:57]
  wire [31:0] _GEN_13 = io_AluControl == 5'h8 ? $signed(_io_out_T_15) : $signed(_GEN_12); // @[Alu.scala 34:49 Alu.scala 34:57]
  wire [31:0] _GEN_14 = io_AluControl == 5'h7 ? $signed(_io_out_T_12) : $signed(_GEN_13); // @[Alu.scala 32:49 Alu.scala 32:57]
  wire [31:0] _GEN_15 = io_AluControl == 5'h6 ? $signed(_io_out_T_10) : $signed(_GEN_14); // @[Alu.scala 30:49 Alu.scala 30:57]
  wire [31:0] _GEN_16 = io_AluControl == 5'h5 | io_AluControl == 5'hd ? $signed(_io_out_T_8) : $signed(_GEN_15); // @[Alu.scala 28:81 Alu.scala 28:89]
  wire [31:0] _GEN_17 = io_AluControl == 5'h4 ? $signed(_io_out_T_6) : $signed(_GEN_16); // @[Alu.scala 26:49 Alu.scala 26:57]
  wire [62:0] _GEN_18 = io_AluControl == 5'h1 ? $signed(_io_out_T_4) : $signed({{31{_GEN_17[31]}},_GEN_17}); // @[Alu.scala 24:49 Alu.scala 24:57]
  wire [62:0] _GEN_19 = io_AluControl == 5'h0 ? $signed({{31{_io_out_T_2[31]}},_io_out_T_2}) : $signed(_GEN_18); // @[Alu.scala 22:44 Alu.scala 22:52]
  assign io_Branch = $signed(io_out) == 32'sh1 & io_AluControl[4:3] == 2'h2; // @[Alu.scala 75:30]
  assign io_out = _GEN_19[31:0];
endmodule
module AluControl(
  input  [2:0] io_Aluop,
  input        io_func7,
  input  [2:0] io_func3,
  output [4:0] io_control
);
  wire  _io_control_T = io_Aluop == 3'h0; // @[AluControl.scala 23:27]
  wire  _io_control_T_1 = ~io_func7; // @[AluControl.scala 23:52]
  wire  _io_control_T_2 = io_Aluop == 3'h0 & ~io_func7; // @[AluControl.scala 23:40]
  wire [3:0] _io_control_T_3 = {1'h0,io_func3}; // @[Cat.scala 30:58]
  wire  _io_control_T_6 = _io_control_T & io_func7; // @[AluControl.scala 24:40]
  wire [3:0] _io_control_T_7 = {1'h1,io_func3}; // @[Cat.scala 30:58]
  wire  _io_control_T_8 = io_Aluop == 3'h1; // @[AluControl.scala 28:27]
  wire  _io_control_T_10 = io_Aluop == 3'h1 & io_func3 == 3'h5; // @[AluControl.scala 28:40]
  wire  _io_control_T_12 = io_Aluop == 3'h1 & io_func3 == 3'h5 & _io_control_T_1; // @[AluControl.scala 28:65]
  wire  _io_control_T_18 = _io_control_T_10 & io_func7; // @[AluControl.scala 32:65]
  wire  _io_control_T_22 = _io_control_T_8 & io_func3 == 3'h1; // @[AluControl.scala 36:40]
  wire  _io_control_T_26 = io_Aluop == 3'h2; // @[AluControl.scala 44:27]
  wire [4:0] _io_control_T_27 = {2'h2,io_func3}; // @[Cat.scala 30:58]
  wire  _io_control_T_28 = io_Aluop == 3'h3; // @[AluControl.scala 48:27]
  wire [4:0] _io_control_T_29 = _io_control_T_28 ? 5'h1f : 5'h0; // @[Mux.scala 98:16]
  wire [4:0] _io_control_T_30 = _io_control_T_26 ? _io_control_T_27 : _io_control_T_29; // @[Mux.scala 98:16]
  wire [4:0] _io_control_T_31 = _io_control_T_8 ? {{1'd0}, _io_control_T_3} : _io_control_T_30; // @[Mux.scala 98:16]
  wire [4:0] _io_control_T_32 = _io_control_T_22 ? {{1'd0}, _io_control_T_3} : _io_control_T_31; // @[Mux.scala 98:16]
  wire [4:0] _io_control_T_33 = _io_control_T_18 ? {{1'd0}, _io_control_T_7} : _io_control_T_32; // @[Mux.scala 98:16]
  wire [4:0] _io_control_T_34 = _io_control_T_12 ? {{1'd0}, _io_control_T_3} : _io_control_T_33; // @[Mux.scala 98:16]
  wire [4:0] _io_control_T_35 = _io_control_T_6 ? {{1'd0}, _io_control_T_7} : _io_control_T_34; // @[Mux.scala 98:16]
  assign io_control = _io_control_T_2 ? {{1'd0}, _io_control_T_3} : _io_control_T_35; // @[Mux.scala 98:16]
endmodule
module TypeDecode(
  input  [6:0] io_opCode,
  input  [4:0] io_func5,
  output       io_RType,
  output       io_Load,
  output       io_Store,
  output       io_Branch,
  output       io_IType,
  output       io_Jalr,
  output       io_Jal,
  output       io_Lui,
  output       io_Fmv,
  output       io_Fadd
);
  wire  _T_3 = 7'h53 == io_opCode; // @[TypeDecode.scala 40:57]
  wire  _T_9 = 5'h1e == io_func5 & _T_3; // @[TypeDecode.scala 43:49]
  wire  _T_10 = io_opCode == 7'h33; // @[TypeDecode.scala 46:29]
  wire  _T_11 = io_opCode == 7'h3; // @[TypeDecode.scala 50:29]
  wire  _T_12 = io_opCode == 7'h23; // @[TypeDecode.scala 54:29]
  wire  _T_13 = io_opCode == 7'h63; // @[TypeDecode.scala 58:29]
  wire  _T_14 = io_opCode == 7'h13; // @[TypeDecode.scala 62:29]
  wire  _T_15 = io_opCode == 7'h67; // @[TypeDecode.scala 66:29]
  wire  _T_16 = io_opCode == 7'h6f; // @[TypeDecode.scala 70:29]
  wire  _T_17 = io_opCode == 7'h37; // @[TypeDecode.scala 74:29]
  wire  _GEN_2 = io_opCode == 7'h6f ? 1'h0 : _T_17; // @[TypeDecode.scala 70:46 TypeDecode.scala 36:16]
  wire  _GEN_4 = io_opCode == 7'h67 ? 1'h0 : _T_16; // @[TypeDecode.scala 66:46 TypeDecode.scala 35:16]
  wire  _GEN_5 = io_opCode == 7'h67 ? 1'h0 : _GEN_2; // @[TypeDecode.scala 66:46 TypeDecode.scala 36:16]
  wire  _GEN_7 = io_opCode == 7'h13 ? 1'h0 : _T_15; // @[TypeDecode.scala 62:46 TypeDecode.scala 34:17]
  wire  _GEN_8 = io_opCode == 7'h13 ? 1'h0 : _GEN_4; // @[TypeDecode.scala 62:46 TypeDecode.scala 35:16]
  wire  _GEN_9 = io_opCode == 7'h13 ? 1'h0 : _GEN_5; // @[TypeDecode.scala 62:46 TypeDecode.scala 36:16]
  wire  _GEN_11 = io_opCode == 7'h63 ? 1'h0 : _T_14; // @[TypeDecode.scala 58:46 TypeDecode.scala 33:18]
  wire  _GEN_12 = io_opCode == 7'h63 ? 1'h0 : _GEN_7; // @[TypeDecode.scala 58:46 TypeDecode.scala 34:17]
  wire  _GEN_13 = io_opCode == 7'h63 ? 1'h0 : _GEN_8; // @[TypeDecode.scala 58:46 TypeDecode.scala 35:16]
  wire  _GEN_14 = io_opCode == 7'h63 ? 1'h0 : _GEN_9; // @[TypeDecode.scala 58:46 TypeDecode.scala 36:16]
  wire  _GEN_16 = io_opCode == 7'h23 ? 1'h0 : _T_13; // @[TypeDecode.scala 54:46 TypeDecode.scala 32:19]
  wire  _GEN_17 = io_opCode == 7'h23 ? 1'h0 : _GEN_11; // @[TypeDecode.scala 54:46 TypeDecode.scala 33:18]
  wire  _GEN_18 = io_opCode == 7'h23 ? 1'h0 : _GEN_12; // @[TypeDecode.scala 54:46 TypeDecode.scala 34:17]
  wire  _GEN_19 = io_opCode == 7'h23 ? 1'h0 : _GEN_13; // @[TypeDecode.scala 54:46 TypeDecode.scala 35:16]
  wire  _GEN_20 = io_opCode == 7'h23 ? 1'h0 : _GEN_14; // @[TypeDecode.scala 54:46 TypeDecode.scala 36:16]
  wire  _GEN_22 = io_opCode == 7'h3 ? 1'h0 : _T_12; // @[TypeDecode.scala 50:46 TypeDecode.scala 31:18]
  wire  _GEN_23 = io_opCode == 7'h3 ? 1'h0 : _GEN_16; // @[TypeDecode.scala 50:46 TypeDecode.scala 32:19]
  wire  _GEN_24 = io_opCode == 7'h3 ? 1'h0 : _GEN_17; // @[TypeDecode.scala 50:46 TypeDecode.scala 33:18]
  wire  _GEN_25 = io_opCode == 7'h3 ? 1'h0 : _GEN_18; // @[TypeDecode.scala 50:46 TypeDecode.scala 34:17]
  wire  _GEN_26 = io_opCode == 7'h3 ? 1'h0 : _GEN_19; // @[TypeDecode.scala 50:46 TypeDecode.scala 35:16]
  wire  _GEN_27 = io_opCode == 7'h3 ? 1'h0 : _GEN_20; // @[TypeDecode.scala 50:46 TypeDecode.scala 36:16]
  wire  _GEN_29 = io_opCode == 7'h33 ? 1'h0 : _T_11; // @[TypeDecode.scala 46:46 TypeDecode.scala 30:17]
  wire  _GEN_30 = io_opCode == 7'h33 ? 1'h0 : _GEN_22; // @[TypeDecode.scala 46:46 TypeDecode.scala 31:18]
  wire  _GEN_31 = io_opCode == 7'h33 ? 1'h0 : _GEN_23; // @[TypeDecode.scala 46:46 TypeDecode.scala 32:19]
  wire  _GEN_32 = io_opCode == 7'h33 ? 1'h0 : _GEN_24; // @[TypeDecode.scala 46:46 TypeDecode.scala 33:18]
  wire  _GEN_33 = io_opCode == 7'h33 ? 1'h0 : _GEN_25; // @[TypeDecode.scala 46:46 TypeDecode.scala 34:17]
  wire  _GEN_34 = io_opCode == 7'h33 ? 1'h0 : _GEN_26; // @[TypeDecode.scala 46:46 TypeDecode.scala 35:16]
  wire  _GEN_35 = io_opCode == 7'h33 ? 1'h0 : _GEN_27; // @[TypeDecode.scala 46:46 TypeDecode.scala 36:16]
  wire  _GEN_37 = 5'h1e == io_func5 & _T_3 ? 1'h0 : _T_10; // @[TypeDecode.scala 43:85 TypeDecode.scala 29:18]
  wire  _GEN_38 = 5'h1e == io_func5 & _T_3 ? 1'h0 : _GEN_29; // @[TypeDecode.scala 43:85 TypeDecode.scala 30:17]
  wire  _GEN_39 = 5'h1e == io_func5 & _T_3 ? 1'h0 : _GEN_30; // @[TypeDecode.scala 43:85 TypeDecode.scala 31:18]
  wire  _GEN_40 = 5'h1e == io_func5 & _T_3 ? 1'h0 : _GEN_31; // @[TypeDecode.scala 43:85 TypeDecode.scala 32:19]
  wire  _GEN_41 = 5'h1e == io_func5 & _T_3 ? 1'h0 : _GEN_32; // @[TypeDecode.scala 43:85 TypeDecode.scala 33:18]
  wire  _GEN_42 = 5'h1e == io_func5 & _T_3 ? 1'h0 : _GEN_33; // @[TypeDecode.scala 43:85 TypeDecode.scala 34:17]
  wire  _GEN_43 = 5'h1e == io_func5 & _T_3 ? 1'h0 : _GEN_34; // @[TypeDecode.scala 43:85 TypeDecode.scala 35:16]
  wire  _GEN_44 = 5'h1e == io_func5 & _T_3 ? 1'h0 : _GEN_35; // @[TypeDecode.scala 43:85 TypeDecode.scala 36:16]
  assign io_RType = 5'h0 == io_func5 & 7'h53 == io_opCode ? 1'h0 : _GEN_37; // @[TypeDecode.scala 40:80 TypeDecode.scala 29:18]
  assign io_Load = 5'h0 == io_func5 & 7'h53 == io_opCode ? 1'h0 : _GEN_38; // @[TypeDecode.scala 40:80 TypeDecode.scala 30:17]
  assign io_Store = 5'h0 == io_func5 & 7'h53 == io_opCode ? 1'h0 : _GEN_39; // @[TypeDecode.scala 40:80 TypeDecode.scala 31:18]
  assign io_Branch = 5'h0 == io_func5 & 7'h53 == io_opCode ? 1'h0 : _GEN_40; // @[TypeDecode.scala 40:80 TypeDecode.scala 32:19]
  assign io_IType = 5'h0 == io_func5 & 7'h53 == io_opCode ? 1'h0 : _GEN_41; // @[TypeDecode.scala 40:80 TypeDecode.scala 33:18]
  assign io_Jalr = 5'h0 == io_func5 & 7'h53 == io_opCode ? 1'h0 : _GEN_42; // @[TypeDecode.scala 40:80 TypeDecode.scala 34:17]
  assign io_Jal = 5'h0 == io_func5 & 7'h53 == io_opCode ? 1'h0 : _GEN_43; // @[TypeDecode.scala 40:80 TypeDecode.scala 35:16]
  assign io_Lui = 5'h0 == io_func5 & 7'h53 == io_opCode ? 1'h0 : _GEN_44; // @[TypeDecode.scala 40:80 TypeDecode.scala 36:16]
  assign io_Fmv = 5'h0 == io_func5 & 7'h53 == io_opCode ? 1'h0 : _T_9; // @[TypeDecode.scala 40:80 TypeDecode.scala 37:16]
  assign io_Fadd = 5'h0 == io_func5 & 7'h53 == io_opCode; // @[TypeDecode.scala 40:44]
endmodule
module ControlDecode(
  input        io_RType,
  input        io_Load,
  input        io_Store,
  input        io_SBType,
  input        io_IType,
  input        io_Jalr,
  input        io_Jal,
  input        io_Lui,
  input        io_Fmv,
  input        io_Fadd,
  output       io_MemWrite,
  output       io_Branch,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemToReg,
  output [2:0] io_AluOp,
  output [1:0] io_Operand_aSel,
  output       io_Operand_bSel,
  output [1:0] io_ExtendSel,
  output [1:0] io_NextPcSel,
  output       io_FRegWrite,
  output       io_FRegRead
);
  wire [2:0] _GEN_1 = io_Lui ? 3'h6 : 3'h0; // @[ControlDecode.scala 104:30 ControlDecode.scala 106:26 ControlDecode.scala 44:18]
  wire [1:0] _GEN_2 = io_Lui ? 2'h3 : 2'h0; // @[ControlDecode.scala 104:30 ControlDecode.scala 107:33 ControlDecode.scala 45:25]
  wire  _GEN_3 = io_Jal | io_Lui; // @[ControlDecode.scala 97:30 ControlDecode.scala 98:29]
  wire [2:0] _GEN_4 = io_Jal ? 3'h3 : _GEN_1; // @[ControlDecode.scala 97:30 ControlDecode.scala 99:26]
  wire [1:0] _GEN_5 = io_Jal ? 2'h2 : _GEN_2; // @[ControlDecode.scala 97:30 ControlDecode.scala 100:33]
  wire [1:0] _GEN_6 = io_Jal ? 2'h2 : 2'h0; // @[ControlDecode.scala 97:30 ControlDecode.scala 101:30 ControlDecode.scala 48:22]
  wire  _GEN_7 = io_Jal ? 1'h0 : io_Lui; // @[ControlDecode.scala 97:30 ControlDecode.scala 46:25]
  wire  _GEN_8 = io_Jalr | _GEN_3; // @[ControlDecode.scala 90:31 ControlDecode.scala 91:29]
  wire [2:0] _GEN_9 = io_Jalr ? 3'h3 : _GEN_4; // @[ControlDecode.scala 90:31 ControlDecode.scala 92:26]
  wire [1:0] _GEN_10 = io_Jalr ? 2'h2 : _GEN_5; // @[ControlDecode.scala 90:31 ControlDecode.scala 93:33]
  wire [1:0] _GEN_11 = io_Jalr ? 2'h3 : _GEN_6; // @[ControlDecode.scala 90:31 ControlDecode.scala 94:30]
  wire  _GEN_12 = io_Jalr ? 1'h0 : _GEN_7; // @[ControlDecode.scala 90:31 ControlDecode.scala 46:25]
  wire  _GEN_13 = io_IType | _GEN_8; // @[ControlDecode.scala 84:32 ControlDecode.scala 85:29]
  wire [2:0] _GEN_14 = io_IType ? 3'h1 : _GEN_9; // @[ControlDecode.scala 84:32 ControlDecode.scala 86:26]
  wire  _GEN_15 = io_IType | _GEN_12; // @[ControlDecode.scala 84:32 ControlDecode.scala 87:33]
  wire [1:0] _GEN_16 = io_IType ? 2'h0 : _GEN_10; // @[ControlDecode.scala 84:32 ControlDecode.scala 45:25]
  wire [1:0] _GEN_17 = io_IType ? 2'h0 : _GEN_11; // @[ControlDecode.scala 84:32 ControlDecode.scala 48:22]
  wire  _GEN_18 = io_IType ? 1'h0 : _GEN_12; // @[ControlDecode.scala 84:32 ControlDecode.scala 47:22]
  wire [2:0] _GEN_20 = io_SBType ? 3'h2 : _GEN_14; // @[ControlDecode.scala 78:33 ControlDecode.scala 80:26]
  wire [1:0] _GEN_21 = io_SBType ? 2'h1 : _GEN_17; // @[ControlDecode.scala 78:33 ControlDecode.scala 81:29]
  wire  _GEN_22 = io_SBType ? 1'h0 : _GEN_13; // @[ControlDecode.scala 78:33 ControlDecode.scala 42:21]
  wire  _GEN_23 = io_SBType ? 1'h0 : _GEN_15; // @[ControlDecode.scala 78:33 ControlDecode.scala 46:25]
  wire [1:0] _GEN_24 = io_SBType ? 2'h0 : _GEN_16; // @[ControlDecode.scala 78:33 ControlDecode.scala 45:25]
  wire  _GEN_25 = io_SBType ? 1'h0 : _GEN_18; // @[ControlDecode.scala 78:33 ControlDecode.scala 47:22]
  wire [2:0] _GEN_27 = io_Store ? 3'h5 : _GEN_20; // @[ControlDecode.scala 71:32 ControlDecode.scala 73:26]
  wire  _GEN_28 = io_Store | _GEN_23; // @[ControlDecode.scala 71:32 ControlDecode.scala 74:33]
  wire [1:0] _GEN_29 = io_Store ? 2'h2 : {{1'd0}, _GEN_25}; // @[ControlDecode.scala 71:32 ControlDecode.scala 75:30]
  wire  _GEN_30 = io_Store ? 1'h0 : io_SBType; // @[ControlDecode.scala 71:32 ControlDecode.scala 40:19]
  wire [1:0] _GEN_31 = io_Store ? 2'h0 : _GEN_21; // @[ControlDecode.scala 71:32 ControlDecode.scala 48:22]
  wire  _GEN_32 = io_Store ? 1'h0 : _GEN_22; // @[ControlDecode.scala 71:32 ControlDecode.scala 42:21]
  wire [1:0] _GEN_33 = io_Store ? 2'h0 : _GEN_24; // @[ControlDecode.scala 71:32 ControlDecode.scala 45:25]
  wire  _GEN_35 = io_Load | _GEN_32; // @[ControlDecode.scala 63:31 ControlDecode.scala 65:29]
  wire [2:0] _GEN_36 = io_Load ? 3'h4 : _GEN_27; // @[ControlDecode.scala 63:31 ControlDecode.scala 67:26]
  wire  _GEN_37 = io_Load | _GEN_28; // @[ControlDecode.scala 63:31 ControlDecode.scala 68:33]
  wire  _GEN_38 = io_Load ? 1'h0 : io_Store; // @[ControlDecode.scala 63:31 ControlDecode.scala 39:21]
  wire [1:0] _GEN_39 = io_Load ? 2'h0 : _GEN_29; // @[ControlDecode.scala 63:31 ControlDecode.scala 47:22]
  wire  _GEN_40 = io_Load ? 1'h0 : _GEN_30; // @[ControlDecode.scala 63:31 ControlDecode.scala 40:19]
  wire [1:0] _GEN_41 = io_Load ? 2'h0 : _GEN_31; // @[ControlDecode.scala 63:31 ControlDecode.scala 48:22]
  wire [1:0] _GEN_42 = io_Load ? 2'h0 : _GEN_33; // @[ControlDecode.scala 63:31 ControlDecode.scala 45:25]
  wire  _GEN_43 = io_RType | _GEN_35; // @[ControlDecode.scala 59:36 ControlDecode.scala 60:29]
  wire  _GEN_44 = io_RType ? 1'h0 : io_Load; // @[ControlDecode.scala 59:36 ControlDecode.scala 41:20]
  wire [2:0] _GEN_45 = io_RType ? 3'h0 : _GEN_36; // @[ControlDecode.scala 59:36 ControlDecode.scala 44:18]
  wire  _GEN_46 = io_RType ? 1'h0 : _GEN_37; // @[ControlDecode.scala 59:36 ControlDecode.scala 46:25]
  wire  _GEN_47 = io_RType ? 1'h0 : _GEN_38; // @[ControlDecode.scala 59:36 ControlDecode.scala 39:21]
  wire [1:0] _GEN_48 = io_RType ? 2'h0 : _GEN_39; // @[ControlDecode.scala 59:36 ControlDecode.scala 47:22]
  wire  _GEN_49 = io_RType ? 1'h0 : _GEN_40; // @[ControlDecode.scala 59:36 ControlDecode.scala 40:19]
  wire [1:0] _GEN_50 = io_RType ? 2'h0 : _GEN_41; // @[ControlDecode.scala 59:36 ControlDecode.scala 48:22]
  wire [1:0] _GEN_51 = io_RType ? 2'h0 : _GEN_42; // @[ControlDecode.scala 59:36 ControlDecode.scala 45:25]
  wire  _GEN_53 = io_Fadd ? 1'h0 : _GEN_43; // @[ControlDecode.scala 55:35 ControlDecode.scala 42:21]
  wire  _GEN_54 = io_Fadd ? 1'h0 : _GEN_44; // @[ControlDecode.scala 55:35 ControlDecode.scala 41:20]
  wire [2:0] _GEN_55 = io_Fadd ? 3'h0 : _GEN_45; // @[ControlDecode.scala 55:35 ControlDecode.scala 44:18]
  wire  _GEN_56 = io_Fadd ? 1'h0 : _GEN_46; // @[ControlDecode.scala 55:35 ControlDecode.scala 46:25]
  wire  _GEN_57 = io_Fadd ? 1'h0 : _GEN_47; // @[ControlDecode.scala 55:35 ControlDecode.scala 39:21]
  wire [1:0] _GEN_58 = io_Fadd ? 2'h0 : _GEN_48; // @[ControlDecode.scala 55:35 ControlDecode.scala 47:22]
  wire  _GEN_59 = io_Fadd ? 1'h0 : _GEN_49; // @[ControlDecode.scala 55:35 ControlDecode.scala 40:19]
  wire [1:0] _GEN_60 = io_Fadd ? 2'h0 : _GEN_50; // @[ControlDecode.scala 55:35 ControlDecode.scala 48:22]
  wire [1:0] _GEN_61 = io_Fadd ? 2'h0 : _GEN_51; // @[ControlDecode.scala 55:35 ControlDecode.scala 45:25]
  assign io_MemWrite = io_Fmv ? 1'h0 : _GEN_57; // @[ControlDecode.scala 52:29 ControlDecode.scala 39:21]
  assign io_Branch = io_Fmv ? 1'h0 : _GEN_59; // @[ControlDecode.scala 52:29 ControlDecode.scala 40:19]
  assign io_MemRead = io_Fmv ? 1'h0 : _GEN_54; // @[ControlDecode.scala 52:29 ControlDecode.scala 41:20]
  assign io_RegWrite = io_Fmv ? 1'h0 : _GEN_53; // @[ControlDecode.scala 52:29 ControlDecode.scala 42:21]
  assign io_MemToReg = io_Fmv ? 1'h0 : _GEN_54; // @[ControlDecode.scala 52:29 ControlDecode.scala 41:20]
  assign io_AluOp = io_Fmv ? 3'h0 : _GEN_55; // @[ControlDecode.scala 52:29 ControlDecode.scala 44:18]
  assign io_Operand_aSel = io_Fmv ? 2'h0 : _GEN_61; // @[ControlDecode.scala 52:29 ControlDecode.scala 45:25]
  assign io_Operand_bSel = io_Fmv ? 1'h0 : _GEN_56; // @[ControlDecode.scala 52:29 ControlDecode.scala 46:25]
  assign io_ExtendSel = io_Fmv ? 2'h0 : _GEN_58; // @[ControlDecode.scala 52:29 ControlDecode.scala 47:22]
  assign io_NextPcSel = io_Fmv ? 2'h0 : _GEN_60; // @[ControlDecode.scala 52:29 ControlDecode.scala 48:22]
  assign io_FRegWrite = io_Fmv | io_Fadd; // @[ControlDecode.scala 52:29 ControlDecode.scala 53:30]
  assign io_FRegRead = io_Fmv ? 1'h0 : io_Fadd; // @[ControlDecode.scala 52:29 ControlDecode.scala 50:21]
endmodule
module Control(
  input  [6:0] io_opCode,
  input  [4:0] io_func5,
  output       io_MemWrite,
  output       io_Branch,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemToReg,
  output [2:0] io_AluOp,
  output [1:0] io_Operand_aSel,
  output       io_Operand_bSel,
  output [1:0] io_ExtendSel,
  output [1:0] io_NextPcSel,
  output       io_FRegWrite,
  output       io_FRegRead
);
  wire [6:0] typeDec_io_opCode; // @[Control.scala 28:29]
  wire [4:0] typeDec_io_func5; // @[Control.scala 28:29]
  wire  typeDec_io_RType; // @[Control.scala 28:29]
  wire  typeDec_io_Load; // @[Control.scala 28:29]
  wire  typeDec_io_Store; // @[Control.scala 28:29]
  wire  typeDec_io_Branch; // @[Control.scala 28:29]
  wire  typeDec_io_IType; // @[Control.scala 28:29]
  wire  typeDec_io_Jalr; // @[Control.scala 28:29]
  wire  typeDec_io_Jal; // @[Control.scala 28:29]
  wire  typeDec_io_Lui; // @[Control.scala 28:29]
  wire  typeDec_io_Fmv; // @[Control.scala 28:29]
  wire  typeDec_io_Fadd; // @[Control.scala 28:29]
  wire  controlDec_io_RType; // @[Control.scala 29:32]
  wire  controlDec_io_Load; // @[Control.scala 29:32]
  wire  controlDec_io_Store; // @[Control.scala 29:32]
  wire  controlDec_io_SBType; // @[Control.scala 29:32]
  wire  controlDec_io_IType; // @[Control.scala 29:32]
  wire  controlDec_io_Jalr; // @[Control.scala 29:32]
  wire  controlDec_io_Jal; // @[Control.scala 29:32]
  wire  controlDec_io_Lui; // @[Control.scala 29:32]
  wire  controlDec_io_Fmv; // @[Control.scala 29:32]
  wire  controlDec_io_Fadd; // @[Control.scala 29:32]
  wire  controlDec_io_MemWrite; // @[Control.scala 29:32]
  wire  controlDec_io_Branch; // @[Control.scala 29:32]
  wire  controlDec_io_MemRead; // @[Control.scala 29:32]
  wire  controlDec_io_RegWrite; // @[Control.scala 29:32]
  wire  controlDec_io_MemToReg; // @[Control.scala 29:32]
  wire [2:0] controlDec_io_AluOp; // @[Control.scala 29:32]
  wire [1:0] controlDec_io_Operand_aSel; // @[Control.scala 29:32]
  wire  controlDec_io_Operand_bSel; // @[Control.scala 29:32]
  wire [1:0] controlDec_io_ExtendSel; // @[Control.scala 29:32]
  wire [1:0] controlDec_io_NextPcSel; // @[Control.scala 29:32]
  wire  controlDec_io_FRegWrite; // @[Control.scala 29:32]
  wire  controlDec_io_FRegRead; // @[Control.scala 29:32]
  TypeDecode typeDec ( // @[Control.scala 28:29]
    .io_opCode(typeDec_io_opCode),
    .io_func5(typeDec_io_func5),
    .io_RType(typeDec_io_RType),
    .io_Load(typeDec_io_Load),
    .io_Store(typeDec_io_Store),
    .io_Branch(typeDec_io_Branch),
    .io_IType(typeDec_io_IType),
    .io_Jalr(typeDec_io_Jalr),
    .io_Jal(typeDec_io_Jal),
    .io_Lui(typeDec_io_Lui),
    .io_Fmv(typeDec_io_Fmv),
    .io_Fadd(typeDec_io_Fadd)
  );
  ControlDecode controlDec ( // @[Control.scala 29:32]
    .io_RType(controlDec_io_RType),
    .io_Load(controlDec_io_Load),
    .io_Store(controlDec_io_Store),
    .io_SBType(controlDec_io_SBType),
    .io_IType(controlDec_io_IType),
    .io_Jalr(controlDec_io_Jalr),
    .io_Jal(controlDec_io_Jal),
    .io_Lui(controlDec_io_Lui),
    .io_Fmv(controlDec_io_Fmv),
    .io_Fadd(controlDec_io_Fadd),
    .io_MemWrite(controlDec_io_MemWrite),
    .io_Branch(controlDec_io_Branch),
    .io_MemRead(controlDec_io_MemRead),
    .io_RegWrite(controlDec_io_RegWrite),
    .io_MemToReg(controlDec_io_MemToReg),
    .io_AluOp(controlDec_io_AluOp),
    .io_Operand_aSel(controlDec_io_Operand_aSel),
    .io_Operand_bSel(controlDec_io_Operand_bSel),
    .io_ExtendSel(controlDec_io_ExtendSel),
    .io_NextPcSel(controlDec_io_NextPcSel),
    .io_FRegWrite(controlDec_io_FRegWrite),
    .io_FRegRead(controlDec_io_FRegRead)
  );
  assign io_MemWrite = controlDec_io_MemWrite; // @[Control.scala 43:130]
  assign io_Branch = controlDec_io_Branch; // @[Control.scala 43:130]
  assign io_MemRead = controlDec_io_MemRead; // @[Control.scala 43:130]
  assign io_RegWrite = controlDec_io_RegWrite; // @[Control.scala 43:130]
  assign io_MemToReg = controlDec_io_MemToReg; // @[Control.scala 43:130]
  assign io_AluOp = controlDec_io_AluOp; // @[Control.scala 43:130]
  assign io_Operand_aSel = controlDec_io_Operand_aSel; // @[Control.scala 43:130]
  assign io_Operand_bSel = controlDec_io_Operand_bSel; // @[Control.scala 43:130]
  assign io_ExtendSel = controlDec_io_ExtendSel; // @[Control.scala 43:130]
  assign io_NextPcSel = controlDec_io_NextPcSel; // @[Control.scala 43:130]
  assign io_FRegWrite = controlDec_io_FRegWrite; // @[Control.scala 43:130]
  assign io_FRegRead = controlDec_io_FRegRead; // @[Control.scala 43:130]
  assign typeDec_io_opCode = io_opCode; // @[Control.scala 31:27]
  assign typeDec_io_func5 = io_func5; // @[Control.scala 32:26]
  assign controlDec_io_RType = typeDec_io_RType; // @[Control.scala 37:129]
  assign controlDec_io_Load = typeDec_io_Load; // @[Control.scala 37:129]
  assign controlDec_io_Store = typeDec_io_Store; // @[Control.scala 37:129]
  assign controlDec_io_SBType = typeDec_io_Branch; // @[Control.scala 37:129]
  assign controlDec_io_IType = typeDec_io_IType; // @[Control.scala 37:129]
  assign controlDec_io_Jalr = typeDec_io_Jalr; // @[Control.scala 37:129]
  assign controlDec_io_Jal = typeDec_io_Jal; // @[Control.scala 37:129]
  assign controlDec_io_Lui = typeDec_io_Lui; // @[Control.scala 37:129]
  assign controlDec_io_Fmv = typeDec_io_Fmv; // @[Control.scala 37:129]
  assign controlDec_io_Fadd = typeDec_io_Fadd; // @[Control.scala 37:129]
endmodule
module DataMem(
  input         clock,
  input  [31:0] io_data_in,
  output [31:0] io_data_out,
  input  [31:0] io_addr,
  input         io_wr_en,
  input         io_rd_en
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [31:0] memory [0:1023]; // @[DataMemory.scala 23:21]
  wire [31:0] memory_io_data_out_MPORT_data; // @[DataMemory.scala 23:21]
  wire [9:0] memory_io_data_out_MPORT_addr; // @[DataMemory.scala 23:21]
  wire [31:0] memory_MPORT_data; // @[DataMemory.scala 23:21]
  wire [9:0] memory_MPORT_addr; // @[DataMemory.scala 23:21]
  wire  memory_MPORT_mask; // @[DataMemory.scala 23:21]
  wire  memory_MPORT_en; // @[DataMemory.scala 23:21]
  assign memory_io_data_out_MPORT_addr = io_addr[9:0];
  assign memory_io_data_out_MPORT_data = memory[memory_io_data_out_MPORT_addr]; // @[DataMemory.scala 23:21]
  assign memory_MPORT_data = io_data_in;
  assign memory_MPORT_addr = io_addr[9:0];
  assign memory_MPORT_mask = 1'h1;
  assign memory_MPORT_en = io_wr_en;
  assign io_data_out = memory_io_data_out_MPORT_data; // @[DataMemory.scala 34:21 DataMemory.scala 35:21]
  always @(posedge clock) begin
    if(memory_MPORT_en & memory_MPORT_mask) begin
      memory[memory_MPORT_addr] <= memory_MPORT_data; // @[DataMemory.scala 23:21]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    memory[initvar] = _RAND_0[31:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ImmGen(
  input  [31:0] io_instr,
  input  [31:0] io_pc,
  output [31:0] io_s_imm,
  output [31:0] io_sb_imm,
  output [31:0] io_uj_imm,
  output [31:0] io_u_imm,
  output [31:0] io_i_imm
);
  wire [6:0] s_imm13_hi = io_instr[31:25]; // @[ImmGen.scala 23:36]
  wire [4:0] s_imm13_lo = io_instr[11:7]; // @[ImmGen.scala 23:52]
  wire [11:0] s_imm13 = {s_imm13_hi,s_imm13_lo}; // @[Cat.scala 30:58]
  wire [19:0] io_s_imm_hi = s_imm13[11] ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  wire  sb_imm13_hi_hi_hi = io_instr[31]; // @[ImmGen.scala 27:37]
  wire  sb_imm13_hi_hi_lo = io_instr[7]; // @[ImmGen.scala 27:50]
  wire [5:0] sb_imm13_hi_lo = io_instr[30:25]; // @[ImmGen.scala 27:62]
  wire [3:0] sb_imm13_lo_hi = io_instr[11:8]; // @[ImmGen.scala 27:78]
  wire [12:0] sb_imm13 = {sb_imm13_hi_hi_hi,sb_imm13_hi_hi_lo,sb_imm13_hi_lo,sb_imm13_lo_hi,1'h0}; // @[Cat.scala 30:58]
  wire [18:0] io_sb_imm_hi = sb_imm13[12] ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _io_sb_imm_T_2 = {io_sb_imm_hi,sb_imm13_hi_hi_hi,sb_imm13_hi_hi_lo,sb_imm13_hi_lo,sb_imm13_lo_hi,1'h0}; // @[Cat.scala 30:58]
  wire [7:0] uj_imm21_hi_hi_lo = io_instr[19:12]; // @[ImmGen.scala 31:50]
  wire  uj_imm21_hi_lo = io_instr[20]; // @[ImmGen.scala 31:66]
  wire [9:0] uj_imm21_lo_hi = io_instr[30:21]; // @[ImmGen.scala 31:79]
  wire [20:0] uj_imm21 = {sb_imm13_hi_hi_hi,uj_imm21_hi_hi_lo,uj_imm21_hi_lo,uj_imm21_lo_hi,1'h0}; // @[Cat.scala 30:58]
  wire [11:0] io_uj_imm_hi = uj_imm21[20] ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  wire [32:0] _io_uj_imm_T_2 = {io_uj_imm_hi,sb_imm13_hi_hi_hi,uj_imm21_hi_hi_lo,uj_imm21_hi_lo,uj_imm21_lo_hi,1'h0}; // @[Cat.scala 30:58]
  wire [32:0] _GEN_0 = {{1'd0}, io_pc}; // @[ImmGen.scala 32:61]
  wire [32:0] _io_uj_imm_T_5 = _io_uj_imm_T_2 + _GEN_0; // @[ImmGen.scala 32:70]
  wire [11:0] io_u_imm_hi = sb_imm13_hi_hi_hi ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  wire [19:0] io_u_imm_lo = io_instr[31:12]; // @[ImmGen.scala 35:57]
  wire [31:0] _io_u_imm_T_2 = {io_u_imm_hi,io_u_imm_lo}; // @[Cat.scala 30:58]
  wire [43:0] _io_u_imm_T_4 = {_io_u_imm_T_2, 12'h0}; // @[ImmGen.scala 35:74]
  wire [19:0] io_i_imm_hi = sb_imm13_hi_hi_hi ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  wire [11:0] io_i_imm_lo = io_instr[31:20]; // @[ImmGen.scala 38:56]
  assign io_s_imm = {io_s_imm_hi,s_imm13_hi,s_imm13_lo}; // @[ImmGen.scala 24:57]
  assign io_sb_imm = _io_sb_imm_T_2 + io_pc; // @[ImmGen.scala 28:70]
  assign io_uj_imm = _io_uj_imm_T_5[31:0]; // @[ImmGen.scala 32:19]
  assign io_u_imm = _io_u_imm_T_4[31:0]; // @[ImmGen.scala 35:18]
  assign io_i_imm = {io_i_imm_hi,io_i_imm_lo}; // @[ImmGen.scala 38:66]
endmodule
module InstructionMemory(
  input         clock,
  input  [9:0]  io_addr,
  output [31:0] io_inst
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [31:0] imem [0:1023]; // @[InstructionMemory.scala 15:19]
  wire [31:0] imem_io_inst_MPORT_data; // @[InstructionMemory.scala 15:19]
  wire [9:0] imem_io_inst_MPORT_addr; // @[InstructionMemory.scala 15:19]
  assign imem_io_inst_MPORT_addr = io_addr;
  assign imem_io_inst_MPORT_data = imem[imem_io_inst_MPORT_addr]; // @[InstructionMemory.scala 15:19]
  assign io_inst = imem_io_inst_MPORT_data; // @[InstructionMemory.scala 16:13]
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    imem[initvar] = _RAND_0[31:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Jalr(
  input  [31:0] io_rs1,
  input  [31:0] io_Type,
  output [31:0] io_out
);
  wire [31:0] _io_out_T_2 = $signed(io_rs1) + $signed(io_Type); // @[Jalr.scala 17:24]
  wire [32:0] _GEN_0 = {{1{_io_out_T_2[31]}},_io_out_T_2}; // @[Jalr.scala 17:35]
  wire [32:0] _io_out_T_4 = $signed(_GEN_0) & 33'shfffffffe; // @[Jalr.scala 17:35]
  assign io_out = _io_out_T_4[31:0]; // @[Jalr.scala 17:12]
endmodule
module PC(
  input         clock,
  input         reset,
  input  [31:0] io_in,
  output [31:0] io_pc,
  output [31:0] io_pcPlus4
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] reg_; // @[ProgramCounter.scala 17:22]
  assign io_pc = reg_; // @[ProgramCounter.scala 19:11]
  assign io_pcPlus4 = reg_ + 32'h4; // @[ProgramCounter.scala 20:23]
  always @(posedge clock) begin
    if (reset) begin // @[ProgramCounter.scala 17:22]
      reg_ <= 32'h0; // @[ProgramCounter.scala 17:22]
    end else begin
      reg_ <= io_in; // @[ProgramCounter.scala 18:9]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_ = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RegFile(
  input         clock,
  input  [4:0]  io_raddr1,
  input  [4:0]  io_raddr2,
  output [31:0] io_rdata1,
  output [31:0] io_rdata2,
  input         io_regEn,
  input  [4:0]  io_waddr,
  input  [31:0] io_wdata
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] regs_0; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_1; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_2; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_3; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_4; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_5; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_6; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_7; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_8; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_9; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_10; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_11; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_12; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_13; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_14; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_15; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_16; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_17; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_18; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_19; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_20; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_21; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_22; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_23; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_24; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_25; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_26; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_27; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_28; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_29; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_30; // @[RegisterFile.scala 27:19]
  reg [31:0] regs_31; // @[RegisterFile.scala 27:19]
  wire [31:0] _GEN_1 = 5'h1 == io_raddr1 ? $signed(regs_1) : $signed(regs_0); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_2 = 5'h2 == io_raddr1 ? $signed(regs_2) : $signed(_GEN_1); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_3 = 5'h3 == io_raddr1 ? $signed(regs_3) : $signed(_GEN_2); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_4 = 5'h4 == io_raddr1 ? $signed(regs_4) : $signed(_GEN_3); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_5 = 5'h5 == io_raddr1 ? $signed(regs_5) : $signed(_GEN_4); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_6 = 5'h6 == io_raddr1 ? $signed(regs_6) : $signed(_GEN_5); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_7 = 5'h7 == io_raddr1 ? $signed(regs_7) : $signed(_GEN_6); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_8 = 5'h8 == io_raddr1 ? $signed(regs_8) : $signed(_GEN_7); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_9 = 5'h9 == io_raddr1 ? $signed(regs_9) : $signed(_GEN_8); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_10 = 5'ha == io_raddr1 ? $signed(regs_10) : $signed(_GEN_9); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_11 = 5'hb == io_raddr1 ? $signed(regs_11) : $signed(_GEN_10); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_12 = 5'hc == io_raddr1 ? $signed(regs_12) : $signed(_GEN_11); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_13 = 5'hd == io_raddr1 ? $signed(regs_13) : $signed(_GEN_12); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_14 = 5'he == io_raddr1 ? $signed(regs_14) : $signed(_GEN_13); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_15 = 5'hf == io_raddr1 ? $signed(regs_15) : $signed(_GEN_14); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_16 = 5'h10 == io_raddr1 ? $signed(regs_16) : $signed(_GEN_15); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_17 = 5'h11 == io_raddr1 ? $signed(regs_17) : $signed(_GEN_16); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_18 = 5'h12 == io_raddr1 ? $signed(regs_18) : $signed(_GEN_17); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_19 = 5'h13 == io_raddr1 ? $signed(regs_19) : $signed(_GEN_18); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_20 = 5'h14 == io_raddr1 ? $signed(regs_20) : $signed(_GEN_19); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_21 = 5'h15 == io_raddr1 ? $signed(regs_21) : $signed(_GEN_20); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_22 = 5'h16 == io_raddr1 ? $signed(regs_22) : $signed(_GEN_21); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_23 = 5'h17 == io_raddr1 ? $signed(regs_23) : $signed(_GEN_22); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_24 = 5'h18 == io_raddr1 ? $signed(regs_24) : $signed(_GEN_23); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_25 = 5'h19 == io_raddr1 ? $signed(regs_25) : $signed(_GEN_24); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_26 = 5'h1a == io_raddr1 ? $signed(regs_26) : $signed(_GEN_25); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_27 = 5'h1b == io_raddr1 ? $signed(regs_27) : $signed(_GEN_26); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_28 = 5'h1c == io_raddr1 ? $signed(regs_28) : $signed(_GEN_27); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_29 = 5'h1d == io_raddr1 ? $signed(regs_29) : $signed(_GEN_28); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_30 = 5'h1e == io_raddr1 ? $signed(regs_30) : $signed(_GEN_29); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_31 = 5'h1f == io_raddr1 ? $signed(regs_31) : $signed(_GEN_30); // @[RegisterFile.scala 29:21 RegisterFile.scala 29:21]
  wire [31:0] _GEN_33 = 5'h1 == io_raddr2 ? $signed(regs_1) : $signed(regs_0); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_34 = 5'h2 == io_raddr2 ? $signed(regs_2) : $signed(_GEN_33); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_35 = 5'h3 == io_raddr2 ? $signed(regs_3) : $signed(_GEN_34); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_36 = 5'h4 == io_raddr2 ? $signed(regs_4) : $signed(_GEN_35); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_37 = 5'h5 == io_raddr2 ? $signed(regs_5) : $signed(_GEN_36); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_38 = 5'h6 == io_raddr2 ? $signed(regs_6) : $signed(_GEN_37); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_39 = 5'h7 == io_raddr2 ? $signed(regs_7) : $signed(_GEN_38); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_40 = 5'h8 == io_raddr2 ? $signed(regs_8) : $signed(_GEN_39); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_41 = 5'h9 == io_raddr2 ? $signed(regs_9) : $signed(_GEN_40); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_42 = 5'ha == io_raddr2 ? $signed(regs_10) : $signed(_GEN_41); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_43 = 5'hb == io_raddr2 ? $signed(regs_11) : $signed(_GEN_42); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_44 = 5'hc == io_raddr2 ? $signed(regs_12) : $signed(_GEN_43); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_45 = 5'hd == io_raddr2 ? $signed(regs_13) : $signed(_GEN_44); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_46 = 5'he == io_raddr2 ? $signed(regs_14) : $signed(_GEN_45); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_47 = 5'hf == io_raddr2 ? $signed(regs_15) : $signed(_GEN_46); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_48 = 5'h10 == io_raddr2 ? $signed(regs_16) : $signed(_GEN_47); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_49 = 5'h11 == io_raddr2 ? $signed(regs_17) : $signed(_GEN_48); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_50 = 5'h12 == io_raddr2 ? $signed(regs_18) : $signed(_GEN_49); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_51 = 5'h13 == io_raddr2 ? $signed(regs_19) : $signed(_GEN_50); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_52 = 5'h14 == io_raddr2 ? $signed(regs_20) : $signed(_GEN_51); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_53 = 5'h15 == io_raddr2 ? $signed(regs_21) : $signed(_GEN_52); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_54 = 5'h16 == io_raddr2 ? $signed(regs_22) : $signed(_GEN_53); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_55 = 5'h17 == io_raddr2 ? $signed(regs_23) : $signed(_GEN_54); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_56 = 5'h18 == io_raddr2 ? $signed(regs_24) : $signed(_GEN_55); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_57 = 5'h19 == io_raddr2 ? $signed(regs_25) : $signed(_GEN_56); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_58 = 5'h1a == io_raddr2 ? $signed(regs_26) : $signed(_GEN_57); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_59 = 5'h1b == io_raddr2 ? $signed(regs_27) : $signed(_GEN_58); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_60 = 5'h1c == io_raddr2 ? $signed(regs_28) : $signed(_GEN_59); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_61 = 5'h1d == io_raddr2 ? $signed(regs_29) : $signed(_GEN_60); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_62 = 5'h1e == io_raddr2 ? $signed(regs_30) : $signed(_GEN_61); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  wire [31:0] _GEN_63 = 5'h1f == io_raddr2 ? $signed(regs_31) : $signed(_GEN_62); // @[RegisterFile.scala 30:21 RegisterFile.scala 30:21]
  assign io_rdata1 = |io_raddr1 ? $signed(_GEN_31) : $signed(32'sh0); // @[RegisterFile.scala 29:21]
  assign io_rdata2 = |io_raddr2 ? $signed(_GEN_63) : $signed(32'sh0); // @[RegisterFile.scala 30:21]
  always @(posedge clock) begin
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h0 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_0 <= io_wdata; // @[RegisterFile.scala 34:25]
      end else begin
        regs_0 <= 32'sh0; // @[RegisterFile.scala 28:13]
      end
    end else begin
      regs_0 <= 32'sh0; // @[RegisterFile.scala 28:13]
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h1 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_1 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h2 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_2 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h3 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_3 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h4 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_4 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h5 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_5 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h6 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_6 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h7 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_7 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h8 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_8 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h9 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_9 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'ha == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_10 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'hb == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_11 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'hc == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_12 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'hd == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_13 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'he == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_14 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'hf == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_15 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h10 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_16 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h11 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_17 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h12 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_18 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h13 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_19 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h14 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_20 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h15 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_21 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h16 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_22 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h17 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_23 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h18 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_24 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h19 == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_25 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h1a == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_26 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h1b == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_27 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h1c == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_28 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h1d == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_29 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h1e == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_30 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[RegisterFile.scala 32:36]
      if (5'h1f == io_waddr) begin // @[RegisterFile.scala 34:25]
        regs_31 <= io_wdata; // @[RegisterFile.scala 34:25]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  regs_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  regs_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  regs_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  regs_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  regs_4 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  regs_5 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  regs_6 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  regs_7 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  regs_8 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  regs_9 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  regs_10 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  regs_11 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  regs_12 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  regs_13 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  regs_14 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  regs_15 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  regs_16 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  regs_17 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  regs_18 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  regs_19 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  regs_20 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  regs_21 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  regs_22 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  regs_23 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  regs_24 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  regs_25 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  regs_26 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  regs_27 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  regs_28 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  regs_29 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  regs_30 = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  regs_31 = _RAND_31[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module FRegisterFile(
  input         clock,
  input  [4:0]  io_raddr1,
  input  [4:0]  io_raddr2,
  output [31:0] io_rdata1,
  output [31:0] io_rdata2,
  input         io_regEn,
  input  [4:0]  io_waddr,
  input  [31:0] io_wdata
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] regs_0; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_1; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_2; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_3; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_4; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_5; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_6; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_7; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_8; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_9; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_10; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_11; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_12; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_13; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_14; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_15; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_16; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_17; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_18; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_19; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_20; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_21; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_22; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_23; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_24; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_25; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_26; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_27; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_28; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_29; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_30; // @[FRegisterFile.scala 24:19]
  reg [31:0] regs_31; // @[FRegisterFile.scala 24:19]
  wire [31:0] _GEN_1 = 5'h1 == io_raddr1 ? $signed(regs_1) : $signed(regs_0); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_2 = 5'h2 == io_raddr1 ? $signed(regs_2) : $signed(_GEN_1); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_3 = 5'h3 == io_raddr1 ? $signed(regs_3) : $signed(_GEN_2); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_4 = 5'h4 == io_raddr1 ? $signed(regs_4) : $signed(_GEN_3); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_5 = 5'h5 == io_raddr1 ? $signed(regs_5) : $signed(_GEN_4); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_6 = 5'h6 == io_raddr1 ? $signed(regs_6) : $signed(_GEN_5); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_7 = 5'h7 == io_raddr1 ? $signed(regs_7) : $signed(_GEN_6); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_8 = 5'h8 == io_raddr1 ? $signed(regs_8) : $signed(_GEN_7); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_9 = 5'h9 == io_raddr1 ? $signed(regs_9) : $signed(_GEN_8); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_10 = 5'ha == io_raddr1 ? $signed(regs_10) : $signed(_GEN_9); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_11 = 5'hb == io_raddr1 ? $signed(regs_11) : $signed(_GEN_10); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_12 = 5'hc == io_raddr1 ? $signed(regs_12) : $signed(_GEN_11); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_13 = 5'hd == io_raddr1 ? $signed(regs_13) : $signed(_GEN_12); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_14 = 5'he == io_raddr1 ? $signed(regs_14) : $signed(_GEN_13); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_15 = 5'hf == io_raddr1 ? $signed(regs_15) : $signed(_GEN_14); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_16 = 5'h10 == io_raddr1 ? $signed(regs_16) : $signed(_GEN_15); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_17 = 5'h11 == io_raddr1 ? $signed(regs_17) : $signed(_GEN_16); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_18 = 5'h12 == io_raddr1 ? $signed(regs_18) : $signed(_GEN_17); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_19 = 5'h13 == io_raddr1 ? $signed(regs_19) : $signed(_GEN_18); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_20 = 5'h14 == io_raddr1 ? $signed(regs_20) : $signed(_GEN_19); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_21 = 5'h15 == io_raddr1 ? $signed(regs_21) : $signed(_GEN_20); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_22 = 5'h16 == io_raddr1 ? $signed(regs_22) : $signed(_GEN_21); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_23 = 5'h17 == io_raddr1 ? $signed(regs_23) : $signed(_GEN_22); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_24 = 5'h18 == io_raddr1 ? $signed(regs_24) : $signed(_GEN_23); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_25 = 5'h19 == io_raddr1 ? $signed(regs_25) : $signed(_GEN_24); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_26 = 5'h1a == io_raddr1 ? $signed(regs_26) : $signed(_GEN_25); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_27 = 5'h1b == io_raddr1 ? $signed(regs_27) : $signed(_GEN_26); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_28 = 5'h1c == io_raddr1 ? $signed(regs_28) : $signed(_GEN_27); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_29 = 5'h1d == io_raddr1 ? $signed(regs_29) : $signed(_GEN_28); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_30 = 5'h1e == io_raddr1 ? $signed(regs_30) : $signed(_GEN_29); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_31 = 5'h1f == io_raddr1 ? $signed(regs_31) : $signed(_GEN_30); // @[FRegisterFile.scala 28:21 FRegisterFile.scala 28:21]
  wire [31:0] _GEN_33 = 5'h1 == io_raddr2 ? $signed(regs_1) : $signed(regs_0); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_34 = 5'h2 == io_raddr2 ? $signed(regs_2) : $signed(_GEN_33); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_35 = 5'h3 == io_raddr2 ? $signed(regs_3) : $signed(_GEN_34); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_36 = 5'h4 == io_raddr2 ? $signed(regs_4) : $signed(_GEN_35); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_37 = 5'h5 == io_raddr2 ? $signed(regs_5) : $signed(_GEN_36); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_38 = 5'h6 == io_raddr2 ? $signed(regs_6) : $signed(_GEN_37); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_39 = 5'h7 == io_raddr2 ? $signed(regs_7) : $signed(_GEN_38); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_40 = 5'h8 == io_raddr2 ? $signed(regs_8) : $signed(_GEN_39); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_41 = 5'h9 == io_raddr2 ? $signed(regs_9) : $signed(_GEN_40); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_42 = 5'ha == io_raddr2 ? $signed(regs_10) : $signed(_GEN_41); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_43 = 5'hb == io_raddr2 ? $signed(regs_11) : $signed(_GEN_42); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_44 = 5'hc == io_raddr2 ? $signed(regs_12) : $signed(_GEN_43); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_45 = 5'hd == io_raddr2 ? $signed(regs_13) : $signed(_GEN_44); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_46 = 5'he == io_raddr2 ? $signed(regs_14) : $signed(_GEN_45); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_47 = 5'hf == io_raddr2 ? $signed(regs_15) : $signed(_GEN_46); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_48 = 5'h10 == io_raddr2 ? $signed(regs_16) : $signed(_GEN_47); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_49 = 5'h11 == io_raddr2 ? $signed(regs_17) : $signed(_GEN_48); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_50 = 5'h12 == io_raddr2 ? $signed(regs_18) : $signed(_GEN_49); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_51 = 5'h13 == io_raddr2 ? $signed(regs_19) : $signed(_GEN_50); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_52 = 5'h14 == io_raddr2 ? $signed(regs_20) : $signed(_GEN_51); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_53 = 5'h15 == io_raddr2 ? $signed(regs_21) : $signed(_GEN_52); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_54 = 5'h16 == io_raddr2 ? $signed(regs_22) : $signed(_GEN_53); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_55 = 5'h17 == io_raddr2 ? $signed(regs_23) : $signed(_GEN_54); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_56 = 5'h18 == io_raddr2 ? $signed(regs_24) : $signed(_GEN_55); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_57 = 5'h19 == io_raddr2 ? $signed(regs_25) : $signed(_GEN_56); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_58 = 5'h1a == io_raddr2 ? $signed(regs_26) : $signed(_GEN_57); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_59 = 5'h1b == io_raddr2 ? $signed(regs_27) : $signed(_GEN_58); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_60 = 5'h1c == io_raddr2 ? $signed(regs_28) : $signed(_GEN_59); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_61 = 5'h1d == io_raddr2 ? $signed(regs_29) : $signed(_GEN_60); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_62 = 5'h1e == io_raddr2 ? $signed(regs_30) : $signed(_GEN_61); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  wire [31:0] _GEN_63 = 5'h1f == io_raddr2 ? $signed(regs_31) : $signed(_GEN_62); // @[FRegisterFile.scala 29:21 FRegisterFile.scala 29:21]
  assign io_rdata1 = |io_raddr1 ? $signed(_GEN_31) : $signed(32'sh0); // @[FRegisterFile.scala 28:21]
  assign io_rdata2 = |io_raddr2 ? $signed(_GEN_63) : $signed(32'sh0); // @[FRegisterFile.scala 29:21]
  always @(posedge clock) begin
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h0 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_0 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h1 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_1 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h2 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_2 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h3 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_3 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h4 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_4 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h5 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_5 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h6 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_6 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h7 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_7 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h8 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_8 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h9 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_9 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'ha == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_10 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'hb == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_11 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'hc == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_12 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'hd == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_13 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'he == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_14 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'hf == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_15 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h10 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_16 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h11 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_17 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h12 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_18 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h13 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_19 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h14 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_20 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h15 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_21 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h16 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_22 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h17 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_23 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h18 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_24 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h19 == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_25 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h1a == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_26 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h1b == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_27 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h1c == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_28 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h1d == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_29 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h1e == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_30 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
    if (io_regEn & |io_waddr) begin // @[FRegisterFile.scala 32:36]
      if (5'h1f == io_waddr) begin // @[FRegisterFile.scala 34:25]
        regs_31 <= io_wdata; // @[FRegisterFile.scala 34:25]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  regs_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  regs_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  regs_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  regs_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  regs_4 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  regs_5 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  regs_6 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  regs_7 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  regs_8 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  regs_9 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  regs_10 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  regs_11 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  regs_12 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  regs_13 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  regs_14 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  regs_15 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  regs_16 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  regs_17 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  regs_18 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  regs_19 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  regs_20 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  regs_21 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  regs_22 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  regs_23 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  regs_24 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  regs_25 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  regs_26 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  regs_27 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  regs_28 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  regs_29 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  regs_30 = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  regs_31 = _RAND_31[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module TopFile(
  input         clock,
  input         reset,
  output [31:0] io_RegOut
);
  wire [4:0] alu_io_AluControl; // @[TopFile.scala 14:25]
  wire [31:0] alu_io_in1; // @[TopFile.scala 14:25]
  wire [31:0] alu_io_in2; // @[TopFile.scala 14:25]
  wire  alu_io_Branch; // @[TopFile.scala 14:25]
  wire [31:0] alu_io_out; // @[TopFile.scala 14:25]
  wire [2:0] aluControl_io_Aluop; // @[TopFile.scala 15:28]
  wire  aluControl_io_func7; // @[TopFile.scala 15:28]
  wire [2:0] aluControl_io_func3; // @[TopFile.scala 15:28]
  wire [4:0] aluControl_io_control; // @[TopFile.scala 15:28]
  wire [6:0] control_io_opCode; // @[TopFile.scala 16:29]
  wire [4:0] control_io_func5; // @[TopFile.scala 16:29]
  wire  control_io_MemWrite; // @[TopFile.scala 16:29]
  wire  control_io_Branch; // @[TopFile.scala 16:29]
  wire  control_io_MemRead; // @[TopFile.scala 16:29]
  wire  control_io_RegWrite; // @[TopFile.scala 16:29]
  wire  control_io_MemToReg; // @[TopFile.scala 16:29]
  wire [2:0] control_io_AluOp; // @[TopFile.scala 16:29]
  wire [1:0] control_io_Operand_aSel; // @[TopFile.scala 16:29]
  wire  control_io_Operand_bSel; // @[TopFile.scala 16:29]
  wire [1:0] control_io_ExtendSel; // @[TopFile.scala 16:29]
  wire [1:0] control_io_NextPcSel; // @[TopFile.scala 16:29]
  wire  control_io_FRegWrite; // @[TopFile.scala 16:29]
  wire  control_io_FRegRead; // @[TopFile.scala 16:29]
  wire  dataMemory_clock; // @[TopFile.scala 17:32]
  wire [31:0] dataMemory_io_data_in; // @[TopFile.scala 17:32]
  wire [31:0] dataMemory_io_data_out; // @[TopFile.scala 17:32]
  wire [31:0] dataMemory_io_addr; // @[TopFile.scala 17:32]
  wire  dataMemory_io_wr_en; // @[TopFile.scala 17:32]
  wire  dataMemory_io_rd_en; // @[TopFile.scala 17:32]
  wire [31:0] ImmediateGeneration_io_instr; // @[TopFile.scala 18:41]
  wire [31:0] ImmediateGeneration_io_pc; // @[TopFile.scala 18:41]
  wire [31:0] ImmediateGeneration_io_s_imm; // @[TopFile.scala 18:41]
  wire [31:0] ImmediateGeneration_io_sb_imm; // @[TopFile.scala 18:41]
  wire [31:0] ImmediateGeneration_io_uj_imm; // @[TopFile.scala 18:41]
  wire [31:0] ImmediateGeneration_io_u_imm; // @[TopFile.scala 18:41]
  wire [31:0] ImmediateGeneration_io_i_imm; // @[TopFile.scala 18:41]
  wire  Memory_clock; // @[TopFile.scala 19:28]
  wire [9:0] Memory_io_addr; // @[TopFile.scala 19:28]
  wire [31:0] Memory_io_inst; // @[TopFile.scala 19:28]
  wire [31:0] jalr_io_rs1; // @[TopFile.scala 20:26]
  wire [31:0] jalr_io_Type; // @[TopFile.scala 20:26]
  wire [31:0] jalr_io_out; // @[TopFile.scala 20:26]
  wire  pc_clock; // @[TopFile.scala 21:24]
  wire  pc_reset; // @[TopFile.scala 21:24]
  wire [31:0] pc_io_in; // @[TopFile.scala 21:24]
  wire [31:0] pc_io_pc; // @[TopFile.scala 21:24]
  wire [31:0] pc_io_pcPlus4; // @[TopFile.scala 21:24]
  wire  registerFile_clock; // @[TopFile.scala 22:34]
  wire [4:0] registerFile_io_raddr1; // @[TopFile.scala 22:34]
  wire [4:0] registerFile_io_raddr2; // @[TopFile.scala 22:34]
  wire [31:0] registerFile_io_rdata1; // @[TopFile.scala 22:34]
  wire [31:0] registerFile_io_rdata2; // @[TopFile.scala 22:34]
  wire  registerFile_io_regEn; // @[TopFile.scala 22:34]
  wire [4:0] registerFile_io_waddr; // @[TopFile.scala 22:34]
  wire [31:0] registerFile_io_wdata; // @[TopFile.scala 22:34]
  wire  freg_clock; // @[TopFile.scala 24:22]
  wire [4:0] freg_io_raddr1; // @[TopFile.scala 24:22]
  wire [4:0] freg_io_raddr2; // @[TopFile.scala 24:22]
  wire [31:0] freg_io_rdata1; // @[TopFile.scala 24:22]
  wire [31:0] freg_io_rdata2; // @[TopFile.scala 24:22]
  wire  freg_io_regEn; // @[TopFile.scala 24:22]
  wire [4:0] freg_io_waddr; // @[TopFile.scala 24:22]
  wire [31:0] freg_io_wdata; // @[TopFile.scala 24:22]
  wire  _T_1 = control_io_Operand_bSel; // @[TopFile.scala 69:76]
  wire [31:0] _GEN_0 = control_io_ExtendSel == 2'h2 & _T_1 ? $signed(ImmediateGeneration_io_s_imm) : $signed(
    registerFile_io_rdata2); // @[TopFile.scala 77:91 TopFile.scala 78:28 TopFile.scala 80:32]
  wire [31:0] _GEN_1 = control_io_ExtendSel == 2'h1 & _T_1 ? $signed(ImmediateGeneration_io_u_imm) : $signed(_GEN_0); // @[TopFile.scala 73:91 TopFile.scala 74:20]
  wire [31:0] _GEN_2 = control_io_ExtendSel == 2'h0 & control_io_Operand_bSel ? $signed(ImmediateGeneration_io_i_imm) :
    $signed(_GEN_1); // @[TopFile.scala 69:87 TopFile.scala 70:20]
  wire  _pc_io_in_T = control_io_NextPcSel == 2'h1; // @[TopFile.scala 88:31]
  wire  _pc_io_in_T_2 = control_io_NextPcSel == 2'h1 & ~control_io_Branch; // @[TopFile.scala 88:43]
  wire  _pc_io_in_T_3 = ~alu_io_Branch; // @[TopFile.scala 88:92]
  wire  _pc_io_in_T_4 = control_io_NextPcSel == 2'h1 & ~control_io_Branch & ~alu_io_Branch; // @[TopFile.scala 88:75]
  wire  _pc_io_in_T_7 = _pc_io_in_T & control_io_Branch; // @[TopFile.scala 89:43]
  wire  _pc_io_in_T_9 = _pc_io_in_T & control_io_Branch & _pc_io_in_T_3; // @[TopFile.scala 89:75]
  wire  _pc_io_in_T_13 = alu_io_Branch; // @[TopFile.scala 90:96]
  wire  _pc_io_in_T_14 = _pc_io_in_T_2 & alu_io_Branch; // @[TopFile.scala 90:79]
  wire  _pc_io_in_T_19 = _pc_io_in_T_7 & _pc_io_in_T_13; // @[TopFile.scala 91:79]
  wire  _pc_io_in_T_21 = control_io_NextPcSel == 2'h0; // @[TopFile.scala 92:31]
  wire  _pc_io_in_T_22 = control_io_NextPcSel == 2'h2; // @[TopFile.scala 93:31]
  wire  _pc_io_in_T_24 = control_io_NextPcSel == 2'h3; // @[TopFile.scala 94:31]
  wire [31:0] _pc_io_in_T_26 = _pc_io_in_T_24 ? jalr_io_out : 32'h0; // @[Mux.scala 98:16]
  wire [31:0] _pc_io_in_T_27 = _pc_io_in_T_22 ? ImmediateGeneration_io_uj_imm : _pc_io_in_T_26; // @[Mux.scala 98:16]
  wire [31:0] _pc_io_in_T_28 = _pc_io_in_T_21 ? pc_io_pcPlus4 : _pc_io_in_T_27; // @[Mux.scala 98:16]
  wire [31:0] _pc_io_in_T_29 = _pc_io_in_T_19 ? ImmediateGeneration_io_sb_imm : _pc_io_in_T_28; // @[Mux.scala 98:16]
  wire [31:0] _pc_io_in_T_30 = _pc_io_in_T_14 ? pc_io_pcPlus4 : _pc_io_in_T_29; // @[Mux.scala 98:16]
  wire [31:0] _pc_io_in_T_31 = _pc_io_in_T_9 ? pc_io_pcPlus4 : _pc_io_in_T_30; // @[Mux.scala 98:16]
  wire [31:0] _alu_io_in1_T = control_io_FRegRead ? $signed(freg_io_rdata1) : $signed(registerFile_io_rdata1); // @[TopFile.scala 129:26]
  wire [31:0] _alu_io_in1_T_2 = control_io_FRegRead ? $signed(pc_io_pcPlus4) : $signed(freg_io_rdata1); // @[TopFile.scala 134:26]
  Alu alu ( // @[TopFile.scala 14:25]
    .io_AluControl(alu_io_AluControl),
    .io_in1(alu_io_in1),
    .io_in2(alu_io_in2),
    .io_Branch(alu_io_Branch),
    .io_out(alu_io_out)
  );
  AluControl aluControl ( // @[TopFile.scala 15:28]
    .io_Aluop(aluControl_io_Aluop),
    .io_func7(aluControl_io_func7),
    .io_func3(aluControl_io_func3),
    .io_control(aluControl_io_control)
  );
  Control control ( // @[TopFile.scala 16:29]
    .io_opCode(control_io_opCode),
    .io_func5(control_io_func5),
    .io_MemWrite(control_io_MemWrite),
    .io_Branch(control_io_Branch),
    .io_MemRead(control_io_MemRead),
    .io_RegWrite(control_io_RegWrite),
    .io_MemToReg(control_io_MemToReg),
    .io_AluOp(control_io_AluOp),
    .io_Operand_aSel(control_io_Operand_aSel),
    .io_Operand_bSel(control_io_Operand_bSel),
    .io_ExtendSel(control_io_ExtendSel),
    .io_NextPcSel(control_io_NextPcSel),
    .io_FRegWrite(control_io_FRegWrite),
    .io_FRegRead(control_io_FRegRead)
  );
  DataMem dataMemory ( // @[TopFile.scala 17:32]
    .clock(dataMemory_clock),
    .io_data_in(dataMemory_io_data_in),
    .io_data_out(dataMemory_io_data_out),
    .io_addr(dataMemory_io_addr),
    .io_wr_en(dataMemory_io_wr_en),
    .io_rd_en(dataMemory_io_rd_en)
  );
  ImmGen ImmediateGeneration ( // @[TopFile.scala 18:41]
    .io_instr(ImmediateGeneration_io_instr),
    .io_pc(ImmediateGeneration_io_pc),
    .io_s_imm(ImmediateGeneration_io_s_imm),
    .io_sb_imm(ImmediateGeneration_io_sb_imm),
    .io_uj_imm(ImmediateGeneration_io_uj_imm),
    .io_u_imm(ImmediateGeneration_io_u_imm),
    .io_i_imm(ImmediateGeneration_io_i_imm)
  );
  InstructionMemory Memory ( // @[TopFile.scala 19:28]
    .clock(Memory_clock),
    .io_addr(Memory_io_addr),
    .io_inst(Memory_io_inst)
  );
  Jalr jalr ( // @[TopFile.scala 20:26]
    .io_rs1(jalr_io_rs1),
    .io_Type(jalr_io_Type),
    .io_out(jalr_io_out)
  );
  PC pc ( // @[TopFile.scala 21:24]
    .clock(pc_clock),
    .reset(pc_reset),
    .io_in(pc_io_in),
    .io_pc(pc_io_pc),
    .io_pcPlus4(pc_io_pcPlus4)
  );
  RegFile registerFile ( // @[TopFile.scala 22:34]
    .clock(registerFile_clock),
    .io_raddr1(registerFile_io_raddr1),
    .io_raddr2(registerFile_io_raddr2),
    .io_rdata1(registerFile_io_rdata1),
    .io_rdata2(registerFile_io_rdata2),
    .io_regEn(registerFile_io_regEn),
    .io_waddr(registerFile_io_waddr),
    .io_wdata(registerFile_io_wdata)
  );
  FRegisterFile freg ( // @[TopFile.scala 24:22]
    .clock(freg_clock),
    .io_raddr1(freg_io_raddr1),
    .io_raddr2(freg_io_raddr2),
    .io_rdata1(freg_io_rdata1),
    .io_rdata2(freg_io_rdata2),
    .io_regEn(freg_io_regEn),
    .io_waddr(freg_io_waddr),
    .io_wdata(freg_io_wdata)
  );
  assign io_RegOut = registerFile_io_wdata; // @[TopFile.scala 84:19]
  assign alu_io_AluControl = aluControl_io_control; // @[TopFile.scala 82:27]
  assign alu_io_in1 = control_io_Operand_aSel == 2'h0 | control_io_Operand_aSel == 2'h3 ? $signed(_alu_io_in1_T) :
    $signed(_alu_io_in1_T_2); // @[TopFile.scala 127:88 TopFile.scala 129:20]
  assign alu_io_in2 = control_io_FRegWrite ? $signed(freg_io_rdata2) : $signed(_GEN_2); // @[TopFile.scala 66:31 TopFile.scala 67:20]
  assign aluControl_io_Aluop = control_io_AluOp; // @[TopFile.scala 57:25]
  assign aluControl_io_func7 = Memory_io_inst[30]; // @[TopFile.scala 59:46]
  assign aluControl_io_func3 = Memory_io_inst[14:12]; // @[TopFile.scala 58:46]
  assign control_io_opCode = Memory_io_inst[6:0]; // @[TopFile.scala 35:40]
  assign control_io_func5 = Memory_io_inst[31:27]; // @[TopFile.scala 36:39]
  assign dataMemory_clock = clock;
  assign dataMemory_io_data_in = registerFile_io_rdata2; // @[TopFile.scala 114:31]
  assign dataMemory_io_addr = {{24'd0}, alu_io_out[9:2]}; // @[TopFile.scala 113:38]
  assign dataMemory_io_wr_en = control_io_MemWrite; // @[TopFile.scala 115:29]
  assign dataMemory_io_rd_en = control_io_MemRead; // @[TopFile.scala 116:29]
  assign ImmediateGeneration_io_instr = Memory_io_inst; // @[TopFile.scala 37:38]
  assign ImmediateGeneration_io_pc = pc_io_pc; // @[TopFile.scala 38:35]
  assign Memory_clock = clock;
  assign Memory_io_addr = pc_io_pc[11:2]; // @[TopFile.scala 30:35]
  assign jalr_io_rs1 = registerFile_io_rdata1; // @[TopFile.scala 63:17]
  assign jalr_io_Type = ImmediateGeneration_io_i_imm; // @[TopFile.scala 64:18]
  assign pc_clock = clock;
  assign pc_reset = reset;
  assign pc_io_in = _pc_io_in_T_4 ? pc_io_pcPlus4 : _pc_io_in_T_31; // @[Mux.scala 98:16]
  assign registerFile_clock = clock;
  assign registerFile_io_raddr1 = Memory_io_inst[19:15]; // @[TopFile.scala 43:49]
  assign registerFile_io_raddr2 = Memory_io_inst[24:20]; // @[TopFile.scala 44:49]
  assign registerFile_io_regEn = control_io_RegWrite; // @[TopFile.scala 42:27]
  assign registerFile_io_waddr = Memory_io_inst[11:7]; // @[TopFile.scala 45:48]
  assign registerFile_io_wdata = control_io_MemToReg ? $signed(dataMemory_io_data_out) : $signed(alu_io_out); // @[TopFile.scala 118:40 TopFile.scala 119:31 TopFile.scala 123:31]
  assign freg_clock = clock;
  assign freg_io_raddr1 = Memory_io_inst[19:15]; // @[TopFile.scala 50:37]
  assign freg_io_raddr2 = Memory_io_inst[24:20]; // @[TopFile.scala 51:41]
  assign freg_io_regEn = control_io_FRegWrite; // @[TopFile.scala 49:19]
  assign freg_io_waddr = Memory_io_inst[11:7]; // @[TopFile.scala 53:40]
  assign freg_io_wdata = control_io_FRegWrite ? $signed(alu_io_out) : $signed(32'sh0); // @[TopFile.scala 104:42 TopFile.scala 105:23 TopFile.scala 107:23]
endmodule
