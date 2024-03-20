// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/penn/riscv32/hw2b/cla.sv", 80, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->b = VL_RAND_RESET_I(32);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__gin = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__pin = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__cout = VL_RAND_RESET_I(32);
    vlSelf->cla__DOT__c_7 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__c_15 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__c_23 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__c_31 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gout1 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__pout1 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gout2 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__pout2 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gout3 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__pout3 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__gout4 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__pout4 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__gin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__m_1__DOT__pin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__m_1__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__cout = VL_RAND_RESET_I(7);
    vlSelf->cla__DOT__m_1__DOT__gout_3 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__pout_3 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__gout_7 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__pout_7 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__cin_1 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a3__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_1__DOT__a7__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__gin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__m_2__DOT__pin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__m_2__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__cout = VL_RAND_RESET_I(7);
    vlSelf->cla__DOT__m_2__DOT__gout_3 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__pout_3 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__gout_7 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__pout_7 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__cin_1 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a3__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_2__DOT__a7__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__gin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__m_3__DOT__pin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__m_3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__cout = VL_RAND_RESET_I(7);
    vlSelf->cla__DOT__m_3__DOT__gout_3 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__pout_3 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__gout_7 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__pout_7 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__cin_1 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a3__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_3__DOT__a7__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__gin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__m_4__DOT__pin = VL_RAND_RESET_I(8);
    vlSelf->cla__DOT__m_4__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__cout = VL_RAND_RESET_I(7);
    vlSelf->cla__DOT__m_4__DOT__gout_3 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__pout_3 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__gout_7 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__pout_7 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__cin_1 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a3__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->cla__DOT__m_4__DOT__a7__DOT__P32 = VL_RAND_RESET_I(1);
}
