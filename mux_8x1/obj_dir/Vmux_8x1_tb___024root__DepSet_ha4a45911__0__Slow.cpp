// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_8x1_tb.h for the primary calling header

#include "Vmux_8x1_tb__pch.h"
#include "Vmux_8x1_tb___024root.h"

VL_ATTR_COLD void Vmux_8x1_tb___024root___eval_static(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmux_8x1_tb___024root___eval_final(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmux_8x1_tb___024root___eval_settle(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux_8x1_tb___024root___dump_triggers__act(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux_8x1_tb___024root___dump_triggers__nba(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux_8x1_tb___024root___ctor_var_reset(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->mux_8x1_tb__DOT__A = VL_RAND_RESET_I(1);
    vlSelf->mux_8x1_tb__DOT__B = VL_RAND_RESET_I(1);
    vlSelf->mux_8x1_tb__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->mux_8x1_tb__DOT__D = VL_RAND_RESET_I(1);
    vlSelf->mux_8x1_tb__DOT__E = VL_RAND_RESET_I(1);
    vlSelf->mux_8x1_tb__DOT__F = VL_RAND_RESET_I(1);
    vlSelf->mux_8x1_tb__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->mux_8x1_tb__DOT__H = VL_RAND_RESET_I(1);
    vlSelf->mux_8x1_tb__DOT__S0 = VL_RAND_RESET_I(1);
    vlSelf->mux_8x1_tb__DOT__S1 = VL_RAND_RESET_I(1);
    vlSelf->mux_8x1_tb__DOT__S2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
