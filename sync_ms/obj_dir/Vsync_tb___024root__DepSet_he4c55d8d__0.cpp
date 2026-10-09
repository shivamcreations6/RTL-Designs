// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsync_tb.h for the primary calling header

#include "Vsync_tb__pch.h"
#include "Vsync_tb__Syms.h"
#include "Vsync_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vsync_tb___024root___eval_initial__TOP__Vtiming__0(Vsync_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.sync_tb__DOT__async_in = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3a98ULL, 
                                         nullptr, "sync_tb.v", 
                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x1b58ULL, 
                                         nullptr, "sync_tb.v", 
                                         40);
    vlSelfRef.sync_tb__DOT__async_in = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x32c8ULL, 
                                         nullptr, "sync_tb.v", 
                                         41);
    vlSelfRef.sync_tb__DOT__async_in = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1f40ULL, 
                                         nullptr, "sync_tb.v", 
                                         42);
    vlSelfRef.sync_tb__DOT__async_in = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2ee0ULL, 
                                         nullptr, "sync_tb.v", 
                                         43);
    vlSelfRef.sync_tb__DOT__async_in = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "sync_tb.v", 
                                         44);
    VL_FINISH_MT("sync_tb.v", 44, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_tb___024root___dump_triggers__act(Vsync_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsync_tb___024root___eval_triggers__act(Vsync_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.sync_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sync_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__sync_tb__DOT__clk__0 
        = vlSelfRef.sync_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsync_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
