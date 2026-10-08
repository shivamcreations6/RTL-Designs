// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder.h for the primary calling header

#include "Vfull_adder__pch.h"
#include "Vfull_adder__Syms.h"
#include "Vfull_adder___024unit.h"

void Vfull_adder___024unit___ctor_var_reset(Vfull_adder___024unit* vlSelf);

Vfull_adder___024unit::Vfull_adder___024unit(Vfull_adder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfull_adder___024unit___ctor_var_reset(this);
}

void Vfull_adder___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfull_adder___024unit::~Vfull_adder___024unit() {
}
