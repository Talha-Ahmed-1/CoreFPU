package Datapath

import chisel3._
import chisel3.util._

class TopIO extends Bundle{
    val RegOut = Output(SInt(32.W))
}

class TopFile extends Module {
    
    val io = IO (new TopIO) 
	
	val alu = Module(new Alu)
    val aluControl = Module(new AluControl)
	val control = Module(new Control)
	val dataMemory = Module(new DataMem)
	val ImmediateGeneration = Module(new ImmGen)
	val Memory = Module(new InstructionMemory)
	val jalr = Module(new Jalr)
	val pc = Module(new PC)
	val registerFile = Module(new RegFile)

    val freg = Module(new FRegisterFile())

    // dontTouch(freg.io.wdata)

    // Instruction memory connections

	Memory.io.addr := pc.io.pc(11,2)
	pc.io.in := pc.io.pcPlus4

    //  Imm Gen

    control.io.opCode := Memory.io.inst(6,0)
    control.io.func5 := Memory.io.inst(31,27)
	ImmediateGeneration.io.instr := Memory.io.inst
	ImmediateGeneration.io.pc := pc.io.pc

    // Reg File

    registerFile.io.regEn := control.io.RegWrite
	registerFile.io.raddr1 := Memory.io.inst(19,15)
	registerFile.io.raddr2 := Memory.io.inst(24,20)
	registerFile.io.waddr := Memory.io.inst(11,7)

    // F Reg File

    freg.io.regEn := control.io.FRegWrite
    freg.io.raddr1 := Memory.io.inst(19,15)
	freg.io.raddr2 := Memory.io.inst(24,20)
    freg.io.raddr3 := Memory.io.inst(31,27)
	freg.io.waddr := Memory.io.inst(11,7)

    // alu op

    aluControl.io.Aluop := control.io.AluOp
	aluControl.io.func3 := Memory.io.inst(14,12)
	aluControl.io.func7 := Memory.io.inst(30)

    // Jalr 

    jalr.io.rs1 := registerFile.io.rdata1
    jalr.io.Type := ImmediateGeneration.io.i_imm

    when(control.io.FRegWrite){
        alu.io.in2 := freg.io.rdata2
    }
    .elsewhen (control.io.ExtendSel === "b00".U && control.io.Operand_bSel === "b1".U){
        alu.io.in2 := ImmediateGeneration.io.i_imm
    }

	.elsewhen (control.io.ExtendSel === "b01".U && control.io.Operand_bSel === "b1".U){
        alu.io.in2 := ImmediateGeneration.io.u_imm
    }

	.elsewhen (control.io.ExtendSel === "b10".U && control.io.Operand_bSel === "b1".U){
		alu.io.in2 := ImmediateGeneration.io.s_imm}

	.otherwise {alu.io.in2 := registerFile.io.rdata2}

	alu.io.AluControl := aluControl.io.control
	registerFile.io.wdata := alu.io.out
	io.RegOut := registerFile.io.wdata

    pc.io.in := MuxCase(0.U, Array(

        (control.io.NextPcSel === "b01".U && control.io.Branch === "b0".U && alu.io.Branch === "b0".U) -> pc.io.pcPlus4,
        (control.io.NextPcSel === "b01".U && control.io.Branch === "b1".U && alu.io.Branch === "b0".U) -> pc.io.pcPlus4,
	    (control.io.NextPcSel === "b01".U && control.io.Branch === "b0".U && alu.io.Branch === "b1".U) -> pc.io.pcPlus4,
	    (control.io.NextPcSel === "b01".U && control.io.Branch === "b1".U && alu.io.Branch === "b1".U) -> ImmediateGeneration.io.sb_imm.asUInt,
        (control.io.NextPcSel === "b00".U) -> pc.io.pcPlus4,
        (control.io.NextPcSel === "b10".U) -> ImmediateGeneration.io.uj_imm.asUInt,
        (control.io.NextPcSel === "b11".U) -> jalr.io.out.asUInt,
        // (control.io.NextPcSel === "b??".U && control.io.Branch === "b?".U && alu.io.Branch === "b?".U) -> DontCare
    
    ))


    // f reg write

    // freg.io.wdata := Mux(control.io.FRegWrite, alu.io.out, 0.S)

    when(control.io.FRegWrite === "b1".U){
        freg.io.wdata := alu.io.out
    }.otherwise{
        freg.io.wdata := 0.S
    }


    // Data Mem

    dataMemory.io.addr := (alu.io.out(9,2)).asUInt
	dataMemory.io.data_in := registerFile.io.rdata2
	dataMemory.io.wr_en := control.io.MemWrite
	dataMemory.io.rd_en := control.io.MemRead 

    when (control.io.MemToReg === 1.U) {
        registerFile.io.wdata := dataMemory.io.data_out
    }

	.otherwise {
        registerFile.io.wdata := alu.io.out
    }

    // alu
    when (control.io.Operand_aSel === "b00".U || control.io.Operand_aSel === "b11".U ) {

        alu.io.in1 := Mux(control.io.FRegRead, freg.io.rdata1, registerFile.io.rdata1)
    }

	.elsewhen (control.io.Operand_aSel === "b10".U) {
        // alu.io.in1 := pc.io.pcPlus4.asSInt
        alu.io.in1 := Mux(control.io.FRegRead, pc.io.pcPlus4.asSInt, freg.io.rdata1)
    }

	.otherwise {alu.io.in1 := DontCare}


}