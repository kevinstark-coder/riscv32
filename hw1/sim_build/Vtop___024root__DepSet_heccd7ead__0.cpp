// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->rca4__DOT__SWITCH = vlSelf->SWITCH;
    vlSelf->rca4__DOT__a0__DOT__a = (3U & ((IData)(vlSelf->SWITCH) 
                                           >> 0U));
    vlSelf->rca4__DOT__a0__DOT__b = (3U & ((IData)(vlSelf->SWITCH) 
                                           >> 4U));
    vlSelf->rca4__DOT__a3__DOT__a = (3U & ((IData)(vlSelf->SWITCH) 
                                           >> 2U));
    vlSelf->rca4__DOT__a3__DOT__b = (3U & ((IData)(vlSelf->SWITCH) 
                                           >> 6U));
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__cout_tmp2 
        = vlSelf->rca4__DOT__a0__DOT__a0__DOT__h1__DOT__cout;
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__cin = vlSelf->rca4__DOT__a0__DOT__cin;
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__a = (1U & 
                                              ((IData)(vlSelf->SWITCH) 
                                               >> 0U));
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__b = (1U & 
                                              ((IData)(vlSelf->SWITCH) 
                                               >> 4U));
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__a = (1U & 
                                              ((IData)(vlSelf->SWITCH) 
                                               >> 1U));
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__b = (1U & 
                                              ((IData)(vlSelf->SWITCH) 
                                               >> 5U));
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__a = (1U & 
                                              ((IData)(vlSelf->SWITCH) 
                                               >> 2U));
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__b = (1U & 
                                              ((IData)(vlSelf->SWITCH) 
                                               >> 6U));
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__a = (1U & 
                                              ((IData)(vlSelf->SWITCH) 
                                               >> 3U));
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__b = (1U & 
                                              ((IData)(vlSelf->SWITCH) 
                                               >> 7U));
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__cout 
        = (IData)((0x88U == (0x88U & (IData)(vlSelf->SWITCH))));
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__s 
        = (1U & ((IData)(vlSelf->SWITCH) ^ ((IData)(vlSelf->SWITCH) 
                                            >> 4U)));
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__s 
        = (1U & VL_REDXOR_8((0x88U & (IData)(vlSelf->SWITCH))));
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__cout 
        = (IData)((0x44U == (0x44U & (IData)(vlSelf->SWITCH))));
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__s 
        = (1U & VL_REDXOR_8((0x44U & (IData)(vlSelf->SWITCH))));
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__cout 
        = (IData)((0x22U == (0x22U & (IData)(vlSelf->SWITCH))));
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__s 
        = (1U & VL_REDXOR_8((0x22U & (IData)(vlSelf->SWITCH))));
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__cout 
        = (IData)((0x11U == (0x11U & (IData)(vlSelf->SWITCH))));
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__h1__DOT__b 
        = vlSelf->rca4__DOT__a0__DOT__a0__DOT__cin;
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__a 
        = vlSelf->rca4__DOT__a0__DOT__a0__DOT__a;
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__b 
        = vlSelf->rca4__DOT__a0__DOT__a0__DOT__b;
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__a 
        = vlSelf->rca4__DOT__a0__DOT__a1__DOT__a;
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__b 
        = vlSelf->rca4__DOT__a0__DOT__a1__DOT__b;
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__a 
        = vlSelf->rca4__DOT__a3__DOT__a0__DOT__a;
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__b 
        = vlSelf->rca4__DOT__a3__DOT__a0__DOT__b;
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__a 
        = vlSelf->rca4__DOT__a3__DOT__a1__DOT__a;
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__b 
        = vlSelf->rca4__DOT__a3__DOT__a1__DOT__b;
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__cout_tmp1 
        = vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__cout;
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__h1__DOT__a 
        = vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__s;
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__s = vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__s;
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__s_tmp = vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__s;
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__h1__DOT__s 
        = vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__s;
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__a 
        = vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__s;
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__s_tmp = vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__s;
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout_tmp1 
        = vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__cout;
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__a 
        = vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__s;
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__s_tmp = vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__s;
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout_tmp1 
        = vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__cout;
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__a 
        = vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__s;
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__s_tmp = vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__s;
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__cout = vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__cout;
    vlSelf->rca4__DOT__a0__DOT__cout_tmp = vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__cout;
    vlSelf->rca4__DOT__a0__DOT__a0__DOT__cout_tmp1 
        = vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__cout;
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__cin = vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__cout;
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__s 
        = ((IData)(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__s) 
           ^ (IData)(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__cout));
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__cout 
        = ((IData)(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__s) 
           & (IData)(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__cout));
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__b 
        = vlSelf->rca4__DOT__a0__DOT__a1__DOT__cin;
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__s = vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__s;
    vlSelf->rca4__DOT__a0__DOT__s = (((IData)(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__s) 
                                      << 1U) | (IData)(vlSelf->rca4__DOT__a0__DOT__a0__DOT__h0__DOT__s));
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout_tmp2 
        = vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__cout;
    vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout = ((IData)(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h0__DOT__cout) 
                                                 | (IData)(vlSelf->rca4__DOT__a0__DOT__a1__DOT__h1__DOT__cout));
    vlSelf->rca4__DOT__a0__DOT__cout = vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout;
    vlSelf->rca4__DOT__cout0 = vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout;
    vlSelf->rca4__DOT__a3__DOT__cin = vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout;
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__s 
        = ((IData)(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__s) 
           ^ (IData)(vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout));
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__cout 
        = ((IData)(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__s) 
           & (IData)(vlSelf->rca4__DOT__a0__DOT__a1__DOT__cout));
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__cin = vlSelf->rca4__DOT__a3__DOT__cin;
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__s = vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__s;
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout_tmp2 
        = vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__cout;
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout = ((IData)(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h0__DOT__cout) 
                                                 | (IData)(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__cout));
    vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__b 
        = vlSelf->rca4__DOT__a3__DOT__a0__DOT__cin;
    vlSelf->rca4__DOT__a3__DOT__cout_tmp = vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout;
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__cin = vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout;
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__cout 
        = ((IData)(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__s) 
           & (IData)(vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout));
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__s 
        = ((IData)(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__s) 
           ^ (IData)(vlSelf->rca4__DOT__a3__DOT__a0__DOT__cout));
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__b 
        = vlSelf->rca4__DOT__a3__DOT__a1__DOT__cin;
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__cout_tmp2 
        = vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__cout;
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__cout = ((IData)(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h0__DOT__cout) 
                                                 | (IData)(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__cout));
    vlSelf->rca4__DOT__a3__DOT__a1__DOT__s = vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__s;
    vlSelf->rca4__DOT__a3__DOT__s = (((IData)(vlSelf->rca4__DOT__a3__DOT__a1__DOT__h1__DOT__s) 
                                      << 1U) | (IData)(vlSelf->rca4__DOT__a3__DOT__a0__DOT__h1__DOT__s));
    vlSelf->rca4__DOT__a3__DOT__cout = vlSelf->rca4__DOT__a3__DOT__a1__DOT__cout;
    vlSelf->rca4__DOT__ignored = vlSelf->rca4__DOT__a3__DOT__a1__DOT__cout;
    vlSelf->LED = (((IData)(vlSelf->rca4__DOT__a3__DOT__s) 
                    << 2U) | (IData)(vlSelf->rca4__DOT__a0__DOT__s));
    vlSelf->rca4__DOT__LED = vlSelf->LED;
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
            VL_FATAL_MT("/home/penn/riscv32/hw1/rca.sv", 45, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/home/penn/riscv32/hw1/rca.sv", 45, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/penn/riscv32/hw1/rca.sv", 45, "", "Active region did not converge.");
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
}
#endif  // VL_DEBUG
