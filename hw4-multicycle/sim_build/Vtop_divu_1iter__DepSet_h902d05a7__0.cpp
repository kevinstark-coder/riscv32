// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_divu_1iter.h"

VL_INLINE_OPT void Vtop_divu_1iter___ico_sequent__TOP__divider_unsigned_pipelined__DOT__genblk1__BRA__0__KET____DOT__d1__0(Vtop_divu_1iter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_divu_1iter___ico_sequent__TOP__divider_unsigned_pipelined__DOT__genblk1__BRA__0__KET____DOT__d1__0\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h69a4f8fb__0;
    __VdfgTmp_h69a4f8fb__0 = 0;
    // Body
    if ((1U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (1U & vlSelf->i_remainder));
    }
    if ((2U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (2U & vlSelf->i_remainder));
    }
    if ((4U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (4U & vlSelf->i_remainder));
    }
    if ((8U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (8U & vlSelf->i_remainder));
    }
    if ((0x10U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40U 
                                             & vlSelf->i_remainder));
    }
    if ((0x80U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80U 
                                             & vlSelf->i_remainder));
    }
    if ((0x100U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x100U 
                                             & vlSelf->i_remainder));
    }
    if ((0x200U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x200U 
                                             & vlSelf->i_remainder));
    }
    if ((0x400U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x400U 
                                             & vlSelf->i_remainder));
    }
    if ((0x800U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x800U 
                                             & vlSelf->i_remainder));
    }
    if ((0x1000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x1000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x2000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x2000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x4000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x4000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x8000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->__Vtogcov__i_remainder = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x8000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x10000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x80000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->__Vtogcov__i_remainder = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x100000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->__Vtogcov__i_remainder = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x100000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x200000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->__Vtogcov__i_remainder = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x200000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x400000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->__Vtogcov__i_remainder = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x400000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x800000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->__Vtogcov__i_remainder = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x800000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x1000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->__Vtogcov__i_remainder = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x1000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x2000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->__Vtogcov__i_remainder = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x2000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x4000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->__Vtogcov__i_remainder = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x4000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x8000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->__Vtogcov__i_remainder = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x8000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x10000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->__Vtogcov__i_remainder = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->__Vtogcov__i_remainder = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->__Vtogcov__i_remainder = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40000000U 
                                             & vlSelf->i_remainder));
    }
    if (((vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->__Vtogcov__i_remainder = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80000000U 
                                             & vlSelf->i_remainder));
    }
    if ((1U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (1U & vlSelf->i_quotient));
    }
    if ((2U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (2U & vlSelf->i_quotient));
    }
    if ((4U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (4U & vlSelf->i_quotient));
    }
    if ((8U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (8U & vlSelf->i_quotient));
    }
    if ((0x10U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10U & vlSelf->i_quotient));
    }
    if ((0x20U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20U & vlSelf->i_quotient));
    }
    if ((0x40U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40U & vlSelf->i_quotient));
    }
    if ((0x80U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80U & vlSelf->i_quotient));
    }
    if ((0x100U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x100U 
                                            & vlSelf->i_quotient));
    }
    if ((0x200U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x200U 
                                            & vlSelf->i_quotient));
    }
    if ((0x400U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x400U 
                                            & vlSelf->i_quotient));
    }
    if ((0x800U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x800U 
                                            & vlSelf->i_quotient));
    }
    if ((0x1000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x1000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x2000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x2000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x4000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x4000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x8000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->__Vtogcov__i_quotient = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x8000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x10000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x20000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x40000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x80000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->__Vtogcov__i_quotient = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x100000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->__Vtogcov__i_quotient = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x100000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x200000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->__Vtogcov__i_quotient = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x200000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x400000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->__Vtogcov__i_quotient = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x400000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x800000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->__Vtogcov__i_quotient = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x800000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x1000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->__Vtogcov__i_quotient = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x1000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x2000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->__Vtogcov__i_quotient = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x2000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x4000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->__Vtogcov__i_quotient = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x4000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x8000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->__Vtogcov__i_quotient = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x8000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x10000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->__Vtogcov__i_quotient = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x20000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__i_quotient = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x40000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__i_quotient = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40000000U 
                                            & vlSelf->i_quotient));
    }
    if (((vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__i_quotient = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80000000U 
                                            & vlSelf->i_quotient));
    }
    if ((1U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffffeU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (1U & vlSelf->i_divisor));
    }
    if ((2U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffffdU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (2U & vlSelf->i_divisor));
    }
    if ((4U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffffbU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (4U & vlSelf->i_divisor));
    }
    if ((8U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffff7U 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (8U & vlSelf->i_divisor));
    }
    if ((0x10U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffffefU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x10U & vlSelf->i_divisor));
    }
    if ((0x20U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffffdfU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x20U & vlSelf->i_divisor));
    }
    if ((0x40U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffffbfU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x40U & vlSelf->i_divisor));
    }
    if ((0x80U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffff7fU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x80U & vlSelf->i_divisor));
    }
    if ((0x100U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffeffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x100U & vlSelf->i_divisor));
    }
    if ((0x200U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffdffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x200U & vlSelf->i_divisor));
    }
    if ((0x400U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffbffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x400U & vlSelf->i_divisor));
    }
    if ((0x800U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffff7ffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x800U & vlSelf->i_divisor));
    }
    if ((0x1000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffefffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x1000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x2000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffdfffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x2000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x4000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffbfffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x4000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x8000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->__Vtogcov__i_divisor = ((0xffff7fffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x8000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x10000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffeffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x10000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x20000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffdffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x20000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x40000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffbffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x40000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x80000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->__Vtogcov__i_divisor = ((0xfff7ffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x80000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x100000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->__Vtogcov__i_divisor = ((0xffefffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x100000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x200000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->__Vtogcov__i_divisor = ((0xffdfffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x200000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x400000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->__Vtogcov__i_divisor = ((0xffbfffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x400000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x800000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->__Vtogcov__i_divisor = ((0xff7fffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x800000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x1000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->__Vtogcov__i_divisor = ((0xfeffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x1000000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x2000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->__Vtogcov__i_divisor = ((0xfdffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x2000000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x4000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->__Vtogcov__i_divisor = ((0xfbffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x4000000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x8000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->__Vtogcov__i_divisor = ((0xf7ffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x8000000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x10000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->__Vtogcov__i_divisor = ((0xefffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x10000000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x20000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->__Vtogcov__i_divisor = ((0xdfffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x20000000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x40000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->__Vtogcov__i_divisor = ((0xbfffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x40000000U 
                                           & vlSelf->i_divisor));
    }
    if (((vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->__Vtogcov__i_divisor = ((0x7fffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x80000000U 
                                           & vlSelf->i_divisor));
    }
    if ((1U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (1U & vlSelf->i_dividend));
    }
    if ((2U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (2U & vlSelf->i_dividend));
    }
    if ((4U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (4U & vlSelf->i_dividend));
    }
    if ((8U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (8U & vlSelf->i_dividend));
    }
    if ((0x10U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x10U & vlSelf->i_dividend));
    }
    if ((0x20U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x20U & vlSelf->i_dividend));
    }
    if ((0x40U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x40U & vlSelf->i_dividend));
    }
    if ((0x80U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x80U & vlSelf->i_dividend));
    }
    if ((0x100U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x100U 
                                            & vlSelf->i_dividend));
    }
    if ((0x200U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x200U 
                                            & vlSelf->i_dividend));
    }
    if ((0x400U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x400U 
                                            & vlSelf->i_dividend));
    }
    if ((0x800U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x800U 
                                            & vlSelf->i_dividend));
    }
    if ((0x1000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x1000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x2000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x2000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x4000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x4000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x8000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->__Vtogcov__i_dividend = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x8000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x10000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x10000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x20000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x20000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x40000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x40000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x80000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->__Vtogcov__i_dividend = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x80000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x100000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->__Vtogcov__i_dividend = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x100000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x200000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->__Vtogcov__i_dividend = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x200000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x400000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->__Vtogcov__i_dividend = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x400000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x800000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->__Vtogcov__i_dividend = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x800000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x1000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->__Vtogcov__i_dividend = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x1000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x2000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->__Vtogcov__i_dividend = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x2000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x4000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->__Vtogcov__i_dividend = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x4000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x8000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->__Vtogcov__i_dividend = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x8000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x10000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->__Vtogcov__i_dividend = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x10000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x20000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->__Vtogcov__i_dividend = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x20000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x40000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->__Vtogcov__i_dividend = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x40000000U 
                                            & vlSelf->i_dividend));
    }
    if (((vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->__Vtogcov__i_dividend = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x80000000U 
                                            & vlSelf->i_dividend));
    }
    vlSelf->o_dividend = VL_SHIFTL_III(32,32,32, vlSelf->i_dividend, 1U);
    vlSelf->temp_remainder = (VL_SHIFTL_III(32,32,32, vlSelf->i_remainder, 1U) 
                              | (1U & VL_SHIFTR_III(32,32,32, vlSelf->i_dividend, 0x1fU)));
    if ((1U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (1U & vlSelf->o_dividend));
    }
    if ((2U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (2U & vlSelf->o_dividend));
    }
    if ((4U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (4U & vlSelf->o_dividend));
    }
    if ((8U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (8U & vlSelf->o_dividend));
    }
    if ((0x10U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x10U & vlSelf->o_dividend));
    }
    if ((0x20U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x20U & vlSelf->o_dividend));
    }
    if ((0x40U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x40U & vlSelf->o_dividend));
    }
    if ((0x80U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x80U & vlSelf->o_dividend));
    }
    if ((0x100U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x100U 
                                            & vlSelf->o_dividend));
    }
    if ((0x200U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x200U 
                                            & vlSelf->o_dividend));
    }
    if ((0x400U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x400U 
                                            & vlSelf->o_dividend));
    }
    if ((0x800U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x800U 
                                            & vlSelf->o_dividend));
    }
    if ((0x1000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x1000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x2000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x2000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x4000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x4000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x8000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->__Vtogcov__o_dividend = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x8000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x10000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x10000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x20000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x20000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x40000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x40000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x80000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->__Vtogcov__o_dividend = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x80000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x100000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->__Vtogcov__o_dividend = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x100000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x200000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->__Vtogcov__o_dividend = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x200000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x400000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->__Vtogcov__o_dividend = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x400000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x800000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->__Vtogcov__o_dividend = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x800000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x1000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->__Vtogcov__o_dividend = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x1000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x2000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->__Vtogcov__o_dividend = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x2000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x4000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->__Vtogcov__o_dividend = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x4000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x8000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->__Vtogcov__o_dividend = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x8000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x10000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->__Vtogcov__o_dividend = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x10000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x20000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->__Vtogcov__o_dividend = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x20000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x40000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->__Vtogcov__o_dividend = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x40000000U 
                                            & vlSelf->o_dividend));
    }
    if (((vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->__Vtogcov__o_dividend = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x80000000U 
                                            & vlSelf->o_dividend));
    }
    if ((1U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffeU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (1U 
                                                & vlSelf->temp_remainder));
    }
    if ((2U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffdU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (2U 
                                                & vlSelf->temp_remainder));
    }
    if ((4U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffbU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (4U 
                                                & vlSelf->temp_remainder));
    }
    if ((8U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffff7U 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (8U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffefU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffdfU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffbfU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x80U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffff7fU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x80U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x100U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffeffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x100U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x200U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffdffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x200U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x400U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffbffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x400U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x800U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffff7ffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x800U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x1000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffefffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x1000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x2000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffdfffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x2000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x4000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffbfffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x4000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x8000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffff7fffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x8000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffeffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffdffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffbffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x80000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfff7ffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x80000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x100000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffefffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x100000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x200000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffdfffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x200000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x400000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffbfffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x400000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x800000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->__Vtogcov__temp_remainder = ((0xff7fffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x800000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x1000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfeffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x1000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x2000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfdffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x2000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x4000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfbffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x4000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x8000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->__Vtogcov__temp_remainder = ((0xf7ffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x8000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->__Vtogcov__temp_remainder = ((0xefffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->__Vtogcov__temp_remainder = ((0xdfffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->__Vtogcov__temp_remainder = ((0xbfffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40000000U 
                                                & vlSelf->temp_remainder));
    }
    if (((vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[457]);
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
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (1U & vlSelf->o_quotient));
    }
    if ((2U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (2U & vlSelf->o_quotient));
    }
    if ((4U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (4U & vlSelf->o_quotient));
    }
    if ((8U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (8U & vlSelf->o_quotient));
    }
    if ((0x10U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10U & vlSelf->o_quotient));
    }
    if ((0x20U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20U & vlSelf->o_quotient));
    }
    if ((0x40U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40U & vlSelf->o_quotient));
    }
    if ((0x80U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80U & vlSelf->o_quotient));
    }
    if ((0x100U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x100U 
                                            & vlSelf->o_quotient));
    }
    if ((0x200U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x200U 
                                            & vlSelf->o_quotient));
    }
    if ((0x400U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x400U 
                                            & vlSelf->o_quotient));
    }
    if ((0x800U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x800U 
                                            & vlSelf->o_quotient));
    }
    if ((0x1000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x1000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x2000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x2000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x4000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x4000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x8000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->__Vtogcov__o_quotient = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x8000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x10000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x20000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x40000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x80000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->__Vtogcov__o_quotient = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x100000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->__Vtogcov__o_quotient = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x100000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x200000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->__Vtogcov__o_quotient = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x200000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x400000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->__Vtogcov__o_quotient = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x400000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x800000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->__Vtogcov__o_quotient = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x800000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x1000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->__Vtogcov__o_quotient = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x1000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x2000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->__Vtogcov__o_quotient = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x2000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x4000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->__Vtogcov__o_quotient = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x4000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x8000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->__Vtogcov__o_quotient = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x8000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x10000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->__Vtogcov__o_quotient = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x20000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->__Vtogcov__o_quotient = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x40000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->__Vtogcov__o_quotient = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40000000U 
                                            & vlSelf->o_quotient));
    }
    if (((vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->__Vtogcov__o_quotient = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80000000U 
                                            & vlSelf->o_quotient));
    }
    if ((1U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (1U & vlSelf->o_remainder));
    }
    if ((2U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (2U & vlSelf->o_remainder));
    }
    if ((4U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (4U & vlSelf->o_remainder));
    }
    if ((8U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (8U & vlSelf->o_remainder));
    }
    if ((0x10U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40U 
                                             & vlSelf->o_remainder));
    }
    if ((0x80U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80U 
                                             & vlSelf->o_remainder));
    }
    if ((0x100U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x100U 
                                             & vlSelf->o_remainder));
    }
    if ((0x200U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x200U 
                                             & vlSelf->o_remainder));
    }
    if ((0x400U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x400U 
                                             & vlSelf->o_remainder));
    }
    if ((0x800U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x800U 
                                             & vlSelf->o_remainder));
    }
    if ((0x1000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x1000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x2000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x2000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x4000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x4000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x8000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->__Vtogcov__o_remainder = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x8000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x10000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x80000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->__Vtogcov__o_remainder = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x100000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->__Vtogcov__o_remainder = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x100000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x200000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->__Vtogcov__o_remainder = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x200000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x400000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->__Vtogcov__o_remainder = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x400000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x800000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->__Vtogcov__o_remainder = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x800000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x1000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->__Vtogcov__o_remainder = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x1000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x2000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->__Vtogcov__o_remainder = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x2000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x4000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->__Vtogcov__o_remainder = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x4000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x8000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->__Vtogcov__o_remainder = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x8000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x10000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->__Vtogcov__o_remainder = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->__Vtogcov__o_remainder = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->__Vtogcov__o_remainder = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40000000U 
                                             & vlSelf->o_remainder));
    }
    if (((vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->__Vtogcov__o_remainder = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80000000U 
                                             & vlSelf->o_remainder));
    }
}

VL_INLINE_OPT void Vtop_divu_1iter___ico_sequent__TOP__divider_unsigned_pipelined__DOT__genblk1__BRA__1__KET____DOT__d1__0(Vtop_divu_1iter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_divu_1iter___ico_sequent__TOP__divider_unsigned_pipelined__DOT__genblk1__BRA__1__KET____DOT__d1__0\n"); );
    // Body
    if ((1U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffffeU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (1U & vlSelf->i_divisor));
    }
    if ((2U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffffdU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (2U & vlSelf->i_divisor));
    }
    if ((4U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffffbU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (4U & vlSelf->i_divisor));
    }
    if ((8U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffff7U 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (8U & vlSelf->i_divisor));
    }
    if ((0x10U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffffefU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x10U & vlSelf->i_divisor));
    }
    if ((0x20U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffffdfU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x20U & vlSelf->i_divisor));
    }
    if ((0x40U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffffbfU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x40U & vlSelf->i_divisor));
    }
    if ((0x80U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffff7fU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x80U & vlSelf->i_divisor));
    }
    if ((0x100U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffeffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x100U & vlSelf->i_divisor));
    }
    if ((0x200U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffdffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x200U & vlSelf->i_divisor));
    }
    if ((0x400U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffffbffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x400U & vlSelf->i_divisor));
    }
    if ((0x800U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffff7ffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x800U & vlSelf->i_divisor));
    }
    if ((0x1000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffefffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x1000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x2000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffdfffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x2000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x4000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->__Vtogcov__i_divisor = ((0xffffbfffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x4000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x8000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->__Vtogcov__i_divisor = ((0xffff7fffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x8000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x10000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffeffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x10000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x20000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffdffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x20000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x40000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->__Vtogcov__i_divisor = ((0xfffbffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x40000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x80000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->__Vtogcov__i_divisor = ((0xfff7ffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x80000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x100000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->__Vtogcov__i_divisor = ((0xffefffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x100000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x200000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->__Vtogcov__i_divisor = ((0xffdfffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x200000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x400000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->__Vtogcov__i_divisor = ((0xffbfffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x400000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x800000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->__Vtogcov__i_divisor = ((0xff7fffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x800000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x1000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->__Vtogcov__i_divisor = ((0xfeffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x1000000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x2000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->__Vtogcov__i_divisor = ((0xfdffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x2000000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x4000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->__Vtogcov__i_divisor = ((0xfbffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x4000000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x8000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->__Vtogcov__i_divisor = ((0xf7ffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x8000000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x10000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->__Vtogcov__i_divisor = ((0xefffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x10000000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x20000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->__Vtogcov__i_divisor = ((0xdfffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x20000000U 
                                           & vlSelf->i_divisor));
    }
    if ((0x40000000U & (vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->__Vtogcov__i_divisor = ((0xbfffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x40000000U 
                                           & vlSelf->i_divisor));
    }
    if (((vlSelf->i_divisor ^ vlSelf->__Vtogcov__i_divisor) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->__Vtogcov__i_divisor = ((0x7fffffffU 
                                         & vlSelf->__Vtogcov__i_divisor) 
                                        | (0x80000000U 
                                           & vlSelf->i_divisor));
    }
}

VL_INLINE_OPT void Vtop_divu_1iter___ico_sequent__TOP__divider_unsigned_pipelined__DOT__genblk1__BRA__1__KET____DOT__d1__1(Vtop_divu_1iter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_divu_1iter___ico_sequent__TOP__divider_unsigned_pipelined__DOT__genblk1__BRA__1__KET____DOT__d1__1\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h69a4f8fb__0;
    __VdfgTmp_h69a4f8fb__0 = 0;
    // Body
    if ((1U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (1U & vlSelf->i_dividend));
    }
    if ((2U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (2U & vlSelf->i_dividend));
    }
    if ((4U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (4U & vlSelf->i_dividend));
    }
    if ((8U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (8U & vlSelf->i_dividend));
    }
    if ((0x10U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x10U & vlSelf->i_dividend));
    }
    if ((0x20U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x20U & vlSelf->i_dividend));
    }
    if ((0x40U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x40U & vlSelf->i_dividend));
    }
    if ((0x80U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x80U & vlSelf->i_dividend));
    }
    if ((0x100U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x100U 
                                            & vlSelf->i_dividend));
    }
    if ((0x200U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x200U 
                                            & vlSelf->i_dividend));
    }
    if ((0x400U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x400U 
                                            & vlSelf->i_dividend));
    }
    if ((0x800U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x800U 
                                            & vlSelf->i_dividend));
    }
    if ((0x1000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x1000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x2000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x2000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x4000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x4000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x8000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->__Vtogcov__i_dividend = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x8000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x10000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x10000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x20000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x20000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x40000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x40000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x80000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->__Vtogcov__i_dividend = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x80000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x100000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->__Vtogcov__i_dividend = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x100000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x200000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->__Vtogcov__i_dividend = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x200000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x400000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->__Vtogcov__i_dividend = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x400000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x800000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->__Vtogcov__i_dividend = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x800000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x1000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->__Vtogcov__i_dividend = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x1000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x2000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->__Vtogcov__i_dividend = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x2000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x4000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->__Vtogcov__i_dividend = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x4000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x8000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->__Vtogcov__i_dividend = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x8000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x10000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->__Vtogcov__i_dividend = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x10000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x20000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->__Vtogcov__i_dividend = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x20000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x40000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->__Vtogcov__i_dividend = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x40000000U 
                                            & vlSelf->i_dividend));
    }
    if (((vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->__Vtogcov__i_dividend = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x80000000U 
                                            & vlSelf->i_dividend));
    }
    vlSelf->o_dividend = VL_SHIFTL_III(32,32,32, vlSelf->i_dividend, 1U);
    if ((1U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (1U & vlSelf->i_quotient));
    }
    if ((2U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (2U & vlSelf->i_quotient));
    }
    if ((4U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (4U & vlSelf->i_quotient));
    }
    if ((8U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (8U & vlSelf->i_quotient));
    }
    if ((0x10U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10U & vlSelf->i_quotient));
    }
    if ((0x20U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20U & vlSelf->i_quotient));
    }
    if ((0x40U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40U & vlSelf->i_quotient));
    }
    if ((0x80U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80U & vlSelf->i_quotient));
    }
    if ((0x100U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x100U 
                                            & vlSelf->i_quotient));
    }
    if ((0x200U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x200U 
                                            & vlSelf->i_quotient));
    }
    if ((0x400U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x400U 
                                            & vlSelf->i_quotient));
    }
    if ((0x800U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x800U 
                                            & vlSelf->i_quotient));
    }
    if ((0x1000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x1000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x2000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x2000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x4000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x4000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x8000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->__Vtogcov__i_quotient = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x8000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x10000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x20000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x40000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x80000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->__Vtogcov__i_quotient = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x100000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->__Vtogcov__i_quotient = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x100000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x200000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->__Vtogcov__i_quotient = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x200000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x400000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->__Vtogcov__i_quotient = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x400000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x800000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->__Vtogcov__i_quotient = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x800000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x1000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->__Vtogcov__i_quotient = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x1000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x2000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->__Vtogcov__i_quotient = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x2000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x4000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->__Vtogcov__i_quotient = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x4000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x8000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->__Vtogcov__i_quotient = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x8000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x10000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->__Vtogcov__i_quotient = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x20000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__i_quotient = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x40000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__i_quotient = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40000000U 
                                            & vlSelf->i_quotient));
    }
    if (((vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__i_quotient = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80000000U 
                                            & vlSelf->i_quotient));
    }
    if ((1U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (1U & vlSelf->i_remainder));
    }
    if ((2U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (2U & vlSelf->i_remainder));
    }
    if ((4U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (4U & vlSelf->i_remainder));
    }
    if ((8U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (8U & vlSelf->i_remainder));
    }
    if ((0x10U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40U 
                                             & vlSelf->i_remainder));
    }
    if ((0x80U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80U 
                                             & vlSelf->i_remainder));
    }
    if ((0x100U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x100U 
                                             & vlSelf->i_remainder));
    }
    if ((0x200U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x200U 
                                             & vlSelf->i_remainder));
    }
    if ((0x400U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x400U 
                                             & vlSelf->i_remainder));
    }
    if ((0x800U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x800U 
                                             & vlSelf->i_remainder));
    }
    if ((0x1000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x1000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x2000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x2000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x4000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x4000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x8000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->__Vtogcov__i_remainder = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x8000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x10000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x80000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->__Vtogcov__i_remainder = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x100000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->__Vtogcov__i_remainder = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x100000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x200000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->__Vtogcov__i_remainder = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x200000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x400000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->__Vtogcov__i_remainder = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x400000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x800000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->__Vtogcov__i_remainder = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x800000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x1000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->__Vtogcov__i_remainder = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x1000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x2000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->__Vtogcov__i_remainder = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x2000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x4000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->__Vtogcov__i_remainder = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x4000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x8000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->__Vtogcov__i_remainder = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x8000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x10000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->__Vtogcov__i_remainder = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->__Vtogcov__i_remainder = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->__Vtogcov__i_remainder = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40000000U 
                                             & vlSelf->i_remainder));
    }
    if (((vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->__Vtogcov__i_remainder = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80000000U 
                                             & vlSelf->i_remainder));
    }
    vlSelf->temp_remainder = (VL_SHIFTL_III(32,32,32, vlSelf->i_remainder, 1U) 
                              | (1U & VL_SHIFTR_III(32,32,32, vlSelf->i_dividend, 0x1fU)));
    if ((1U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (1U & vlSelf->o_dividend));
    }
    if ((2U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (2U & vlSelf->o_dividend));
    }
    if ((4U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (4U & vlSelf->o_dividend));
    }
    if ((8U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (8U & vlSelf->o_dividend));
    }
    if ((0x10U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x10U & vlSelf->o_dividend));
    }
    if ((0x20U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x20U & vlSelf->o_dividend));
    }
    if ((0x40U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x40U & vlSelf->o_dividend));
    }
    if ((0x80U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x80U & vlSelf->o_dividend));
    }
    if ((0x100U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x100U 
                                            & vlSelf->o_dividend));
    }
    if ((0x200U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x200U 
                                            & vlSelf->o_dividend));
    }
    if ((0x400U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x400U 
                                            & vlSelf->o_dividend));
    }
    if ((0x800U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x800U 
                                            & vlSelf->o_dividend));
    }
    if ((0x1000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x1000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x2000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x2000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x4000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x4000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x8000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->__Vtogcov__o_dividend = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x8000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x10000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x10000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x20000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x20000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x40000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x40000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x80000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->__Vtogcov__o_dividend = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x80000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x100000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->__Vtogcov__o_dividend = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x100000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x200000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->__Vtogcov__o_dividend = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x200000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x400000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->__Vtogcov__o_dividend = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x400000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x800000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->__Vtogcov__o_dividend = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x800000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x1000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->__Vtogcov__o_dividend = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x1000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x2000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->__Vtogcov__o_dividend = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x2000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x4000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->__Vtogcov__o_dividend = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x4000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x8000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->__Vtogcov__o_dividend = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x8000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x10000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->__Vtogcov__o_dividend = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x10000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x20000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->__Vtogcov__o_dividend = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x20000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x40000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->__Vtogcov__o_dividend = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x40000000U 
                                            & vlSelf->o_dividend));
    }
    if (((vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->__Vtogcov__o_dividend = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x80000000U 
                                            & vlSelf->o_dividend));
    }
    if ((1U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffeU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (1U 
                                                & vlSelf->temp_remainder));
    }
    if ((2U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffdU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (2U 
                                                & vlSelf->temp_remainder));
    }
    if ((4U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffbU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (4U 
                                                & vlSelf->temp_remainder));
    }
    if ((8U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffff7U 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (8U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffefU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffdfU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffbfU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x80U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffff7fU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x80U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x100U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffeffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x100U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x200U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffdffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x200U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x400U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffbffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x400U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x800U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffff7ffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x800U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x1000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffefffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x1000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x2000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffdfffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x2000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x4000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffbfffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x4000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x8000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffff7fffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x8000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffeffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffdffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffbffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x80000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfff7ffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x80000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x100000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffefffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x100000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x200000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffdfffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x200000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x400000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffbfffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x400000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x800000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->__Vtogcov__temp_remainder = ((0xff7fffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x800000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x1000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfeffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x1000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x2000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfdffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x2000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x4000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfbffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x4000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x8000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->__Vtogcov__temp_remainder = ((0xf7ffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x8000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->__Vtogcov__temp_remainder = ((0xefffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->__Vtogcov__temp_remainder = ((0xdfffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->__Vtogcov__temp_remainder = ((0xbfffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40000000U 
                                                & vlSelf->temp_remainder));
    }
    if (((vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[457]);
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
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (1U & vlSelf->o_quotient));
    }
    if ((2U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (2U & vlSelf->o_quotient));
    }
    if ((4U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (4U & vlSelf->o_quotient));
    }
    if ((8U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (8U & vlSelf->o_quotient));
    }
    if ((0x10U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10U & vlSelf->o_quotient));
    }
    if ((0x20U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20U & vlSelf->o_quotient));
    }
    if ((0x40U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40U & vlSelf->o_quotient));
    }
    if ((0x80U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80U & vlSelf->o_quotient));
    }
    if ((0x100U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x100U 
                                            & vlSelf->o_quotient));
    }
    if ((0x200U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x200U 
                                            & vlSelf->o_quotient));
    }
    if ((0x400U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x400U 
                                            & vlSelf->o_quotient));
    }
    if ((0x800U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x800U 
                                            & vlSelf->o_quotient));
    }
    if ((0x1000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x1000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x2000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x2000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x4000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x4000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x8000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->__Vtogcov__o_quotient = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x8000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x10000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x20000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x40000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x80000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->__Vtogcov__o_quotient = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x100000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->__Vtogcov__o_quotient = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x100000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x200000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->__Vtogcov__o_quotient = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x200000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x400000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->__Vtogcov__o_quotient = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x400000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x800000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->__Vtogcov__o_quotient = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x800000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x1000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->__Vtogcov__o_quotient = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x1000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x2000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->__Vtogcov__o_quotient = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x2000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x4000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->__Vtogcov__o_quotient = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x4000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x8000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->__Vtogcov__o_quotient = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x8000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x10000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->__Vtogcov__o_quotient = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x20000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->__Vtogcov__o_quotient = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x40000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->__Vtogcov__o_quotient = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40000000U 
                                            & vlSelf->o_quotient));
    }
    if (((vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->__Vtogcov__o_quotient = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80000000U 
                                            & vlSelf->o_quotient));
    }
    if ((1U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (1U & vlSelf->o_remainder));
    }
    if ((2U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (2U & vlSelf->o_remainder));
    }
    if ((4U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (4U & vlSelf->o_remainder));
    }
    if ((8U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (8U & vlSelf->o_remainder));
    }
    if ((0x10U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40U 
                                             & vlSelf->o_remainder));
    }
    if ((0x80U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80U 
                                             & vlSelf->o_remainder));
    }
    if ((0x100U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x100U 
                                             & vlSelf->o_remainder));
    }
    if ((0x200U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x200U 
                                             & vlSelf->o_remainder));
    }
    if ((0x400U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x400U 
                                             & vlSelf->o_remainder));
    }
    if ((0x800U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x800U 
                                             & vlSelf->o_remainder));
    }
    if ((0x1000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x1000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x2000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x2000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x4000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x4000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x8000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->__Vtogcov__o_remainder = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x8000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x10000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x80000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->__Vtogcov__o_remainder = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x100000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->__Vtogcov__o_remainder = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x100000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x200000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->__Vtogcov__o_remainder = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x200000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x400000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->__Vtogcov__o_remainder = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x400000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x800000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->__Vtogcov__o_remainder = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x800000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x1000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->__Vtogcov__o_remainder = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x1000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x2000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->__Vtogcov__o_remainder = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x2000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x4000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->__Vtogcov__o_remainder = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x4000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x8000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->__Vtogcov__o_remainder = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x8000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x10000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->__Vtogcov__o_remainder = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->__Vtogcov__o_remainder = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->__Vtogcov__o_remainder = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40000000U 
                                             & vlSelf->o_remainder));
    }
    if (((vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->__Vtogcov__o_remainder = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80000000U 
                                             & vlSelf->o_remainder));
    }
}

