// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux_8x1_tb__Syms.h"


VL_ATTR_COLD void Vmux_8x1_tb___024root__trace_init_sub__TOP__0(Vmux_8x1_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("mux_8x1_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"S0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"S1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"S2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"F",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"G",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"H",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"S2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"I0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"I1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"I2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"I3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmux_8x1_tb___024root__trace_init_top(Vmux_8x1_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmux_8x1_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux_8x1_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmux_8x1_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux_8x1_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux_8x1_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux_8x1_tb___024root__trace_register(Vmux_8x1_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmux_8x1_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmux_8x1_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmux_8x1_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmux_8x1_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux_8x1_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root__trace_const_0\n"); );
    // Init
    Vmux_8x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux_8x1_tb___024root*>(voidSelf);
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmux_8x1_tb___024root__trace_full_0_sub_0(Vmux_8x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux_8x1_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root__trace_full_0\n"); );
    // Init
    Vmux_8x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux_8x1_tb___024root*>(voidSelf);
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux_8x1_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux_8x1_tb___024root__trace_full_0_sub_0(Vmux_8x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux_8x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_8x1_tb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.mux_8x1_tb__DOT__A));
    bufp->fullBit(oldp+2,(vlSelfRef.mux_8x1_tb__DOT__B));
    bufp->fullBit(oldp+3,(vlSelfRef.mux_8x1_tb__DOT__C));
    bufp->fullBit(oldp+4,(vlSelfRef.mux_8x1_tb__DOT__D));
    bufp->fullBit(oldp+5,(vlSelfRef.mux_8x1_tb__DOT__E));
    bufp->fullBit(oldp+6,(vlSelfRef.mux_8x1_tb__DOT__F));
    bufp->fullBit(oldp+7,(vlSelfRef.mux_8x1_tb__DOT__G));
    bufp->fullBit(oldp+8,(vlSelfRef.mux_8x1_tb__DOT__H));
    bufp->fullBit(oldp+9,(vlSelfRef.mux_8x1_tb__DOT__S0));
    bufp->fullBit(oldp+10,(vlSelfRef.mux_8x1_tb__DOT__S1));
    bufp->fullBit(oldp+11,(vlSelfRef.mux_8x1_tb__DOT__S2));
    bufp->fullBit(oldp+12,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S2)) 
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
    bufp->fullBit(oldp+13,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S1)) 
                             & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                 & (IData)(vlSelfRef.mux_8x1_tb__DOT__A)) 
                                | ((IData)(vlSelfRef.mux_8x1_tb__DOT__B) 
                                   & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))) 
                            | ((IData)(vlSelfRef.mux_8x1_tb__DOT__S1) 
                               & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                   & (IData)(vlSelfRef.mux_8x1_tb__DOT__C)) 
                                  | ((IData)(vlSelfRef.mux_8x1_tb__DOT__D) 
                                     & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))))));
    bufp->fullBit(oldp+14,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S1)) 
                             & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                 & (IData)(vlSelfRef.mux_8x1_tb__DOT__E)) 
                                | ((IData)(vlSelfRef.mux_8x1_tb__DOT__F) 
                                   & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))) 
                            | ((IData)(vlSelfRef.mux_8x1_tb__DOT__S1) 
                               & (((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                                   & (IData)(vlSelfRef.mux_8x1_tb__DOT__G)) 
                                  | ((IData)(vlSelfRef.mux_8x1_tb__DOT__H) 
                                     & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))))));
    bufp->fullBit(oldp+15,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                             & (IData)(vlSelfRef.mux_8x1_tb__DOT__A)) 
                            | ((IData)(vlSelfRef.mux_8x1_tb__DOT__B) 
                               & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))));
    bufp->fullBit(oldp+16,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                             & (IData)(vlSelfRef.mux_8x1_tb__DOT__C)) 
                            | ((IData)(vlSelfRef.mux_8x1_tb__DOT__D) 
                               & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))));
    bufp->fullBit(oldp+17,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                             & (IData)(vlSelfRef.mux_8x1_tb__DOT__E)) 
                            | ((IData)(vlSelfRef.mux_8x1_tb__DOT__F) 
                               & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))));
    bufp->fullBit(oldp+18,((((~ (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)) 
                             & (IData)(vlSelfRef.mux_8x1_tb__DOT__G)) 
                            | ((IData)(vlSelfRef.mux_8x1_tb__DOT__H) 
                               & (IData)(vlSelfRef.mux_8x1_tb__DOT__S0)))));
}
