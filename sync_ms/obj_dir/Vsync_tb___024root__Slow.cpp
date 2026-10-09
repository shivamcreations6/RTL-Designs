// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsync_tb.h for the primary calling header

#include "Vsync_tb__pch.h"
#include "Vsync_tb__Syms.h"
#include "Vsync_tb___024root.h"

void Vsync_tb___024root___ctor_var_reset(Vsync_tb___024root* vlSelf);

Vsync_tb___024root::Vsync_tb___024root(Vsync_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsync_tb___024root___ctor_var_reset(this);
}

void Vsync_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsync_tb___024root::~Vsync_tb___024root() {
}