VL_INLINE_OPT void Vtop_divu_1iter___ico_sequent__TOP__divider_unsigned_pipelined__DOT__genblk2__BRA__15__KET____DOT__d1__1(Vtop_divu_1iter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_divu_1iter___ico_sequent__TOP__divider_unsigned_pipelined__DOT__genblk2__BRA__15__KET____DOT__d1__1\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h69a4f8fb__0;
    __VdfgTmp_h69a4f8fb__0 = 0;
    // Body
    if ((1U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (1U & vlSelf->i_dividend));
    }
    if ((2U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (2U & vlSelf->i_dividend));
    }
    if ((4U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (4U & vlSelf->i_dividend));
    }
    if ((8U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (8U & vlSelf->i_dividend));
    }
    if ((0x10U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x10U & vlSelf->i_dividend));
    }
    if ((0x20U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x20U & vlSelf->i_dividend));
    }
    if ((0x40U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x40U & vlSelf->i_dividend));
    }
    if ((0x80U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x80U & vlSelf->i_dividend));
    }
    if ((0x100U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x100U 
                                            & vlSelf->i_dividend));
    }
    if ((0x200U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x200U 
                                            & vlSelf->i_dividend));
    }
    if ((0x400U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x400U 
                                            & vlSelf->i_dividend));
    }
    if ((0x800U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x800U 
                                            & vlSelf->i_dividend));
    }
    if ((0x1000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x1000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x2000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x2000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x4000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->__Vtogcov__i_dividend = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x4000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x8000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->__Vtogcov__i_dividend = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x8000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x10000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x10000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x20000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x20000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x40000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->__Vtogcov__i_dividend = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x40000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x80000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->__Vtogcov__i_dividend = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x80000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x100000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->__Vtogcov__i_dividend = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x100000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x200000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->__Vtogcov__i_dividend = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x200000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x400000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->__Vtogcov__i_dividend = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x400000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x800000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->__Vtogcov__i_dividend = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x800000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x1000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->__Vtogcov__i_dividend = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x1000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x2000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->__Vtogcov__i_dividend = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x2000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x4000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->__Vtogcov__i_dividend = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x4000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x8000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->__Vtogcov__i_dividend = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x8000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x10000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->__Vtogcov__i_dividend = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x10000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x20000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->__Vtogcov__i_dividend = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x20000000U 
                                            & vlSelf->i_dividend));
    }
    if ((0x40000000U & (vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->__Vtogcov__i_dividend = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x40000000U 
                                            & vlSelf->i_dividend));
    }
    if (((vlSelf->i_dividend ^ vlSelf->__Vtogcov__i_dividend) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->__Vtogcov__i_dividend = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__i_dividend) 
                                         | (0x80000000U 
                                            & vlSelf->i_dividend));
    }
    vlSelf->o_dividend = VL_SHIFTL_III(32,32,32, vlSelf->i_dividend, 1U);
    if ((1U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (1U & vlSelf->i_quotient));
    }
    if ((2U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (2U & vlSelf->i_quotient));
    }
    if ((4U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (4U & vlSelf->i_quotient));
    }
    if ((8U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (8U & vlSelf->i_quotient));
    }
    if ((0x10U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10U & vlSelf->i_quotient));
    }
    if ((0x20U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20U & vlSelf->i_quotient));
    }
    if ((0x40U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40U & vlSelf->i_quotient));
    }
    if ((0x80U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80U & vlSelf->i_quotient));
    }
    if ((0x100U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x100U 
                                            & vlSelf->i_quotient));
    }
    if ((0x200U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x200U 
                                            & vlSelf->i_quotient));
    }
    if ((0x400U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x400U 
                                            & vlSelf->i_quotient));
    }
    if ((0x800U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x800U 
                                            & vlSelf->i_quotient));
    }
    if ((0x1000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x1000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x2000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x2000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x4000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->__Vtogcov__i_quotient = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x4000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x8000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->__Vtogcov__i_quotient = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x8000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x10000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x20000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x40000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->__Vtogcov__i_quotient = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x80000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->__Vtogcov__i_quotient = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x100000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->__Vtogcov__i_quotient = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x100000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x200000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->__Vtogcov__i_quotient = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x200000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x400000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->__Vtogcov__i_quotient = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x400000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x800000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->__Vtogcov__i_quotient = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x800000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x1000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->__Vtogcov__i_quotient = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x1000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x2000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->__Vtogcov__i_quotient = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x2000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x4000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->__Vtogcov__i_quotient = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x4000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x8000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->__Vtogcov__i_quotient = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x8000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x10000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->__Vtogcov__i_quotient = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x10000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x20000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->__Vtogcov__i_quotient = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x20000000U 
                                            & vlSelf->i_quotient));
    }
    if ((0x40000000U & (vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->__Vtogcov__i_quotient = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x40000000U 
                                            & vlSelf->i_quotient));
    }
    if (((vlSelf->i_quotient ^ vlSelf->__Vtogcov__i_quotient) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->__Vtogcov__i_quotient = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__i_quotient) 
                                         | (0x80000000U 
                                            & vlSelf->i_quotient));
    }
    if ((1U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (1U & vlSelf->i_remainder));
    }
    if ((2U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (2U & vlSelf->i_remainder));
    }
    if ((4U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (4U & vlSelf->i_remainder));
    }
    if ((8U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (8U & vlSelf->i_remainder));
    }
    if ((0x10U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40U 
                                             & vlSelf->i_remainder));
    }
    if ((0x80U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80U 
                                             & vlSelf->i_remainder));
    }
    if ((0x100U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x100U 
                                             & vlSelf->i_remainder));
    }
    if ((0x200U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x200U 
                                             & vlSelf->i_remainder));
    }
    if ((0x400U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x400U 
                                             & vlSelf->i_remainder));
    }
    if ((0x800U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x800U 
                                             & vlSelf->i_remainder));
    }
    if ((0x1000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x1000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x2000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x2000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x4000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->__Vtogcov__i_remainder = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x4000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x8000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->__Vtogcov__i_remainder = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x8000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x10000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->__Vtogcov__i_remainder = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x80000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->__Vtogcov__i_remainder = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x100000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->__Vtogcov__i_remainder = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x100000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x200000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->__Vtogcov__i_remainder = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x200000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x400000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->__Vtogcov__i_remainder = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x400000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x800000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->__Vtogcov__i_remainder = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x800000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x1000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->__Vtogcov__i_remainder = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x1000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x2000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->__Vtogcov__i_remainder = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x2000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x4000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->__Vtogcov__i_remainder = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x4000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x8000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->__Vtogcov__i_remainder = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x8000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x10000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->__Vtogcov__i_remainder = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x10000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x20000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->__Vtogcov__i_remainder = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x20000000U 
                                             & vlSelf->i_remainder));
    }
    if ((0x40000000U & (vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->__Vtogcov__i_remainder = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x40000000U 
                                             & vlSelf->i_remainder));
    }
    if (((vlSelf->i_remainder ^ vlSelf->__Vtogcov__i_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->__Vtogcov__i_remainder = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__i_remainder) 
                                          | (0x80000000U 
                                             & vlSelf->i_remainder));
    }
    vlSelf->temp_remainder = (VL_SHIFTL_III(32,32,32, vlSelf->i_remainder, 1U) 
                              | (1U & VL_SHIFTR_III(32,32,32, vlSelf->i_dividend, 0x1fU)));
    if ((1U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (1U & vlSelf->o_dividend));
    }
    if ((2U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (2U & vlSelf->o_dividend));
    }
    if ((4U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (4U & vlSelf->o_dividend));
    }
    if ((8U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (8U & vlSelf->o_dividend));
    }
    if ((0x10U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x10U & vlSelf->o_dividend));
    }
    if ((0x20U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x20U & vlSelf->o_dividend));
    }
    if ((0x40U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x40U & vlSelf->o_dividend));
    }
    if ((0x80U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x80U & vlSelf->o_dividend));
    }
    if ((0x100U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x100U 
                                            & vlSelf->o_dividend));
    }
    if ((0x200U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x200U 
                                            & vlSelf->o_dividend));
    }
    if ((0x400U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x400U 
                                            & vlSelf->o_dividend));
    }
    if ((0x800U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x800U 
                                            & vlSelf->o_dividend));
    }
    if ((0x1000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x1000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x2000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x2000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x4000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->__Vtogcov__o_dividend = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x4000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x8000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->__Vtogcov__o_dividend = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x8000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x10000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x10000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x20000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x20000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x40000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->__Vtogcov__o_dividend = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x40000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x80000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->__Vtogcov__o_dividend = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x80000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x100000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->__Vtogcov__o_dividend = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x100000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x200000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->__Vtogcov__o_dividend = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x200000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x400000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->__Vtogcov__o_dividend = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x400000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x800000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->__Vtogcov__o_dividend = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x800000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x1000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->__Vtogcov__o_dividend = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x1000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x2000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->__Vtogcov__o_dividend = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x2000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x4000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->__Vtogcov__o_dividend = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x4000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x8000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->__Vtogcov__o_dividend = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x8000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x10000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->__Vtogcov__o_dividend = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x10000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x20000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->__Vtogcov__o_dividend = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x20000000U 
                                            & vlSelf->o_dividend));
    }
    if ((0x40000000U & (vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->__Vtogcov__o_dividend = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x40000000U 
                                            & vlSelf->o_dividend));
    }
    if (((vlSelf->o_dividend ^ vlSelf->__Vtogcov__o_dividend) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->__Vtogcov__o_dividend = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__o_dividend) 
                                         | (0x80000000U 
                                            & vlSelf->o_dividend));
    }
    if ((1U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffeU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (1U 
                                                & vlSelf->temp_remainder));
    }
    if ((2U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffdU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (2U 
                                                & vlSelf->temp_remainder));
    }
    if ((4U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffffbU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (4U 
                                                & vlSelf->temp_remainder));
    }
    if ((8U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffff7U 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (8U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffefU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffdfU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffffbfU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x80U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffff7fU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x80U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x100U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffeffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x100U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x200U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffdffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x200U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x400U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffffbffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x400U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x800U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffff7ffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x800U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x1000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffefffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x1000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x2000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffdfffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x2000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x4000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffffbfffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x4000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x8000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffff7fffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x8000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffeffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffdffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfffbffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x80000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfff7ffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x80000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x100000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffefffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x100000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x200000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffdfffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x200000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x400000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->__Vtogcov__temp_remainder = ((0xffbfffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x400000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x800000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->__Vtogcov__temp_remainder = ((0xff7fffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x800000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x1000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfeffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x1000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x2000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfdffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x2000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x4000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->__Vtogcov__temp_remainder = ((0xfbffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x4000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x8000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->__Vtogcov__temp_remainder = ((0xf7ffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x8000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x10000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->__Vtogcov__temp_remainder = ((0xefffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x10000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x20000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->__Vtogcov__temp_remainder = ((0xdfffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x20000000U 
                                                & vlSelf->temp_remainder));
    }
    if ((0x40000000U & (vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->__Vtogcov__temp_remainder = ((0xbfffffffU 
                                              & vlSelf->__Vtogcov__temp_remainder) 
                                             | (0x40000000U 
                                                & vlSelf->temp_remainder));
    }
    if (((vlSelf->temp_remainder ^ vlSelf->__Vtogcov__temp_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[457]);
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
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (1U & vlSelf->o_remainder));
    }
    if ((2U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (2U & vlSelf->o_remainder));
    }
    if ((4U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (4U & vlSelf->o_remainder));
    }
    if ((8U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (8U & vlSelf->o_remainder));
    }
    if ((0x10U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40U 
                                             & vlSelf->o_remainder));
    }
    if ((0x80U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80U 
                                             & vlSelf->o_remainder));
    }
    if ((0x100U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x100U 
                                             & vlSelf->o_remainder));
    }
    if ((0x200U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x200U 
                                             & vlSelf->o_remainder));
    }
    if ((0x400U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x400U 
                                             & vlSelf->o_remainder));
    }
    if ((0x800U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x800U 
                                             & vlSelf->o_remainder));
    }
    if ((0x1000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x1000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x2000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x2000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x4000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->__Vtogcov__o_remainder = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x4000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x8000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->__Vtogcov__o_remainder = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x8000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x10000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->__Vtogcov__o_remainder = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x80000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->__Vtogcov__o_remainder = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x100000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->__Vtogcov__o_remainder = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x100000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x200000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->__Vtogcov__o_remainder = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x200000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x400000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->__Vtogcov__o_remainder = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x400000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x800000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->__Vtogcov__o_remainder = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x800000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x1000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->__Vtogcov__o_remainder = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x1000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x2000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->__Vtogcov__o_remainder = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x2000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x4000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->__Vtogcov__o_remainder = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x4000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x8000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->__Vtogcov__o_remainder = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x8000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x10000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->__Vtogcov__o_remainder = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x10000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x20000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->__Vtogcov__o_remainder = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x20000000U 
                                             & vlSelf->o_remainder));
    }
    if ((0x40000000U & (vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->__Vtogcov__o_remainder = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x40000000U 
                                             & vlSelf->o_remainder));
    }
    if (((vlSelf->o_remainder ^ vlSelf->__Vtogcov__o_remainder) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->__Vtogcov__o_remainder = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__o_remainder) 
                                          | (0x80000000U 
                                             & vlSelf->o_remainder));
    }
    vlSelf->temp_quotient = vlSelf->o_quotient;
    if ((1U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (1U & vlSelf->o_quotient));
    }
    if ((2U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (2U & vlSelf->o_quotient));
    }
    if ((4U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (4U & vlSelf->o_quotient));
    }
    if ((8U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (8U & vlSelf->o_quotient));
    }
    if ((0x10U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10U & vlSelf->o_quotient));
    }
    if ((0x20U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20U & vlSelf->o_quotient));
    }
    if ((0x40U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40U & vlSelf->o_quotient));
    }
    if ((0x80U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80U & vlSelf->o_quotient));
    }
    if ((0x100U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x100U 
                                            & vlSelf->o_quotient));
    }
    if ((0x200U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x200U 
                                            & vlSelf->o_quotient));
    }
    if ((0x400U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x400U 
                                            & vlSelf->o_quotient));
    }
    if ((0x800U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x800U 
                                            & vlSelf->o_quotient));
    }
    if ((0x1000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x1000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x2000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x2000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x4000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->__Vtogcov__o_quotient = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x4000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x8000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->__Vtogcov__o_quotient = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x8000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x10000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x20000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x40000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->__Vtogcov__o_quotient = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x80000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->__Vtogcov__o_quotient = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x100000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->__Vtogcov__o_quotient = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x100000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x200000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->__Vtogcov__o_quotient = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x200000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x400000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->__Vtogcov__o_quotient = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x400000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x800000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->__Vtogcov__o_quotient = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x800000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x1000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->__Vtogcov__o_quotient = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x1000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x2000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->__Vtogcov__o_quotient = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x2000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x4000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->__Vtogcov__o_quotient = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x4000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x8000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->__Vtogcov__o_quotient = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x8000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x10000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->__Vtogcov__o_quotient = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x10000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x20000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->__Vtogcov__o_quotient = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x20000000U 
                                            & vlSelf->o_quotient));
    }
    if ((0x40000000U & (vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->__Vtogcov__o_quotient = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x40000000U 
                                            & vlSelf->o_quotient));
    }
    if (((vlSelf->o_quotient ^ vlSelf->__Vtogcov__o_quotient) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->__Vtogcov__o_quotient = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__o_quotient) 
                                         | (0x80000000U 
                                            & vlSelf->o_quotient));
    }
}
