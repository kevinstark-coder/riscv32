// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_divu_1iter.h"

VL_INLINE_OPT void Vtop_divu_1iter___nba_sequent__TOP__divider_unsigned_pipelined__DOT__genblk2__BRA__1__KET____DOT__d1__1(Vtop_divu_1iter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_divu_1iter___nba_sequent__TOP__divider_unsigned_pipelined__DOT__genblk2__BRA__1__KET____DOT__d1__1\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h69a4f8fb__0;
    __VdfgTmp_h69a4f8fb__0 = 0;
    // Body
    if ((1U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (1U & vlSelf->i_quotient));
    }
    if ((2U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (2U & vlSelf->i_quotient));
    }
    if ((4U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (4U & vlSelf->i_quotient));
    }
    if ((8U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (8U & vlSelf->i_quotient));
    }
    if ((0x10U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10U & vlSelf->i_quotient));
    }
    if ((0x20U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20U & vlSelf->i_quotient));
    }
    if ((0x40U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40U & vlSelf->i_quotient));
    }
    if ((0x80U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80U & vlSelf->i_quotient));
    }
    if ((0x100U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x100U 
                                            & vlSelf->i_quotient));
    }
    if ((0x200U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x200U 
                                            & vlSelf->i_quotient));
    }
    if ((0x400U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x400U 
                                            & vlSelf->i_quotient));
    }
    if ((0x800U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x800U 
                                            & vlSelf->i_quotient));
    }
    if ((0x1000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x1000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x2000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x2000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x4000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x4000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x8000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->__Vtogcov__i_quotient = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x8000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x10000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x20000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x40000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x80000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->__Vtogcov__i_quotient = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x100000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->__Vtogcov__i_quotient = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x100000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x200000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->__Vtogcov__i_quotient = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x200000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x400000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->__Vtogcov__i_quotient = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x400000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x800000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->__Vtogcov__i_quotient = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x800000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x1000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->__Vtogcov__i_quotient = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x1000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x2000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->__Vtogcov__i_quotient = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x2000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x4000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->__Vtogcov__i_quotient = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x4000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x8000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->__Vtogcov__i_quotient = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x8000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x10000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->__Vtogcov__i_quotient = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x20000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->__Vtogcov__i_quotient = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x40000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->__Vtogcov__i_quotient = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40000000U 
                                            & vlSelf->i_quotient));
    }
    if (((vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->__Vtogcov__i_quotient = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80000000U 
                                            & vlSelf->i_quotient));
    }
    if ((1U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (1U & vlSelf->i_remainder));
    }
    if ((2U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (2U & vlSelf->i_remainder));
    }
    if ((4U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (4U & vlSelf->i_remainder));
    }
    if ((8U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (8U & vlSelf->i_remainder));
    }
    if ((0x10U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40U 
                                             & vlSelf->i_remainder));
    }
    if ((0x80U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80U 
                                             & vlSelf->i_remainder));
    }
    if ((0x100U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x100U 
                                             & vlSelf->i_remainder));
    }
    if ((0x200U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x200U 
                                             & vlSelf->i_remainder));
    }
    if ((0x400U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x400U 
                                             & vlSelf->i_remainder));
    }
    if ((0x800U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x800U 
                                             & vlSelf->i_remainder));
    }
    if ((0x1000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x1000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x2000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x2000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x4000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x4000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x8000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->__Vtogcov__i_remainder = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x8000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x10000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x80000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->__Vtogcov__i_remainder = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x100000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->__Vtogcov__i_remainder = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x100000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x200000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->__Vtogcov__i_remainder = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x200000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x400000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->__Vtogcov__i_remainder = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x400000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x800000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->__Vtogcov__i_remainder = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x800000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x1000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->__Vtogcov__i_remainder = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x1000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x2000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->__Vtogcov__i_remainder = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x2000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x4000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->__Vtogcov__i_remainder = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x4000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x8000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->__Vtogcov__i_remainder = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x8000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x10000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->__Vtogcov__i_remainder = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->__Vtogcov__i_remainder = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->__Vtogcov__i_remainder = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40000000U 
                                             & vlSelf->i_remainder));
    }
    if (((vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->__Vtogcov__i_remainder = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80000000U 
                                             & vlSelf->i_remainder));
    }
    vlSelf->temp_remainder = (VL_SHIFTL_III(32,32,32, vlSelf->i_remainder, 1U) 
                              | (1U & VL_SHIFTR_III(32,32,32, vlSelf->i_dividend, 0x1fU)));
    if ((1U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffeU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (1U 
                                                & vlSelf->temp_remainder));
    }
    if ((2U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffdU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (2U 
                                                & vlSelf->temp_remainder));
    }
    if ((4U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffbU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (4U 
                                                & vlSelf->temp_remainder));
    }
    if ((8U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffff7U 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (8U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffefU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffdfU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffbfU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x80U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffff7fU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x80U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x100U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffeffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x100U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x200U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffdffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x200U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x400U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffbffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x400U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x800U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffff7ffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x800U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x1000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffefffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x1000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x2000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffdfffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x2000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x4000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffbfffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x4000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x8000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffff7fffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x8000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffeffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffdffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffbffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x80000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfff7ffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x80000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x100000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffefffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x100000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x200000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffdfffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x200000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x400000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffbfffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x400000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x800000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->__Vtogcov__temp_remainder = ((0xff7fffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x800000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x1000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfeffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x1000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x2000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfdffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x2000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x4000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfbffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x4000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x8000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->__Vtogcov__temp_remainder = ((0xf7ffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x8000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->__Vtogcov__temp_remainder = ((0xefffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->__Vtogcov__temp_remainder = ((0xdfffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->__Vtogcov__temp_remainder = ((0xbfffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40000000U 
                                                & vlSelf->temp_remainder));
    }
    if (((vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->__Vtogcov__temp_remainder = ((0x7fffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x80000000U 
                                                & vlSelf->temp_remainder));
    }
    __VdfgTmp_h69a4f8fb__0 = (vlSelf->temp_remainder 
                              < vlSelf->i_divisor);
    if (__VdfgTmp_h69a4f8fb__0) {
        vlSelf->o_quotient = VL_SHIFTL_III(32,32,32, vlSelf->i_quotient, 1U);
        vlSelf->o_remainder = vlSelf->temp_remainder;
    } else {
        vlSelf->o_quotient = (1U | VL_SHIFTL_III(32,32,32, vlSelf->i_quotient, 1U));
        vlSelf->o_remainder = (vlSelf->temp_remainder 
                               - vlSelf->i_divisor);
    }
    vlSelf->temp_quotient = vlSelf->o_quotient;
    if ((1U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (1U & vlSelf->o_quotient));
    }
    if ((2U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (2U & vlSelf->o_quotient));
    }
    if ((4U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (4U & vlSelf->o_quotient));
    }
    if ((8U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (8U & vlSelf->o_quotient));
    }
    if ((0x10U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10U & vlSelf->o_quotient));
    }
    if ((0x20U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20U & vlSelf->o_quotient));
    }
    if ((0x40U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40U & vlSelf->o_quotient));
    }
    if ((0x80U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80U & vlSelf->o_quotient));
    }
    if ((0x100U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x100U 
                                            & vlSelf->o_quotient));
    }
    if ((0x200U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x200U 
                                            & vlSelf->o_quotient));
    }
    if ((0x400U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x400U 
                                            & vlSelf->o_quotient));
    }
    if ((0x800U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x800U 
                                            & vlSelf->o_quotient));
    }
    if ((0x1000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x1000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x2000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x2000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x4000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x4000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x8000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->__Vtogcov__o_quotient = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x8000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x10000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x20000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x40000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x80000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->__Vtogcov__o_quotient = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x100000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->__Vtogcov__o_quotient = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x100000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x200000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->__Vtogcov__o_quotient = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x200000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x400000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->__Vtogcov__o_quotient = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x400000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x800000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->__Vtogcov__o_quotient = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x800000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x1000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->__Vtogcov__o_quotient = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x1000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x2000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->__Vtogcov__o_quotient = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x2000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x4000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->__Vtogcov__o_quotient = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x4000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x8000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->__Vtogcov__o_quotient = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x8000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x10000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->__Vtogcov__o_quotient = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x20000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->__Vtogcov__o_quotient = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x40000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->__Vtogcov__o_quotient = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40000000U 
                                            & vlSelf->o_quotient));
    }
    if (((vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->__Vtogcov__o_quotient = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80000000U 
                                            & vlSelf->o_quotient));
    }
    if ((1U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (1U & vlSelf->o_remainder));
    }
    if ((2U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (2U & vlSelf->o_remainder));
    }
    if ((4U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (4U & vlSelf->o_remainder));
    }
    if ((8U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (8U & vlSelf->o_remainder));
    }
    if ((0x10U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40U 
                                             & vlSelf->o_remainder));
    }
    if ((0x80U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80U 
                                             & vlSelf->o_remainder));
    }
    if ((0x100U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x100U 
                                             & vlSelf->o_remainder));
    }
    if ((0x200U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x200U 
                                             & vlSelf->o_remainder));
    }
    if ((0x400U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x400U 
                                             & vlSelf->o_remainder));
    }
    if ((0x800U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x800U 
                                             & vlSelf->o_remainder));
    }
    if ((0x1000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x1000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x2000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x2000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x4000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x4000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x8000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->__Vtogcov__o_remainder = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x8000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x10000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x80000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->__Vtogcov__o_remainder = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x100000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->__Vtogcov__o_remainder = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x100000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x200000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->__Vtogcov__o_remainder = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x200000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x400000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->__Vtogcov__o_remainder = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x400000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x800000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->__Vtogcov__o_remainder = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x800000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x1000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->__Vtogcov__o_remainder = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x1000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x2000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->__Vtogcov__o_remainder = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x2000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x4000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->__Vtogcov__o_remainder = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x4000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x8000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->__Vtogcov__o_remainder = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x8000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x10000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->__Vtogcov__o_remainder = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->__Vtogcov__o_remainder = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->__Vtogcov__o_remainder = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40000000U 
                                             & vlSelf->o_remainder));
    }
    if (((vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->__Vtogcov__o_remainder = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80000000U 
                                             & vlSelf->o_remainder));
    }
}

