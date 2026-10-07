// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRIPPLE_UP_COUNTER_TB__SYMS_H_
#define VERILATED_VRIPPLE_UP_COUNTER_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vripple_up_counter_tb.h"

// INCLUDE MODULE CLASSES
#include "Vripple_up_counter_tb___024root.h"
#include "Vripple_up_counter_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vripple_up_counter_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vripple_up_counter_tb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vripple_up_counter_tb___024root TOP;
    Vripple_up_counter_tb___024unit TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_ripple_up_counter_tb;

    // CONSTRUCTORS
    Vripple_up_counter_tb__Syms(VerilatedContext* contextp, const char* namep, Vripple_up_counter_tb* modelp);
    ~Vripple_up_counter_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
