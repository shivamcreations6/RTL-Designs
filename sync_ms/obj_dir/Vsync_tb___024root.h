// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsync_tb.h for the primary calling header

#ifndef VERILATED_VSYNC_TB___024ROOT_H_
#define VERILATED_VSYNC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsync_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsync_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ sync_tb__DOT__clk;
    CData/*0:0*/ sync_tb__DOT__async_in;
    CData/*0:0*/ sync_tb__DOT__sync_out2;
    CData/*0:0*/ sync_tb__DOT__sync_out3;
    CData/*0:0*/ sync_tb__DOT__u_sync2__DOT__sync_ff1;
    CData/*0:0*/ sync_tb__DOT__u_sync3__DOT__sync_ff1;
    CData/*0:0*/ sync_tb__DOT__u_sync3__DOT__sync_ff2;
    CData/*0:0*/ __VdlyVal__sync_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__sync_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sync_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsync_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsync_tb___024root(Vsync_tb__Syms* symsp, const char* v__name);
    ~Vsync_tb___024root();
    VL_UNCOPYABLE(Vsync_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
