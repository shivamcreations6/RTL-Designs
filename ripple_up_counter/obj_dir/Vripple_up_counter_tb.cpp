// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vripple_up_counter_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vripple_up_counter_tb::Vripple_up_counter_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vripple_up_counter_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vripple_up_counter_tb::Vripple_up_counter_tb(const char* _vcname__)
    : Vripple_up_counter_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vripple_up_counter_tb::~Vripple_up_counter_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vripple_up_counter_tb___024root___eval_debug_assertions(Vripple_up_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vripple_up_counter_tb___024root___eval_static(Vripple_up_counter_tb___024root* vlSelf);
void Vripple_up_counter_tb___024root___eval_initial(Vripple_up_counter_tb___024root* vlSelf);
void Vripple_up_counter_tb___024root___eval_settle(Vripple_up_counter_tb___024root* vlSelf);
void Vripple_up_counter_tb___024root___eval(Vripple_up_counter_tb___024root* vlSelf);

void Vripple_up_counter_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vripple_up_counter_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vripple_up_counter_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vripple_up_counter_tb___024root___eval_static(&(vlSymsp->TOP));
        Vripple_up_counter_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vripple_up_counter_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vripple_up_counter_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vripple_up_counter_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vripple_up_counter_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vripple_up_counter_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vripple_up_counter_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vripple_up_counter_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vripple_up_counter_tb___024root___eval_final(Vripple_up_counter_tb___024root* vlSelf);

VL_ATTR_COLD void Vripple_up_counter_tb::final() {
    Vripple_up_counter_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vripple_up_counter_tb::hierName() const { return vlSymsp->name(); }
const char* Vripple_up_counter_tb::modelName() const { return "Vripple_up_counter_tb"; }
unsigned Vripple_up_counter_tb::threads() const { return 1; }
void Vripple_up_counter_tb::prepareClone() const { contextp()->prepareClone(); }
void Vripple_up_counter_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vripple_up_counter_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vripple_up_counter_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vripple_up_counter_tb___024root__trace_init_top(Vripple_up_counter_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vripple_up_counter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vripple_up_counter_tb___024root*>(voidSelf);
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vripple_up_counter_tb___024root__trace_decl_types(tracep);
    Vripple_up_counter_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vripple_up_counter_tb___024root__trace_register(Vripple_up_counter_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vripple_up_counter_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vripple_up_counter_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vripple_up_counter_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
