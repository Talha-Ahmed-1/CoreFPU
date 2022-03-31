// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopFile.h for the primary calling header

#include "VTopFile.h"          // For This
#include "VTopFile__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTopFile) {
    VTopFile__Syms* __restrict vlSymsp = __VlSymsp = new VTopFile__Syms(this, name());
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTopFile::__Vconfigure(VTopFile__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTopFile::~VTopFile() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VTopFile::eval() {
    VTopFile__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VTopFile::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VTopFile::_eval_initial_loop(VTopFile__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VTopFile::_initial__TOP__1(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_initial__TOP__1\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,319,0,10);
    // Body
    // INITIAL at /home/talha/CoreFPU/test_run_dir/Top_File_Test/TopFile.InstructionMemory.imem.v:7
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x46696c65U;
    __Vtemp1[2U] = 0x6e737472U;
    __Vtemp1[3U] = 0x74682f69U;
    __Vtemp1[4U] = 0x74617061U;
    __Vtemp1[5U] = 0x612f4461U;
    __Vtemp1[6U] = 0x7363616cU;
    __Vtemp1[7U] = 0x61696e2fU;
    __Vtemp1[8U] = 0x72632f6dU;
    __Vtemp1[9U] = 0x73U;
    VL_READMEM_W (true,32,1024, 0,10, __Vtemp1, vlTOPp->TopFile__DOT__Memory__DOT__imem
		  ,0,~0);
}

VL_INLINE_OPT void VTopFile::_sequent__TOP__2(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_sequent__TOP__2\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__TopFile__DOT__dataMemory__DOT__memory__v0,0,0);
    //char	__VpadToAlign69[1];
    VL_SIG16(__Vdlyvdim0__TopFile__DOT__dataMemory__DOT__memory__v0,9,0);
    VL_SIG(__Vdlyvval__TopFile__DOT__dataMemory__DOT__memory__v0,31,0);
    // Body
    __Vdlyvset__TopFile__DOT__dataMemory__DOT__memory__v0 = 0U;
    // ALWAYS at TopFile.v:370
    if (((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
	 & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
	    & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
	       & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)) 
		  & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)))))) {
	__Vdlyvval__TopFile__DOT__dataMemory__DOT__memory__v0 
	    = vlTOPp->TopFile__DOT__registerFile_io_rdata2;
	__Vdlyvset__TopFile__DOT__dataMemory__DOT__memory__v0 = 1U;
	__Vdlyvdim0__TopFile__DOT__dataMemory__DOT__memory__v0 
	    = (0xffU & (IData)((vlTOPp->TopFile__DOT__alu__DOT___GEN_19 
				>> 2U)));
    }
    // ALWAYS at TopFile.v:1154
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_0 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1159
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((1U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_1 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1164
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((2U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_2 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1169
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((3U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_3 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1174
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((4U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_4 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1179
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((5U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_5 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1184
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((6U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_6 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1189
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((7U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_7 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1194
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((8U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_8 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1199
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((9U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_9 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1204
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0xaU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_10 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1209
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0xbU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_11 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1214
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0xcU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_12 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1219
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0xdU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_13 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1224
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0xeU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_14 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1229
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0xfU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_15 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1234
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x10U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_16 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1239
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x11U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_17 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1244
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x12U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_18 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1249
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x13U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_19 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1254
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x14U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_20 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1259
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x15U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_21 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1264
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x16U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_22 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1269
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x17U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_23 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1274
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x18U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_24 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1279
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x19U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_25 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1284
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x1aU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_26 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1289
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x1bU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_27 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1294
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x1cU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_28 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1299
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x1dU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_29 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1304
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_30 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:1309
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x1fU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__freg__DOT__regs_31 
		= vlTOPp->TopFile__DOT__freg_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:742
    vlTOPp->TopFile__DOT__registerFile__DOT__regs_0 
	= (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	    & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) ? ((0U == 
					     (0x1fU 
					      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						 >> 7U)))
					     ? vlTOPp->TopFile__DOT__registerFile_io_wdata
					     : 0U) : 0U);
    // ALWAYS at TopFile.v:749
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((1U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_1 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:754
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((2U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_2 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:759
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((3U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_3 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:764
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((4U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_4 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:769
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((5U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_5 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:774
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((6U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_6 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:779
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((7U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_7 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:784
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((8U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_8 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:789
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((9U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			     >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_9 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:794
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0xaU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_10 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:799
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0xbU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_11 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:804
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0xcU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_12 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:809
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0xdU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_13 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:814
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0xeU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_14 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:819
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0xfU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			       >> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_15 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:824
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x10U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_16 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:829
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x11U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_17 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:834
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x12U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_18 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:839
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x13U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_19 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:844
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x14U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_20 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:849
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x15U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_21 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:854
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x16U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_22 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:859
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x17U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_23 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:864
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x18U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_24 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:869
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x19U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_25 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:874
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x1aU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_26 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:879
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x1bU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_27 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:884
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x1cU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_28 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:889
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x1dU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_29 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:894
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_30 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:899
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
	 & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 7U))))) {
	if ((0x1fU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 7U)))) {
	    vlTOPp->TopFile__DOT__registerFile__DOT__regs_31 
		= vlTOPp->TopFile__DOT__registerFile_io_wdata;
	}
    }
    // ALWAYS at TopFile.v:546
    vlTOPp->TopFile__DOT__pc__DOT__reg_ = ((IData)(vlTOPp->reset)
					    ? 0U : vlTOPp->TopFile__DOT__pc_io_in);
    // ALWAYSPOST at TopFile.v:372
    if (__Vdlyvset__TopFile__DOT__dataMemory__DOT__memory__v0) {
	vlTOPp->TopFile__DOT__dataMemory__DOT__memory[__Vdlyvdim0__TopFile__DOT__dataMemory__DOT__memory__v0] 
	    = __Vdlyvval__TopFile__DOT__dataMemory__DOT__memory__v0;
    }
    vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
	= vlTOPp->TopFile__DOT__Memory__DOT__imem[(0x3ffU 
						   & (vlTOPp->TopFile__DOT__pc__DOT__reg_ 
						      >> 2U))];
}

void VTopFile::_settle__TOP__3(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_settle__TOP__3\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
	= vlTOPp->TopFile__DOT__Memory__DOT__imem[(0x3ffU 
						   & (vlTOPp->TopFile__DOT__pc__DOT__reg_ 
						      >> 2U))];
    vlTOPp->TopFile__DOT__freg_io_rdata1 = ((0U != 
					     (0x1fU 
					      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						 >> 0xfU)))
					     ? ((0x1fU 
						 == 
						 (0x1fU 
						  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						     >> 0xfU)))
						 ? vlTOPp->TopFile__DOT__freg__DOT__regs_31
						 : 
						((0x1eU 
						  == 
						  (0x1fU 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0xfU)))
						  ? vlTOPp->TopFile__DOT__freg__DOT__regs_30
						  : 
						 ((0x1dU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						       >> 0xfU)))
						   ? vlTOPp->TopFile__DOT__freg__DOT__regs_29
						   : 
						  ((0x1cU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0xfU)))
						    ? vlTOPp->TopFile__DOT__freg__DOT__regs_28
						    : 
						   ((0x1bU 
						     == 
						     (0x1fU 
						      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							 >> 0xfU)))
						     ? vlTOPp->TopFile__DOT__freg__DOT__regs_27
						     : 
						    ((0x1aU 
						      == 
						      (0x1fU 
						       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							  >> 0xfU)))
						      ? vlTOPp->TopFile__DOT__freg__DOT__regs_26
						      : 
						     ((0x19U 
						       == 
						       (0x1fU 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 0xfU)))
						       ? vlTOPp->TopFile__DOT__freg__DOT__regs_25
						       : 
						      ((0x18U 
							== 
							(0x1fU 
							 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							    >> 0xfU)))
						        ? vlTOPp->TopFile__DOT__freg__DOT__regs_24
						        : 
						       ((0x17U 
							 == 
							 (0x1fU 
							  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							     >> 0xfU)))
							 ? vlTOPp->TopFile__DOT__freg__DOT__regs_23
							 : 
							((0x16U 
							  == 
							  (0x1fU 
							   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							      >> 0xfU)))
							  ? vlTOPp->TopFile__DOT__freg__DOT__regs_22
							  : 
							 ((0x15U 
							   == 
							   (0x1fU 
							    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							       >> 0xfU)))
							   ? vlTOPp->TopFile__DOT__freg__DOT__regs_21
							   : 
							  ((0x14U 
							    == 
							    (0x1fU 
							     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								>> 0xfU)))
							    ? vlTOPp->TopFile__DOT__freg__DOT__regs_20
							    : 
							   ((0x13U 
							     == 
							     (0x1fU 
							      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								 >> 0xfU)))
							     ? vlTOPp->TopFile__DOT__freg__DOT__regs_19
							     : 
							    ((0x12U 
							      == 
							      (0x1fU 
							       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								  >> 0xfU)))
							      ? vlTOPp->TopFile__DOT__freg__DOT__regs_18
							      : 
							     ((0x11U 
							       == 
							       (0x1fU 
								& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								   >> 0xfU)))
							       ? vlTOPp->TopFile__DOT__freg__DOT__regs_17
							       : 
							      ((0x10U 
								== 
								(0x1fU 
								 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								    >> 0xfU)))
							        ? vlTOPp->TopFile__DOT__freg__DOT__regs_16
							        : 
							       ((0xfU 
								 == 
								 (0x1fU 
								  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								     >> 0xfU)))
								 ? vlTOPp->TopFile__DOT__freg__DOT__regs_15
								 : 
								((0xeU 
								  == 
								  (0x1fU 
								   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								      >> 0xfU)))
								  ? vlTOPp->TopFile__DOT__freg__DOT__regs_14
								  : 
								 ((0xdU 
								   == 
								   (0x1fU 
								    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								       >> 0xfU)))
								   ? vlTOPp->TopFile__DOT__freg__DOT__regs_13
								   : 
								  ((0xcU 
								    == 
								    (0x1fU 
								     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									>> 0xfU)))
								    ? vlTOPp->TopFile__DOT__freg__DOT__regs_12
								    : 
								   ((0xbU 
								     == 
								     (0x1fU 
								      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									 >> 0xfU)))
								     ? vlTOPp->TopFile__DOT__freg__DOT__regs_11
								     : 
								    ((0xaU 
								      == 
								      (0x1fU 
								       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									  >> 0xfU)))
								      ? vlTOPp->TopFile__DOT__freg__DOT__regs_10
								      : 
								     ((9U 
								       == 
								       (0x1fU 
									& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									   >> 0xfU)))
								       ? vlTOPp->TopFile__DOT__freg__DOT__regs_9
								       : 
								      ((8U 
									== 
									(0x1fU 
									 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									    >> 0xfU)))
								        ? vlTOPp->TopFile__DOT__freg__DOT__regs_8
								        : 
								       ((7U 
									 == 
									 (0x1fU 
									  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									     >> 0xfU)))
									 ? vlTOPp->TopFile__DOT__freg__DOT__regs_7
									 : 
									((6U 
									  == 
									  (0x1fU 
									   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									      >> 0xfU)))
									  ? vlTOPp->TopFile__DOT__freg__DOT__regs_6
									  : 
									 ((5U 
									   == 
									   (0x1fU 
									    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									       >> 0xfU)))
									   ? vlTOPp->TopFile__DOT__freg__DOT__regs_5
									   : 
									  ((4U 
									    == 
									    (0x1fU 
									     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0xfU)))
									    ? vlTOPp->TopFile__DOT__freg__DOT__regs_4
									    : 
									   ((3U 
									     == 
									     (0x1fU 
									      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0xfU)))
									     ? vlTOPp->TopFile__DOT__freg__DOT__regs_3
									     : 
									    ((2U 
									      == 
									      (0x1fU 
									       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0xfU)))
									      ? vlTOPp->TopFile__DOT__freg__DOT__regs_2
									      : 
									     ((1U 
									       == 
									       (0x1fU 
										& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0xfU)))
									       ? vlTOPp->TopFile__DOT__freg__DOT__regs_1
									       : vlTOPp->TopFile__DOT__freg__DOT__regs_0)))))))))))))))))))))))))))))))
					     : 0U);
    vlTOPp->TopFile__DOT__registerFile_io_rdata1 = 
	((0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			  >> 0xfU))) ? ((0x1fU == (0x1fU 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0xfU)))
					 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_31
					 : ((0x1eU 
					     == (0x1fU 
						 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						    >> 0xfU)))
					     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_30
					     : ((0x1dU 
						 == 
						 (0x1fU 
						  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						     >> 0xfU)))
						 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_29
						 : 
						((0x1cU 
						  == 
						  (0x1fU 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0xfU)))
						  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_28
						  : 
						 ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						       >> 0xfU)))
						   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0xfU)))
						    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							 >> 0xfU)))
						     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							  >> 0xfU)))
						      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 0xfU)))
						       ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							    >> 0xfU)))
						        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							     >> 0xfU)))
							 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							      >> 0xfU)))
							  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							       >> 0xfU)))
							   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								>> 0xfU)))
							    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								 >> 0xfU)))
							     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								  >> 0xfU)))
							      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								   >> 0xfU)))
							       ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								    >> 0xfU)))
							        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								     >> 0xfU)))
								 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								      >> 0xfU)))
								  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								       >> 0xfU)))
								   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									>> 0xfU)))
								    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									 >> 0xfU)))
								     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									  >> 0xfU)))
								      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									   >> 0xfU)))
								       ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									    >> 0xfU)))
								        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									     >> 0xfU)))
									 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									      >> 0xfU)))
									  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									       >> 0xfU)))
									   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0xfU)))
									    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0xfU)))
									     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_1
									     : vlTOPp->TopFile__DOT__registerFile__DOT__regs_0)))))))))))))))))))))))))))))))
	  : 0U);
    vlTOPp->TopFile__DOT__registerFile_io_rdata2 = 
	((0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			  >> 0x14U))) ? ((0x1fU == 
					  (0x1fU & 
					   (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					    >> 0x14U)))
					  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_31
					  : ((0x1eU 
					      == (0x1fU 
						  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						     >> 0x14U)))
					      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_30
					      : ((0x1dU 
						  == 
						  (0x1fU 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0x14U)))
						  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_29
						  : 
						 ((0x1cU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						       >> 0x14U)))
						   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_28
						   : 
						  ((0x1bU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0x14U)))
						    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_27
						    : 
						   ((0x1aU 
						     == 
						     (0x1fU 
						      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							 >> 0x14U)))
						     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_26
						     : 
						    ((0x19U 
						      == 
						      (0x1fU 
						       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							  >> 0x14U)))
						      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_25
						      : 
						     ((0x18U 
						       == 
						       (0x1fU 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 0x14U)))
						       ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_24
						       : 
						      ((0x17U 
							== 
							(0x1fU 
							 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							    >> 0x14U)))
						        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_23
						        : 
						       ((0x16U 
							 == 
							 (0x1fU 
							  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							     >> 0x14U)))
							 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_22
							 : 
							((0x15U 
							  == 
							  (0x1fU 
							   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							      >> 0x14U)))
							  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_21
							  : 
							 ((0x14U 
							   == 
							   (0x1fU 
							    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							       >> 0x14U)))
							   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_20
							   : 
							  ((0x13U 
							    == 
							    (0x1fU 
							     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								>> 0x14U)))
							    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_19
							    : 
							   ((0x12U 
							     == 
							     (0x1fU 
							      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								 >> 0x14U)))
							     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_18
							     : 
							    ((0x11U 
							      == 
							      (0x1fU 
							       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								  >> 0x14U)))
							      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_17
							      : 
							     ((0x10U 
							       == 
							       (0x1fU 
								& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								   >> 0x14U)))
							       ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_16
							       : 
							      ((0xfU 
								== 
								(0x1fU 
								 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								    >> 0x14U)))
							        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_15
							        : 
							       ((0xeU 
								 == 
								 (0x1fU 
								  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								     >> 0x14U)))
								 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_14
								 : 
								((0xdU 
								  == 
								  (0x1fU 
								   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								      >> 0x14U)))
								  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_13
								  : 
								 ((0xcU 
								   == 
								   (0x1fU 
								    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								       >> 0x14U)))
								   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_12
								   : 
								  ((0xbU 
								    == 
								    (0x1fU 
								     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									>> 0x14U)))
								    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_11
								    : 
								   ((0xaU 
								     == 
								     (0x1fU 
								      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									 >> 0x14U)))
								     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_10
								     : 
								    ((9U 
								      == 
								      (0x1fU 
								       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									  >> 0x14U)))
								      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_9
								      : 
								     ((8U 
								       == 
								       (0x1fU 
									& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									   >> 0x14U)))
								       ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_8
								       : 
								      ((7U 
									== 
									(0x1fU 
									 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									    >> 0x14U)))
								        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_7
								        : 
								       ((6U 
									 == 
									 (0x1fU 
									  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									     >> 0x14U)))
									 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_6
									 : 
									((5U 
									  == 
									  (0x1fU 
									   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									      >> 0x14U)))
									  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_5
									  : 
									 ((4U 
									   == 
									   (0x1fU 
									    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									       >> 0x14U)))
									   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_4
									   : 
									  ((3U 
									    == 
									    (0x1fU 
									     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0x14U)))
									    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_3
									    : 
									   ((2U 
									     == 
									     (0x1fU 
									      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0x14U)))
									     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_2
									     : 
									    ((1U 
									      == 
									      (0x1fU 
									       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0x14U)))
									      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_1
									      : vlTOPp->TopFile__DOT__registerFile__DOT__regs_0)))))))))))))))))))))))))))))))
	  : 0U);
    vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm 
	= ((((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
	      ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
					   (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					    >> 0x14U)));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			  & (0x13U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		    & (0x23U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		       & (0x63U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & (0x33U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & (3U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			  & ((0x13U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			     & ((0x67U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
				& ((0x6fU != (0x7fU 
					      & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
				   & (0x37U == (0x7fU 
						& vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				  >> 0x1bU))) & (0x53U 
						 == 
						 (0x7fU 
						  & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd 
	= ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 0x1bU))) & (0x53U == 
					   (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			  & ((0x13U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			     & (0x67U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			  & ((0x13U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			     & ((0x67U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
				& (0x6fU == (0x7fU 
					     & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))))))))));
}

VL_INLINE_OPT void VTopFile::_sequent__TOP__4(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_sequent__TOP__4\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopFile__DOT__freg_io_rdata1 = ((0U != 
					     (0x1fU 
					      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						 >> 0xfU)))
					     ? ((0x1fU 
						 == 
						 (0x1fU 
						  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						     >> 0xfU)))
						 ? vlTOPp->TopFile__DOT__freg__DOT__regs_31
						 : 
						((0x1eU 
						  == 
						  (0x1fU 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0xfU)))
						  ? vlTOPp->TopFile__DOT__freg__DOT__regs_30
						  : 
						 ((0x1dU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						       >> 0xfU)))
						   ? vlTOPp->TopFile__DOT__freg__DOT__regs_29
						   : 
						  ((0x1cU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0xfU)))
						    ? vlTOPp->TopFile__DOT__freg__DOT__regs_28
						    : 
						   ((0x1bU 
						     == 
						     (0x1fU 
						      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							 >> 0xfU)))
						     ? vlTOPp->TopFile__DOT__freg__DOT__regs_27
						     : 
						    ((0x1aU 
						      == 
						      (0x1fU 
						       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							  >> 0xfU)))
						      ? vlTOPp->TopFile__DOT__freg__DOT__regs_26
						      : 
						     ((0x19U 
						       == 
						       (0x1fU 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 0xfU)))
						       ? vlTOPp->TopFile__DOT__freg__DOT__regs_25
						       : 
						      ((0x18U 
							== 
							(0x1fU 
							 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							    >> 0xfU)))
						        ? vlTOPp->TopFile__DOT__freg__DOT__regs_24
						        : 
						       ((0x17U 
							 == 
							 (0x1fU 
							  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							     >> 0xfU)))
							 ? vlTOPp->TopFile__DOT__freg__DOT__regs_23
							 : 
							((0x16U 
							  == 
							  (0x1fU 
							   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							      >> 0xfU)))
							  ? vlTOPp->TopFile__DOT__freg__DOT__regs_22
							  : 
							 ((0x15U 
							   == 
							   (0x1fU 
							    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							       >> 0xfU)))
							   ? vlTOPp->TopFile__DOT__freg__DOT__regs_21
							   : 
							  ((0x14U 
							    == 
							    (0x1fU 
							     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								>> 0xfU)))
							    ? vlTOPp->TopFile__DOT__freg__DOT__regs_20
							    : 
							   ((0x13U 
							     == 
							     (0x1fU 
							      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								 >> 0xfU)))
							     ? vlTOPp->TopFile__DOT__freg__DOT__regs_19
							     : 
							    ((0x12U 
							      == 
							      (0x1fU 
							       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								  >> 0xfU)))
							      ? vlTOPp->TopFile__DOT__freg__DOT__regs_18
							      : 
							     ((0x11U 
							       == 
							       (0x1fU 
								& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								   >> 0xfU)))
							       ? vlTOPp->TopFile__DOT__freg__DOT__regs_17
							       : 
							      ((0x10U 
								== 
								(0x1fU 
								 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								    >> 0xfU)))
							        ? vlTOPp->TopFile__DOT__freg__DOT__regs_16
							        : 
							       ((0xfU 
								 == 
								 (0x1fU 
								  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								     >> 0xfU)))
								 ? vlTOPp->TopFile__DOT__freg__DOT__regs_15
								 : 
								((0xeU 
								  == 
								  (0x1fU 
								   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								      >> 0xfU)))
								  ? vlTOPp->TopFile__DOT__freg__DOT__regs_14
								  : 
								 ((0xdU 
								   == 
								   (0x1fU 
								    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								       >> 0xfU)))
								   ? vlTOPp->TopFile__DOT__freg__DOT__regs_13
								   : 
								  ((0xcU 
								    == 
								    (0x1fU 
								     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									>> 0xfU)))
								    ? vlTOPp->TopFile__DOT__freg__DOT__regs_12
								    : 
								   ((0xbU 
								     == 
								     (0x1fU 
								      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									 >> 0xfU)))
								     ? vlTOPp->TopFile__DOT__freg__DOT__regs_11
								     : 
								    ((0xaU 
								      == 
								      (0x1fU 
								       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									  >> 0xfU)))
								      ? vlTOPp->TopFile__DOT__freg__DOT__regs_10
								      : 
								     ((9U 
								       == 
								       (0x1fU 
									& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									   >> 0xfU)))
								       ? vlTOPp->TopFile__DOT__freg__DOT__regs_9
								       : 
								      ((8U 
									== 
									(0x1fU 
									 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									    >> 0xfU)))
								        ? vlTOPp->TopFile__DOT__freg__DOT__regs_8
								        : 
								       ((7U 
									 == 
									 (0x1fU 
									  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									     >> 0xfU)))
									 ? vlTOPp->TopFile__DOT__freg__DOT__regs_7
									 : 
									((6U 
									  == 
									  (0x1fU 
									   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									      >> 0xfU)))
									  ? vlTOPp->TopFile__DOT__freg__DOT__regs_6
									  : 
									 ((5U 
									   == 
									   (0x1fU 
									    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									       >> 0xfU)))
									   ? vlTOPp->TopFile__DOT__freg__DOT__regs_5
									   : 
									  ((4U 
									    == 
									    (0x1fU 
									     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0xfU)))
									    ? vlTOPp->TopFile__DOT__freg__DOT__regs_4
									    : 
									   ((3U 
									     == 
									     (0x1fU 
									      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0xfU)))
									     ? vlTOPp->TopFile__DOT__freg__DOT__regs_3
									     : 
									    ((2U 
									      == 
									      (0x1fU 
									       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0xfU)))
									      ? vlTOPp->TopFile__DOT__freg__DOT__regs_2
									      : 
									     ((1U 
									       == 
									       (0x1fU 
										& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0xfU)))
									       ? vlTOPp->TopFile__DOT__freg__DOT__regs_1
									       : vlTOPp->TopFile__DOT__freg__DOT__regs_0)))))))))))))))))))))))))))))))
					     : 0U);
    vlTOPp->TopFile__DOT__registerFile_io_rdata1 = 
	((0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			  >> 0xfU))) ? ((0x1fU == (0x1fU 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0xfU)))
					 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_31
					 : ((0x1eU 
					     == (0x1fU 
						 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						    >> 0xfU)))
					     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_30
					     : ((0x1dU 
						 == 
						 (0x1fU 
						  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						     >> 0xfU)))
						 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_29
						 : 
						((0x1cU 
						  == 
						  (0x1fU 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0xfU)))
						  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_28
						  : 
						 ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						       >> 0xfU)))
						   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0xfU)))
						    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							 >> 0xfU)))
						     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							  >> 0xfU)))
						      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 0xfU)))
						       ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							    >> 0xfU)))
						        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							     >> 0xfU)))
							 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							      >> 0xfU)))
							  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							       >> 0xfU)))
							   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								>> 0xfU)))
							    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								 >> 0xfU)))
							     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								  >> 0xfU)))
							      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								   >> 0xfU)))
							       ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								    >> 0xfU)))
							        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								     >> 0xfU)))
								 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								      >> 0xfU)))
								  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								       >> 0xfU)))
								   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									>> 0xfU)))
								    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									 >> 0xfU)))
								     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									  >> 0xfU)))
								      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									   >> 0xfU)))
								       ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									    >> 0xfU)))
								        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									     >> 0xfU)))
									 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									      >> 0xfU)))
									  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									       >> 0xfU)))
									   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0xfU)))
									    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0xfU)))
									     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_1
									     : vlTOPp->TopFile__DOT__registerFile__DOT__regs_0)))))))))))))))))))))))))))))))
	  : 0U);
    vlTOPp->TopFile__DOT__registerFile_io_rdata2 = 
	((0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			  >> 0x14U))) ? ((0x1fU == 
					  (0x1fU & 
					   (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					    >> 0x14U)))
					  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_31
					  : ((0x1eU 
					      == (0x1fU 
						  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						     >> 0x14U)))
					      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_30
					      : ((0x1dU 
						  == 
						  (0x1fU 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0x14U)))
						  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_29
						  : 
						 ((0x1cU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						       >> 0x14U)))
						   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_28
						   : 
						  ((0x1bU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0x14U)))
						    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_27
						    : 
						   ((0x1aU 
						     == 
						     (0x1fU 
						      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							 >> 0x14U)))
						     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_26
						     : 
						    ((0x19U 
						      == 
						      (0x1fU 
						       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							  >> 0x14U)))
						      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_25
						      : 
						     ((0x18U 
						       == 
						       (0x1fU 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 0x14U)))
						       ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_24
						       : 
						      ((0x17U 
							== 
							(0x1fU 
							 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							    >> 0x14U)))
						        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_23
						        : 
						       ((0x16U 
							 == 
							 (0x1fU 
							  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							     >> 0x14U)))
							 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_22
							 : 
							((0x15U 
							  == 
							  (0x1fU 
							   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							      >> 0x14U)))
							  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_21
							  : 
							 ((0x14U 
							   == 
							   (0x1fU 
							    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							       >> 0x14U)))
							   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_20
							   : 
							  ((0x13U 
							    == 
							    (0x1fU 
							     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								>> 0x14U)))
							    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_19
							    : 
							   ((0x12U 
							     == 
							     (0x1fU 
							      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								 >> 0x14U)))
							     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_18
							     : 
							    ((0x11U 
							      == 
							      (0x1fU 
							       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								  >> 0x14U)))
							      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_17
							      : 
							     ((0x10U 
							       == 
							       (0x1fU 
								& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								   >> 0x14U)))
							       ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_16
							       : 
							      ((0xfU 
								== 
								(0x1fU 
								 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								    >> 0x14U)))
							        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_15
							        : 
							       ((0xeU 
								 == 
								 (0x1fU 
								  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								     >> 0x14U)))
								 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_14
								 : 
								((0xdU 
								  == 
								  (0x1fU 
								   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								      >> 0x14U)))
								  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_13
								  : 
								 ((0xcU 
								   == 
								   (0x1fU 
								    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								       >> 0x14U)))
								   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_12
								   : 
								  ((0xbU 
								    == 
								    (0x1fU 
								     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									>> 0x14U)))
								    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_11
								    : 
								   ((0xaU 
								     == 
								     (0x1fU 
								      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									 >> 0x14U)))
								     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_10
								     : 
								    ((9U 
								      == 
								      (0x1fU 
								       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									  >> 0x14U)))
								      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_9
								      : 
								     ((8U 
								       == 
								       (0x1fU 
									& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									   >> 0x14U)))
								       ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_8
								       : 
								      ((7U 
									== 
									(0x1fU 
									 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									    >> 0x14U)))
								        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_7
								        : 
								       ((6U 
									 == 
									 (0x1fU 
									  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									     >> 0x14U)))
									 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_6
									 : 
									((5U 
									  == 
									  (0x1fU 
									   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									      >> 0x14U)))
									  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_5
									  : 
									 ((4U 
									   == 
									   (0x1fU 
									    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
									       >> 0x14U)))
									   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_4
									   : 
									  ((3U 
									    == 
									    (0x1fU 
									     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0x14U)))
									    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_3
									    : 
									   ((2U 
									     == 
									     (0x1fU 
									      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0x14U)))
									     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_2
									     : 
									    ((1U 
									      == 
									      (0x1fU 
									       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
										>> 0x14U)))
									      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_1
									      : vlTOPp->TopFile__DOT__registerFile__DOT__regs_0)))))))))))))))))))))))))))))))
	  : 0U);
    vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm 
	= ((((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
	      ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
					   (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
					    >> 0x14U)));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			  & (0x13U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		    & (0x23U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		       & (0x63U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & (0x33U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & (3U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			  & ((0x13U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			     & ((0x67U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
				& ((0x6fU != (0x7fU 
					      & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
				   & (0x37U == (0x7fU 
						& vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				  >> 0x1bU))) & (0x53U 
						 == 
						 (0x7fU 
						  & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd 
	= ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
			    >> 0x1bU))) & (0x53U == 
					   (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			  & ((0x13U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			     & (0x67U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal 
	= ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				>> 0x1bU))) & (0x53U 
					       == (0x7fU 
						   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	   & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
				      >> 0x1bU))) & 
		  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
	      & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
		       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			  & ((0x13U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
			     & ((0x67U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
				& (0x6fU == (0x7fU 
					     & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))))))))));
    vlTOPp->TopFile__DOT__jalr__DOT___io_out_T_2 = 
	(vlTOPp->TopFile__DOT__registerFile_io_rdata1 
	 + vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm);
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch 
	= ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
	   & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
	      & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
		 & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)) 
		    & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)) 
		       & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead 
	= ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
	   & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite 
	= ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv) 
	   | (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite 
	= ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
	   & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
	      & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType) 
		 | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load) 
		    | ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)) 
		       & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)) 
			  & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType) 
			     | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr) 
				| ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal) 
				   | (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui))))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel 
	= ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
	    ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
		     ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
			      ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
				       ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
					        ? 0U
					        : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)
						     ? 0U
						     : 
						    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)
						       ? 2U
						       : 0U)))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp 
	= ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
	    ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
		     ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
			      ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
				       ? 4U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
					        ? 5U
					        : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)
						    ? 2U
						    : 
						   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)
						       ? 3U
						       : 
						      ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui)
						        ? 6U
						        : 0U))))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec__DOT___GEN_12 
	= ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)) 
	   & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)) 
	      & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui)));
}

