// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(i_dividend,31,0);
    VL_IN(i_divisor,31,0);
    VL_IN(i_remainder,31,0);
    VL_IN(i_quotient,31,0);
    VL_OUT(o_dividend,31,0);
    VL_OUT(o_remainder,31,0);
    VL_OUT(o_quotient,31,0);
    IData/*31:0*/ divu_1iter__DOT__i_dividend;
    IData/*31:0*/ divu_1iter__DOT__i_divisor;
    IData/*31:0*/ divu_1iter__DOT__i_remainder;
    IData/*31:0*/ divu_1iter__DOT__i_quotient;
    IData/*31:0*/ divu_1iter__DOT__o_dividend;
    IData/*31:0*/ divu_1iter__DOT__o_remainder;
    IData/*31:0*/ divu_1iter__DOT__o_quotient;
    IData/*31:0*/ divu_1iter__DOT__remainder;
    IData/*31:0*/ divu_1iter__DOT__dividend;
    IData/*31:0*/ divu_1iter__DOT__quotient;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
