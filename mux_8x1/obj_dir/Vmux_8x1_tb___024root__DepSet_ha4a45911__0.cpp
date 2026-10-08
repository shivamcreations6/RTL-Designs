// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_8x1_tb.h for the primary calling header

#include "Vmux_8x1_tb__pch.h"
#include "Vmux_8x1_tb___024root.h"

VlCoroutine Vmux_8x1_tb___024root___eval_initial__TOP__Vtiming__0(Vmux_8x1_tb___024root* vlSelf);

void Vmux_8x1_tb___024root___eval_initial(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vmux_8x1_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vmux_8x1_tb___024root___eval_act(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmux_8x1_tb___024root___eval_nba(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmux_8x1_tb___024root___timing_resume(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmux_8x1_tb___024root___eval_triggers__act(Vmux_8x1_tb___024root* vlSelf);

bool Vmux_8x1_tb___024root___eval_phase__act(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmux_8x1_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmux_8x1_tb___024root___timing_resume(vlSelf);
        Vmux_8x1_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmux_8x1_tb___024root___eval_phase__nba(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmux_8x1_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux_8x1_tb___024root___dump_triggers__nba(Vmux_8x1_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux_8x1_tb___024root___dump_triggers__act(Vmux_8x1_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux_8x1_tb___024root___eval(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmux_8x1_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mux_8x1_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vmux_8x1_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mux_8x1_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmux_8x1_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmux_8x1_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmux_8x1_tb___024root___eval_debug_assertions(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