VL_INLINE_OPT void Vtop_divu_1iter___nba_sequent__TOP__divider_unsigned_pipelined__DOT__genblk2__BRA__15__KET____DOT__d1__1(Vtop_divu_1iter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_divu_1iter___nba_sequent__TOP__divider_unsigned_pipelined__DOT__genblk2__BRA__15__KET____DOT__d1__1\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h69a4f8fb__0;
    __VdfgTmp_h69a4f8fb__0 = 0;
    // Body
    if ((1U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (1U & vlSelf->i_quotient));
    }
    if ((2U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (2U & vlSelf->i_quotient));
    }
    if ((4U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (4U & vlSelf->i_quotient));
    }
    if ((8U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (8U & vlSelf->i_quotient));
    }
    if ((0x10U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10U & vlSelf->i_quotient));
    }
    if ((0x20U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20U & vlSelf->i_quotient));
    }
    if ((0x40U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40U & vlSelf->i_quotient));
    }
    if ((0x80U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80U & vlSelf->i_quotient));
    }
    if ((0x100U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x100U 
                                            & vlSelf->i_quotient));
    }
    if ((0x200U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x200U 
                                            & vlSelf->i_quotient));
    }
    if ((0x400U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x400U 
                                            & vlSelf->i_quotient));
    }
    if ((0x800U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x800U 
                                            & vlSelf->i_quotient));
    }
    if ((0x1000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x1000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x2000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x2000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x4000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x4000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x8000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->__Vtogcov__i_quotient = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x8000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x10000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x20000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x40000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x80000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->__Vtogcov__i_quotient = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x100000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->__Vtogcov__i_quotient = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x100000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x200000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->__Vtogcov__i_quotient = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x200000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x400000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->__Vtogcov__i_quotient = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x400000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x800000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->__Vtogcov__i_quotient = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x800000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x1000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->__Vtogcov__i_quotient = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x1000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x2000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->__Vtogcov__i_quotient = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x2000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x4000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->__Vtogcov__i_quotient = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x4000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x8000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->__Vtogcov__i_quotient = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x8000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x10000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->__Vtogcov__i_quotient = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x20000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->__Vtogcov__i_quotient = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x40000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->__Vtogcov__i_quotient = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40000000U 
                                            & vlSelf->i_quotient));
    }
    if (((vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->__Vtogcov__i_quotient = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80000000U 
                                            & vlSelf->i_quotient));
    }
    if ((1U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (1U & vlSelf->i_remainder));
    }
    if ((2U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (2U & vlSelf->i_remainder));
    }
    if ((4U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (4U & vlSelf->i_remainder));
    }
    if ((8U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (8U & vlSelf->i_remainder));
    }
    if ((0x10U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40U 
                                             & vlSelf->i_remainder));
    }
    if ((0x80U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80U 
                                             & vlSelf->i_remainder));
    }
    if ((0x100U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x100U 
                                             & vlSelf->i_remainder));
    }
    if ((0x200U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x200U 
                                             & vlSelf->i_remainder));
    }
    if ((0x400U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x400U 
                                             & vlSelf->i_remainder));
    }
    if ((0x800U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x800U 
                                             & vlSelf->i_remainder));
    }
    if ((0x1000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x1000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x2000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x2000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x4000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x4000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x8000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->__Vtogcov__i_remainder = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x8000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x10000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x80000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->__Vtogcov__i_remainder = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x100000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->__Vtogcov__i_remainder = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x100000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x200000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->__Vtogcov__i_remainder = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x200000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x400000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->__Vtogcov__i_remainder = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x400000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x800000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->__Vtogcov__i_remainder = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x800000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x1000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->__Vtogcov__i_remainder = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x1000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x2000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->__Vtogcov__i_remainder = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x2000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x4000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->__Vtogcov__i_remainder = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x4000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x8000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->__Vtogcov__i_remainder = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x8000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x10000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->__Vtogcov__i_remainder = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->__Vtogcov__i_remainder = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->__Vtogcov__i_remainder = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40000000U 
                                             & vlSelf->i_remainder));
    }
    if (((vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->__Vtogcov__i_remainder = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80000000U 
                                             & vlSelf->i_remainder));
    }
    vlSelf->temp_remainder = (VL_SHIFTL_III(32,32,32, vlSelf->i_remainder, 1U) 
                              | (1U & VL_SHIFTR_III(32,32,32, vlSelf->i_dividend, 0x1fU)));
    if ((1U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffeU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (1U 
                                                & vlSelf->temp_remainder));
    }
    if ((2U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffdU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (2U 
                                                & vlSelf->temp_remainder));
    }
    if ((4U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffbU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (4U 
                                                & vlSelf->temp_remainder));
    }
    if ((8U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffff7U 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (8U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffefU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffdfU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffbfU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x80U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffff7fU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x80U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x100U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffeffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x100U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x200U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffdffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x200U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x400U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffbffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x400U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x800U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffff7ffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x800U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x1000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffefffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x1000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x2000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffdfffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x2000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x4000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffbfffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x4000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x8000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffff7fffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x8000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffeffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffdffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffbffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x80000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfff7ffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x80000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x100000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffefffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x100000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x200000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffdfffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x200000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x400000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffbfffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x400000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x800000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->__Vtogcov__temp_remainder = ((0xff7fffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x800000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x1000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfeffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x1000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x2000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfdffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x2000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x4000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfbffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x4000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x8000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->__Vtogcov__temp_remainder = ((0xf7ffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x8000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->__Vtogcov__temp_remainder = ((0xefffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->__Vtogcov__temp_remainder = ((0xdfffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->__Vtogcov__temp_remainder = ((0xbfffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40000000U 
                                                & vlSelf->temp_remainder));
    }
    if (((vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->__Vtogcov__temp_remainder = ((0x7fffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x80000000U 
                                                & vlSelf->temp_remainder));
    }
    __VdfgTmp_h69a4f8fb__0 = (vlSelf->temp_remainder 
                              < vlSelf->i_divisor);
    if (__VdfgTmp_h69a4f8fb__0) {
        vlSelf->o_remainder = vlSelf->temp_remainder;
        vlSelf->o_quotient = VL_SHIFTL_III(32,32,32, vlSelf->i_quotient, 1U);
    } else {
        vlSelf->o_remainder = (vlSelf->temp_remainder 
                               - vlSelf->i_divisor);
        vlSelf->o_quotient = (1U | VL_SHIFTL_III(32,32,32, vlSelf->i_quotient, 1U));
    }
    if ((1U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (1U & vlSelf->o_remainder));
    }
    if ((2U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (2U & vlSelf->o_remainder));
    }
    if ((4U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (4U & vlSelf->o_remainder));
    }
    if ((8U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (8U & vlSelf->o_remainder));
    }
    if ((0x10U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40U 
                                             & vlSelf->o_remainder));
    }
    if ((0x80U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80U 
                                             & vlSelf->o_remainder));
    }
    if ((0x100U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x100U 
                                             & vlSelf->o_remainder));
    }
    if ((0x200U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x200U 
                                             & vlSelf->o_remainder));
    }
    if ((0x400U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x400U 
                                             & vlSelf->o_remainder));
    }
    if ((0x800U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x800U 
                                             & vlSelf->o_remainder));
    }
    if ((0x1000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x1000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x2000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x2000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x4000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x4000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x8000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->__Vtogcov__o_remainder = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x8000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x10000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x80000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->__Vtogcov__o_remainder = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x100000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->__Vtogcov__o_remainder = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x100000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x200000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->__Vtogcov__o_remainder = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x200000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x400000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->__Vtogcov__o_remainder = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x400000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x800000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->__Vtogcov__o_remainder = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x800000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x1000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->__Vtogcov__o_remainder = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x1000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x2000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->__Vtogcov__o_remainder = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x2000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x4000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->__Vtogcov__o_remainder = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x4000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x8000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->__Vtogcov__o_remainder = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x8000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x10000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->__Vtogcov__o_remainder = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->__Vtogcov__o_remainder = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->__Vtogcov__o_remainder = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40000000U 
                                             & vlSelf->o_remainder));
    }
    if (((vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->__Vtogcov__o_remainder = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80000000U 
                                             & vlSelf->o_remainder));
    }
    vlSelf->temp_quotient = vlSelf->o_quotient;
    if ((1U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (1U & vlSelf->o_quotient));
    }
    if ((2U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (2U & vlSelf->o_quotient));
    }
    if ((4U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (4U & vlSelf->o_quotient));
    }
    if ((8U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (8U & vlSelf->o_quotient));
    }
    if ((0x10U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10U & vlSelf->o_quotient));
    }
    if ((0x20U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20U & vlSelf->o_quotient));
    }
    if ((0x40U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40U & vlSelf->o_quotient));
    }
    if ((0x80U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80U & vlSelf->o_quotient));
    }
    if ((0x100U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x100U 
                                            & vlSelf->o_quotient));
    }
    if ((0x200U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x200U 
                                            & vlSelf->o_quotient));
    }
    if ((0x400U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x400U 
                                            & vlSelf->o_quotient));
    }
    if ((0x800U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x800U 
                                            & vlSelf->o_quotient));
    }
    if ((0x1000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x1000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x2000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x2000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x4000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x4000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x8000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->__Vtogcov__o_quotient = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x8000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x10000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x20000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x40000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x80000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->__Vtogcov__o_quotient = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x100000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->__Vtogcov__o_quotient = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x100000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x200000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->__Vtogcov__o_quotient = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x200000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x400000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->__Vtogcov__o_quotient = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x400000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x800000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->__Vtogcov__o_quotient = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x800000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x1000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->__Vtogcov__o_quotient = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x1000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x2000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->__Vtogcov__o_quotient = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x2000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x4000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->__Vtogcov__o_quotient = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x4000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x8000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->__Vtogcov__o_quotient = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x8000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x10000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->__Vtogcov__o_quotient = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x20000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->__Vtogcov__o_quotient = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x40000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->__Vtogcov__o_quotient = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40000000U 
                                            & vlSelf->o_quotient));
    }
    if (((vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->__Vtogcov__o_quotient = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80000000U 
                                            & vlSelf->o_quotient));
    }
}
