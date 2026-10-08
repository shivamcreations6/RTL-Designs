// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfull_adder.h for the primary calling header

#ifndef VERILATED_VFULL_ADDER___024ROOT_H_
#define VERILATED_VFULL_ADDER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vfull_adder___024unit;


class Vfull_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfull_adder___024root final : public VerilatedModule {
  public:
    // CELLS
    Vfull_adder___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ full_adder_tb__DOT__A;
    CData/*0:0*/ full_adder_tb__DOT__B;
    CData/*0:0*/ full_adder_tb__DOT__C;
    CData/*0:0*/ full_adder_tb__DOT__S;
    CData/*0:0*/ full_adder_tb__DOT__C1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__full_adder_tb__DOT__A__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__full_adder_tb__DOT__B__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__full_adder_tb__DOT__C__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__full_adder_tb__DOT__C1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__full_adder_tb__DOT__S__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfull_adder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfull_adder___024root(Vfull_adder__Syms* symsp, const char* v__name);
    ~Vfull_adder___024root();
    VL_UNCOPYABLE(Vfull_adder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
