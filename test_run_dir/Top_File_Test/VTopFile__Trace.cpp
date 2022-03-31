// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTopFile__Syms.h"


//======================

void VTopFile::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTopFile* t=(VTopFile*)userthis;
    VTopFile__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VTopFile::traceChgThis(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTopFile::traceChgThis__2(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->TopFile__DOT__aluControl_io_control),5);
	vcdp->chgBus  (c+2,(vlTOPp->TopFile__DOT__alu_io_in1),32);
	vcdp->chgBus  (c+3,(vlTOPp->TopFile__DOT__alu_io_in2),32);
	vcdp->chgBit  (c+4,(vlTOPp->TopFile__DOT__alu_io_Branch));
	vcdp->chgBus  (c+5,((IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19)),32);
	vcdp->chgBus  (c+6,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp),3);
	vcdp->chgBit  (c+7,((1U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				   >> 0x1eU))));
	vcdp->chgBus  (c+8,((7U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				   >> 0xcU))),3);
	vcdp->chgBus  (c+9,((0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)),7);
	vcdp->chgBus  (c+10,((0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				       >> 0x1bU))),5);
	vcdp->chgBit  (c+11,(((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
			      & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
				 & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
				    & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)) 
				       & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)))))));
	vcdp->chgBit  (c+12,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch));
	vcdp->chgBit  (c+13,(((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
			      & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
				 & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
				    & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load))))));
	vcdp->chgBit  (c+14,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite));
	vcdp->chgBus  (c+15,(((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
			       ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
				        ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
						 ? 0U
						 : 
						((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
						   ? 0U
						   : 
						  ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)
						     ? 0U
						     : 
						    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)
						      ? 2U
						      : 
						     ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)
						       ? 2U
						       : 
						      ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui)
						        ? 3U
						        : 0U))))))))))),2);
	vcdp->chgBit  (c+16,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel));
	vcdp->chgBus  (c+17,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel),2);
	vcdp->chgBus  (c+18,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel),2);
	vcdp->chgBit  (c+19,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite));
	vcdp->chgBit  (c+20,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead));
	vcdp->chgBus  (c+21,(vlTOPp->TopFile__DOT__registerFile_io_rdata2),32);
	vcdp->chgBus  (c+22,(vlTOPp->TopFile__DOT__dataMemory__DOT__memory_io_data_out_MPORT_data),32);
	vcdp->chgBus  (c+23,((0xffU & (IData)((vlTOPp->TopFile__DOT__alu__DOT___GEN_19 
					       >> 2U)))),32);
	vcdp->chgBus  (c+24,(vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data),32);
	vcdp->chgBus  (c+25,(((((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
				 ? 0xfffffU : 0U) << 0xcU) 
			      | ((0xfe0U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					    >> 0x14U)) 
				 | (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					     >> 7U))))),32);
	vcdp->chgBus  (c+26,((((((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
				  ? 0x7ffffU : 0U) 
				<< 0xdU) | ((0x1000U 
					     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						>> 0x13U)) 
					    | ((0x800U 
						& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						   << 4U)) 
					       | ((0x7e0U 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0x14U)) 
						  | (0x1eU 
						     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 7U)))))) 
			      + vlTOPp->TopFile__DOT__pc__DOT__reg_)),32);
	vcdp->chgBus  (c+27,((((0xffe00000U & (((0x80000000U 
						 & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
						 ? 0xfffU
						 : 0U) 
					       << 0x15U)) 
			       | ((0x100000U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						>> 0xbU)) 
				  | ((0xff000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data) 
				     | ((0x800U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						   >> 9U)) 
					| (0x7feU & 
					   (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					    >> 0x14U)))))) 
			      + vlTOPp->TopFile__DOT__pc__DOT__reg_)),32);
	vcdp->chgBus  (c+28,((0xfffff000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)),32);
	vcdp->chgBus  (c+29,(vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm),32);
	vcdp->chgBus  (c+30,(vlTOPp->TopFile__DOT__registerFile_io_rdata1),32);
	vcdp->chgBus  (c+31,((0xfffffffeU & vlTOPp->TopFile__DOT__jalr__DOT___io_out_T_2)),32);
	vcdp->chgBus  (c+32,(((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
				& (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch))) 
			       & (~ (IData)(vlTOPp->TopFile__DOT__alu_io_Branch)))
			       ? ((IData)(4U) + vlTOPp->TopFile__DOT__pc__DOT__reg_)
			       : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
				    & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch)) 
				   & (~ (IData)(vlTOPp->TopFile__DOT__alu_io_Branch)))
				   ? ((IData)(4U) + vlTOPp->TopFile__DOT__pc__DOT__reg_)
				   : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
					& (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch))) 
				       & (IData)(vlTOPp->TopFile__DOT__alu_io_Branch))
				       ? ((IData)(4U) 
					  + vlTOPp->TopFile__DOT__pc__DOT__reg_)
				       : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
					    & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch)) 
					   & (IData)(vlTOPp->TopFile__DOT__alu_io_Branch))
					   ? (((((0x80000000U 
						  & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
						  ? 0x7ffffU
						  : 0U) 
						<< 0xdU) 
					       | ((0x1000U 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0x13U)) 
						  | ((0x800U 
						      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							 << 4U)) 
						     | ((0x7e0U 
							 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							    >> 0x14U)) 
							| (0x1eU 
							   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							      >> 7U)))))) 
					      + vlTOPp->TopFile__DOT__pc__DOT__reg_)
					   : ((0U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel))
					       ? ((IData)(4U) 
						  + vlTOPp->TopFile__DOT__pc__DOT__reg_)
					       : ((2U 
						   == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel))
						   ? 
						  (((0xffe00000U 
						     & (((0x80000000U 
							  & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
							  ? 0xfffU
							  : 0U) 
							<< 0x15U)) 
						    | ((0x100000U 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 0xbU)) 
						       | ((0xff000U 
							   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data) 
							  | ((0x800U 
							      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								 >> 9U)) 
							     | (0x7feU 
								& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								   >> 0x14U)))))) 
						   + vlTOPp->TopFile__DOT__pc__DOT__reg_)
						   : 
						  ((3U 
						    == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel))
						    ? 
						   (0xfffffffeU 
						    & vlTOPp->TopFile__DOT__jalr__DOT___io_out_T_2)
						    : 0U)))))))),32);
	vcdp->chgBus  (c+33,((0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+34,((0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+35,((0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				       >> 7U))),5);
	vcdp->chgBus  (c+36,(vlTOPp->TopFile__DOT__registerFile_io_wdata),32);
	vcdp->chgBus  (c+37,(vlTOPp->TopFile__DOT__freg_io_rdata1),32);
	vcdp->chgBus  (c+38,(((0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					       >> 0x14U)))
			       ? ((0x1fU == (0x1fU 
					     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						>> 0x14U)))
				   ? vlTOPp->TopFile__DOT__freg__DOT__regs_31
				   : ((0x1eU == (0x1fU 
						 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						    >> 0x14U)))
				       ? vlTOPp->TopFile__DOT__freg__DOT__regs_30
				       : ((0x1dU == 
					   (0x1fU & 
					    (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					     >> 0x14U)))
					   ? vlTOPp->TopFile__DOT__freg__DOT__regs_29
					   : ((0x1cU 
					       == (0x1fU 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0x14U)))
					       ? vlTOPp->TopFile__DOT__freg__DOT__regs_28
					       : ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						       >> 0x14U)))
						   ? vlTOPp->TopFile__DOT__freg__DOT__regs_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0x14U)))
						    ? vlTOPp->TopFile__DOT__freg__DOT__regs_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							 >> 0x14U)))
						     ? vlTOPp->TopFile__DOT__freg__DOT__regs_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							  >> 0x14U)))
						      ? vlTOPp->TopFile__DOT__freg__DOT__regs_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 0x14U)))
						       ? vlTOPp->TopFile__DOT__freg__DOT__regs_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							    >> 0x14U)))
						        ? vlTOPp->TopFile__DOT__freg__DOT__regs_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							     >> 0x14U)))
							 ? vlTOPp->TopFile__DOT__freg__DOT__regs_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							      >> 0x14U)))
							  ? vlTOPp->TopFile__DOT__freg__DOT__regs_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							       >> 0x14U)))
							   ? vlTOPp->TopFile__DOT__freg__DOT__regs_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								>> 0x14U)))
							    ? vlTOPp->TopFile__DOT__freg__DOT__regs_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								 >> 0x14U)))
							     ? vlTOPp->TopFile__DOT__freg__DOT__regs_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								  >> 0x14U)))
							      ? vlTOPp->TopFile__DOT__freg__DOT__regs_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								   >> 0x14U)))
							       ? vlTOPp->TopFile__DOT__freg__DOT__regs_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								    >> 0x14U)))
							        ? vlTOPp->TopFile__DOT__freg__DOT__regs_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								     >> 0x14U)))
								 ? vlTOPp->TopFile__DOT__freg__DOT__regs_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								      >> 0x14U)))
								  ? vlTOPp->TopFile__DOT__freg__DOT__regs_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								       >> 0x14U)))
								   ? vlTOPp->TopFile__DOT__freg__DOT__regs_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									>> 0x14U)))
								    ? vlTOPp->TopFile__DOT__freg__DOT__regs_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									 >> 0x14U)))
								     ? vlTOPp->TopFile__DOT__freg__DOT__regs_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									  >> 0x14U)))
								      ? vlTOPp->TopFile__DOT__freg__DOT__regs_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									   >> 0x14U)))
								       ? vlTOPp->TopFile__DOT__freg__DOT__regs_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									    >> 0x14U)))
								        ? vlTOPp->TopFile__DOT__freg__DOT__regs_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									     >> 0x14U)))
									 ? vlTOPp->TopFile__DOT__freg__DOT__regs_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									      >> 0x14U)))
									  ? vlTOPp->TopFile__DOT__freg__DOT__regs_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									       >> 0x14U)))
									   ? vlTOPp->TopFile__DOT__freg__DOT__regs_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0x14U)))
									    ? vlTOPp->TopFile__DOT__freg__DOT__regs_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0x14U)))
									     ? vlTOPp->TopFile__DOT__freg__DOT__regs_1
									     : vlTOPp->TopFile__DOT__freg__DOT__regs_0)))))))))))))))))))))))))))))))
			       : 0U)),32);
	vcdp->chgBus  (c+39,(vlTOPp->TopFile__DOT__freg_io_wdata),32);
	vcdp->chgBit  (c+40,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType));
	vcdp->chgBit  (c+41,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load));
	vcdp->chgBit  (c+42,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store));
	vcdp->chgBit  (c+43,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch));
	vcdp->chgBit  (c+44,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType));
	vcdp->chgBit  (c+45,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr));
	vcdp->chgBit  (c+46,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal));
	vcdp->chgBit  (c+47,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui));
	vcdp->chgBit  (c+48,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv));
	vcdp->chgBit  (c+49,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd));
	vcdp->chgBus  (c+50,((0xffU & (IData)((vlTOPp->TopFile__DOT__alu__DOT___GEN_19 
					       >> 2U)))),10);
	vcdp->chgBus  (c+51,((0x7fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				       >> 0x19U))),7);
	vcdp->chgBus  (c+52,(((0xfe0U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					 >> 0x14U)) 
			      | (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					  >> 7U)))),12);
	vcdp->chgBus  (c+53,(((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
			       ? 0xfffffU : 0U)),20);
	vcdp->chgBit  (c+54,((1U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				    >> 0x1fU))));
	vcdp->chgBit  (c+55,((1U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				    >> 7U))));
	vcdp->chgBus  (c+56,((0x3fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				       >> 0x19U))),6);
	vcdp->chgBus  (c+57,((0xfU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 8U))),4);
	vcdp->chgBus  (c+58,(((0x1000U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					  >> 0x13U)) 
			      | ((0x800U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					    << 4U)) 
				 | ((0x7e0U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					       >> 0x14U)) 
				    | (0x1eU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						>> 7U)))))),13);
	vcdp->chgBus  (c+59,(((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
			       ? 0x7ffffU : 0U)),19);
	vcdp->chgBus  (c+60,((0xffU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				       >> 0xcU))),8);
	vcdp->chgBit  (c+61,((1U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				    >> 0x14U))));
	vcdp->chgBus  (c+62,((0x3ffU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					>> 0x15U))),10);
	vcdp->chgBus  (c+63,(((0x100000U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					    >> 0xbU)) 
			      | ((0xff000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data) 
				 | ((0x800U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					       >> 9U)) 
				    | (0x7feU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						 >> 0x14U)))))),21);
	vcdp->chgBus  (c+64,(((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
			       ? 0xfffU : 0U)),12);
	vcdp->chgBus  (c+65,((0xfffffU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					  >> 0xcU))),20);
	vcdp->chgBus  (c+66,(((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
			       ? 0xfffffU : 0U)),20);
	vcdp->chgBus  (c+67,((0xfffU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					>> 0x14U))),12);
    }
}

