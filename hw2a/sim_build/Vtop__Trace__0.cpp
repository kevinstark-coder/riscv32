// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->i_dividend),32);
    bufp->chgIData(oldp+1,(vlSelf->i_divisor),32);
    bufp->chgIData(oldp+2,(vlSelf->i_remainder),32);
    bufp->chgIData(oldp+3,(vlSelf->i_quotient),32);
    bufp->chgIData(oldp+4,(vlSelf->o_dividend),32);
    bufp->chgIData(oldp+5,(vlSelf->o_remainder),32);
    bufp->chgIData(oldp+6,(vlSelf->o_quotient),32);
    bufp->chgIData(oldp+7,(vlSelf->divu_1iter__DOT__i_dividend),32);
    bufp->chgIData(oldp+8,(vlSelf->divu_1iter__DOT__i_divisor),32);
    bufp->chgIData(oldp+9,(vlSelf->divu_1iter__DOT__i_remainder),32);
    bufp->chgIData(oldp+10,(vlSelf->divu_1iter__DOT__i_quotient),32);
    bufp->chgIData(oldp+11,(vlSelf->divu_1iter__DOT__o_dividend),32);
    bufp->chgIData(oldp+12,(vlSelf->divu_1iter__DOT__o_remainder),32);
    bufp->chgIData(oldp+13,(vlSelf->divu_1iter__DOT__o_quotient),32);
    bufp->chgIData(oldp+14,(vlSelf->divu_1iter__DOT__remainder),32);
    bufp->chgIData(oldp+15,(vlSelf->divu_1iter__DOT__dividend),32);
    bufp->chgIData(oldp+16,(vlSelf->divu_1iter__DOT__quotient),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
