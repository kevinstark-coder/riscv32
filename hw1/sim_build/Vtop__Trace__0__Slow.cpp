// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"SWITCH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"LED",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("rca4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"SWITCH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"LED",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+5,0,"cout0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"ignored",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("a0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"cout_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("a0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"s_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"cout_tmp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"cout_tmp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("h0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+21,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("h1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+25,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"s_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"cout_tmp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"cout_tmp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("h0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+37,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("h1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+41,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+45,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+49,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"cout_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("a0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+51,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"s_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"cout_tmp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"cout_tmp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("h0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+59,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("h1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+63,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"s_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"cout_tmp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"cout_tmp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("h0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("h1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+79,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->SWITCH),8);
    bufp->fullCData(oldp+2,(vlSelf->LED),8);
    bufp->fullCData(oldp+3,(vlSelf->rca4__DOT__SWITCH),8);
    bufp->fullCData(oldp+4,(vlSelf->rca4__DOT__LED),8);
    bufp->fullBit(oldp+5,(vlSelf->rca4__DOT__cout0));
    bufp->fullBit(oldp+6,(vlSelf->rca4__DOT__ignored));
    bufp->fullBit(oldp+7,(vlSelf->rca4__DOT__a0__DOT__cin));
    bufp->fullCData(oldp+8,(vlSelf->rca4__DOT__a0__DOT__a),2);
    bufp->fullCData(oldp+9,(vlSelf->rca4__DOT__a0__DOT__b),2);
    bufp->fullCData(oldp+10,(vlSelf->rca4__DOT__a0__DOT__s),2);
    bufp->fullBit(oldp+11,(vlSelf->rca4__DOT__a0__DOT__cout));
    bufp->fullBit(oldp+12,(vlSelf->rca4__DOT__a0__DOT__cout_tmp));
    bufp->fullBit(oldp+13,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__cin));
    bufp->fullBit(oldp+14,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__a));
    bufp->fullBit(oldp+15,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__b));
    bufp->fullBit(oldp+16,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__s));
    bufp->fullBit(oldp+17,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__cout));
    bufp->fullBit(oldp+18,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__s_tmp));
    bufp->fullBit(oldp+19,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__cout_tmp1));
    bufp->fullBit(oldp+20,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__cout_tmp2));
    bufp->fullBit(oldp+21,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__a));
    bufp->fullBit(oldp+22,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__b));
    bufp->fullBit(oldp+23,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__s));
    bufp->fullBit(oldp+24,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__cout));
    bufp->fullBit(oldp+25,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h1__DOT__a));
    bufp->fullBit(oldp+26,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h1__DOT__b));
    bufp->fullBit(oldp+27,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h1__DOT__s));
    bufp->fullBit(oldp+28,(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h1__DOT__cout));
    bufp->fullBit(oldp+29,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__cin));
    bufp->fullBit(oldp+30,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__a));
    bufp->fullBit(oldp+31,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__b));
    bufp->fullBit(oldp+32,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__s));
    bufp->fullBit(oldp+33,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout));
    bufp->fullBit(oldp+34,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__s_tmp));
    bufp->fullBit(oldp+35,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout_tmp1));
    bufp->fullBit(oldp+36,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout_tmp2));
    bufp->fullBit(oldp+37,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__a));
    bufp->fullBit(oldp+38,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__b));
    bufp->fullBit(oldp+39,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__s));
    bufp->fullBit(oldp+40,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__cout));
    bufp->fullBit(oldp+41,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__a));
    bufp->fullBit(oldp+42,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__b));
    bufp->fullBit(oldp+43,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__s));
    bufp->fullBit(oldp+44,(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__cout));
    bufp->fullBit(oldp+45,(vlSelf->rca4__DOT__a3__DOT__cin));
    bufp->fullCData(oldp+46,(vlSelf->rca4__DOT__a3__DOT__a),2);
    bufp->fullCData(oldp+47,(vlSelf->rca4__DOT__a3__DOT__b),2);
    bufp->fullCData(oldp+48,(vlSelf->rca4__DOT__a3__DOT__s),2);
    bufp->fullBit(oldp+49,(vlSelf->rca4__DOT__a3__DOT__cout));
    bufp->fullBit(oldp+50,(vlSelf->rca4__DOT__a3__DOT__cout_tmp));
    bufp->fullBit(oldp+51,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__cin));
    bufp->fullBit(oldp+52,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__a));
    bufp->fullBit(oldp+53,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__b));
    bufp->fullBit(oldp+54,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__s));
    bufp->fullBit(oldp+55,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout));
    bufp->fullBit(oldp+56,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__s_tmp));
    bufp->fullBit(oldp+57,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout_tmp1));
    bufp->fullBit(oldp+58,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout_tmp2));
    bufp->fullBit(oldp+59,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__a));
    bufp->fullBit(oldp+60,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__b));
    bufp->fullBit(oldp+61,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__s));
    bufp->fullBit(oldp+62,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__cout));
    bufp->fullBit(oldp+63,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__a));
    bufp->fullBit(oldp+64,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__b));
    bufp->fullBit(oldp+65,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__s));
    bufp->fullBit(oldp+66,(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__cout));
    bufp->fullBit(oldp+67,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__cin));
    bufp->fullBit(oldp+68,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__a));
    bufp->fullBit(oldp+69,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__b));
    bufp->fullBit(oldp+70,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__s));
    bufp->fullBit(oldp+71,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__cout));
    bufp->fullBit(oldp+72,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__s_tmp));
    bufp->fullBit(oldp+73,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__cout_tmp1));
    bufp->fullBit(oldp+74,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__cout_tmp2));
    bufp->fullBit(oldp+75,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__a));
    bufp->fullBit(oldp+76,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__b));
    bufp->fullBit(oldp+77,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__s));
    bufp->fullBit(oldp+78,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__cout));
    bufp->fullBit(oldp+79,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__a));
    bufp->fullBit(oldp+80,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__b));
    bufp->fullBit(oldp+81,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__s));
    bufp->fullBit(oldp+82,(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__cout));
}