void VTopFile::traceChgThis__3(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+68,(vlTOPp->TopFile__DOT__pc__DOT__reg_),32);
	vcdp->chgBus  (c+69,((0x3ffU & (vlTOPp->TopFile__DOT__pc__DOT__reg_ 
					>> 2U))),10);
	vcdp->chgBus  (c+70,(((IData)(4U) + vlTOPp->TopFile__DOT__pc__DOT__reg_)),32);
	vcdp->chgBus  (c+71,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_0),32);
	vcdp->chgBus  (c+72,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_1),32);
	vcdp->chgBus  (c+73,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_2),32);
	vcdp->chgBus  (c+74,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_3),32);
	vcdp->chgBus  (c+75,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_4),32);
	vcdp->chgBus  (c+76,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_5),32);
	vcdp->chgBus  (c+77,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_6),32);
	vcdp->chgBus  (c+78,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_7),32);
	vcdp->chgBus  (c+79,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_8),32);
	vcdp->chgBus  (c+80,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_9),32);
	vcdp->chgBus  (c+81,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_10),32);
	vcdp->chgBus  (c+82,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_11),32);
	vcdp->chgBus  (c+83,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_12),32);
	vcdp->chgBus  (c+84,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_13),32);
	vcdp->chgBus  (c+85,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_14),32);
	vcdp->chgBus  (c+86,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_15),32);
	vcdp->chgBus  (c+87,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_16),32);
	vcdp->chgBus  (c+88,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_17),32);
	vcdp->chgBus  (c+89,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_18),32);
	vcdp->chgBus  (c+90,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_19),32);
	vcdp->chgBus  (c+91,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_20),32);
	vcdp->chgBus  (c+92,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_21),32);
	vcdp->chgBus  (c+93,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_22),32);
	vcdp->chgBus  (c+94,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_23),32);
	vcdp->chgBus  (c+95,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_24),32);
	vcdp->chgBus  (c+96,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_25),32);
	vcdp->chgBus  (c+97,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_26),32);
	vcdp->chgBus  (c+98,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_27),32);
	vcdp->chgBus  (c+99,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_28),32);
	vcdp->chgBus  (c+100,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_29),32);
	vcdp->chgBus  (c+101,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_30),32);
	vcdp->chgBus  (c+102,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_31),32);
	vcdp->chgBus  (c+103,(vlTOPp->TopFile__DOT__freg__DOT__regs_0),32);
	vcdp->chgBus  (c+104,(vlTOPp->TopFile__DOT__freg__DOT__regs_1),32);
	vcdp->chgBus  (c+105,(vlTOPp->TopFile__DOT__freg__DOT__regs_2),32);
	vcdp->chgBus  (c+106,(vlTOPp->TopFile__DOT__freg__DOT__regs_3),32);
	vcdp->chgBus  (c+107,(vlTOPp->TopFile__DOT__freg__DOT__regs_4),32);
	vcdp->chgBus  (c+108,(vlTOPp->TopFile__DOT__freg__DOT__regs_5),32);
	vcdp->chgBus  (c+109,(vlTOPp->TopFile__DOT__freg__DOT__regs_6),32);
	vcdp->chgBus  (c+110,(vlTOPp->TopFile__DOT__freg__DOT__regs_7),32);
	vcdp->chgBus  (c+111,(vlTOPp->TopFile__DOT__freg__DOT__regs_8),32);
	vcdp->chgBus  (c+112,(vlTOPp->TopFile__DOT__freg__DOT__regs_9),32);
	vcdp->chgBus  (c+113,(vlTOPp->TopFile__DOT__freg__DOT__regs_10),32);
	vcdp->chgBus  (c+114,(vlTOPp->TopFile__DOT__freg__DOT__regs_11),32);
	vcdp->chgBus  (c+115,(vlTOPp->TopFile__DOT__freg__DOT__regs_12),32);
	vcdp->chgBus  (c+116,(vlTOPp->TopFile__DOT__freg__DOT__regs_13),32);
	vcdp->chgBus  (c+117,(vlTOPp->TopFile__DOT__freg__DOT__regs_14),32);
	vcdp->chgBus  (c+118,(vlTOPp->TopFile__DOT__freg__DOT__regs_15),32);
	vcdp->chgBus  (c+119,(vlTOPp->TopFile__DOT__freg__DOT__regs_16),32);
	vcdp->chgBus  (c+120,(vlTOPp->TopFile__DOT__freg__DOT__regs_17),32);
	vcdp->chgBus  (c+121,(vlTOPp->TopFile__DOT__freg__DOT__regs_18),32);
	vcdp->chgBus  (c+122,(vlTOPp->TopFile__DOT__freg__DOT__regs_19),32);
	vcdp->chgBus  (c+123,(vlTOPp->TopFile__DOT__freg__DOT__regs_20),32);
	vcdp->chgBus  (c+124,(vlTOPp->TopFile__DOT__freg__DOT__regs_21),32);
	vcdp->chgBus  (c+125,(vlTOPp->TopFile__DOT__freg__DOT__regs_22),32);
	vcdp->chgBus  (c+126,(vlTOPp->TopFile__DOT__freg__DOT__regs_23),32);
	vcdp->chgBus  (c+127,(vlTOPp->TopFile__DOT__freg__DOT__regs_24),32);
	vcdp->chgBus  (c+128,(vlTOPp->TopFile__DOT__freg__DOT__regs_25),32);
	vcdp->chgBus  (c+129,(vlTOPp->TopFile__DOT__freg__DOT__regs_26),32);
	vcdp->chgBus  (c+130,(vlTOPp->TopFile__DOT__freg__DOT__regs_27),32);
	vcdp->chgBus  (c+131,(vlTOPp->TopFile__DOT__freg__DOT__regs_28),32);
	vcdp->chgBus  (c+132,(vlTOPp->TopFile__DOT__freg__DOT__regs_29),32);
	vcdp->chgBus  (c+133,(vlTOPp->TopFile__DOT__freg__DOT__regs_30),32);
	vcdp->chgBus  (c+134,(vlTOPp->TopFile__DOT__freg__DOT__regs_31),32);
    }
}

void VTopFile::traceChgThis__4(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+135,(vlTOPp->clock));
	vcdp->chgBit  (c+136,(vlTOPp->reset));
	vcdp->chgBus  (c+137,(vlTOPp->io_RegOut),32);
    }
}
