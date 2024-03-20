// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*30:0*/ cla__DOT____VdfgTmp_hb04ad8a1__0;
    cla__DOT____VdfgTmp_hb04ad8a1__0 = 0;
    CData/*0:0*/ cla__DOT__m_1__DOT__a3__DOT____VdfgTmp_h5c66182c__0;
    cla__DOT__m_1__DOT__a3__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ cla__DOT__m_1__DOT__a7__DOT____VdfgTmp_h5c66182c__0;
    cla__DOT__m_1__DOT__a7__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ cla__DOT__m_2__DOT__a3__DOT____VdfgTmp_h5c66182c__0;
    cla__DOT__m_2__DOT__a3__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ cla__DOT__m_2__DOT__a7__DOT____VdfgTmp_h5c66182c__0;
    cla__DOT__m_2__DOT__a7__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ cla__DOT__m_3__DOT__a3__DOT____VdfgTmp_h5c66182c__0;
    cla__DOT__m_3__DOT__a3__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ cla__DOT__m_3__DOT__a7__DOT____VdfgTmp_h5c66182c__0;
    cla__DOT__m_3__DOT__a7__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ cla__DOT__m_4__DOT__a3__DOT____VdfgTmp_h5c66182c__0;
    cla__DOT__m_4__DOT__a3__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ cla__DOT__m_4__DOT__a7__DOT____VdfgTmp_h5c66182c__0;
    cla__DOT__m_4__DOT__a7__DOT____VdfgTmp_h5c66182c__0 = 0;
    // Body
    vlSelf->cla__DOT__a = vlSelf->a;
    vlSelf->cla__DOT__b = vlSelf->b;
    vlSelf->cla__DOT__cin = vlSelf->cin;
    vlSelf->cla__DOT__gin = (vlSelf->a & vlSelf->b);
    vlSelf->cla__DOT__pin = (vlSelf->a | vlSelf->b);
    vlSelf->cla__DOT__m_1__DOT__cin = vlSelf->cla__DOT__cin;
    vlSelf->cla__DOT__m_1__DOT__gin = (0xffU & (vlSelf->cla__DOT__gin 
                                                >> 0U));
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__gin = (0xfU 
                                                & (vlSelf->cla__DOT__gin 
                                                   >> 0U));
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__gin = (0xfU 
                                                & (vlSelf->cla__DOT__gin 
                                                   >> 4U));
    vlSelf->cla__DOT__m_2__DOT__gin = (0xffU & (vlSelf->cla__DOT__gin 
                                                >> 8U));
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__gin = (0xfU 
                                                & (vlSelf->cla__DOT__gin 
                                                   >> 8U));
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__gin = (0xfU 
                                                & (vlSelf->cla__DOT__gin 
                                                   >> 0xcU));
    vlSelf->cla__DOT__m_3__DOT__gin = (0xffU & (vlSelf->cla__DOT__gin 
                                                >> 0x10U));
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__gin = (0xfU 
                                                & (vlSelf->cla__DOT__gin 
                                                   >> 0x10U));
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__gin = (0xfU 
                                                & (vlSelf->cla__DOT__gin 
                                                   >> 0x14U));
    vlSelf->cla__DOT__m_4__DOT__gin = (0xffU & (vlSelf->cla__DOT__gin 
                                                >> 0x18U));
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__gin = (0xfU 
                                                & (vlSelf->cla__DOT__gin 
                                                   >> 0x18U));
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__gin = (0xfU 
                                                & (vlSelf->cla__DOT__gin 
                                                   >> 0x1cU));
    vlSelf->cla__DOT__m_1__DOT__pin = (0xffU & (vlSelf->cla__DOT__pin 
                                                >> 0U));
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__pin = (0xfU 
                                                & (vlSelf->cla__DOT__pin 
                                                   >> 0U));
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__pin = (0xfU 
                                                & (vlSelf->cla__DOT__pin 
                                                   >> 4U));
    vlSelf->cla__DOT__m_2__DOT__pin = (0xffU & (vlSelf->cla__DOT__pin 
                                                >> 8U));
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__pin = (0xfU 
                                                & (vlSelf->cla__DOT__pin 
                                                   >> 8U));
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__pin = (0xfU 
                                                & (vlSelf->cla__DOT__pin 
                                                   >> 0xcU));
    vlSelf->cla__DOT__m_3__DOT__pin = (0xffU & (vlSelf->cla__DOT__pin 
                                                >> 0x10U));
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__pin = (0xfU 
                                                & (vlSelf->cla__DOT__pin 
                                                   >> 0x10U));
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__pin = (0xfU 
                                                & (vlSelf->cla__DOT__pin 
                                                   >> 0x14U));
    vlSelf->cla__DOT__m_4__DOT__pin = (0xffU & (vlSelf->cla__DOT__pin 
                                                >> 0x18U));
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__pin = (0xfU 
                                                & (vlSelf->cla__DOT__pin 
                                                   >> 0x18U));
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__pin = (0xfU 
                                                & (vlSelf->cla__DOT__pin 
                                                   >> 0x1cU));
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__G32 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 0x1fU) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 0x1fU) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 0x1eU))));
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__G10 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 0x1dU) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 0x1dU) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 0x1cU))));
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__P32 = (IData)(
                                                       (0xc0000000U 
                                                        == 
                                                        (0xc0000000U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__P10 = (IData)(
                                                       (0x30000000U 
                                                        == 
                                                        (0x30000000U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__G32 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 0x1bU) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 0x1bU) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 0x1aU))));
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__P10 = (IData)(
                                                       (0x3000000U 
                                                        == 
                                                        (0x3000000U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__G10 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 0x19U) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 0x19U) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 0x18U))));
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__G32 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 0x17U) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 0x17U) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 0x16U))));
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__P32 = (IData)(
                                                       (0xc000000U 
                                                        == 
                                                        (0xc000000U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__G10 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 0x15U) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 0x15U) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 0x14U))));
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__G32 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 0x13U) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 0x13U) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 0x12U))));
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__P10 = (IData)(
                                                       (0x30000U 
                                                        == 
                                                        (0x30000U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__G10 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 0x11U) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 0x11U) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 0x10U))));
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__G32 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 0xfU) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 0xfU) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 0xeU))));
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__G10 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 0xdU) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 0xdU) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 0xcU))));
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__P10 = (IData)(
                                                       (0x300000U 
                                                        == 
                                                        (0x300000U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__G32 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 0xbU) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 0xbU) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 0xaU))));
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__P10 = (IData)(
                                                       (0x300U 
                                                        == 
                                                        (0x300U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__G10 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 9U) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 9U) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 8U))));
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__G32 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 7U) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 7U) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 6U))));
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__P32 = (IData)(
                                                       (0xc0000U 
                                                        == 
                                                        (0xc0000U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__G10 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 5U) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 5U) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 4U))));
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__P32 = (IData)(
                                                       (0xc00000U 
                                                        == 
                                                        (0xc00000U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__G32 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 3U) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 3U) 
                                                      & (vlSelf->cla__DOT__gin 
                                                         >> 2U))));
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__P10 = (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__G10 = (1U 
                                                & ((vlSelf->cla__DOT__gin 
                                                    >> 1U) 
                                                   | ((vlSelf->cla__DOT__pin 
                                                       >> 1U) 
                                                      & vlSelf->cla__DOT__gin)));
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__P10 = (IData)(
                                                       (0x3000U 
                                                        == 
                                                        (0x3000U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__P32 = (IData)(
                                                       (0xc00U 
                                                        == 
                                                        (0xc00U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__P32 = (IData)(
                                                       (0xc000U 
                                                        == 
                                                        (0xc000U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__P10 = (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__P32 = (IData)(
                                                       (0xcU 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__P32 = (IData)(
                                                       (0xc0U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->cla__DOT__pin)));
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__cin = vlSelf->cla__DOT__m_1__DOT__cin;
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__gout = ((IData)(vlSelf->cla__DOT__m_4__DOT__a7__DOT__G32) 
                                                 | ((IData)(vlSelf->cla__DOT__m_4__DOT__a7__DOT__P32) 
                                                    & (IData)(vlSelf->cla__DOT__m_4__DOT__a7__DOT__G10)));
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__pout = ((IData)(vlSelf->cla__DOT__m_4__DOT__a7__DOT__P32) 
                                                 & (IData)(vlSelf->cla__DOT__m_4__DOT__a7__DOT__P10));
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__pout = ((IData)(vlSelf->cla__DOT__m_4__DOT__a3__DOT__P32) 
                                                 & (IData)(vlSelf->cla__DOT__m_4__DOT__a3__DOT__P10));
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__gout = ((IData)(vlSelf->cla__DOT__m_4__DOT__a3__DOT__G32) 
                                                 | ((IData)(vlSelf->cla__DOT__m_4__DOT__a3__DOT__P32) 
                                                    & (IData)(vlSelf->cla__DOT__m_4__DOT__a3__DOT__G10)));
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__pout = ((IData)(vlSelf->cla__DOT__m_3__DOT__a3__DOT__P32) 
                                                 & (IData)(vlSelf->cla__DOT__m_3__DOT__a3__DOT__P10));
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__gout = ((IData)(vlSelf->cla__DOT__m_3__DOT__a3__DOT__G32) 
                                                 | ((IData)(vlSelf->cla__DOT__m_3__DOT__a3__DOT__P32) 
                                                    & (IData)(vlSelf->cla__DOT__m_3__DOT__a3__DOT__G10)));
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__gout = ((IData)(vlSelf->cla__DOT__m_3__DOT__a7__DOT__G32) 
                                                 | ((IData)(vlSelf->cla__DOT__m_3__DOT__a7__DOT__P32) 
                                                    & (IData)(vlSelf->cla__DOT__m_3__DOT__a7__DOT__G10)));
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__pout = ((IData)(vlSelf->cla__DOT__m_3__DOT__a7__DOT__P32) 
                                                 & (IData)(vlSelf->cla__DOT__m_3__DOT__a7__DOT__P10));
    cla__DOT__m_1__DOT__a3__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->cla__DOT__m_1__DOT__a3__DOT__G10) 
           | ((IData)(vlSelf->cla__DOT__m_1__DOT__a3__DOT__P10) 
              & (IData)(vlSelf->cin)));
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__pout = ((IData)(vlSelf->cla__DOT__m_2__DOT__a3__DOT__P32) 
                                                 & (IData)(vlSelf->cla__DOT__m_2__DOT__a3__DOT__P10));
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__gout = ((IData)(vlSelf->cla__DOT__m_2__DOT__a3__DOT__G32) 
                                                 | ((IData)(vlSelf->cla__DOT__m_2__DOT__a3__DOT__P32) 
                                                    & (IData)(vlSelf->cla__DOT__m_2__DOT__a3__DOT__G10)));
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__gout = ((IData)(vlSelf->cla__DOT__m_2__DOT__a7__DOT__G32) 
                                                 | ((IData)(vlSelf->cla__DOT__m_2__DOT__a7__DOT__P32) 
                                                    & (IData)(vlSelf->cla__DOT__m_2__DOT__a7__DOT__G10)));
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__pout = ((IData)(vlSelf->cla__DOT__m_2__DOT__a7__DOT__P32) 
                                                 & (IData)(vlSelf->cla__DOT__m_2__DOT__a7__DOT__P10));
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__pout = ((IData)(vlSelf->cla__DOT__m_1__DOT__a3__DOT__P32) 
                                                 & (IData)(vlSelf->cla__DOT__m_1__DOT__a3__DOT__P10));
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__gout = ((IData)(vlSelf->cla__DOT__m_1__DOT__a3__DOT__G32) 
                                                 | ((IData)(vlSelf->cla__DOT__m_1__DOT__a3__DOT__P32) 
                                                    & (IData)(vlSelf->cla__DOT__m_1__DOT__a3__DOT__G10)));
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__gout = ((IData)(vlSelf->cla__DOT__m_1__DOT__a7__DOT__G32) 
                                                 | ((IData)(vlSelf->cla__DOT__m_1__DOT__a7__DOT__P32) 
                                                    & (IData)(vlSelf->cla__DOT__m_1__DOT__a7__DOT__G10)));
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__pout = ((IData)(vlSelf->cla__DOT__m_1__DOT__a7__DOT__P32) 
                                                 & (IData)(vlSelf->cla__DOT__m_1__DOT__a7__DOT__P10));
    vlSelf->cla__DOT__m_4__DOT__gout_7 = vlSelf->cla__DOT__m_4__DOT__a7__DOT__gout;
    vlSelf->cla__DOT__m_4__DOT__pout_7 = vlSelf->cla__DOT__m_4__DOT__a7__DOT__pout;
    vlSelf->cla__DOT__m_4__DOT__pout_3 = vlSelf->cla__DOT__m_4__DOT__a3__DOT__pout;
    vlSelf->cla__DOT__m_4__DOT__pout = ((IData)(vlSelf->cla__DOT__m_4__DOT__a3__DOT__pout) 
                                        & (IData)(vlSelf->cla__DOT__m_4__DOT__a7__DOT__pout));
    vlSelf->cla__DOT__m_4__DOT__gout_3 = vlSelf->cla__DOT__m_4__DOT__a3__DOT__gout;
    vlSelf->cla__DOT__m_4__DOT__gout = ((IData)(vlSelf->cla__DOT__m_4__DOT__a7__DOT__gout) 
                                        | ((IData)(vlSelf->cla__DOT__m_4__DOT__a3__DOT__gout) 
                                           & (IData)(vlSelf->cla__DOT__m_4__DOT__a7__DOT__pout)));
    vlSelf->cla__DOT__m_3__DOT__pout_3 = vlSelf->cla__DOT__m_3__DOT__a3__DOT__pout;
    vlSelf->cla__DOT__m_3__DOT__gout_3 = vlSelf->cla__DOT__m_3__DOT__a3__DOT__gout;
    vlSelf->cla__DOT__m_3__DOT__gout_7 = vlSelf->cla__DOT__m_3__DOT__a7__DOT__gout;
    vlSelf->cla__DOT__m_3__DOT__pout_7 = vlSelf->cla__DOT__m_3__DOT__a7__DOT__pout;
    vlSelf->cla__DOT__m_3__DOT__pout = ((IData)(vlSelf->cla__DOT__m_3__DOT__a3__DOT__pout) 
                                        & (IData)(vlSelf->cla__DOT__m_3__DOT__a7__DOT__pout));
    vlSelf->cla__DOT__m_3__DOT__gout = ((IData)(vlSelf->cla__DOT__m_3__DOT__a7__DOT__gout) 
                                        | ((IData)(vlSelf->cla__DOT__m_3__DOT__a3__DOT__gout) 
                                           & (IData)(vlSelf->cla__DOT__m_3__DOT__a7__DOT__pout)));
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__cout = ((4U 
                                                  & (vlSelf->cla__DOT__gin 
                                                     | (vlSelf->cla__DOT__pin 
                                                        & ((IData)(cla__DOT__m_1__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                                                           << 2U)))) 
                                                 | (((IData)(cla__DOT__m_1__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (vlSelf->cla__DOT__gin 
                                                          | (vlSelf->cla__DOT__pin 
                                                             & (IData)(vlSelf->cin))))));
    vlSelf->cla__DOT__m_2__DOT__pout_3 = vlSelf->cla__DOT__m_2__DOT__a3__DOT__pout;
    vlSelf->cla__DOT__m_2__DOT__gout_3 = vlSelf->cla__DOT__m_2__DOT__a3__DOT__gout;
    vlSelf->cla__DOT__m_2__DOT__gout_7 = vlSelf->cla__DOT__m_2__DOT__a7__DOT__gout;
    vlSelf->cla__DOT__m_2__DOT__pout_7 = vlSelf->cla__DOT__m_2__DOT__a7__DOT__pout;
    vlSelf->cla__DOT__m_2__DOT__pout = ((IData)(vlSelf->cla__DOT__m_2__DOT__a3__DOT__pout) 
                                        & (IData)(vlSelf->cla__DOT__m_2__DOT__a7__DOT__pout));
    vlSelf->cla__DOT__m_2__DOT__gout = ((IData)(vlSelf->cla__DOT__m_2__DOT__a7__DOT__gout) 
                                        | ((IData)(vlSelf->cla__DOT__m_2__DOT__a3__DOT__gout) 
                                           & (IData)(vlSelf->cla__DOT__m_2__DOT__a7__DOT__pout)));
    vlSelf->cla__DOT__m_1__DOT__pout_3 = vlSelf->cla__DOT__m_1__DOT__a3__DOT__pout;
    vlSelf->cla__DOT__m_1__DOT__gout_3 = vlSelf->cla__DOT__m_1__DOT__a3__DOT__gout;
    vlSelf->cla__DOT__m_1__DOT__cin_1 = ((IData)(vlSelf->cla__DOT__m_1__DOT__a3__DOT__gout) 
                                         | ((IData)(vlSelf->cin) 
                                            & (IData)(vlSelf->cla__DOT__m_1__DOT__a3__DOT__pout)));
    vlSelf->cla__DOT__m_1__DOT__gout_7 = vlSelf->cla__DOT__m_1__DOT__a7__DOT__gout;
    vlSelf->cla__DOT__m_1__DOT__pout_7 = vlSelf->cla__DOT__m_1__DOT__a7__DOT__pout;
    vlSelf->cla__DOT__m_1__DOT__pout = ((IData)(vlSelf->cla__DOT__m_1__DOT__a3__DOT__pout) 
                                        & (IData)(vlSelf->cla__DOT__m_1__DOT__a7__DOT__pout));
    vlSelf->cla__DOT__m_1__DOT__gout = ((IData)(vlSelf->cla__DOT__m_1__DOT__a7__DOT__gout) 
                                        | ((IData)(vlSelf->cla__DOT__m_1__DOT__a3__DOT__gout) 
                                           & (IData)(vlSelf->cla__DOT__m_1__DOT__a7__DOT__pout)));
    vlSelf->cla__DOT__pout4 = vlSelf->cla__DOT__m_4__DOT__pout;
    vlSelf->cla__DOT__gout4 = vlSelf->cla__DOT__m_4__DOT__gout;
    vlSelf->cla__DOT__pout3 = vlSelf->cla__DOT__m_3__DOT__pout;
    vlSelf->cla__DOT__gout3 = vlSelf->cla__DOT__m_3__DOT__gout;
    vlSelf->cla__DOT__pout2 = vlSelf->cla__DOT__m_2__DOT__pout;
    vlSelf->cla__DOT__gout2 = vlSelf->cla__DOT__m_2__DOT__gout;
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__cin = vlSelf->cla__DOT__m_1__DOT__cin_1;
    cla__DOT__m_1__DOT__a7__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->cla__DOT__m_1__DOT__a7__DOT__G10) 
           | ((IData)(vlSelf->cla__DOT__m_1__DOT__a7__DOT__P10) 
              & (IData)(vlSelf->cla__DOT__m_1__DOT__cin_1)));
    vlSelf->cla__DOT__pout1 = vlSelf->cla__DOT__m_1__DOT__pout;
    vlSelf->cla__DOT__gout1 = vlSelf->cla__DOT__m_1__DOT__gout;
    vlSelf->cla__DOT__c_7 = ((IData)(vlSelf->cla__DOT__m_1__DOT__gout) 
                             | ((IData)(vlSelf->cin) 
                                & (IData)(vlSelf->cla__DOT__m_1__DOT__pout)));
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__cout = ((4U 
                                                  & ((vlSelf->cla__DOT__gin 
                                                      >> 4U) 
                                                     | ((vlSelf->cla__DOT__pin 
                                                         >> 4U) 
                                                        & ((IData)(cla__DOT__m_1__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
                                                           << 2U)))) 
                                                 | (((IData)(cla__DOT__m_1__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
                                                     << 1U) 
                                                    | (1U 
                                                       & ((vlSelf->cla__DOT__gin 
                                                           >> 4U) 
                                                          | ((vlSelf->cla__DOT__pin 
                                                              >> 4U) 
                                                             & (IData)(vlSelf->cla__DOT__m_1__DOT__cin_1))))));
    vlSelf->cla__DOT__m_2__DOT__cin = vlSelf->cla__DOT__c_7;
    cla__DOT__m_2__DOT__a3__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->cla__DOT__m_2__DOT__a3__DOT__G10) 
           | ((IData)(vlSelf->cla__DOT__m_2__DOT__a3__DOT__P10) 
              & (IData)(vlSelf->cla__DOT__c_7)));
    vlSelf->cla__DOT__m_2__DOT__cin_1 = ((IData)(vlSelf->cla__DOT__m_2__DOT__a3__DOT__gout) 
                                         | ((IData)(vlSelf->cla__DOT__c_7) 
                                            & (IData)(vlSelf->cla__DOT__m_2__DOT__a3__DOT__pout)));
    vlSelf->cla__DOT__c_15 = ((IData)(vlSelf->cla__DOT__m_2__DOT__gout) 
                              | ((IData)(vlSelf->cla__DOT__m_2__DOT__pout) 
                                 & (IData)(vlSelf->cla__DOT__c_7)));
    vlSelf->cla__DOT__m_1__DOT__cout = (((IData)(vlSelf->cla__DOT__m_1__DOT__a7__DOT__cout) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->cla__DOT__m_1__DOT__cin_1) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->cla__DOT__m_1__DOT__a3__DOT__cout)));
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__cin = vlSelf->cla__DOT__m_2__DOT__cin;
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__cout = ((4U 
                                                  & ((vlSelf->cla__DOT__gin 
                                                      >> 8U) 
                                                     | ((vlSelf->cla__DOT__pin 
                                                         >> 8U) 
                                                        & ((IData)(cla__DOT__m_2__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                                                           << 2U)))) 
                                                 | (((IData)(cla__DOT__m_2__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                                                     << 1U) 
                                                    | (1U 
                                                       & ((vlSelf->cla__DOT__gin 
                                                           >> 8U) 
                                                          | ((vlSelf->cla__DOT__pin 
                                                              >> 8U) 
                                                             & (IData)(vlSelf->cla__DOT__c_7))))));
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__cin = vlSelf->cla__DOT__m_2__DOT__cin_1;
    cla__DOT__m_2__DOT__a7__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->cla__DOT__m_2__DOT__a7__DOT__G10) 
           | ((IData)(vlSelf->cla__DOT__m_2__DOT__a7__DOT__P10) 
              & (IData)(vlSelf->cla__DOT__m_2__DOT__cin_1)));
    vlSelf->cla__DOT__m_3__DOT__cin = vlSelf->cla__DOT__c_15;
    cla__DOT__m_3__DOT__a3__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->cla__DOT__m_3__DOT__a3__DOT__G10) 
           | ((IData)(vlSelf->cla__DOT__m_3__DOT__a3__DOT__P10) 
              & (IData)(vlSelf->cla__DOT__c_15)));
    vlSelf->cla__DOT__m_3__DOT__cin_1 = ((IData)(vlSelf->cla__DOT__m_3__DOT__a3__DOT__gout) 
                                         | ((IData)(vlSelf->cla__DOT__c_15) 
                                            & (IData)(vlSelf->cla__DOT__m_3__DOT__a3__DOT__pout)));
    vlSelf->cla__DOT__c_23 = ((IData)(vlSelf->cla__DOT__m_3__DOT__gout) 
                              | ((IData)(vlSelf->cla__DOT__m_3__DOT__pout) 
                                 & (IData)(vlSelf->cla__DOT__c_15)));
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__cout = ((4U 
                                                  & ((vlSelf->cla__DOT__gin 
                                                      >> 0xcU) 
                                                     | ((vlSelf->cla__DOT__pin 
                                                         >> 0xcU) 
                                                        & ((IData)(cla__DOT__m_2__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
                                                           << 2U)))) 
                                                 | (((IData)(cla__DOT__m_2__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
                                                     << 1U) 
                                                    | (1U 
                                                       & ((vlSelf->cla__DOT__gin 
                                                           >> 0xcU) 
                                                          | ((vlSelf->cla__DOT__pin 
                                                              >> 0xcU) 
                                                             & (IData)(vlSelf->cla__DOT__m_2__DOT__cin_1))))));
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__cin = vlSelf->cla__DOT__m_3__DOT__cin;
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__cout = ((4U 
                                                  & ((vlSelf->cla__DOT__gin 
                                                      >> 0x10U) 
                                                     | ((vlSelf->cla__DOT__pin 
                                                         >> 0x10U) 
                                                        & ((IData)(cla__DOT__m_3__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                                                           << 2U)))) 
                                                 | (((IData)(cla__DOT__m_3__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                                                     << 1U) 
                                                    | (1U 
                                                       & ((vlSelf->cla__DOT__gin 
                                                           >> 0x10U) 
                                                          | ((vlSelf->cla__DOT__pin 
                                                              >> 0x10U) 
                                                             & (IData)(vlSelf->cla__DOT__c_15))))));
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__cin = vlSelf->cla__DOT__m_3__DOT__cin_1;
    cla__DOT__m_3__DOT__a7__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->cla__DOT__m_3__DOT__a7__DOT__G10) 
           | ((IData)(vlSelf->cla__DOT__m_3__DOT__a7__DOT__P10) 
              & (IData)(vlSelf->cla__DOT__m_3__DOT__cin_1)));
    vlSelf->cla__DOT__m_4__DOT__cin = vlSelf->cla__DOT__c_23;
    vlSelf->cla__DOT__c_31 = ((IData)(vlSelf->cla__DOT__m_4__DOT__gout) 
                              | ((IData)(vlSelf->cla__DOT__m_4__DOT__pout) 
                                 & (IData)(vlSelf->cla__DOT__c_23)));
    cla__DOT__m_4__DOT__a3__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->cla__DOT__m_4__DOT__a3__DOT__G10) 
           | ((IData)(vlSelf->cla__DOT__m_4__DOT__a3__DOT__P10) 
              & (IData)(vlSelf->cla__DOT__c_23)));
    vlSelf->cla__DOT__m_4__DOT__cin_1 = ((IData)(vlSelf->cla__DOT__m_4__DOT__a3__DOT__gout) 
                                         | ((IData)(vlSelf->cla__DOT__c_23) 
                                            & (IData)(vlSelf->cla__DOT__m_4__DOT__a3__DOT__pout)));
    vlSelf->cla__DOT__m_2__DOT__cout = (((IData)(vlSelf->cla__DOT__m_2__DOT__a7__DOT__cout) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->cla__DOT__m_2__DOT__cin_1) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->cla__DOT__m_2__DOT__a3__DOT__cout)));
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__cout = ((4U 
                                                  & ((vlSelf->cla__DOT__gin 
                                                      >> 0x14U) 
                                                     | ((vlSelf->cla__DOT__pin 
                                                         >> 0x14U) 
                                                        & ((IData)(cla__DOT__m_3__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
                                                           << 2U)))) 
                                                 | (((IData)(cla__DOT__m_3__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
                                                     << 1U) 
                                                    | (1U 
                                                       & ((vlSelf->cla__DOT__gin 
                                                           >> 0x14U) 
                                                          | ((vlSelf->cla__DOT__pin 
                                                              >> 0x14U) 
                                                             & (IData)(vlSelf->cla__DOT__m_3__DOT__cin_1))))));
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__cin = vlSelf->cla__DOT__m_4__DOT__cin;
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__cout = ((4U 
                                                  & ((vlSelf->cla__DOT__gin 
                                                      >> 0x18U) 
                                                     | ((vlSelf->cla__DOT__pin 
                                                         >> 0x18U) 
                                                        & ((IData)(cla__DOT__m_4__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                                                           << 2U)))) 
                                                 | (((IData)(cla__DOT__m_4__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                                                     << 1U) 
                                                    | (1U 
                                                       & ((vlSelf->cla__DOT__gin 
                                                           >> 0x18U) 
                                                          | ((vlSelf->cla__DOT__pin 
                                                              >> 0x18U) 
                                                             & (IData)(vlSelf->cla__DOT__c_23))))));
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__cin = vlSelf->cla__DOT__m_4__DOT__cin_1;
    cla__DOT__m_4__DOT__a7__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->cla__DOT__m_4__DOT__a7__DOT__G10) 
           | ((IData)(vlSelf->cla__DOT__m_4__DOT__a7__DOT__P10) 
              & (IData)(vlSelf->cla__DOT__m_4__DOT__cin_1)));
    vlSelf->cla__DOT__m_3__DOT__cout = (((IData)(vlSelf->cla__DOT__m_3__DOT__a7__DOT__cout) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->cla__DOT__m_3__DOT__cin_1) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->cla__DOT__m_3__DOT__a3__DOT__cout)));
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__cout = ((4U 
                                                  & ((vlSelf->cla__DOT__gin 
                                                      >> 0x1cU) 
                                                     | ((vlSelf->cla__DOT__pin 
                                                         >> 0x1cU) 
                                                        & ((IData)(cla__DOT__m_4__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
                                                           << 2U)))) 
                                                 | (((IData)(cla__DOT__m_4__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
                                                     << 1U) 
                                                    | (1U 
                                                       & ((vlSelf->cla__DOT__gin 
                                                           >> 0x1cU) 
                                                          | ((vlSelf->cla__DOT__pin 
                                                              >> 0x1cU) 
                                                             & (IData)(vlSelf->cla__DOT__m_4__DOT__cin_1))))));
    vlSelf->cla__DOT__m_4__DOT__cout = (((IData)(vlSelf->cla__DOT__m_4__DOT__a7__DOT__cout) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->cla__DOT__m_4__DOT__cin_1) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->cla__DOT__m_4__DOT__a3__DOT__cout)));
    cla__DOT____VdfgTmp_hb04ad8a1__0 = (((IData)(vlSelf->cla__DOT__m_4__DOT__cout) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->cla__DOT__c_23) 
                                            << 0x17U) 
                                           | (((IData)(vlSelf->cla__DOT__m_3__DOT__cout) 
                                               << 0x10U) 
                                              | (((IData)(vlSelf->cla__DOT__c_15) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->cla__DOT__m_2__DOT__cout) 
                                                     << 8U) 
                                                    | (((IData)(vlSelf->cla__DOT__c_7) 
                                                        << 7U) 
                                                       | (IData)(vlSelf->cla__DOT__m_1__DOT__cout)))))));
    vlSelf->cla__DOT__cout = (((IData)(vlSelf->cla__DOT__c_31) 
                               << 0x1fU) | cla__DOT____VdfgTmp_hb04ad8a1__0);
    vlSelf->sum = (vlSelf->a ^ (vlSelf->b ^ ((cla__DOT____VdfgTmp_hb04ad8a1__0 
                                              << 1U) 
                                             | (IData)(vlSelf->cin))));
    vlSelf->cla__DOT__sum = vlSelf->sum;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/penn/riscv32/hw2b/cla.sv", 80, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/penn/riscv32/hw2b/cla.sv", 80, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/penn/riscv32/hw2b/cla.sv", 80, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
