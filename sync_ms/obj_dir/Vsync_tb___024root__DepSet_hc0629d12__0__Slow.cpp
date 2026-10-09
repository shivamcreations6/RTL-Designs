// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsync_tb.h for the primary calling header

#include "Vsync_tb__pch.h"
#include "Vsync_tb___024root.h"

VL_ATTR_COLD void Vsync_tb___024root___eval_static__TOP(Vsync_tb___024root* vlSelf);

VL_ATTR_COLD void Vsync_tb___024root___eval_static(Vsync_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsync_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vsync_tb___024root___eval_static__TOP(Vsync_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sync_tb__DOT__clk = 0U;
    vlSelfRef.sync_tb__DOT__async_in = 0U;
}

VL_ATTR_COLD void Vsync_tb___024root___eval_final(Vsync_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsync_tb___024root___eval_settle(Vsync_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_tb___024root___dump_triggers__act(Vsync_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge sync_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_tb___024root___dump_triggers__nba(Vsync_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge sync_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsync_tb___024root___ctor_var_reset(Vsync_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->sync_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->sync_tb__DOT__async_in = VL_RAND_RESET_I(1);
    vlSelf->sync_tb__DOT__sync_out2 = VL_RAND_RESET_I(1);
    vlSelf->sync_tb__DOT__sync_out3 = VL_RAND_RESET_I(1);
    vlSelf->sync_tb__DOT__u_sync2__DOT__sync_ff1 = VL_RAND_RESET_I(1);
    vlSelf->sync_tb__DOT__u_sync3__DOT__sync_ff1 = VL_RAND_RESET_I(1);
    vlSelf->sync_tb__DOT__u_sync3__DOT__sync_ff2 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__sync_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__sync_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sync_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
