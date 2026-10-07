// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vripple_up_counter_tb.h for the primary calling header

#ifndef VERILATED_VRIPPLE_UP_COUNTER_TB___024UNIT_H_
#define VERILATED_VRIPPLE_UP_COUNTER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vripple_up_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vripple_up_counter_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vripple_up_counter_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vripple_up_counter_tb___024unit(Vripple_up_counter_tb__Syms* symsp, const char* v__name);
    ~Vripple_up_counter_tb___024unit();
    VL_UNCOPYABLE(Vripple_up_counter_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
