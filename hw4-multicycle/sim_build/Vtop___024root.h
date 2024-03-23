// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
class Vtop_divu_1iter;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__0__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__1__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__2__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__3__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__4__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__5__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__6__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__7__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__8__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__9__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__10__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__11__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__12__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__13__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__14__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk1__BRA__15__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__0__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__1__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__2__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__3__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__4__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__5__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__6__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__7__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__8__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__9__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__10__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__11__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__12__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__13__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__14__KET____DOT__d1;
    Vtop_divu_1iter* __PVT__divider_unsigned_pipelined__DOT__genblk2__BRA__15__KET____DOT__d1;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ divider_unsigned_pipelined__DOT__clk;
    CData/*0:0*/ divider_unsigned_pipelined__DOT__rst;
    CData/*0:0*/ divider_unsigned_pipelined__DOT____Vtogcov__clk;
    CData/*0:0*/ divider_unsigned_pipelined__DOT____Vtogcov__rst;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(i_dividend,31,0);
    VL_IN(i_divisor,31,0);
    VL_OUT(o_remainder,31,0);
    VL_OUT(o_quotient,31,0);
    IData/*31:0*/ divider_unsigned_pipelined__DOT__i_dividend;
    IData/*31:0*/ divider_unsigned_pipelined__DOT__i_divisor;
    IData/*31:0*/ divider_unsigned_pipelined__DOT__o_remainder;
    IData/*31:0*/ divider_unsigned_pipelined__DOT__o_quotient;
    IData/*31:0*/ divider_unsigned_pipelined__DOT__quotient;
    IData/*31:0*/ divider_unsigned_pipelined__DOT__remainder;
    IData/*31:0*/ divider_unsigned_pipelined__DOT____Vtogcov__i_dividend;
    IData/*31:0*/ divider_unsigned_pipelined__DOT____Vtogcov__i_divisor;
    IData/*31:0*/ divider_unsigned_pipelined__DOT____Vtogcov__o_remainder;
    IData/*31:0*/ divider_unsigned_pipelined__DOT____Vtogcov__o_quotient;
    IData/*31:0*/ divider_unsigned_pipelined__DOT____Vtogcov__quotient;
    IData/*31:0*/ divider_unsigned_pipelined__DOT____Vtogcov__remainder;
    IData/*31:0*/ divider_unsigned_pipelined__DOT__unnamedblk1__DOT__j;
    IData/*31:0*/ divider_unsigned_pipelined__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 17> divider_unsigned_pipelined__DOT__divided_1;
    VlUnpacked<IData/*31:0*/, 17> divider_unsigned_pipelined__DOT__remainder_1;
    VlUnpacked<IData/*31:0*/, 17> divider_unsigned_pipelined__DOT__quotient_1;
    VlUnpacked<IData/*31:0*/, 17> divider_unsigned_pipelined__DOT__divided_2;
    VlUnpacked<IData/*31:0*/, 17> divider_unsigned_pipelined__DOT__remainder_2;
    VlUnpacked<IData/*31:0*/, 17> divider_unsigned_pipelined__DOT__quotient_2;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