void VTopFile::_settle__TOP__5(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_settle__TOP__5\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopFile__DOT__jalr__DOT___io_out_T_2 = 
	(vlTOPp->TopFile__DOT__registerFile_io_rdata1 
	 + vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm);
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch 
	= ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
	   & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
	      & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
		 & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)) 
		    & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)) 
		       & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead 
	= ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
	   & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite 
	= ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv) 
	   | (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite 
	= ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
	   & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
	      & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType) 
		 | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load) 
		    | ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)) 
		       & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)) 
			  & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType) 
			     | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr) 
				| ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal) 
				   | (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui))))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel 
	= ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
	    ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
		     ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
			      ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
				       ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
					        ? 0U
					        : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)
						     ? 0U
						     : 
						    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)
						       ? 2U
						       : 0U)))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp 
	= ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
	    ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
		     ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
			      ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
				       ? 4U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
					        ? 5U
					        : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)
						    ? 2U
						    : 
						   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)
						       ? 3U
						       : 
						      ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui)
						        ? 6U
						        : 0U))))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec__DOT___GEN_12 
	= ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)) 
	   & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)) 
	      & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui)));
    vlTOPp->TopFile__DOT__alu_io_in1 = (((0U == ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
						   ? 0U
						   : 
						  ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
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
							   : 0U))))))))))) 
					 | (3U == ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
						     ? 0U
						     : 
						    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
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
							     : 0U))))))))))))
					 ? ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead)
					     ? vlTOPp->TopFile__DOT__freg_io_rdata1
					     : vlTOPp->TopFile__DOT__registerFile_io_rdata1)
					 : ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead)
					     ? ((IData)(4U) 
						+ vlTOPp->TopFile__DOT__pc__DOT__reg_)
					     : vlTOPp->TopFile__DOT__freg_io_rdata1));
    vlTOPp->TopFile__DOT__aluControl_io_control = (
						   ((0U 
						     == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
						    & (~ 
						       (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0x1eU)))
						    ? 
						   (7U 
						    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						       >> 0xcU))
						    : 
						   (((0U 
						      == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
						     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0x1eU))
						     ? 
						    (8U 
						     | (7U 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 0xcU)))
						     : 
						    ((((1U 
							== (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
						       & (5U 
							  == 
							  (7U 
							   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							      >> 0xcU)))) 
						      & (~ 
							 (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							  >> 0x1eU)))
						      ? 
						     (7U 
						      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							 >> 0xcU))
						      : 
						     ((((1U 
							 == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
							& (5U 
							   == 
							   (7U 
							    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							       >> 0xcU)))) 
						       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							  >> 0x1eU))
						       ? 
						      (8U 
						       | (7U 
							  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							     >> 0xcU)))
						       : 
						      (((1U 
							 == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
							& (1U 
							   == 
							   (7U 
							    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							       >> 0xcU))))
						        ? 
						       (7U 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 0xcU))
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp))
							 ? 
							(7U 
							 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							    >> 0xcU))
							 : 
							((2U 
							  == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp))
							  ? 
							 (0x10U 
							  | (7U 
							     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								>> 0xcU)))
							  : 
							 ((3U 
							   == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp))
							   ? 0x1fU
							   : 0U))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel 
	= ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
	   & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
	      & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
		 & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load) 
		    | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store) 
		       | ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)) 
			  & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType) 
			     | (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec__DOT___GEN_12))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel 
	= ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
	    ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
		     ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
			      ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
				       ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
					        ? 2U
					        : (
						   (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)) 
						   & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)) 
						      & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec__DOT___GEN_12))))))));
}

