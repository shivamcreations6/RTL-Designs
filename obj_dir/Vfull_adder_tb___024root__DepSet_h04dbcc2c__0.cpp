// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder_tb.h for the primary calling header

#include "Vfull_adder_tb__pch.h"
#include "Vfull_adder_tb__Syms.h"
#include "Vfull_adder_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vfull_adder_tb___024root___eval_initial__TOP__Vtiming__0(Vfull_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64646572U;
    __Vtemp_1[2U] = 0x6c6c5f61U;
    __Vtemp_1[3U] = 0x6675U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.full_adder_tb__DOT__A = 0U;
    vlSelfRef.full_adder_tb__DOT__B = 0U;
    vlSelfRef.full_adder_tb__DOT__C = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "full_adder_tb.v", 
                                         28);
    vlSelfRef.full_adder_tb__DOT__A = 0U;
    vlSelfRef.full_adder_tb__DOT__B = 0U;
    vlSelfRef.full_adder_tb__DOT__C = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "full_adder_tb.v", 
                                         29);
    vlSelfRef.full_adder_tb__DOT__A = 0U;
    vlSelfRef.full_adder_tb__DOT__B = 1U;
    vlSelfRef.full_adder_tb__DOT__C = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "full_adder_tb.v", 
                                         30);
    vlSelfRef.full_adder_tb__DOT__A = 0U;
    vlSelfRef.full_adder_tb__DOT__B = 1U;
    vlSelfRef.full_adder_tb__DOT__C = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "full_adder_tb.v", 
                                         31);
    vlSelfRef.full_adder_tb__DOT__A = 1U;
    vlSelfRef.full_adder_tb__DOT__B = 0U;
    vlSelfRef.full_adder_tb__DOT__C = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "full_adder_tb.v", 
                                         32);
    vlSelfRef.full_adder_tb__DOT__A = 1U;
    vlSelfRef.full_adder_tb__DOT__B = 0U;
    vlSelfRef.full_adder_tb__DOT__C = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "full_adder_tb.v", 
                                         33);
    vlSelfRef.full_adder_tb__DOT__A = 1U;
    vlSelfRef.full_adder_tb__DOT__B = 1U;
    vlSelfRef.full_adder_tb__DOT__C = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "full_adder_tb.v", 
                                         34);
    vlSelfRef.full_adder_tb__DOT__A = 1U;
    vlSelfRef.full_adder_tb__DOT__B = 1U;
    vlSelfRef.full_adder_tb__DOT__C = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "full_adder_tb.v", 
                                         35);
    VL_FINISH_MT("full_adder_tb.v", 37, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_adder_tb___024root___dump_triggers__act(Vfull_adder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfull_adder_tb___024root___eval_triggers__act(Vfull_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.full_adder_tb__DOT__A) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__A__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.full_adder_tb__DOT__B) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__B__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.full_adder_tb__DOT__C) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__C__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.full_adder_tb__DOT__C1) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__C1__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.full_adder_tb__DOT__S) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__S__0)));
    vlSelfRef.__VactTriggered.set(5U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__A__0 
        = vlSelfRef.full_adder_tb__DOT__A;
    vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__B__0 
        = vlSelfRef.full_adder_tb__DOT__B;
    vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__C__0 
        = vlSelfRef.full_adder_tb__DOT__C;
    vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__C1__0 
        = vlSelfRef.full_adder_tb__DOT__C1;
    vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__S__0 
        = vlSelfRef.full_adder_tb__DOT__S;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfull_adder_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vfull_adder_tb___024root___nba_sequent__TOP__0(Vfull_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("Time=%0t | A=%b B=%b C=%b | S=%b C1=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.full_adder_tb__DOT__A),
                     1,vlSelfRef.full_adder_tb__DOT__B,
                     1,(IData)(vlSelfRef.full_adder_tb__DOT__C),
                     1,vlSelfRef.full_adder_tb__DOT__S,
                     1,(IData)(vlSelfRef.full_adder_tb__DOT__C1));
    }
}
