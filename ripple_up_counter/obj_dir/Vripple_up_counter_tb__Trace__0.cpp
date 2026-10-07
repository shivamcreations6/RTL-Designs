// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vripple_up_counter_tb__Syms.h"


void Vripple_up_counter_tb___024root__trace_chg_0_sub_0(Vripple_up_counter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vripple_up_counter_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root__trace_chg_0\n"); );
    // Init
    Vripple_up_counter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vripple_up_counter_tb___024root*>(voidSelf);
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vripple_up_counter_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vripple_up_counter_tb___024root__trace_chg_0_sub_0(Vripple_up_counter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.ripple_up_counter_tb__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelfRef.ripple_up_counter_tb__DOT__reset));
    bufp->chgCData(oldp+2,(vlSelfRef.ripple_up_counter_tb__DOT__q),4);
    bufp->chgBit(oldp+3,(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff0__q));
    bufp->chgBit(oldp+4,(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk));
    bufp->chgBit(oldp+5,(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff1__q));
    bufp->chgBit(oldp+6,(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk));
    bufp->chgBit(oldp+7,(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff2__q));
    bufp->chgBit(oldp+8,(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk));
    bufp->chgBit(oldp+9,(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellout__tff3__q));
}

void Vripple_up_counter_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root__trace_cleanup\n"); );
    // Init
    Vripple_up_counter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vripple_up_counter_tb___024root*>(voidSelf);
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