VL_INLINE_OPT void VTopFile::_sequent__TOP__6(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_sequent__TOP__6\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopFile__DOT__alu_io_in1 = (((0U == ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
						   ? 0U
						   : 
						  ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
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
							   : 0U))))))))))) 
					 | (3U == ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
						     ? 0U
						     : 
						    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
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
							     : 0U))))))))))))
					 ? ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead)
					     ? vlTOPp->TopFile__DOT__freg_io_rdata1
					     : vlTOPp->TopFile__DOT__registerFile_io_rdata1)
					 : ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead)
					     ? ((IData)(4U) 
						+ vlTOPp->TopFile__DOT__pc__DOT__reg_)
					     : vlTOPp->TopFile__DOT__freg_io_rdata1));
    vlTOPp->TopFile__DOT__aluControl_io_control = (
						   ((0U 
						     == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
						    & (~ 
						       (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0x1eU)))
						    ? 
						   (7U 
						    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						       >> 0xcU))
						    : 
						   (((0U 
						      == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
						     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0x1eU))
						     ? 
						    (8U 
						     | (7U 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 0xcU)))
						     : 
						    ((((1U 
							== (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
						       & (5U 
							  == 
							  (7U 
							   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							      >> 0xcU)))) 
						      & (~ 
							 (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							  >> 0x1eU)))
						      ? 
						     (7U 
						      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							 >> 0xcU))
						      : 
						     ((((1U 
							 == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
							& (5U 
							   == 
							   (7U 
							    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							       >> 0xcU)))) 
						       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							  >> 0x1eU))
						       ? 
						      (8U 
						       | (7U 
							  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							     >> 0xcU)))
						       : 
						      (((1U 
							 == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
							& (1U 
							   == 
							   (7U 
							    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							       >> 0xcU))))
						        ? 
						       (7U 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 0xcU))
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp))
							 ? 
							(7U 
							 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							    >> 0xcU))
							 : 
							((2U 
							  == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp))
							  ? 
							 (0x10U 
							  | (7U 
							     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
								>> 0xcU)))
							  : 
							 ((3U 
							   == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp))
							   ? 0x1fU
							   : 0U))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel 
	= ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
	   & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
	      & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
		 & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load) 
		    | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store) 
		       | ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)) 
			  & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType) 
			     | (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec__DOT___GEN_12))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel 
	= ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
	    ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
		     ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
			      ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
				       ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
					        ? 2U
					        : (
						   (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)) 
						   & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)) 
						      & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec__DOT___GEN_12))))))));
    vlTOPp->TopFile__DOT__alu_io_in2 = ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite)
					 ? ((0U != 
					     (0x1fU 
					      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						 >> 0x14U)))
					     ? ((0x1fU 
						 == 
						 (0x1fU 
						  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						     >> 0x14U)))
						 ? vlTOPp->TopFile__DOT__freg__DOT__regs_31
						 : 
						((0x1eU 
						  == 
						  (0x1fU 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0x14U)))
						  ? vlTOPp->TopFile__DOT__freg__DOT__regs_30
						  : 
						 ((0x1dU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						       >> 0x14U)))
						   ? vlTOPp->TopFile__DOT__freg__DOT__regs_29
						   : 
						  ((0x1cU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0x14U)))
						    ? vlTOPp->TopFile__DOT__freg__DOT__regs_28
						    : 
						   ((0x1bU 
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
					     : 0U) : 
					(((0U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel)) 
					  & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel))
					  ? vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm
					  : (((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel)) 
					      & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel))
					      ? (0xfffff000U 
						 & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
					      : (((2U 
						   == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel)) 
						  & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel))
						  ? 
						 ((((0x80000000U 
						     & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
						     ? 0xfffffU
						     : 0U) 
						   << 0xcU) 
						  | ((0xfe0U 
						      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							 >> 0x14U)) 
						     | (0x1fU 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 7U))))
						  : vlTOPp->TopFile__DOT__registerFile_io_rdata2))));
}

