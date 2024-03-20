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
    bufp->chgIData(oldp+0,(vlSelf->a),32);
    bufp->chgIData(oldp+1,(vlSelf->b),32);
    bufp->chgBit(oldp+2,(vlSelf->cin));
    bufp->chgIData(oldp+3,(vlSelf->sum),32);
    bufp->chgIData(oldp+4,(vlSelf->cla__DOT__a),32);
    bufp->chgIData(oldp+5,(vlSelf->cla__DOT__b),32);
    bufp->chgBit(oldp+6,(vlSelf->cla__DOT__cin));
    bufp->chgIData(oldp+7,(vlSelf->cla__DOT__sum),32);
    bufp->chgIData(oldp+8,(vlSelf->cla__DOT__gin),32);
    bufp->chgIData(oldp+9,(vlSelf->cla__DOT__pin),32);
    bufp->chgIData(oldp+10,(vlSelf->cla__DOT__cout),32);
    bufp->chgBit(oldp+11,(vlSelf->cla__DOT__c_7));
    bufp->chgBit(oldp+12,(vlSelf->cla__DOT__c_15));
    bufp->chgBit(oldp+13,(vlSelf->cla__DOT__c_23));
    bufp->chgBit(oldp+14,(vlSelf->cla__DOT__c_31));
    bufp->chgBit(oldp+15,(vlSelf->cla__DOT__gout1));
    bufp->chgBit(oldp+16,(vlSelf->cla__DOT__pout1));
    bufp->chgBit(oldp+17,(vlSelf->cla__DOT__gout2));
    bufp->chgBit(oldp+18,(vlSelf->cla__DOT__pout2));
    bufp->chgBit(oldp+19,(vlSelf->cla__DOT__gout3));
    bufp->chgBit(oldp+20,(vlSelf->cla__DOT__pout3));
    bufp->chgBit(oldp+21,(vlSelf->cla__DOT__gout4));
    bufp->chgBit(oldp+22,(vlSelf->cla__DOT__pout4));
    bufp->chgCData(oldp+23,(vlSelf->cla__DOT__m_1__DOT__gin),8);
    bufp->chgCData(oldp+24,(vlSelf->cla__DOT__m_1__DOT__pin),8);
    bufp->chgBit(oldp+25,(vlSelf->cla__DOT__m_1__DOT__cin));
    bufp->chgBit(oldp+26,(vlSelf->cla__DOT__m_1__DOT__gout));
    bufp->chgBit(oldp+27,(vlSelf->cla__DOT__m_1__DOT__pout));
    bufp->chgCData(oldp+28,(vlSelf->cla__DOT__m_1__DOT__cout),7);
    bufp->chgBit(oldp+29,(vlSelf->cla__DOT__m_1__DOT__gout_3));
    bufp->chgBit(oldp+30,(vlSelf->cla__DOT__m_1__DOT__pout_3));
    bufp->chgBit(oldp+31,(vlSelf->cla__DOT__m_1__DOT__gout_7));
    bufp->chgBit(oldp+32,(vlSelf->cla__DOT__m_1__DOT__pout_7));
    bufp->chgBit(oldp+33,(vlSelf->cla__DOT__m_1__DOT__cin_1));
    bufp->chgCData(oldp+34,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__gin),4);
    bufp->chgCData(oldp+35,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__pin),4);
    bufp->chgBit(oldp+36,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__cin));
    bufp->chgBit(oldp+37,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__gout));
    bufp->chgBit(oldp+38,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__pout));
    bufp->chgCData(oldp+39,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__cout),3);
    bufp->chgBit(oldp+40,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__G10));
    bufp->chgBit(oldp+41,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__P10));
    bufp->chgBit(oldp+42,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__G32));
    bufp->chgBit(oldp+43,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__P32));
    bufp->chgCData(oldp+44,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__gin),4);
    bufp->chgCData(oldp+45,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__pin),4);
    bufp->chgBit(oldp+46,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__cin));
    bufp->chgBit(oldp+47,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__gout));
    bufp->chgBit(oldp+48,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__pout));
    bufp->chgCData(oldp+49,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__cout),3);
    bufp->chgBit(oldp+50,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__G10));
    bufp->chgBit(oldp+51,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__P10));
    bufp->chgBit(oldp+52,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__G32));
    bufp->chgBit(oldp+53,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__P32));
    bufp->chgCData(oldp+54,(vlSelf->cla__DOT__m_2__DOT__gin),8);
    bufp->chgCData(oldp+55,(vlSelf->cla__DOT__m_2__DOT__pin),8);
    bufp->chgBit(oldp+56,(vlSelf->cla__DOT__m_2__DOT__cin));
    bufp->chgBit(oldp+57,(vlSelf->cla__DOT__m_2__DOT__gout));
    bufp->chgBit(oldp+58,(vlSelf->cla__DOT__m_2__DOT__pout));
    bufp->chgCData(oldp+59,(vlSelf->cla__DOT__m_2__DOT__cout),7);
    bufp->chgBit(oldp+60,(vlSelf->cla__DOT__m_2__DOT__gout_3));
    bufp->chgBit(oldp+61,(vlSelf->cla__DOT__m_2__DOT__pout_3));
    bufp->chgBit(oldp+62,(vlSelf->cla__DOT__m_2__DOT__gout_7));
    bufp->chgBit(oldp+63,(vlSelf->cla__DOT__m_2__DOT__pout_7));
    bufp->chgBit(oldp+64,(vlSelf->cla__DOT__m_2__DOT__cin_1));
    bufp->chgCData(oldp+65,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__gin),4);
    bufp->chgCData(oldp+66,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__pin),4);
    bufp->chgBit(oldp+67,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__cin));
    bufp->chgBit(oldp+68,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__gout));
    bufp->chgBit(oldp+69,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__pout));
    bufp->chgCData(oldp+70,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__cout),3);
    bufp->chgBit(oldp+71,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__G10));
    bufp->chgBit(oldp+72,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__P10));
    bufp->chgBit(oldp+73,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__G32));
    bufp->chgBit(oldp+74,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__P32));
    bufp->chgCData(oldp+75,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__gin),4);
    bufp->chgCData(oldp+76,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__pin),4);
    bufp->chgBit(oldp+77,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__cin));
    bufp->chgBit(oldp+78,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__gout));
    bufp->chgBit(oldp+79,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__pout));
    bufp->chgCData(oldp+80,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__cout),3);
    bufp->chgBit(oldp+81,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__G10));
    bufp->chgBit(oldp+82,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__P10));
    bufp->chgBit(oldp+83,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__G32));
    bufp->chgBit(oldp+84,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__P32));
    bufp->chgCData(oldp+85,(vlSelf->cla__DOT__m_3__DOT__gin),8);
    bufp->chgCData(oldp+86,(vlSelf->cla__DOT__m_3__DOT__pin),8);
    bufp->chgBit(oldp+87,(vlSelf->cla__DOT__m_3__DOT__cin));
    bufp->chgBit(oldp+88,(vlSelf->cla__DOT__m_3__DOT__gout));
    bufp->chgBit(oldp+89,(vlSelf->cla__DOT__m_3__DOT__pout));
    bufp->chgCData(oldp+90,(vlSelf->cla__DOT__m_3__DOT__cout),7);
    bufp->chgBit(oldp+91,(vlSelf->cla__DOT__m_3__DOT__gout_3));
    bufp->chgBit(oldp+92,(vlSelf->cla__DOT__m_3__DOT__pout_3));
    bufp->chgBit(oldp+93,(vlSelf->cla__DOT__m_3__DOT__gout_7));
    bufp->chgBit(oldp+94,(vlSelf->cla__DOT__m_3__DOT__pout_7));
    bufp->chgBit(oldp+95,(vlSelf->cla__DOT__m_3__DOT__cin_1));
    bufp->chgCData(oldp+96,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__gin),4);
    bufp->chgCData(oldp+97,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__pin),4);
    bufp->chgBit(oldp+98,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__cin));
    bufp->chgBit(oldp+99,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__gout));
    bufp->chgBit(oldp+100,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__pout));
    bufp->chgCData(oldp+101,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__cout),3);
    bufp->chgBit(oldp+102,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__G10));
    bufp->chgBit(oldp+103,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__P10));
    bufp->chgBit(oldp+104,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__G32));
    bufp->chgBit(oldp+105,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__P32));
    bufp->chgCData(oldp+106,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__gin),4);
    bufp->chgCData(oldp+107,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__pin),4);
    bufp->chgBit(oldp+108,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__cin));
    bufp->chgBit(oldp+109,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__gout));
    bufp->chgBit(oldp+110,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__pout));
    bufp->chgCData(oldp+111,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__cout),3);
    bufp->chgBit(oldp+112,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__G10));
    bufp->chgBit(oldp+113,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__P10));
    bufp->chgBit(oldp+114,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__G32));
    bufp->chgBit(oldp+115,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__P32));
    bufp->chgCData(oldp+116,(vlSelf->cla__DOT__m_4__DOT__gin),8);
    bufp->chgCData(oldp+117,(vlSelf->cla__DOT__m_4__DOT__pin),8);
    bufp->chgBit(oldp+118,(vlSelf->cla__DOT__m_4__DOT__cin));
    bufp->chgBit(oldp+119,(vlSelf->cla__DOT__m_4__DOT__gout));
    bufp->chgBit(oldp+120,(vlSelf->cla__DOT__m_4__DOT__pout));
    bufp->chgCData(oldp+121,(vlSelf->cla__DOT__m_4__DOT__cout),7);
    bufp->chgBit(oldp+122,(vlSelf->cla__DOT__m_4__DOT__gout_3));
    bufp->chgBit(oldp+123,(vlSelf->cla__DOT__m_4__DOT__pout_3));
    bufp->chgBit(oldp+124,(vlSelf->cla__DOT__m_4__DOT__gout_7));
    bufp->chgBit(oldp+125,(vlSelf->cla__DOT__m_4__DOT__pout_7));
    bufp->chgBit(oldp+126,(vlSelf->cla__DOT__m_4__DOT__cin_1));
    bufp->chgCData(oldp+127,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__gin),4);
    bufp->chgCData(oldp+128,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__pin),4);
    bufp->chgBit(oldp+129,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__cin));
    bufp->chgBit(oldp+130,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__gout));
    bufp->chgBit(oldp+131,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__pout));
    bufp->chgCData(oldp+132,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__cout),3);
    bufp->chgBit(oldp+133,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__G10));
    bufp->chgBit(oldp+134,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__P10));
    bufp->chgBit(oldp+135,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__G32));
    bufp->chgBit(oldp+136,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__P32));
    bufp->chgCData(oldp+137,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__gin),4);
    bufp->chgCData(oldp+138,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__pin),4);
    bufp->chgBit(oldp+139,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__cin));
    bufp->chgBit(oldp+140,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__gout));
    bufp->chgBit(oldp+141,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__pout));
    bufp->chgCData(oldp+142,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__cout),3);
    bufp->chgBit(oldp+143,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__G10));
    bufp->chgBit(oldp+144,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__P10));
    bufp->chgBit(oldp+145,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__G32));
    bufp->chgBit(oldp+146,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__P32));
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
