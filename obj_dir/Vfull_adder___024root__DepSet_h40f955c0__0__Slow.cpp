// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder.h for the primary calling header

#include "Vfull_adder__pch.h"
#include "Vfull_adder___024root.h"

VL_ATTR_COLD void Vfull_adder___024root___eval_static(Vfull_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vfull_adder___024root___eval_final(Vfull_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_adder___024root___dump_triggers__stl(Vfull_adder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfull_adder___024root___eval_phase__stl(Vfull_adder___024root* vlSelf);

VL_ATTR_COLD void Vfull_adder___024root___eval_settle(Vfull_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vfull_adder___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("full_adder_tb.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfull_adder___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_adder___024root___dump_triggers__stl(Vfull_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vfull_adder___024root___act_sequent__TOP__0(Vfull_adder___024root* vlSelf);

VL_ATTR_COLD void Vfull_adder___024root___eval_stl(Vfull_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vfull_adder___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vfull_adder___024root___eval_triggers__stl(Vfull_adder___024root* vlSelf);

VL_ATTR_COLD bool Vfull_adder___024root___eval_phase__stl(Vfull_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfull_adder___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vfull_adder___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_adder___024root___dump_triggers__act(Vfull_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] full_adder_tb.A)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] full_adder_tb.B)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] full_adder_tb.C)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] full_adder_tb.C1)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] full_adder_tb.S)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_adder___024root___dump_triggers__nba(Vfull_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] full_adder_tb.A)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] full_adder_tb.B)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] full_adder_tb.C)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] full_adder_tb.C1)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] full_adder_tb.S)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfull_adder___024root___ctor_var_reset(Vfull_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->full_adder_tb__DOT__A = VL_RAND_RESET_I(1);
    vlSelf->full_adder_tb__DOT__B = VL_RAND_RESET_I(1);
    vlSelf->full_adder_tb__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->full_adder_tb__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->full_adder_tb__DOT__C1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__full_adder_tb__DOT__A__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__full_adder_tb__DOT__B__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__full_adder_tb__DOT__C__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__full_adder_tb__DOT__C1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__full_adder_tb__DOT__S__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
