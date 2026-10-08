// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux_8x1_tb.h for the primary calling header

#ifndef VERILATED_VMUX_8X1_TB___024ROOT_H_
#define VERILATED_VMUX_8X1_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmux_8x1_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux_8x1_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mux_8x1_tb__DOT__A;
    CData/*0:0*/ mux_8x1_tb__DOT__B;
    CData/*0:0*/ mux_8x1_tb__DOT__C;
    CData/*0:0*/ mux_8x1_tb__DOT__D;
    CData/*0:0*/ mux_8x1_tb__DOT__E;
    CData/*0:0*/ mux_8x1_tb__DOT__F;
    CData/*0:0*/ mux_8x1_tb__DOT__G;
    CData/*0:0*/ mux_8x1_tb__DOT__H;
    CData/*0:0*/ mux_8x1_tb__DOT__S0;
    CData/*0:0*/ mux_8x1_tb__DOT__S1;
    CData/*0:0*/ mux_8x1_tb__DOT__S2;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux_8x1_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux_8x1_tb___024root(Vmux_8x1_tb__Syms* symsp, const char* v__name);
    ~Vmux_8x1_tb___024root();
    VL_UNCOPYABLE(Vmux_8x1_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
