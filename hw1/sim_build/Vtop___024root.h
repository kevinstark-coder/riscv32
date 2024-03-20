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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(SWITCH,7,0);
        VL_OUT8(LED,7,0);
        CData/*7:0*/ rca4__DOT__SWITCH;
        CData/*7:0*/ rca4__DOT__LED;
        CData/*0:0*/ rca4__DOT__cout0;
        CData/*0:0*/ rca4__DOT__ignored;
        CData/*0:0*/ rca4__DOT__a0__DOT__cin;
        CData/*1:0*/ rca4__DOT__a0__DOT__a;
        CData/*1:0*/ rca4__DOT__a0__DOT__b;
        CData/*1:0*/ rca4__DOT__a0__DOT__s;
        CData/*0:0*/ rca4__DOT__a0__DOT__cout;
        CData/*0:0*/ rca4__DOT__a0__DOT__cout_tmp;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__cin;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__a;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__b;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__s;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__cout;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__s_tmp;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__cout_tmp1;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__cout_tmp2;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__h0__DOT__a;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__h0__DOT__b;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__h0__DOT__s;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__h0__DOT__cout;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__h1__DOT__a;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__h1__DOT__b;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__h1__DOT__s;
        CData/*0:0*/ rca4__DOT__a0__DOT__a0__DOT__h1__DOT__cout;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__cin;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__a;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__b;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__s;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__cout;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__s_tmp;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__cout_tmp1;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__cout_tmp2;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__h0__DOT__a;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__h0__DOT__b;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__h0__DOT__s;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__h0__DOT__cout;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__h1__DOT__a;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__h1__DOT__b;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__h1__DOT__s;
        CData/*0:0*/ rca4__DOT__a0__DOT__a1__DOT__h1__DOT__cout;
        CData/*0:0*/ rca4__DOT__a3__DOT__cin;
        CData/*1:0*/ rca4__DOT__a3__DOT__a;
        CData/*1:0*/ rca4__DOT__a3__DOT__b;
        CData/*1:0*/ rca4__DOT__a3__DOT__s;
        CData/*0:0*/ rca4__DOT__a3__DOT__cout;
        CData/*0:0*/ rca4__DOT__a3__DOT__cout_tmp;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__cin;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__a;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__b;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__s;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__cout;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__s_tmp;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__cout_tmp1;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__cout_tmp2;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__h0__DOT__a;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__h0__DOT__b;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__h0__DOT__s;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__h0__DOT__cout;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__h1__DOT__a;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__h1__DOT__b;
    };
    struct {
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__h1__DOT__s;
        CData/*0:0*/ rca4__DOT__a3__DOT__a0__DOT__h1__DOT__cout;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__cin;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__a;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__b;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__s;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__cout;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__s_tmp;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__cout_tmp1;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__cout_tmp2;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__h0__DOT__a;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__h0__DOT__b;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__h0__DOT__s;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__h0__DOT__cout;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__h1__DOT__a;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__h1__DOT__b;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__h1__DOT__s;
        CData/*0:0*/ rca4__DOT__a3__DOT__a1__DOT__h1__DOT__cout;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VactIterCount;
    };
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
