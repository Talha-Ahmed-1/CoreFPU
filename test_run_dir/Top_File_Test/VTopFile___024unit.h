// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTopFile.h for the primary calling header

#ifndef _VTopFile___024unit_H_
#define _VTopFile___024unit_H_

#include "verilated.h"
#include "VTopFile__Inlines.h"
class VTopFile__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTopFile___024unit) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign12[4];
    VTopFile__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VTopFile___024unit& operator= (const VTopFile___024unit&);	///< Copying not allowed
    VTopFile___024unit(const VTopFile___024unit&);	///< Copying not allowed
  public:
    VTopFile___024unit(const char* name="TOP");
    ~VTopFile___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VTopFile__Syms* symsp, bool first);
  private:
    void	_configure_coverage(VTopFile__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
