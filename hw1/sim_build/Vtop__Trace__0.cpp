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
    bufp->chgCData(oldp+0,(vlSelf->SWITCH),8);
    bufp->chgCData(oldp+1,(vlSelf->LED),8);
    bufp->chgCData(oldp+2,(vlSelf->rca4__DOT__SWITCH),8);
    bufp->chgCData(oldp+3,(vlSelf->rca4__DOT__LED),8);
    bufp->chgBit(oldp+4,(vlSelf->rca4__DOT__cout0));
    bufp->chgBit(oldp+5,(vlSelf->rca4__DOT__ignored));
    bufp->chgBit(oldp+6,(vlSelf->rca4__DOT__a0__DOT__cin));
    bufp->chgCData(oldp+7,(vlSelf->rca4__DOT__a0__DOT__a),2);
    bufp->chgCData(oldp+8,(vlSelf->rca4__DOT__a0__DOT__b),2);
    bufp->chgCData(oldp+9,(vlSelf->rca4__DOT__a0__DOT__s),2);
    bufp->chgBit(oldp+10,(vlSelf->rca4__DOT__a0__DOT__cout));
    bufp->chgBit(oldp+11,(vlSelf->rca4__DOT__a0__DOT__cout_tmp));
    bufp->chgBit(oldp+12,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__cin));
    bufp->chgBit(oldp+13,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__a));
    bufp->chgBit(oldp+14,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__b));
    bufp->chgBit(oldp+15,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__s));
    bufp->chgBit(oldp+16,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__cout));
    bufp->chgBit(oldp+17,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__s_tmp));
    bufp->chgBit(oldp+18,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__cout_tmp1));
    bufp->chgBit(oldp+19,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__cout_tmp2));
    bufp->chgBit(oldp+20,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__a));
    bufp->chgBit(oldp+21,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__b));
    bufp->chgBit(oldp+22,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__s));
    bufp->chgBit(oldp+23,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__cout));
    bufp->chgBit(oldp+24,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h1__DOT__a));
    bufp->chgBit(oldp+25,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h1__DOT__b));
    bufp->chgBit(oldp+26,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h1__DOT__s));
    bufp->chgBit(oldp+27,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h1__DOT__cout));
    bufp->chgBit(oldp+28,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__cin));
    bufp->chgBit(oldp+29,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__a));
    bufp->chgBit(oldp+30,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__b));
    bufp->chgBit(oldp+31,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__s));
    bufp->chgBit(oldp+32,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout));
    bufp->chgBit(oldp+33,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__s_tmp));
    bufp->chgBit(oldp+34,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout_tmp1));
    bufp->chgBit(oldp+35,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout_tmp2));
    bufp->chgBit(oldp+36,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__a));
    bufp->chgBit(oldp+37,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__b));
    bufp->chgBit(oldp+38,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__s));
    bufp->chgBit(oldp+39,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__cout));
    bufp->chgBit(oldp+40,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__a));
    bufp->chgBit(oldp+41,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__b));
    bufp->chgBit(oldp+42,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__s));
    bufp->chgBit(oldp+43,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__cout));
    bufp->chgBit(oldp+44,(vlSelf->rca4__DOT__a3__DOT__cin));
    bufp->chgCData(oldp+45,(vlSelf->rca4__DOT__a3__DOT__a),2);
    bufp->chgCData(oldp+46,(vlSelf->rca4__DOT__a3__DOT__b),2);
    bufp->chgCData(oldp+47,(vlSelf->rca4__DOT__a3__DOT__s),2);
    bufp->chgBit(oldp+48,(vlSelf->rca4__DOT__a3__DOT__cout));
    bufp->chgBit(oldp+49,(vlSelf->rca4__DOT__a3__DOT__cout_tmp));
    bufp->chgBit(oldp+50,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__cin));
    bufp->chgBit(oldp+51,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__a));
    bufp->chgBit(oldp+52,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__b));
    bufp->chgBit(oldp+53,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__s));
    bufp->chgBit(oldp+54,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout));
    bufp->chgBit(oldp+55,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__s_tmp));
    bufp->chgBit(oldp+56,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout_tmp1));
    bufp->chgBit(oldp+57,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout_tmp2));
    bufp->chgBit(oldp+58,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__a));
    bufp->chgBit(oldp+59,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__b));
    bufp->chgBit(oldp+60,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__s));
    bufp->chgBit(oldp+61,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__cout));
    bufp->chgBit(oldp+62,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__a));
    bufp->chgBit(oldp+63,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__b));
    bufp->chgBit(oldp+64,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__s));
    bufp->chgBit(oldp+65,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__cout));
    bufp->chgBit(oldp+66,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__cin));
    bufp->chgBit(oldp+67,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__a));
    bufp->chgBit(oldp+68,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__b));
    bufp->chgBit(oldp+69,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__s));
    bufp->chgBit(oldp+70,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__cout));
    bufp->chgBit(oldp+71,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__s_tmp));
    bufp->chgBit(oldp+72,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__cout_tmp1));
    bufp->chgBit(oldp+73,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__cout_tmp2));
    bufp->chgBit(oldp+74,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__a));
    bufp->chgBit(oldp+75,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__b));
    bufp->chgBit(oldp+76,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__s));
    bufp->chgBit(oldp+77,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__cout));
    bufp->chgBit(oldp+78,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__a));
    bufp->chgBit(oldp+79,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__b));
    bufp->chgBit(oldp+80,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__s));
    bufp->chgBit(oldp+81,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__cout));
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
