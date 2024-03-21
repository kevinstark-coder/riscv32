// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_divu_1iter.h"

void Vtop_divu_1iter___ctor_var_reset(Vtop_divu_1iter* vlSelf);

Vtop_divu_1iter::Vtop_divu_1iter(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_divu_1iter___ctor_var_reset(this);
}

void Vtop_divu_1iter___configure_coverage(Vtop_divu_1iter* vlSelf, bool first);

void Vtop_divu_1iter::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vtop_divu_1iter___configure_coverage(this, first);
}

Vtop_divu_1iter::~Vtop_divu_1iter() {
}

// Coverage
void Vtop_divu_1iter::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