void VTopFile::_settle__TOP__7(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_settle__TOP__7\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopFile__DOT__alu_io_in2 = ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite)
					 ? ((0U != 
					     (0x1fU 
					      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						 >> 0x14U)))
					     ? ((0x1fU 
						 == 
						 (0x1fU 
						  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						     >> 0x14U)))
						 ? vlTOPp->TopFile__DOT__freg__DOT__regs_31
						 : 
						((0x1eU 
						  == 
						  (0x1fU 
						   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						      >> 0x14U)))
						  ? vlTOPp->TopFile__DOT__freg__DOT__regs_30
						  : 
						 ((0x1dU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
						       >> 0x14U)))
						   ? vlTOPp->TopFile__DOT__freg__DOT__regs_29
						   : 
						  ((0x1cU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							>> 0x14U)))
						    ? vlTOPp->TopFile__DOT__freg__DOT__regs_28
						    : 
						   ((0x1bU 
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
					     : 0U) : 
					(((0U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel)) 
					  & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel))
					  ? vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm
					  : (((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel)) 
					      & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel))
					      ? (0xfffff000U 
						 & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
					      : (((2U 
						   == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel)) 
						  & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel))
						  ? 
						 ((((0x80000000U 
						     & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
						     ? 0xfffffU
						     : 0U) 
						   << 0xcU) 
						  | ((0xfe0U 
						      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							 >> 0x14U)) 
						     | (0x1fU 
							& (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
							   >> 7U))))
						  : vlTOPp->TopFile__DOT__registerFile_io_rdata2))));
    vlTOPp->TopFile__DOT__alu__DOT___io_out_T_2 = (vlTOPp->TopFile__DOT__alu_io_in1 
						   + vlTOPp->TopFile__DOT__alu_io_in2);
    vlTOPp->TopFile__DOT__alu__DOT___GEN_11 = ((0x15U 
						== (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
					        ? (
						   VL_GTES_III(1,32,32, vlTOPp->TopFile__DOT__alu_io_in1, vlTOPp->TopFile__DOT__alu_io_in2)
						    ? 1U
						    : 0U)
					        : (
						   (0x17U 
						    == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						    ? 
						   ((vlTOPp->TopFile__DOT__alu_io_in1 
						     >= vlTOPp->TopFile__DOT__alu_io_in2)
						     ? 1U
						     : 0U)
						    : 
						   (((3U 
						      == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)) 
						     | (0x16U 
							== (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)))
						     ? 
						    ((vlTOPp->TopFile__DOT__alu_io_in1 
						      < vlTOPp->TopFile__DOT__alu_io_in2)
						      ? 1U
						      : 0U)
						     : 
						    ((0x10U 
						      == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						      ? 
						     ((vlTOPp->TopFile__DOT__alu_io_in1 
						       == vlTOPp->TopFile__DOT__alu_io_in2)
						       ? 1U
						       : 0U)
						      : 
						     (((2U 
							== (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)) 
						       | (0x14U 
							  == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)))
						       ? 
						      (VL_LTS_III(1,32,32, vlTOPp->TopFile__DOT__alu_io_in1, vlTOPp->TopFile__DOT__alu_io_in2)
						        ? 1U
						        : 0U)
						       : 
						      ((vlTOPp->TopFile__DOT__alu_io_in1 
							!= vlTOPp->TopFile__DOT__alu_io_in2)
						        ? 1U
						        : 0U))))));
}

VL_INLINE_OPT void VTopFile::_sequent__TOP__8(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_sequent__TOP__8\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopFile__DOT__alu__DOT___io_out_T_2 = (vlTOPp->TopFile__DOT__alu_io_in1 
						   + vlTOPp->TopFile__DOT__alu_io_in2);
    vlTOPp->TopFile__DOT__alu__DOT___GEN_11 = ((0x15U 
						== (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
					        ? (
						   VL_GTES_III(1,32,32, vlTOPp->TopFile__DOT__alu_io_in1, vlTOPp->TopFile__DOT__alu_io_in2)
						    ? 1U
						    : 0U)
					        : (
						   (0x17U 
						    == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						    ? 
						   ((vlTOPp->TopFile__DOT__alu_io_in1 
						     >= vlTOPp->TopFile__DOT__alu_io_in2)
						     ? 1U
						     : 0U)
						    : 
						   (((3U 
						      == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)) 
						     | (0x16U 
							== (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)))
						     ? 
						    ((vlTOPp->TopFile__DOT__alu_io_in1 
						      < vlTOPp->TopFile__DOT__alu_io_in2)
						      ? 1U
						      : 0U)
						     : 
						    ((0x10U 
						      == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						      ? 
						     ((vlTOPp->TopFile__DOT__alu_io_in1 
						       == vlTOPp->TopFile__DOT__alu_io_in2)
						       ? 1U
						       : 0U)
						      : 
						     (((2U 
							== (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)) 
						       | (0x14U 
							  == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)))
						       ? 
						      (VL_LTS_III(1,32,32, vlTOPp->TopFile__DOT__alu_io_in1, vlTOPp->TopFile__DOT__alu_io_in2)
						        ? 1U
						        : 0U)
						       : 
						      ((vlTOPp->TopFile__DOT__alu_io_in1 
							!= vlTOPp->TopFile__DOT__alu_io_in2)
						        ? 1U
						        : 0U))))));
    vlTOPp->TopFile__DOT__alu__DOT___GEN_17 = ((4U 
						== (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
					        ? (vlTOPp->TopFile__DOT__alu_io_in1 
						   ^ vlTOPp->TopFile__DOT__alu_io_in2)
					        : (
						   ((5U 
						     == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)) 
						    | (0xdU 
						       == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)))
						    ? 
						   VL_SHIFTRS_III(32,32,5, vlTOPp->TopFile__DOT__alu_io_in1, 
								  (0x1fU 
								   & vlTOPp->TopFile__DOT__alu_io_in2))
						    : 
						   ((6U 
						     == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						     ? 
						    (vlTOPp->TopFile__DOT__alu_io_in1 
						     | vlTOPp->TopFile__DOT__alu_io_in2)
						     : 
						    ((7U 
						      == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						      ? 
						     (vlTOPp->TopFile__DOT__alu_io_in1 
						      & vlTOPp->TopFile__DOT__alu_io_in2)
						      : 
						     ((8U 
						       == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						       ? 
						      (vlTOPp->TopFile__DOT__alu_io_in1 
						       - vlTOPp->TopFile__DOT__alu_io_in2)
						       : 
						      ((0x1fU 
							== (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						        ? vlTOPp->TopFile__DOT__alu_io_in1
						        : 
						       ((0xfffffffcU 
							 & (VL_NEGATE_I((IData)(
										(1U 
										& ((IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_11) 
										>> 1U)))) 
							    << 2U)) 
							| (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_11))))))));
}

void VTopFile::_settle__TOP__9(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_settle__TOP__9\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopFile__DOT__alu__DOT___GEN_17 = ((4U 
						== (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
					        ? (vlTOPp->TopFile__DOT__alu_io_in1 
						   ^ vlTOPp->TopFile__DOT__alu_io_in2)
					        : (
						   ((5U 
						     == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)) 
						    | (0xdU 
						       == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)))
						    ? 
						   VL_SHIFTRS_III(32,32,5, vlTOPp->TopFile__DOT__alu_io_in1, 
								  (0x1fU 
								   & vlTOPp->TopFile__DOT__alu_io_in2))
						    : 
						   ((6U 
						     == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						     ? 
						    (vlTOPp->TopFile__DOT__alu_io_in1 
						     | vlTOPp->TopFile__DOT__alu_io_in2)
						     : 
						    ((7U 
						      == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						      ? 
						     (vlTOPp->TopFile__DOT__alu_io_in1 
						      & vlTOPp->TopFile__DOT__alu_io_in2)
						      : 
						     ((8U 
						       == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						       ? 
						      (vlTOPp->TopFile__DOT__alu_io_in1 
						       - vlTOPp->TopFile__DOT__alu_io_in2)
						       : 
						      ((0x1fU 
							== (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						        ? vlTOPp->TopFile__DOT__alu_io_in1
						        : 
						       ((0xfffffffcU 
							 & (VL_NEGATE_I((IData)(
										(1U 
										& ((IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_11) 
										>> 1U)))) 
							    << 2U)) 
							| (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_11))))))));
    vlTOPp->TopFile__DOT__alu__DOT___GEN_19 = (VL_ULL(0x7fffffffffffffff) 
					       & ((0U 
						   == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						   ? 
						  (((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TopFile__DOT__alu__DOT___io_out_T_2 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->TopFile__DOT__alu__DOT___io_out_T_2)))
						   : 
						  ((1U 
						    == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						    ? 
						   ((((QData)((IData)(
								      (0x7fffffffU 
								       & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TopFile__DOT__alu_io_in1 
										>> 0x1fU))))))) 
						      << 0x20U) 
						     | (QData)((IData)(vlTOPp->TopFile__DOT__alu_io_in1))) 
						    << 
						    (0x1fU 
						     & vlTOPp->TopFile__DOT__alu_io_in2))
						    : 
						   (((QData)((IData)(
								     (0x7fffffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TopFile__DOT__alu__DOT___GEN_17 
										>> 0x1fU))))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_17))))));
}

VL_INLINE_OPT void VTopFile::_sequent__TOP__10(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_sequent__TOP__10\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopFile__DOT__alu__DOT___GEN_19 = (VL_ULL(0x7fffffffffffffff) 
					       & ((0U 
						   == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						   ? 
						  (((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TopFile__DOT__alu__DOT___io_out_T_2 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->TopFile__DOT__alu__DOT___io_out_T_2)))
						   : 
						  ((1U 
						    == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
						    ? 
						   ((((QData)((IData)(
								      (0x7fffffffU 
								       & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TopFile__DOT__alu_io_in1 
										>> 0x1fU))))))) 
						      << 0x20U) 
						     | (QData)((IData)(vlTOPp->TopFile__DOT__alu_io_in1))) 
						    << 
						    (0x1fU 
						     & vlTOPp->TopFile__DOT__alu_io_in2))
						    : 
						   (((QData)((IData)(
								     (0x7fffffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TopFile__DOT__alu__DOT___GEN_17 
										>> 0x1fU))))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_17))))));
    vlTOPp->TopFile__DOT__freg_io_wdata = ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite)
					    ? (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19)
					    : 0U);
    vlTOPp->TopFile__DOT__alu_io_Branch = ((1U == (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19)) 
					   & (2U == 
					      (3U & 
					       ((IData)(vlTOPp->TopFile__DOT__aluControl_io_control) 
						>> 3U))));
    vlTOPp->TopFile__DOT__dataMemory__DOT__memory_io_data_out_MPORT_data 
	= vlTOPp->TopFile__DOT__dataMemory__DOT__memory
	[(0xffU & (IData)((vlTOPp->TopFile__DOT__alu__DOT___GEN_19 
			   >> 2U)))];
}

void VTopFile::_settle__TOP__11(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_settle__TOP__11\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopFile__DOT__freg_io_wdata = ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite)
					    ? (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19)
					    : 0U);
    vlTOPp->TopFile__DOT__alu_io_Branch = ((1U == (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19)) 
					   & (2U == 
					      (3U & 
					       ((IData)(vlTOPp->TopFile__DOT__aluControl_io_control) 
						>> 3U))));
    vlTOPp->TopFile__DOT__dataMemory__DOT__memory_io_data_out_MPORT_data 
	= vlTOPp->TopFile__DOT__dataMemory__DOT__memory
	[(0xffU & (IData)((vlTOPp->TopFile__DOT__alu__DOT___GEN_19 
			   >> 2U)))];
    vlTOPp->TopFile__DOT__pc_io_in = ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
					& (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch))) 
				       & (~ (IData)(vlTOPp->TopFile__DOT__alu_io_Branch)))
				       ? ((IData)(4U) 
					  + vlTOPp->TopFile__DOT__pc__DOT__reg_)
				       : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
					    & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch)) 
					   & (~ (IData)(vlTOPp->TopFile__DOT__alu_io_Branch)))
					   ? ((IData)(4U) 
					      + vlTOPp->TopFile__DOT__pc__DOT__reg_)
					   : ((((1U 
						 == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
						& (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch))) 
					       & (IData)(vlTOPp->TopFile__DOT__alu_io_Branch))
					       ? ((IData)(4U) 
						  + vlTOPp->TopFile__DOT__pc__DOT__reg_)
					       : ((
						   ((1U 
						     == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
						    & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch)) 
						   & (IData)(vlTOPp->TopFile__DOT__alu_io_Branch))
						   ? 
						  (((((0x80000000U 
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
						   : 
						  ((0U 
						    == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel))
						    ? 
						   ((IData)(4U) 
						    + vlTOPp->TopFile__DOT__pc__DOT__reg_)
						    : 
						   ((2U 
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
						      : 0U)))))));
    vlTOPp->TopFile__DOT__registerFile_io_wdata = (
						   ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
						    & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
						       & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
							  & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load))))
						    ? vlTOPp->TopFile__DOT__dataMemory__DOT__memory_io_data_out_MPORT_data
						    : (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19));
}

