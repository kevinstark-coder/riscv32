// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_RiscvProcessor;
    VerilatedScope __Vscope_RiscvProcessor__datapath;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla__m_1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla__m_1__a3;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla__m_1__a7;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla__m_2;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla__m_2__a3;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla__m_2__a7;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla__m_3;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla__m_3__a3;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla__m_3__a7;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla__m_4;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla__m_4__a3;
    VerilatedScope __Vscope_RiscvProcessor__datapath__cla__m_4__a7;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__0__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__0__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__10__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__10__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__11__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__11__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__12__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__12__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__13__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__13__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__14__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__14__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__15__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__15__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__1__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__1__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__2__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__2__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__3__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__3__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__4__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__4__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__5__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__5__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__6__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__6__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__7__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__7__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__8__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__8__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__9__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk1__BRA__9__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__0__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__0__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__10__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__10__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__11__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__11__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__12__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__12__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__13__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__13__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__14__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__14__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__15__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__15__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__1__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__1__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__2__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__2__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__3__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__3__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__4__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__4__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__5__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__5__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__6__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__6__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__7__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__7__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__8__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__8__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__9__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__genblk2__BRA__9__KET____d1;
    VerilatedScope __Vscope_RiscvProcessor__datapath__rf;
    VerilatedScope __Vscope_RiscvProcessor__datapath__rf__unnamedblk1;
    VerilatedScope __Vscope_RiscvProcessor__mem;
    VerilatedScope __Vscope_TOP;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
