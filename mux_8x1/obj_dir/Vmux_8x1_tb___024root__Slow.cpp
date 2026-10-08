// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_8x1_tb.h for the primary calling header

#include "Vmux_8x1_tb__pch.h"
#include "Vmux_8x1_tb__Syms.h"
#include "Vmux_8x1_tb___024root.h"

void Vmux_8x1_tb___024root___ctor_var_reset(Vmux_8x1_tb___024root* vlSelf);

Vmux_8x1_tb___024root::Vmux_8x1_tb___024root(Vmux_8x1_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux_8x1_tb___024root___ctor_var_reset(this);
}

void Vmux_8x1_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmux_8x1_tb___024root::~Vmux_8x1_tb___024root() {
}