VL_INLINE_OPT void VTopFile::_sequent__TOP__12(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_sequent__TOP__12\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopFile__DOT__pc_io_in = ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
					& (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch))) 
				       & (~ (IData)(vlTOPp->TopFile__DOT__alu_io_Branch)))
				       ? ((IData)(4U) 
					  + vlTOPp->TopFile__DOT__pc__DOT__reg_)
				       : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
					    & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch)) 
					   & (~ (IData)(vlTOPp->TopFile__DOT__alu_io_Branch)))
					   ? ((IData)(4U) 
					      + vlTOPp->TopFile__DOT__pc__DOT__reg_)
					   : ((((1U 
						 == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
						& (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch))) 
					       & (IData)(vlTOPp->TopFile__DOT__alu_io_Branch))
					       ? ((IData)(4U) 
						  + vlTOPp->TopFile__DOT__pc__DOT__reg_)
					       : ((
						   ((1U 
						     == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
						    & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch)) 
						   & (IData)(vlTOPp->TopFile__DOT__alu_io_Branch))
						   ? 
						  (((((0x80000000U 
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
						   : 
						  ((0U 
						    == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel))
						    ? 
						   ((IData)(4U) 
						    + vlTOPp->TopFile__DOT__pc__DOT__reg_)
						    : 
						   ((2U 
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
						      : 0U)))))));
    vlTOPp->TopFile__DOT__registerFile_io_wdata = (
						   ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
						    & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
						       & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
							  & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load))))
						    ? vlTOPp->TopFile__DOT__dataMemory__DOT__memory_io_data_out_MPORT_data
						    : (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19));
    vlTOPp->io_RegOut = vlTOPp->TopFile__DOT__registerFile_io_wdata;
}

