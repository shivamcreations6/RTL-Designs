// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux_8x1_tb__Syms.h"


void Vmux_8x1_tb___024root__trace_chg_0_sub_0(Vmux_8x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux_8x1_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root__trace_chg_0\n"); );
    // Init
    Vmux_8x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux_8x1_tb___024root*>(voidSelf);
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux_8x1_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmux_8x1_tb___024root__trace_chg_0_sub_0(Vmux_8x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.mux_8x1_tb__DOT__A));
        bufp->chgBit(oldp+1,(vlSelfRef.mux_8x1_tb__DOT__B));
        bufp->chgBit(oldp+2,(vlSelfRef.mux_8x1_tb__DOT__C));
        bufp->chgBit(oldp+3,(vlSelfRef.mux_8x1_tb__DOT__D));
        bufp->chgBit(oldp+4,(vlSelfRef.mux_8x1_tb__DOT__E));
        bufp->chgBit(oldp+5,(vlSelfRef.mux_8x1_tb__DOT__F));
        bufp->chgBit(oldp+6,(vlSelfRef.mux_8x1_tb__DOT__G));
        bufp->chgBit(oldp+7,(vlSelfRef.mux_8x1_tb__DOT__H));
        bufp->chgBit(oldp+8,(vlSelfRef.mux_8x1_tb__DOT__S0));
        bufp->chgBit(oldp+9,(vlSelfRef.mux_8x1_tb__DOT__S1));
        bufp->chgBit(oldp+10,(vlSelfRef.mux_8x1_tb__DOT__S2));
        bufp->chgBit(oldp+11,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S2)) 
                                & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S1)) 
                                    & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                        & (IData)(vlSelfRef.mux_8x1_tb__DOT__A)) 
                                       | ((IData)(vlSelfRef.mux_8x1_tb__DOT__B) 
                                          & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))) 
                                   | ((IData)(vlSelfRef.mux_8x1_tb__DOT__S1) 
                                      & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                          & (IData)(vlSelfRef.mux_8x1_tb__DOT__C)) 
                                         | ((IData)(vlSelfRef.mux_8x1_tb__DOT__D) 
                                            & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))))) 
                               | ((IData)(vlSelfRef.mux_8x1_tb__DOT__S2) 
                                  & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S1)) 
                                      & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                          & (IData)(vlSelfRef.mux_8x1_tb__DOT__E)) 
                                         | ((IData)(vlSelfRef.mux_8x1_tb__DOT__F) 
                                            & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))) 
                                     | ((IData)(vlSelfRef.mux_8x1_tb__DOT__S1) 
                                        & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                            & (IData)(vlSelfRef.mux_8x1_tb__DOT__G)) 
                                           | ((IData)(vlSelfRef.mux_8x1_tb__DOT__H) 
                                              & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))))))));
        bufp->chgBit(oldp+12,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S1)) 
                                & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                    & (IData)(vlSelfRef.mux_8x1_tb__DOT__A)) 
                                   | ((IData)(vlSelfRef.mux_8x1_tb__DOT__B) 
                                      & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))) 
                               | ((IData)(vlSelfRef.mux_8x1_tb__DOT__S1) 
                                  & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                      & (IData)(vlSelfRef.mux_8x1_tb__DOT__C)) 
                                     | ((IData)(vlSelfRef.mux_8x1_tb__DOT__D) 
                                        & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))))));
        bufp->chgBit(oldp+13,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S1)) 
                                & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                    & (IData)(vlSelfRef.mux_8x1_tb__DOT__E)) 
                                   | ((IData)(vlSelfRef.mux_8x1_tb__DOT__F) 
                                      & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))) 
                               | ((IData)(vlSelfRef.mux_8x1_tb__DOT__S1) 
                                  & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                      & (IData)(vlSelfRef.mux_8x1_tb__DOT__G)) 
                                     | ((IData)(vlSelfRef.mux_8x1_tb__DOT__H) 
                                        & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))))));
        bufp->chgBit(oldp+14,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                & (IData)(vlSelfRef.mux_8x1_tb__DOT__A)) 
                               | ((IData)(vlSelfRef.mux_8x1_tb__DOT__B) 
                                  & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))));
        bufp->chgBit(oldp+15,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                & (IData)(vlSelfRef.mux_8x1_tb__DOT__C)) 
                               | ((IData)(vlSelfRef.mux_8x1_tb__DOT__D) 
                                  & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))));
        bufp->chgBit(oldp+16,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                & (IData)(vlSelfRef.mux_8x1_tb__DOT__E)) 
                               | ((IData)(vlSelfRef.mux_8x1_tb__DOT__F) 
                                  & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))));
        bufp->chgBit(oldp+17,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                & (IData)(vlSelfRef.mux_8x1_tb__DOT__G)) 
                               | ((IData)(vlSelfRef.mux_8x1_tb__DOT__H) 
                                  & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))));
    }
}

void Vmux_8x1_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root__trace_cleanup\n"); );
    // Init
    Vmux_8x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux_8x1_tb___024root*>(voidSelf);
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
