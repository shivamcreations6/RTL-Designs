// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vripple_up_counter_tb.h for the primary calling header

#include "Vripple_up_counter_tb__pch.h"
#include "Vripple_up_counter_tb___024root.h"

VL_ATTR_COLD void Vripple_up_counter_tb___024root___eval_static(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vripple_up_counter_tb___024root___eval_final(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__stl(Vripple_up_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vripple_up_counter_tb___024root___eval_phase__stl(Vripple_up_counter_tb___024root* vlSelf);

VL_ATTR_COLD void Vripple_up_counter_tb___024root___eval_settle(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_settle\n"); );
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
            Vripple_up_counter_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("ripple_up_counter_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vripple_up_counter_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__stl(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vripple_up_counter_tb___024root___stl_sequent__TOP__0(Vripple_up_counter_tb___024root* vlSelf);

VL_ATTR_COLD void Vripple_up_counter_tb___024root___eval_stl(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vripple_up_counter_tb___024root___stl_sequent__TOP__0(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk 
        = (1U & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff0__q)));
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk 
        = (1U & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff1__q)));
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk 
        = (1U & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff2__q)));
    vlSelfRef.ripple_up_counter_tb__DOT__q = ((((IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff3__q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff2__q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff1__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff0__q)));
}

VL_ATTR_COLD void Vripple_up_counter_tb___024root___eval_triggers__stl(Vripple_up_counter_tb___024root* vlSelf);

VL_ATTR_COLD bool Vripple_up_counter_tb___024root___eval_phase__stl(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vripple_up_counter_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vripple_up_counter_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__act(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] ripple_up_counter_tb.q)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] ripple_up_counter_tb.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge ripple_up_counter_tb.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge ripple_up_counter_tb.reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge ripple_up_counter_tb.uut.__Vcellinp__tff1__clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge ripple_up_counter_tb.uut.__Vcellinp__tff2__clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge ripple_up_counter_tb.uut.__Vcellinp__tff3__clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__nba(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] ripple_up_counter_tb.q)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] ripple_up_counter_tb.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge ripple_up_counter_tb.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge ripple_up_counter_tb.reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge ripple_up_counter_tb.uut.__Vcellinp__tff1__clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge ripple_up_counter_tb.uut.__Vcellinp__tff2__clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge ripple_up_counter_tb.uut.__Vcellinp__tff3__clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vripple_up_counter_tb___024root___ctor_var_reset(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->ripple_up_counter_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_tb__DOT__q = VL_RAND_RESET_I(4);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff0__q = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff1__q = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff2__q = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff3__q = VL_RAND_RESET_I(1);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__ripple_up_counter_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__ripple_up_counter_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__q__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