void VTopFile::_settle__TOP__13(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_settle__TOP__13\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_RegOut = vlTOPp->TopFile__DOT__registerFile_io_wdata;
}

void VTopFile::_eval(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_eval\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->_sequent__TOP__12(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTopFile::_eval_initial(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_eval_initial\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VTopFile::final() {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::final\n"); );
    // Variables
    VTopFile__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTopFile::_eval_settle(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_eval_settle\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
}

VL_INLINE_OPT QData VTopFile::_change_request(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_change_request\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VTopFile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_RegOut = VL_RAND_RESET_I(32);
    TopFile__DOT__alu_io_in1 = VL_RAND_RESET_I(32);
    TopFile__DOT__alu_io_in2 = VL_RAND_RESET_I(32);
    TopFile__DOT__alu_io_Branch = VL_RAND_RESET_I(1);
    TopFile__DOT__aluControl_io_control = VL_RAND_RESET_I(5);
    TopFile__DOT__ImmediateGeneration_io_i_imm = VL_RAND_RESET_I(32);
    TopFile__DOT__pc_io_in = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile_io_rdata1 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile_io_rdata2 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile_io_wdata = VL_RAND_RESET_I(32);
    TopFile__DOT__freg_io_rdata1 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg_io_wdata = VL_RAND_RESET_I(32);
    TopFile__DOT__alu__DOT___io_out_T_2 = VL_RAND_RESET_I(32);
    TopFile__DOT__alu__DOT___GEN_11 = VL_RAND_RESET_I(2);
    TopFile__DOT__alu__DOT___GEN_17 = VL_RAND_RESET_I(32);
    TopFile__DOT__alu__DOT___GEN_19 = VL_RAND_RESET_Q(63);
    TopFile__DOT__control__DOT__typeDec_io_RType = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Load = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Store = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Branch = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_IType = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Jalr = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Jal = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Lui = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Fmv = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Fadd = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__controlDec_io_Branch = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__controlDec_io_RegWrite = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__controlDec_io_AluOp = VL_RAND_RESET_I(3);
    TopFile__DOT__control__DOT__controlDec_io_Operand_bSel = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__controlDec_io_ExtendSel = VL_RAND_RESET_I(2);
    TopFile__DOT__control__DOT__controlDec_io_NextPcSel = VL_RAND_RESET_I(2);
    TopFile__DOT__control__DOT__controlDec_io_FRegWrite = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__controlDec_io_FRegRead = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__controlDec__DOT___GEN_12 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    TopFile__DOT__dataMemory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }}
    TopFile__DOT__dataMemory__DOT__memory_io_data_out_MPORT_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    TopFile__DOT__Memory__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data = VL_RAND_RESET_I(32);
    TopFile__DOT__jalr__DOT___io_out_T_2 = VL_RAND_RESET_I(32);
    TopFile__DOT__pc__DOT__reg_ = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_0 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_1 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_2 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_3 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_4 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_5 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_6 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_7 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_8 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_9 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_10 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_11 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_12 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_13 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_14 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_15 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_16 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_17 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_18 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_19 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_20 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_21 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_22 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_23 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_24 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_25 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_26 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_27 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_28 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_29 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_30 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_31 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_0 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_1 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_2 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_3 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_4 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_5 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_6 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_7 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_8 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_9 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_10 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_11 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_12 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_13 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_14 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_15 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_16 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_17 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_18 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_19 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_20 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_21 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_22 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_23 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_24 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_25 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_26 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_27 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_28 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_29 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_30 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_31 = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VTopFile::_configure_coverage(VTopFile__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VTopFile::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
