// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsync_tb__Syms.h"


void Vsync_tb___024root__trace_chg_0_sub_0(Vsync_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsync_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root__trace_chg_0\n"); );
    // Init
    Vsync_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsync_tb___024root*>(voidSelf);
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsync_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsync_tb___024root__trace_chg_0_sub_0(Vsync_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelfRef.sync_tb__DOT__sync_out2));
        bufp->chgBit(oldp+1,(vlSelfRef.sync_tb__DOT__sync_out3));
        bufp->chgCData(oldp+2,((((IData)(vlSelfRef.sync_tb__DOT__sync_out2) 
                                 << 1U) | (IData)(vlSelfRef.sync_tb__DOT__sync_out3))),2);
        bufp->chgBit(oldp+3,(vlSelfRef.sync_tb__DOT__u_sync2__DOT__sync_ff1));
        bufp->chgBit(oldp+4,(vlSelfRef.sync_tb__DOT__u_sync3__DOT__sync_ff1));
        bufp->chgBit(oldp+5,(vlSelfRef.sync_tb__DOT__u_sync3__DOT__sync_ff2));
    }
    bufp->chgBit(oldp+6,(vlSelfRef.sync_tb__DOT__clk));
    bufp->chgBit(oldp+7,(vlSelfRef.sync_tb__DOT__async_in));
}

void Vsync_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root__trace_cleanup\n"); );
    // Init
    Vsync_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsync_tb___024root*>(voidSelf);
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
