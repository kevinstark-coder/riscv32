// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_DIVU_1ITER_H_
#define VERILATED_VTOP_DIVU_1ITER_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_divu_1iter final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN(i_dividend,31,0);
    VL_IN(i_divisor,31,0);
    VL_IN(i_remainder,31,0);
    VL_IN(i_quotient,31,0);
    VL_OUT(o_dividend,31,0);
    VL_OUT(o_remainder,31,0);
    VL_OUT(o_quotient,31,0);
    IData/*31:0*/ temp_remainder;
    IData/*31:0*/ temp_quotient;
    IData/*31:0*/ __Vtogcov__i_dividend;
    IData/*31:0*/ __Vtogcov__i_divisor;
    IData/*31:0*/ __Vtogcov__i_remainder;
    IData/*31:0*/ __Vtogcov__i_quotient;
    IData/*31:0*/ __Vtogcov__o_dividend;
    IData/*31:0*/ __Vtogcov__o_remainder;
    IData/*31:0*/ __Vtogcov__o_quotient;
    IData/*31:0*/ __Vtogcov__temp_remainder;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_divu_1iter(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_divu_1iter();
    VL_UNCOPYABLE(Vtop_divu_1iter);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
