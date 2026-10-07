// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vripple_up_counter_tb.h for the primary calling header

#ifndef VERILATED_VRIPPLE_UP_COUNTER_TB___024ROOT_H_
#define VERILATED_VRIPPLE_UP_COUNTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vripple_up_counter_tb___024unit;


class Vripple_up_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vripple_up_counter_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vripple_up_counter_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ripple_up_counter_tb__DOT__clk;
    CData/*0:0*/ ripple_up_counter_tb__DOT__reset;
    CData/*0:0*/ ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk;
    CData/*0:0*/ ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk;
    CData/*0:0*/ ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk;
    CData/*3:0*/ ripple_up_counter_tb__DOT__q;
    CData/*0:0*/ ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff0__q;
    CData/*0:0*/ ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff1__q;
    CData/*0:0*/ ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff2__q;
    CData/*0:0*/ ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff3__q;
    CData/*0:0*/ __VdlyVal__ripple_up_counter_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__ripple_up_counter_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*3:0*/ __Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__q__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<8> __VactTriggered;
    VlTriggerVec<8> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vripple_up_counter_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vripple_up_counter_tb___024root(Vripple_up_counter_tb__Syms* symsp, const char* v__name);
    ~Vripple_up_counter_tb___024root();
    VL_UNCOPYABLE(Vripple_up_counter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
