// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTopFile_H_
#define _VTopFile_H_

#include "verilated.h"
#include "VTopFile__Inlines.h"
class VTopFile__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTopFile) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    //char	__VpadToAlign2[2];
    VL_OUT(io_RegOut,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(TopFile__DOT__alu_io_Branch,0,0);
    VL_SIG8(TopFile__DOT__aluControl_io_control,4,0);
    VL_SIG8(TopFile__DOT__alu__DOT___GEN_11,1,0);
    VL_SIG8(TopFile__DOT__control__DOT__typeDec_io_RType,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__typeDec_io_Load,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__typeDec_io_Store,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__typeDec_io_Branch,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__typeDec_io_IType,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__typeDec_io_Jalr,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__typeDec_io_Jal,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__typeDec_io_Lui,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__typeDec_io_Fmv,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__typeDec_io_Fadd,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__controlDec_io_Branch,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__controlDec_io_RegWrite,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__controlDec_io_AluOp,2,0);
    VL_SIG8(TopFile__DOT__control__DOT__controlDec_io_Operand_bSel,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__controlDec_io_ExtendSel,1,0);
    VL_SIG8(TopFile__DOT__control__DOT__controlDec_io_NextPcSel,1,0);
    VL_SIG8(TopFile__DOT__control__DOT__controlDec_io_FRegWrite,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__controlDec_io_FRegRead,0,0);
    VL_SIG8(TopFile__DOT__control__DOT__controlDec__DOT___GEN_12,0,0);
    //char	__VpadToAlign34[2];
    VL_SIG(TopFile__DOT__alu_io_in1,31,0);
    VL_SIG(TopFile__DOT__alu_io_in2,31,0);
    VL_SIG(TopFile__DOT__ImmediateGeneration_io_i_imm,31,0);
    VL_SIG(TopFile__DOT__pc_io_in,31,0);
    VL_SIG(TopFile__DOT__registerFile_io_rdata1,31,0);
    VL_SIG(TopFile__DOT__registerFile_io_rdata2,31,0);
    VL_SIG(TopFile__DOT__registerFile_io_wdata,31,0);
    VL_SIG(TopFile__DOT__freg_io_rdata1,31,0);
    VL_SIG(TopFile__DOT__freg_io_wdata,31,0);
    VL_SIG(TopFile__DOT__alu__DOT___io_out_T_2,31,0);
    VL_SIG(TopFile__DOT__alu__DOT___GEN_17,31,0);
    VL_SIG(TopFile__DOT__dataMemory__DOT__memory_io_data_out_MPORT_data,31,0);
    VL_SIG(TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data,31,0);
    VL_SIG(TopFile__DOT__jalr__DOT___io_out_T_2,31,0);
    VL_SIG(TopFile__DOT__pc__DOT__reg_,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_0,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_1,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_2,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_3,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_4,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_5,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_6,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_7,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_8,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_9,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_10,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_11,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_12,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_13,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_14,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_15,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_16,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_17,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_18,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_19,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_20,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_21,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_22,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_23,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_24,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_25,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_26,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_27,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_28,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_29,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_30,31,0);
    VL_SIG(TopFile__DOT__registerFile__DOT__regs_31,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_0,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_1,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_2,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_3,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_4,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_5,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_6,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_7,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_8,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_9,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_10,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_11,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_12,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_13,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_14,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_15,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_16,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_17,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_18,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_19,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_20,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_21,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_22,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_23,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_24,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_25,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_26,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_27,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_28,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_29,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_30,31,0);
    VL_SIG(TopFile__DOT__freg__DOT__regs_31,31,0);
    VL_SIG64(TopFile__DOT__alu__DOT___GEN_19,62,0);
    VL_SIG(TopFile__DOT__dataMemory__DOT__memory[1024],31,0);
    VL_SIG(TopFile__DOT__Memory__DOT__imem[1024],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign8557[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTopFile__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VTopFile& operator= (const VTopFile&);	///< Copying not allowed
    VTopFile(const VTopFile&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VTopFile(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTopFile();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTopFile__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTopFile__Syms* symsp, bool first);
  private:
    static QData	_change_request(VTopFile__Syms* __restrict vlSymsp);
    void	_configure_coverage(VTopFile__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VTopFile__Syms* __restrict vlSymsp);
    static void	_eval_initial(VTopFile__Syms* __restrict vlSymsp);
    static void	_eval_settle(VTopFile__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VTopFile__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(VTopFile__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__12(VTopFile__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VTopFile__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VTopFile__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VTopFile__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VTopFile__Syms* __restrict vlSymsp);
    static void	_settle__TOP__11(VTopFile__Syms* __restrict vlSymsp);
    static void	_settle__TOP__13(VTopFile__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(VTopFile__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(VTopFile__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(VTopFile__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VTopFile__Syms* __restrict vlSymsp);
    static void	traceChgThis(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
