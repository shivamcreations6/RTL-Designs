// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfull_adder_tb.h for the primary calling header

#ifndef VERILATED_VFULL_ADDER_TB___024UNIT_H_
#define VERILATED_VFULL_ADDER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfull_adder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfull_adder_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vfull_adder_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfull_adder_tb___024unit(Vfull_adder_tb__Syms* symsp, const char* v__name);
    ~Vfull_adder_tb___024unit();
    VL_UNCOPYABLE(Vfull_adder_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
