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
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__0__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__0__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__10__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__10__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__11__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__11__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__12__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__12__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__13__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__13__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__14__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__14__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__15__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__15__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__16__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__16__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__17__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__17__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__18__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__18__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__19__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__19__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__1__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__1__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__20__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__20__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__21__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__21__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__22__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__22__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__23__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__23__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__24__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__24__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__25__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__25__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__26__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__26__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__27__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__27__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__28__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__28__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__29__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__29__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__2__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__2__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__30__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__30__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__3__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__3__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__4__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__4__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__5__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__5__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__6__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__6__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__7__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__7__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__8__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__8__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__9__KET__;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__div__BRA__9__KET____u_div;
    VerilatedScope __Vscope_RiscvProcessor__datapath__div__u_div0;
    VerilatedScope __Vscope_RiscvProcessor__datapath__rf;
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
