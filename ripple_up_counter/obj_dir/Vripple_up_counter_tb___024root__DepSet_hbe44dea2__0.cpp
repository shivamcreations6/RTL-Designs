// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vripple_up_counter_tb.h for the primary calling header

#include "Vripple_up_counter_tb__pch.h"
#include "Vripple_up_counter_tb__Syms.h"
#include "Vripple_up_counter_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vripple_up_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64756d70U;
    __Vtemp_1[2U] = 0x7465725fU;
    __Vtemp_1[3U] = 0x636f756eU;
    __Vtemp_1[4U] = 0x75705fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.ripple_up_counter_tb__DOT__clk = 0U;
    vlSelfRef.ripple_up_counter_tb__DOT__reset = 1U;
    VL_WRITEF_NX("Time\treset\tq\n",0);
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "ripple_up_counter_tb.v", 
                                         28);
    vlSelfRef.ripple_up_counter_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc8ULL, nullptr, 
                                         "ripple_up_counter_tb.v", 
                                         31);
    VL_FINISH_MT("ripple_up_counter_tb.v", 32, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__act(Vripple_up_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vripple_up_counter_tb___024root___eval_triggers__act(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.ripple_up_counter_tb__DOT__q) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__q__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.ripple_up_counter_tb__DOT__reset) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.ripple_up_counter_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.ripple_up_counter_tb__DOT__reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0))));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk__0))));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk__0))));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk__0))));
    vlSelfRef.__VactTriggered.set(7U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__q__0 
        = vlSelfRef.ripple_up_counter_tb__DOT__q;
    vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0 
        = vlSelfRef.ripple_up_counter_tb__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__clk__0 
        = vlSelfRef.ripple_up_counter_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk__0 
        = vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk__0 
        = vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk__0 
        = vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vripple_up_counter_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vripple_up_counter_tb___024root___nba_sequent__TOP__0(Vripple_up_counter_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("%0#ns\t%b\t%b\n",0,64,VL_TIME_UNITED_Q(1),
                     1,(IData)(vlSelfRef.ripple_up_counter_tb__DOT__reset),
                     4,vlSelfRef.ripple_up_counter_tb__DOT__q);
    }
}
