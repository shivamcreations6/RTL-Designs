// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder.h for the primary calling header

#include "Vfull_adder__pch.h"
#include "Vfull_adder___024unit.h"

VL_ATTR_COLD void Vfull_adder___024unit___ctor_var_reset(Vfull_adder___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vfull_adder___024unit___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
