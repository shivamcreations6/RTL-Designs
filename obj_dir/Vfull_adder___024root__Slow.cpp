// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder.h for the primary calling header

#include "Vfull_adder__pch.h"
#include "Vfull_adder__Syms.h"
#include "Vfull_adder___024root.h"

void Vfull_adder___024root___ctor_var_reset(Vfull_adder___024root* vlSelf);

Vfull_adder___024root::Vfull_adder___024root(Vfull_adder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfull_adder___024root___ctor_var_reset(this);
}

void Vfull_adder___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfull_adder___024root::~Vfull_adder___024root() {
}
