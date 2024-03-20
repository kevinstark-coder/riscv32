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
        VL_IN8(cin,0,0);
        CData/*0:0*/ cla__DOT__cin;
        CData/*0:0*/ cla__DOT__c_7;
        CData/*0:0*/ cla__DOT__c_15;
        CData/*0:0*/ cla__DOT__c_23;
        CData/*0:0*/ cla__DOT__c_31;
        CData/*0:0*/ cla__DOT__gout1;
        CData/*0:0*/ cla__DOT__pout1;
        CData/*0:0*/ cla__DOT__gout2;
        CData/*0:0*/ cla__DOT__pout2;
        CData/*0:0*/ cla__DOT__gout3;
        CData/*0:0*/ cla__DOT__pout3;
        CData/*0:0*/ cla__DOT__gout4;
        CData/*0:0*/ cla__DOT__pout4;
        CData/*7:0*/ cla__DOT__m_1__DOT__gin;
        CData/*7:0*/ cla__DOT__m_1__DOT__pin;
        CData/*0:0*/ cla__DOT__m_1__DOT__cin;
        CData/*0:0*/ cla__DOT__m_1__DOT__gout;
        CData/*0:0*/ cla__DOT__m_1__DOT__pout;
        CData/*6:0*/ cla__DOT__m_1__DOT__cout;
        CData/*0:0*/ cla__DOT__m_1__DOT__gout_3;
        CData/*0:0*/ cla__DOT__m_1__DOT__pout_3;
        CData/*0:0*/ cla__DOT__m_1__DOT__gout_7;
        CData/*0:0*/ cla__DOT__m_1__DOT__pout_7;
        CData/*0:0*/ cla__DOT__m_1__DOT__cin_1;
        CData/*3:0*/ cla__DOT__m_1__DOT__a3__DOT__gin;
        CData/*3:0*/ cla__DOT__m_1__DOT__a3__DOT__pin;
        CData/*0:0*/ cla__DOT__m_1__DOT__a3__DOT__cin;
        CData/*0:0*/ cla__DOT__m_1__DOT__a3__DOT__gout;
        CData/*0:0*/ cla__DOT__m_1__DOT__a3__DOT__pout;
        CData/*2:0*/ cla__DOT__m_1__DOT__a3__DOT__cout;
        CData/*0:0*/ cla__DOT__m_1__DOT__a3__DOT__G10;
        CData/*0:0*/ cla__DOT__m_1__DOT__a3__DOT__P10;
        CData/*0:0*/ cla__DOT__m_1__DOT__a3__DOT__G32;
        CData/*0:0*/ cla__DOT__m_1__DOT__a3__DOT__P32;
        CData/*3:0*/ cla__DOT__m_1__DOT__a7__DOT__gin;
        CData/*3:0*/ cla__DOT__m_1__DOT__a7__DOT__pin;
        CData/*0:0*/ cla__DOT__m_1__DOT__a7__DOT__cin;
        CData/*0:0*/ cla__DOT__m_1__DOT__a7__DOT__gout;
        CData/*0:0*/ cla__DOT__m_1__DOT__a7__DOT__pout;
        CData/*2:0*/ cla__DOT__m_1__DOT__a7__DOT__cout;
        CData/*0:0*/ cla__DOT__m_1__DOT__a7__DOT__G10;
        CData/*0:0*/ cla__DOT__m_1__DOT__a7__DOT__P10;
        CData/*0:0*/ cla__DOT__m_1__DOT__a7__DOT__G32;
        CData/*0:0*/ cla__DOT__m_1__DOT__a7__DOT__P32;
        CData/*7:0*/ cla__DOT__m_2__DOT__gin;
        CData/*7:0*/ cla__DOT__m_2__DOT__pin;
        CData/*0:0*/ cla__DOT__m_2__DOT__cin;
        CData/*0:0*/ cla__DOT__m_2__DOT__gout;
        CData/*0:0*/ cla__DOT__m_2__DOT__pout;
        CData/*6:0*/ cla__DOT__m_2__DOT__cout;
        CData/*0:0*/ cla__DOT__m_2__DOT__gout_3;
        CData/*0:0*/ cla__DOT__m_2__DOT__pout_3;
        CData/*0:0*/ cla__DOT__m_2__DOT__gout_7;
        CData/*0:0*/ cla__DOT__m_2__DOT__pout_7;
        CData/*0:0*/ cla__DOT__m_2__DOT__cin_1;
        CData/*3:0*/ cla__DOT__m_2__DOT__a3__DOT__gin;
        CData/*3:0*/ cla__DOT__m_2__DOT__a3__DOT__pin;
        CData/*0:0*/ cla__DOT__m_2__DOT__a3__DOT__cin;
        CData/*0:0*/ cla__DOT__m_2__DOT__a3__DOT__gout;
        CData/*0:0*/ cla__DOT__m_2__DOT__a3__DOT__pout;
        CData/*2:0*/ cla__DOT__m_2__DOT__a3__DOT__cout;
        CData/*0:0*/ cla__DOT__m_2__DOT__a3__DOT__G10;
        CData/*0:0*/ cla__DOT__m_2__DOT__a3__DOT__P10;
    };
    struct {
        CData/*0:0*/ cla__DOT__m_2__DOT__a3__DOT__G32;
        CData/*0:0*/ cla__DOT__m_2__DOT__a3__DOT__P32;
        CData/*3:0*/ cla__DOT__m_2__DOT__a7__DOT__gin;
        CData/*3:0*/ cla__DOT__m_2__DOT__a7__DOT__pin;
        CData/*0:0*/ cla__DOT__m_2__DOT__a7__DOT__cin;
        CData/*0:0*/ cla__DOT__m_2__DOT__a7__DOT__gout;
        CData/*0:0*/ cla__DOT__m_2__DOT__a7__DOT__pout;
        CData/*2:0*/ cla__DOT__m_2__DOT__a7__DOT__cout;
        CData/*0:0*/ cla__DOT__m_2__DOT__a7__DOT__G10;
        CData/*0:0*/ cla__DOT__m_2__DOT__a7__DOT__P10;
        CData/*0:0*/ cla__DOT__m_2__DOT__a7__DOT__G32;
        CData/*0:0*/ cla__DOT__m_2__DOT__a7__DOT__P32;
        CData/*7:0*/ cla__DOT__m_3__DOT__gin;
        CData/*7:0*/ cla__DOT__m_3__DOT__pin;
        CData/*0:0*/ cla__DOT__m_3__DOT__cin;
        CData/*0:0*/ cla__DOT__m_3__DOT__gout;
        CData/*0:0*/ cla__DOT__m_3__DOT__pout;
        CData/*6:0*/ cla__DOT__m_3__DOT__cout;
        CData/*0:0*/ cla__DOT__m_3__DOT__gout_3;
        CData/*0:0*/ cla__DOT__m_3__DOT__pout_3;
        CData/*0:0*/ cla__DOT__m_3__DOT__gout_7;
        CData/*0:0*/ cla__DOT__m_3__DOT__pout_7;
        CData/*0:0*/ cla__DOT__m_3__DOT__cin_1;
        CData/*3:0*/ cla__DOT__m_3__DOT__a3__DOT__gin;
        CData/*3:0*/ cla__DOT__m_3__DOT__a3__DOT__pin;
        CData/*0:0*/ cla__DOT__m_3__DOT__a3__DOT__cin;
        CData/*0:0*/ cla__DOT__m_3__DOT__a3__DOT__gout;
        CData/*0:0*/ cla__DOT__m_3__DOT__a3__DOT__pout;
        CData/*2:0*/ cla__DOT__m_3__DOT__a3__DOT__cout;
        CData/*0:0*/ cla__DOT__m_3__DOT__a3__DOT__G10;
        CData/*0:0*/ cla__DOT__m_3__DOT__a3__DOT__P10;
        CData/*0:0*/ cla__DOT__m_3__DOT__a3__DOT__G32;
        CData/*0:0*/ cla__DOT__m_3__DOT__a3__DOT__P32;
        CData/*3:0*/ cla__DOT__m_3__DOT__a7__DOT__gin;
        CData/*3:0*/ cla__DOT__m_3__DOT__a7__DOT__pin;
        CData/*0:0*/ cla__DOT__m_3__DOT__a7__DOT__cin;
        CData/*0:0*/ cla__DOT__m_3__DOT__a7__DOT__gout;
        CData/*0:0*/ cla__DOT__m_3__DOT__a7__DOT__pout;
        CData/*2:0*/ cla__DOT__m_3__DOT__a7__DOT__cout;
        CData/*0:0*/ cla__DOT__m_3__DOT__a7__DOT__G10;
        CData/*0:0*/ cla__DOT__m_3__DOT__a7__DOT__P10;
        CData/*0:0*/ cla__DOT__m_3__DOT__a7__DOT__G32;
        CData/*0:0*/ cla__DOT__m_3__DOT__a7__DOT__P32;
        CData/*7:0*/ cla__DOT__m_4__DOT__gin;
        CData/*7:0*/ cla__DOT__m_4__DOT__pin;
        CData/*0:0*/ cla__DOT__m_4__DOT__cin;
        CData/*0:0*/ cla__DOT__m_4__DOT__gout;
        CData/*0:0*/ cla__DOT__m_4__DOT__pout;
        CData/*6:0*/ cla__DOT__m_4__DOT__cout;
        CData/*0:0*/ cla__DOT__m_4__DOT__gout_3;
        CData/*0:0*/ cla__DOT__m_4__DOT__pout_3;
        CData/*0:0*/ cla__DOT__m_4__DOT__gout_7;
        CData/*0:0*/ cla__DOT__m_4__DOT__pout_7;
        CData/*0:0*/ cla__DOT__m_4__DOT__cin_1;
        CData/*3:0*/ cla__DOT__m_4__DOT__a3__DOT__gin;
        CData/*3:0*/ cla__DOT__m_4__DOT__a3__DOT__pin;
        CData/*0:0*/ cla__DOT__m_4__DOT__a3__DOT__cin;
        CData/*0:0*/ cla__DOT__m_4__DOT__a3__DOT__gout;
        CData/*0:0*/ cla__DOT__m_4__DOT__a3__DOT__pout;
        CData/*2:0*/ cla__DOT__m_4__DOT__a3__DOT__cout;
        CData/*0:0*/ cla__DOT__m_4__DOT__a3__DOT__G10;
        CData/*0:0*/ cla__DOT__m_4__DOT__a3__DOT__P10;
        CData/*0:0*/ cla__DOT__m_4__DOT__a3__DOT__G32;
        CData/*0:0*/ cla__DOT__m_4__DOT__a3__DOT__P32;
    };
    struct {
        CData/*3:0*/ cla__DOT__m_4__DOT__a7__DOT__gin;
        CData/*3:0*/ cla__DOT__m_4__DOT__a7__DOT__pin;
        CData/*0:0*/ cla__DOT__m_4__DOT__a7__DOT__cin;
        CData/*0:0*/ cla__DOT__m_4__DOT__a7__DOT__gout;
        CData/*0:0*/ cla__DOT__m_4__DOT__a7__DOT__pout;
        CData/*2:0*/ cla__DOT__m_4__DOT__a7__DOT__cout;
        CData/*0:0*/ cla__DOT__m_4__DOT__a7__DOT__G10;
        CData/*0:0*/ cla__DOT__m_4__DOT__a7__DOT__P10;
        CData/*0:0*/ cla__DOT__m_4__DOT__a7__DOT__G32;
        CData/*0:0*/ cla__DOT__m_4__DOT__a7__DOT__P32;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VactContinue;
        VL_IN(a,31,0);
        VL_IN(b,31,0);
        VL_OUT(sum,31,0);
        IData/*31:0*/ cla__DOT__a;
        IData/*31:0*/ cla__DOT__b;
        IData/*31:0*/ cla__DOT__sum;
        IData/*31:0*/ cla__DOT__gin;
        IData/*31:0*/ cla__DOT__pin;
        IData/*31:0*/ cla__DOT__cout;
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
