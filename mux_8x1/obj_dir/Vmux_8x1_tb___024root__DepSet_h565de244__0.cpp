// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_8x1_tb.h for the primary calling header

#include "Vmux_8x1_tb__pch.h"
#include "Vmux_8x1_tb__Syms.h"
#include "Vmux_8x1_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmux_8x1_tb___024root___eval_initial__TOP__Vtiming__0(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f387831U;
    __Vtemp_1[2U] = 0x6d7578U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.mux_8x1_tb__DOT__A = 0U;
    vlSelfRef.mux_8x1_tb__DOT__B = 1U;
    vlSelfRef.mux_8x1_tb__DOT__C = 0U;
    vlSelfRef.mux_8x1_tb__DOT__D = 1U;
    vlSelfRef.mux_8x1_tb__DOT__E = 0U;
    vlSelfRef.mux_8x1_tb__DOT__F = 1U;
    vlSelfRef.mux_8x1_tb__DOT__G = 0U;
    vlSelfRef.mux_8x1_tb__DOT__H = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S2 = 0U;
    vlSelfRef.mux_8x1_tb__DOT__S1 = 0U;
    vlSelfRef.mux_8x1_tb__DOT__S0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mux_8x1_tb.v", 
                                         43);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S2 = 0U;
    vlSelfRef.mux_8x1_tb__DOT__S1 = 0U;
    vlSelfRef.mux_8x1_tb__DOT__S0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mux_8x1_tb.v", 
                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S2 = 0U;
    vlSelfRef.mux_8x1_tb__DOT__S1 = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mux_8x1_tb.v", 
                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S2 = 0U;
    vlSelfRef.mux_8x1_tb__DOT__S1 = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mux_8x1_tb.v", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S2 = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S1 = 0U;
    vlSelfRef.mux_8x1_tb__DOT__S0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mux_8x1_tb.v", 
                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S2 = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S1 = 0U;
    vlSelfRef.mux_8x1_tb__DOT__S0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mux_8x1_tb.v", 
                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S2 = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S1 = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mux_8x1_tb.v", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S2 = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S1 = 1U;
    vlSelfRef.mux_8x1_tb__DOT__S0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mux_8x1_tb.v", 
                                         64);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("mux_8x1_tb.v", 66, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux_8x1_tb___024root___dump_triggers__act(Vmux_8x1_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux_8x1_tb___024root___eval_triggers__act(Vmux_8x1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux_8x1_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
