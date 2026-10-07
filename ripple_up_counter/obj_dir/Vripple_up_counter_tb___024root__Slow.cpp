// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vripple_up_counter_tb.h for the primary calling header

#include "Vripple_up_counter_tb__pch.h"
#include "Vripple_up_counter_tb__Syms.h"
#include "Vripple_up_counter_tb___024root.h"

void Vripple_up_counter_tb___024root___ctor_var_reset(Vripple_up_counter_tb___024root* vlSelf);

Vripple_up_counter_tb___024root::Vripple_up_counter_tb___024root(Vripple_up_counter_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vripple_up_counter_tb___024root___ctor_var_reset(this);
}

void Vripple_up_counter_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vripple_up_counter_tb___024root::~Vripple_up_counter_tb___024root() {
}
