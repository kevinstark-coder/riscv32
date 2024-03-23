// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h9fd4f7e8__0;
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h9fd4f7e8__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h1973cdbb__0;
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h1973cdbb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT____VdfgTmp_haf7f431a__0;
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_haf7f431a__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hf43f8b62__0;
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hf43f8b62__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0;
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0 = 0;
    IData/*30:0*/ RiscvProcessor__DOT__datapath__DOT__cla__DOT____VdfgTmp_hb04ad8a1__0;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT____VdfgTmp_hb04ad8a1__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT____VdfgTmp_h5c66182c__0;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT____VdfgTmp_h5c66182c__0;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT____VdfgTmp_h5c66182c__0;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT____VdfgTmp_h5c66182c__0;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT____VdfgTmp_h5c66182c__0;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT____VdfgTmp_h5c66182c__0;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT____VdfgTmp_h5c66182c__0;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT____VdfgTmp_h5c66182c__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT____VdfgTmp_h5c66182c__0;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT____VdfgTmp_h5c66182c__0 = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_quotient = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 = 0;
    std::string __Vfunc_rv_disasm__0__Vfuncout;
    IData/*31:0*/ __Vfunc_rv_disasm__0__instruction;
    __Vfunc_rv_disasm__0__instruction = 0;
    std::string __Vfunc_rv_disasm__0__da_str;
    CData/*6:0*/ __Vfunc_rv_disasm__0__opcode;
    __Vfunc_rv_disasm__0__opcode = 0;
    CData/*4:0*/ __Vfunc_rv_disasm__0__rd;
    __Vfunc_rv_disasm__0__rd = 0;
    CData/*2:0*/ __Vfunc_rv_disasm__0__funct3;
    __Vfunc_rv_disasm__0__funct3 = 0;
    CData/*4:0*/ __Vfunc_rv_disasm__0__rs1;
    __Vfunc_rv_disasm__0__rs1 = 0;
    CData/*4:0*/ __Vfunc_rv_disasm__0__rs2;
    __Vfunc_rv_disasm__0__rs2 = 0;
    CData/*6:0*/ __Vfunc_rv_disasm__0__funct7;
    __Vfunc_rv_disasm__0__funct7 = 0;
    IData/*19:0*/ __Vfunc_rv_disasm__0__imm_u;
    __Vfunc_rv_disasm__0__imm_u = 0;
    SData/*11:0*/ __Vfunc_rv_disasm__0__imm_i;
    __Vfunc_rv_disasm__0__imm_i = 0;
    SData/*11:0*/ __Vfunc_rv_disasm__0__imm_s;
    __Vfunc_rv_disasm__0__imm_s = 0;
    SData/*12:0*/ __Vfunc_rv_disasm__0__imm_b;
    __Vfunc_rv_disasm__0__imm_b = 0;
    IData/*20:0*/ __Vfunc_rv_disasm__0__tmp_j;
    __Vfunc_rv_disasm__0__tmp_j = 0;
    IData/*20:0*/ __Vfunc_rv_disasm__0__imm_j;
    __Vfunc_rv_disasm__0__imm_j = 0;
    // Body
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__i_dividend 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__i_remainder 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__b;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__i_quotient 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__c;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 2U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 3U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 4U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 5U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 6U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 7U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 8U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 9U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xaU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xbU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xcU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xdU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xeU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xfU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 2U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 3U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 4U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 5U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 6U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 7U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 8U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 9U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xaU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xbU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xcU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xdU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xeU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xfU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x10U);
    vlSelf->RiscvProcessor__DOT__clock_mem = vlSelf->clock_mem;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
    vlSelf->RiscvProcessor__DOT__clock_proc = vlSelf->clock_proc;
    vlSelf->RiscvProcessor__DOT__rst = vlSelf->rst;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0U] 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__b;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0U] 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__c;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[0U] 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[1U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[2U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 2U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[3U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 3U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[4U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 4U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[5U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 5U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[6U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 6U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[7U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 7U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[8U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 8U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[9U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 9U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[0xaU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xaU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[0xbU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xbU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[0xcU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xcU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[0xdU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xdU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[0xeU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xeU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[0xfU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0xfU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[0x10U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x10U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b 
        = ((0x1000U & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                       >> 0x13U)) | ((0x800U & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                                            >> 7U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_j 
        = ((0x100000U & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                         >> 0xbU)) | ((0xff000U & vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem) 
                                      | ((0x800U & 
                                          (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                                               >> 0x14U)))));
    vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
        = vlSelf->RiscvProcessor__DOT__mem__DOT__load_data_from_dmem;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rd 
        = (0x1fU & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                    >> 7U));
    vlSelf->RiscvProcessor__DOT__insn_from_imem = vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i 
        = (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
           >> 0x14U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs2 
        = (0x1fU & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                    >> 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs1 
        = (0x1fU & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                    >> 0xfU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__b, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x1fU)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7 
        = (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
           >> 0x19U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3 
        = (7U & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                 >> 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode 
        = (0x7fU & vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem);
    vlSelf->RiscvProcessor__DOT__mem__DOT__clock_mem 
        = vlSelf->RiscvProcessor__DOT__clock_mem;
    vlSelf->RiscvProcessor__DOT__mem__DOT__pc_to_imem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem;
    vlSelf->RiscvProcessor__DOT__pc_to_imem = vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__clk 
        = vlSelf->RiscvProcessor__DOT__clock_proc;
    vlSelf->RiscvProcessor__DOT__mem__DOT__rst = vlSelf->RiscvProcessor__DOT__rst;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rst 
        = vlSelf->RiscvProcessor__DOT__rst;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b_sext 
        = (((- (IData)((vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                        >> 0x1fU))) << 0xdU) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_j_sext 
        = (((- (IData)((vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                        >> 0x1fU))) << 0x15U) | vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_j);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__load_data_from_dmem 
        = vlSelf->RiscvProcessor__DOT__mem_data_loaded_value;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rd 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rd;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_from_imem 
        = vlSelf->RiscvProcessor__DOT__insn_from_imem;
    __Vfunc_rv_disasm__0__instruction = vlSelf->RiscvProcessor__DOT__insn_from_imem;
    __Vfunc_rv_disasm__0__opcode = (0x7fU & __Vfunc_rv_disasm__0__instruction);
    __Vfunc_rv_disasm__0__rd = (0x1fU & (__Vfunc_rv_disasm__0__instruction 
                                         >> 7U));
    __Vfunc_rv_disasm__0__funct3 = (7U & (__Vfunc_rv_disasm__0__instruction 
                                          >> 0xcU));
    __Vfunc_rv_disasm__0__rs1 = (0x1fU & (__Vfunc_rv_disasm__0__instruction 
                                          >> 0xfU));
    __Vfunc_rv_disasm__0__rs2 = (0x1fU & (__Vfunc_rv_disasm__0__instruction 
                                          >> 0x14U));
    __Vfunc_rv_disasm__0__funct7 = (__Vfunc_rv_disasm__0__instruction 
                                    >> 0x19U);
    __Vfunc_rv_disasm__0__imm_u = (__Vfunc_rv_disasm__0__instruction 
                                   >> 0xcU);
    __Vfunc_rv_disasm__0__imm_i = (__Vfunc_rv_disasm__0__instruction 
                                   >> 0x14U);
    __Vfunc_rv_disasm__0__imm_s = (((IData)(__Vfunc_rv_disasm__0__funct7) 
                                    << 5U) | (IData)(__Vfunc_rv_disasm__0__rd));
    __Vfunc_rv_disasm__0__imm_b = ((0x1000U & ((IData)(__Vfunc_rv_disasm__0__funct7) 
                                               << 6U)) 
                                   | ((0x800U & ((IData)(__Vfunc_rv_disasm__0__rd) 
                                                 << 0xbU)) 
                                      | ((0x7e0U & 
                                          ((IData)(__Vfunc_rv_disasm__0__funct7) 
                                           << 5U)) 
                                         | (0x1eU & (IData)(__Vfunc_rv_disasm__0__rd)))));
    __Vfunc_rv_disasm__0__tmp_j = (0x1ffffeU & (__Vfunc_rv_disasm__0__instruction 
                                                >> 0xbU));
    __Vfunc_rv_disasm__0__imm_j = ((0x100000U & __Vfunc_rv_disasm__0__tmp_j) 
                                   | ((0xffc00U & (__Vfunc_rv_disasm__0__tmp_j 
                                                   << 9U)) 
                                      | ((0x200U & 
                                          (__Vfunc_rv_disasm__0__tmp_j 
                                           >> 2U)) 
                                         | (0x1feU 
                                            & (__Vfunc_rv_disasm__0__tmp_j 
                                               >> 0xbU)))));
    __Vfunc_rv_disasm__0__da_str = ((0x40U & (IData)(__Vfunc_rv_disasm__0__opcode))
                                     ? ((0x20U & (IData)(__Vfunc_rv_disasm__0__opcode))
                                         ? ((0x10U 
                                             & (IData)(__Vfunc_rv_disasm__0__opcode))
                                             ? ((8U 
                                                 & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                 ? 
                                                std::string{"Unknown instruction"}
                                                 : 
                                                ((4U 
                                                  & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                  ? 
                                                 std::string{"Unknown instruction"}
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (__Vfunc_rv_disasm__0__instruction 
                                                      >> 7U))
                                                     ? 
                                                    std::string{"ecall"}
                                                     : 
                                                    std::string{"Unknown environment instruction"})
                                                    : 
                                                   std::string{"Unknown instruction"})
                                                   : 
                                                  std::string{"Unknown instruction"})))
                                             : ((8U 
                                                 & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                 ? 
                                                ((4U 
                                                  & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                    ? 
                                                   ((0x6fU 
                                                     == (IData)(__Vfunc_rv_disasm__0__opcode))
                                                     ? VL_SFORMATF_NX("JAL x%0#, %0#",
                                                                      5,
                                                                      __Vfunc_rv_disasm__0__rd,
                                                                      21,
                                                                      __Vfunc_rv_disasm__0__imm_j) 
                                                     : 
                                                    std::string{"Unknown J-type instruction"})
                                                    : 
                                                   std::string{"Unknown instruction"})
                                                   : 
                                                  std::string{"Unknown instruction"})
                                                  : 
                                                 std::string{"Unknown instruction"})
                                                 : 
                                                ((4U 
                                                  & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(__Vfunc_rv_disasm__0__funct3))
                                                     ? VL_SFORMATF_NX("JALR x%0#, x%0#, %0#",
                                                                      5,
                                                                      __Vfunc_rv_disasm__0__rd,
                                                                      5,
                                                                      (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                      12,
                                                                      __Vfunc_rv_disasm__0__imm_i) 
                                                     : 
                                                    std::string{"Unknown JALR instruction"})
                                                    : 
                                                   std::string{"Unknown instruction"})
                                                   : 
                                                  std::string{"Unknown instruction"})
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? VL_SFORMATF_NX("BGEU x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs1,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs2),
                                                                        13,
                                                                        __Vfunc_rv_disasm__0__imm_b) 
                                                       : VL_SFORMATF_NX("BLTU x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs1,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs2),
                                                                        13,
                                                                        __Vfunc_rv_disasm__0__imm_b) )
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? VL_SFORMATF_NX("BGE x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs1,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs2),
                                                                        13,
                                                                        __Vfunc_rv_disasm__0__imm_b) 
                                                       : VL_SFORMATF_NX("BLT x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs1,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs2),
                                                                        13,
                                                                        __Vfunc_rv_disasm__0__imm_b) ))
                                                     : 
                                                    ((2U 
                                                      & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                      ? 
                                                     std::string{"Unknown B-type instruction"}
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? VL_SFORMATF_NX("BNE x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs1,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs2),
                                                                        13,
                                                                        __Vfunc_rv_disasm__0__imm_b) 
                                                       : VL_SFORMATF_NX("BEQ x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs1,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs2),
                                                                        13,
                                                                        __Vfunc_rv_disasm__0__imm_b) )))
                                                    : 
                                                   std::string{"Unknown instruction"})
                                                   : 
                                                  std::string{"Unknown instruction"}))))
                                         : std::string{"Unknown instruction"})
                                     : ((0x20U & (IData)(__Vfunc_rv_disasm__0__opcode))
                                         ? ((0x10U 
                                             & (IData)(__Vfunc_rv_disasm__0__opcode))
                                             ? ((8U 
                                                 & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                 ? 
                                                std::string{"Unknown instruction"}
                                                 : 
                                                ((4U 
                                                  & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                    ? VL_SFORMATF_NX("LUI x%0#, 0x%0x",
                                                                     5,
                                                                     __Vfunc_rv_disasm__0__rd,
                                                                     20,
                                                                     __Vfunc_rv_disasm__0__imm_u) 
                                                    : 
                                                   std::string{"Unknown instruction"})
                                                   : 
                                                  std::string{"Unknown instruction"})
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(__Vfunc_rv_disasm__0__funct7))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                        ? VL_SFORMATF_NX("REMU x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) 
                                                        : VL_SFORMATF_NX("REM x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) )
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                        ? VL_SFORMATF_NX("DIVU x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) 
                                                        : VL_SFORMATF_NX("DIV x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) ))
                                                      : 
                                                     ((2U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                        ? VL_SFORMATF_NX("MULHU x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) 
                                                        : VL_SFORMATF_NX("MULHSU x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) )
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                        ? VL_SFORMATF_NX("MULH x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) 
                                                        : VL_SFORMATF_NX("MUL x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) )))
                                                     : 
                                                    ((4U 
                                                      & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                        ? VL_SFORMATF_NX("AND x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) 
                                                        : VL_SFORMATF_NX("OR x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) )
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                        ? VL_SFORMATF_NX("SRL x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) 
                                                        : VL_SFORMATF_NX("XOR x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) ))
                                                      : 
                                                     ((2U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                        ? VL_SFORMATF_NX("SLTU x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) 
                                                        : VL_SFORMATF_NX("SLT x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) )
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                        ? VL_SFORMATF_NX("SLL x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) 
                                                        : VL_SFORMATF_NX("ADD x%0#, x%0#, x%0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rs2) ))))
                                                    : 
                                                   std::string{"Unknown instruction"})
                                                   : 
                                                  std::string{"Unknown instruction"})))
                                             : ((8U 
                                                 & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                 ? 
                                                std::string{"Unknown instruction"}
                                                 : 
                                                ((4U 
                                                  & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                  ? 
                                                 std::string{"Unknown instruction"}
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(__Vfunc_rv_disasm__0__funct3))
                                                     ? VL_SFORMATF_NX("SB x%0#, %0#(x%0#)",
                                                                      5,
                                                                      __Vfunc_rv_disasm__0__rs2,
                                                                      12,
                                                                      (IData)(__Vfunc_rv_disasm__0__imm_s),
                                                                      5,
                                                                      __Vfunc_rv_disasm__0__rs1) 
                                                     : 
                                                    ((1U 
                                                      == (IData)(__Vfunc_rv_disasm__0__funct3))
                                                      ? VL_SFORMATF_NX("SH x%0#, %0#(x%0#)",
                                                                       5,
                                                                       __Vfunc_rv_disasm__0__rs2,
                                                                       12,
                                                                       (IData)(__Vfunc_rv_disasm__0__imm_s),
                                                                       5,
                                                                       __Vfunc_rv_disasm__0__rs1) 
                                                      : 
                                                     ((2U 
                                                       == (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? VL_SFORMATF_NX("SW x%0#, %0#(x%0#)",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs2,
                                                                        12,
                                                                        (IData)(__Vfunc_rv_disasm__0__imm_s),
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs1) 
                                                       : 
                                                      std::string{"Unknown S-type instruction"})))
                                                    : 
                                                   std::string{"Unknown instruction"})
                                                   : 
                                                  std::string{"Unknown instruction"}))))
                                         : ((0x10U 
                                             & (IData)(__Vfunc_rv_disasm__0__opcode))
                                             ? ((8U 
                                                 & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                 ? 
                                                std::string{"Unknown instruction"}
                                                 : 
                                                ((4U 
                                                  & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                    ? VL_SFORMATF_NX("AUIPC x%0#, 0x%0x",
                                                                     5,
                                                                     __Vfunc_rv_disasm__0__rd,
                                                                     20,
                                                                     __Vfunc_rv_disasm__0__imm_u) 
                                                    : 
                                                   std::string{"Unknown instruction"})
                                                   : 
                                                  std::string{"Unknown instruction"})
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? VL_SFORMATF_NX("ANDI x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rd,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                        12,
                                                                        __Vfunc_rv_disasm__0__imm_i) 
                                                       : VL_SFORMATF_NX("ORI x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rd,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                        12,
                                                                        __Vfunc_rv_disasm__0__imm_i) )
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? 
                                                      ((0x20U 
                                                        & (IData)(__Vfunc_rv_disasm__0__funct7))
                                                        ? 
                                                       ((0x20U 
                                                         == (IData)(__Vfunc_rv_disasm__0__funct7))
                                                         ? VL_SFORMATF_NX("SRAI x%0#, x%0#, %0#",
                                                                          5,
                                                                          __Vfunc_rv_disasm__0__rd,
                                                                          5,
                                                                          (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                          5,
                                                                          (0x1fU 
                                                                           & (IData)(__Vfunc_rv_disasm__0__imm_i))) 
                                                         : 
                                                        std::string{"Unknown I-type instruction"})
                                                        : VL_SFORMATF_NX("SRLI x%0#, x%0#, %0#",
                                                                         5,
                                                                         __Vfunc_rv_disasm__0__rd,
                                                                         5,
                                                                         (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                         5,
                                                                         (0x1fU 
                                                                          & (IData)(__Vfunc_rv_disasm__0__imm_i))) )
                                                       : VL_SFORMATF_NX("XORI x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rd,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                        12,
                                                                        __Vfunc_rv_disasm__0__imm_i) ))
                                                     : 
                                                    ((2U 
                                                      & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? VL_SFORMATF_NX("SLTIU x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rd,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                        12,
                                                                        __Vfunc_rv_disasm__0__imm_i) 
                                                       : VL_SFORMATF_NX("SLTI x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rd,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                        12,
                                                                        __Vfunc_rv_disasm__0__imm_i) )
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? VL_SFORMATF_NX("SLLI x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rd,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                        5,
                                                                        (0x1fU 
                                                                         & (IData)(__Vfunc_rv_disasm__0__imm_i))) 
                                                       : VL_SFORMATF_NX("ADDI x%0#, x%0#, %0#",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rd,
                                                                        5,
                                                                        (IData)(__Vfunc_rv_disasm__0__rs1),
                                                                        12,
                                                                        __Vfunc_rv_disasm__0__imm_i) )))
                                                    : 
                                                   std::string{"Unknown instruction"})
                                                   : 
                                                  std::string{"Unknown instruction"})))
                                             : ((8U 
                                                 & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                 ? 
                                                ((4U 
                                                  & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(__Vfunc_rv_disasm__0__funct3))
                                                     ? 
                                                    std::string{"fence"}
                                                     : 
                                                    ((1U 
                                                      == (IData)(__Vfunc_rv_disasm__0__funct3))
                                                      ? 
                                                     ((0U 
                                                       == (IData)(__Vfunc_rv_disasm__0__funct7))
                                                       ? 
                                                      std::string{"fence.i"}
                                                       : 
                                                      std::string{"Unknown fence instruction"})
                                                      : 
                                                     std::string{"Unknown fence instruction"}))
                                                    : 
                                                   std::string{"Unknown instruction"})
                                                   : 
                                                  std::string{"Unknown instruction"})
                                                  : 
                                                 std::string{"Unknown instruction"})
                                                 : 
                                                ((4U 
                                                  & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                  ? 
                                                 std::string{"Unknown instruction"}
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                      ? 
                                                     std::string{"Unknown Load instruction"}
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? VL_SFORMATF_NX("LHU x%0#, %0#(x%0#)",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rd,
                                                                        12,
                                                                        (IData)(__Vfunc_rv_disasm__0__imm_i),
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs1) 
                                                       : VL_SFORMATF_NX("LBU x%0#, %0#(x%0#)",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rd,
                                                                        12,
                                                                        (IData)(__Vfunc_rv_disasm__0__imm_i),
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs1) ))
                                                     : 
                                                    ((2U 
                                                      & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? 
                                                      std::string{"Unknown Load instruction"}
                                                       : VL_SFORMATF_NX("LW x%0#, %0#(x%0#)",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rd,
                                                                        12,
                                                                        (IData)(__Vfunc_rv_disasm__0__imm_i),
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs1) )
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_rv_disasm__0__funct3))
                                                       ? VL_SFORMATF_NX("LH x%0#, %0#(x%0#)",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rd,
                                                                        12,
                                                                        (IData)(__Vfunc_rv_disasm__0__imm_i),
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs1) 
                                                       : VL_SFORMATF_NX("LB x%0#, %0#(x%0#)",
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rd,
                                                                        12,
                                                                        (IData)(__Vfunc_rv_disasm__0__imm_i),
                                                                        5,
                                                                        __Vfunc_rv_disasm__0__rs1) )))
                                                    : 
                                                   std::string{"Unknown instruction"})
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_rv_disasm__0__opcode))
                                                    ? 
                                                   std::string{"Unknown instruction"}
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (__Vfunc_rv_disasm__0__instruction 
                                                      >> 7U))
                                                     ? 
                                                    std::string{"bubble"}
                                                     : 
                                                    std::string{"Unknown instruction"}))))))));
    __Vfunc_rv_disasm__0__Vfuncout = __Vfunc_rv_disasm__0__da_str;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string 
        = __Vfunc_rv_disasm__0__Vfuncout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext 
        = (((- (IData)((vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_shamt 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs2];
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs1];
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7) 
            << 5U) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rd));
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h9fd4f7e8__0 
        = ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lui 
        = (0x37U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_auipc 
        = (0x17U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_jal 
        = (0x6fU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_jalr 
        = (0x67U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_fence 
        = (0xfU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_ecall 
        = ((0x73U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                     >> 7U)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_beq 
        = ((0x63U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bne 
        = ((0x63U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_blt 
        = ((0x63U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (4U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bge 
        = ((0x63U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bltu 
        = ((0x63U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (6U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bgeu 
        = ((0x63U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (7U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slti 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sltiu 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_xori 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (4U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_ori 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (6U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_andi 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (7U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lb 
        = ((3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lh 
        = ((3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lbu 
        = ((3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (4U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lhu 
        = ((3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lw 
        = ((3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sb 
        = ((0x23U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sh 
        = ((0x23U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sw 
        = ((0x23U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h1973cdbb__0 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_addi 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slt 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & ((2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sltu 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & ((3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_xor 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & ((4U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_or 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & ((6U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_and 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & ((7U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7))));
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hf43f8b62__0 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_haf7f431a__0 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__clk 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__clk;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__clk 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__clk;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rst 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rst;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__rst 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rst;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[0U] 
        = ((0xff000000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[0U]) 
           | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1dU) 
               << 0x10U) | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1eU) 
                             << 8U) | VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1fU))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[0U] 
        = ((0xffffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[0U]) 
           | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1cU) 
              << 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[1U] 
        = ((0xffff0000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[1U]) 
           | (0xffffffU & ((0xffff00U & (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1aU) 
                                         << 8U)) | 
                           ((0xffffffU & VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1bU)) 
                            | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1cU) 
                               >> 8U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[1U] 
        = ((0xffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[1U]) 
           | (0xffff0000U & ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x18U) 
                              << 0x18U) | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x19U) 
                                           << 0x10U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[2U] 
        = ((0xffffff00U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[2U]) 
           | (0xffffU & ((0xffffU & VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x17U)) 
                         | ((0xffffU & (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x18U) 
                                        >> 8U)) | (
                                                   VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x19U) 
                                                   >> 0x10U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[2U] 
        = ((0xffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[2U]) 
           | (0xffffff00U & ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x14U) 
                              << 0x18U) | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x15U) 
                                            << 0x10U) 
                                           | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x16U) 
                                              << 8U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[3U] 
        = ((0xff000000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[3U]) 
           | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x11U) 
               << 0x10U) | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x12U) 
                             << 8U) | VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x13U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[3U] 
        = ((0xffffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[3U]) 
           | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x10U) 
              << 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[4U] 
        = ((0xffff0000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[4U]) 
           | (0xffffffU & ((0xffff00U & (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xeU) 
                                         << 8U)) | 
                           ((0xffffffU & VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xfU)) 
                            | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x10U) 
                               >> 8U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[4U] 
        = ((0xffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[4U]) 
           | (0xffff0000U & ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xcU) 
                              << 0x18U) | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xdU) 
                                           << 0x10U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[5U] 
        = ((0xffffff00U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[5U]) 
           | (0xffffU & ((0xffffU & VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xbU)) 
                         | ((0xffffU & (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xcU) 
                                        >> 8U)) | (
                                                   VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xdU) 
                                                   >> 0x10U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[5U] 
        = ((0xffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[5U]) 
           | (0xffffff00U & ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,8U) 
                              << 0x18U) | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,9U) 
                                            << 0x10U) 
                                           | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xaU) 
                                              << 8U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[6U] 
        = ((0xff000000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[6U]) 
           | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,5U) 
               << 0x10U) | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,6U) 
                             << 8U) | VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,7U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[6U] 
        = ((0xffffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[6U]) 
           | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,4U) 
              << 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[7U] 
        = ((0xffff0000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[7U]) 
           | (0xffffffU & ((0xffff00U & (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,2U) 
                                         << 8U)) | 
                           ((0xffffffU & VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,3U)) 
                            | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,4U) 
                               >> 8U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[7U] 
        = ((0xffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[7U]) 
           | (0xffff0000U & ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0U) 
                              << 0x18U) | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,1U) 
                                           << 0x10U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rs2_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[1U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__c, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[1U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__c, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[1U] 
            = (1U | VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__c, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[1U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__c, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s_sext 
        = (((- (IData)((vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slli 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h9fd4f7e8__0));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sll 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h9fd4f7e8__0));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__halt = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
        = ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srli 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h1973cdbb__0) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srai 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h1973cdbb__0) 
           & (0x20U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srl 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hf43f8b62__0) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sra 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hf43f8b62__0) 
           & (0x20U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_add 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_haf7f431a__0) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sub 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_haf7f431a__0) 
           & (0x20U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mul 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulh 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulhsu 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulhu 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_div 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (4U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_divu 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (5U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rem 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (6U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_remu 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (7U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x1eU)));
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_ecall) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__halt = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
    }
    vlSelf->halt = vlSelf->RiscvProcessor__DOT__datapath__DOT__halt;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_cin = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_a = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_b = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div_operation = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend = 0U;
    if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_add) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_cin = 0U;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_a 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_b 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                                } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sub) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_cin = 0U;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_a 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_b 
                                        = ((IData)(1U) 
                                           + (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                                }
                                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_add)))) {
                                    if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sub)))) {
                                        if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sll)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slt)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sltu)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_xor)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srl)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sra)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_or)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_and)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mul)))) {
                                                                            if (
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulh)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulhsu)))) {
                                                                                if (
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulhu)))) {
                                                                                if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_div) {
                                                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__div_operation 
                                                                                = 
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__div_state)));
                                                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor 
                                                                                = 
                                                                                ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data))
                                                                                 : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                                                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend 
                                                                                = 
                                                                                ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data))
                                                                                 : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data);
                                                                                } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_divu) {
                                                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__div_operation 
                                                                                = 
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__div_state)));
                                                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor 
                                                                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                                                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend 
                                                                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                                                                } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rem) {
                                                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__div_operation 
                                                                                = 
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__div_state)));
                                                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor 
                                                                                = 
                                                                                ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data))
                                                                                 : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                                                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend 
                                                                                = 
                                                                                ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data))
                                                                                 : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data);
                                                                                } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_remu) {
                                                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__div_operation 
                                                                                = 
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__div_state)));
                                                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor 
                                                                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                                                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend 
                                                                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_addi) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_cin = 0U;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_a 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_b 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext;
                            }
                        }
                    }
                }
            }
        }
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__halt = vlSelf->halt;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__a 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_a;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__b 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_b;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_a 
           & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_b);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_a 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_b);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__i_dividend 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__i_dividend 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 2U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 3U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 4U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 5U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 6U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 7U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 8U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 9U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xaU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xbU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xcU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xdU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xeU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xfU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 2U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 3U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 4U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 5U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 6U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 7U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 8U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 9U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xaU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xbU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xcU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xdU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xeU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xfU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x10U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[0U] 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[1U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[2U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 2U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[3U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 3U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[4U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 4U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[5U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 5U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[6U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 6U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[7U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 7U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[8U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 8U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[9U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 9U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[0xaU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xaU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[0xbU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xbU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[0xcU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xcU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[0xdU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xdU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[0xeU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xeU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[0xfU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0xfU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[0x10U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x10U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__temp_remainder 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x1fU));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[2U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[2U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[2U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[2U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__gin 
        = (0xffU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                    >> 0U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__gin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 0U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__gin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 4U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__gin 
        = (0xffU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                    >> 8U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__gin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 8U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__gin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__gin 
        = (0xffU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                    >> 0x10U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__gin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 0x10U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__gin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__gin 
        = (0xffU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                    >> 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__gin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__gin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 0x1cU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__pin 
        = (0xffU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                    >> 0U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__pin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                   >> 0U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__pin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                   >> 4U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__pin 
        = (0xffU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                    >> 8U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__pin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                   >> 8U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__pin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                   >> 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__pin 
        = (0xffU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                    >> 0x10U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__pin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                   >> 0x10U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__pin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                   >> 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__pin 
        = (0xffU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                    >> 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__pin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                   >> 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__pin 
        = (0xfU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                   >> 0x1cU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__G32 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 0x1fU) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                >> 0x1fU) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                             >> 0x1eU))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__P32 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__G10 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 0x1dU) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                >> 0x1dU) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                             >> 0x1cU))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__P10 
        = (IData)((0x30000000U == (0x30000000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__G32 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 0x1bU) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                >> 0x1bU) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                             >> 0x1aU))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__P10 
        = (IData)((0x3000000U == (0x3000000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__G10 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 0x19U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                >> 0x19U) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                             >> 0x18U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__G32 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 0x17U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                >> 0x17U) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                             >> 0x16U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__P32 
        = (IData)((0xc000000U == (0xc000000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__G10 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 0x15U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                >> 0x15U) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                             >> 0x14U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__G32 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 0x13U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                >> 0x13U) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                             >> 0x12U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__P10 
        = (IData)((0x30000U == (0x30000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__G10 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 0x11U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                >> 0x11U) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                             >> 0x10U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__G32 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 0xfU) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                               >> 0xfU) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                           >> 0xeU))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__G10 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 0xdU) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                               >> 0xdU) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                           >> 0xcU))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__P10 
        = (IData)((0x300000U == (0x300000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__G32 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 0xbU) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                               >> 0xbU) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                           >> 0xaU))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__P10 
        = (IData)((0x300U == (0x300U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__G10 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 9U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                             >> 9U) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                       >> 8U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__G32 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 7U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                             >> 7U) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                       >> 6U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__P32 
        = (IData)((0xc0000U == (0xc0000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__P32 
        = (IData)((0xc00000U == (0xc00000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__G10 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 5U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                             >> 5U) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                       >> 4U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__G32 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 3U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                             >> 3U) & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                       >> 2U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__P10 
        = (IData)((3U == (3U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__G10 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  >> 1U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                             >> 1U) & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__P10 
        = (IData)((0x3000U == (0x3000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__P32 
        = (IData)((0xc00U == (0xc00U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__P32 
        = (IData)((0xc000U == (0xc000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__P10 
        = (IData)((0x30U == (0x30U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__P32 
        = (IData)((0xcU == (0xcU & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__P32 
        = (IData)((0xc0U == (0xc0U & vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x1dU)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__gout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__G32) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__P32) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__G10)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__pout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__P32) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__P10));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__pout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__P32) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__P10));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__gout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__G32) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__P32) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__G10)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__pout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__P32) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__P10));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__gout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__G32) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__P32) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__G10)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__gout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__G32) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__P32) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__G10)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__pout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__P32) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__P10));
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__G10) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__P10) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_cin)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__pout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__P32) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__P10));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__gout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__G32) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__P32) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__G10)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__gout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__G32) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__P32) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__G10)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__pout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__P32) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__P10));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__pout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__P32) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__P10));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__gout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__G32) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__P32) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__G10)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__gout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__G32) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__P32) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__G10)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__pout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__P32) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__P10));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__i_quotient = 0U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__o_quotient = 0U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__temp_quotient = 0U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[1U] = 0U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[1U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__i_quotient = 1U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__o_quotient = 1U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__temp_quotient = 1U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[1U] = 1U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[1U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__gout_7 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__pout_7 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__pout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__pout_3 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__pout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__pout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__pout) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__pout));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__gout_3 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__gout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__gout) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__gout) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__pout)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__pout_3 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__pout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__gout_3 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__gout_7 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__pout_7 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__pout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__pout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__pout) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__pout));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__gout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__gout) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__gout) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__pout)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__cout 
        = ((4U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                  | (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                     & ((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                        << 2U)))) | (((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                                      << 1U) | (1U 
                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                                   | (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                                      & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_cin))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__pout_3 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__pout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__gout_3 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__gout_7 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__pout_7 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__pout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__pout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__pout) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__pout));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__gout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__gout) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__gout) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__pout)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__pout_3 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__pout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__gout_3 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__cin_1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__gout) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_cin) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__pout)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__gout_7 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__pout_7 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__pout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__pout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__pout) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__pout));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__gout 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__gout) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__gout) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__pout)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x1eU)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[3U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[3U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[3U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[3U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pout4 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__pout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gout4 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pout3 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__pout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gout3 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pout2 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__pout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gout2 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__cin_1;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__G10) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__P10) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__cin_1)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pout1 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__pout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gout1 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_7 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__gout) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_cin) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__pout)));
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x1cU)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__cout 
        = ((4U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 4U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                              >> 4U) & ((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
                                        << 2U)))) | 
           (((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
             << 1U) | (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                              >> 4U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                         >> 4U) & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__cin_1))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_7;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__G10) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__P10) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__cin_1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__gout) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_7) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__pout)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_15 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__gout) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__pout) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_7)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[2U] 
            = VL_SHIFTL_III(32,32,32, ((IData)(RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0)
                                        ? 0U : 1U), 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[2U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, ((IData)(RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0)
                                        ? 0U : 1U), 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[2U] 
            = (1U | VL_SHIFTL_III(32,32,32, ((IData)(RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0)
                                              ? 0U : 1U), 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[2U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, ((IData)(RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0)
                                              ? 0U : 1U), 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__cout 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__cout) 
            << 4U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__cin_1) 
                       << 3U) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__cout)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__cout 
        = ((4U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 8U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                              >> 8U) & ((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                                        << 2U)))) | 
           (((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
             << 1U) | (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                              >> 8U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                         >> 8U) & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_7))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__cin_1;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__G10) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__P10) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__cin_1)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_15;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__G10) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__P10) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_15)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__cin_1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__gout) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_15) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__pout)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_23 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__gout) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__pout) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_15)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x1dU)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[4U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[4U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[4U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[4U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__cout 
        = ((4U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 0xcU) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                >> 0xcU) & ((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
                                            << 2U)))) 
           | (((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
               << 1U) | (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                >> 0xcU) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                             >> 0xcU) 
                                            & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__cin_1))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__cout 
        = ((4U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 0x10U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                 >> 0x10U) & ((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                                              << 2U)))) 
           | (((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
               << 1U) | (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                >> 0x10U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                              >> 0x10U) 
                                             & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_15))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__cin_1;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__G10) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__P10) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__cin_1)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_23;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_31 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__gout) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__pout) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_23)));
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__G10) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__P10) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_23)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__cin_1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__gout) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_23) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__pout)));
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x1bU)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__cout 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__cout) 
            << 4U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__cin_1) 
                       << 3U) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__cout)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__cout 
        = ((4U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 0x14U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                 >> 0x14U) & ((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
                                              << 2U)))) 
           | (((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
               << 1U) | (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                >> 0x14U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                              >> 0x14U) 
                                             & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__cin_1))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__cout 
        = ((4U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 0x18U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                 >> 0x18U) & ((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
                                              << 2U)))) 
           | (((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT____VdfgTmp_h5c66182c__0) 
               << 1U) | (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                >> 0x18U) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                              >> 0x18U) 
                                             & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_23))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__cin_1;
    RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT____VdfgTmp_h5c66182c__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__G10) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__P10) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__cin_1)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[3U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[3U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[3U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[3U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__cout 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__cout) 
            << 4U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__cin_1) 
                       << 3U) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__cout)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__cout 
        = ((4U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                   >> 0x1cU) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                 >> 0x1cU) & ((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
                                              << 2U)))) 
           | (((IData)(RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT____VdfgTmp_h5c66182c__0) 
               << 1U) | (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin 
                                >> 0x1cU) | ((vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin 
                                              >> 0x1cU) 
                                             & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__cin_1))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x1cU)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[5U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[5U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[5U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[5U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__cout 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__cout) 
            << 4U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__cin_1) 
                       << 3U) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__cout)));
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x1aU)));
    RiscvProcessor__DOT__datapath__DOT__cla__DOT____VdfgTmp_hb04ad8a1__0 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__cout) 
            << 0x18U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_23) 
                          << 0x17U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__cout) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_15) 
                                         << 0xfU) | 
                                        (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__cout) 
                                          << 8U) | 
                                         (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_7) 
                                           << 7U) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__cout)))))));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[4U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[4U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[4U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[4U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__cout 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_31) 
            << 0x1fU) | RiscvProcessor__DOT__datapath__DOT__cla__DOT____VdfgTmp_hb04ad8a1__0);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_sum 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_a 
           ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_b 
              ^ ((RiscvProcessor__DOT__datapath__DOT__cla__DOT____VdfgTmp_hb04ad8a1__0 
                  << 1U) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_cin))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x1bU)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[6U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[6U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[6U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[6U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__sum 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_sum;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x19U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[5U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[5U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[5U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[5U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x1aU)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[7U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[7U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[7U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[7U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x18U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[6U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[6U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[6U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[6U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x19U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[8U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[8U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[8U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[8U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x17U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[7U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[7U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[7U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[7U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x18U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[9U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[9U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[9U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[9U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__8__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x16U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[8U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[8U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[8U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[8U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x17U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0xaU] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0xaU] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0xaU] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0xaU] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__9__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x15U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[9U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[9U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[9U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[9U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x16U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0xbU] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0xbU] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0xbU] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0xbU] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__10__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x14U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0xaU] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0xaU] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0xaU] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0xaU] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x15U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0xcU] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0xcU] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0xcU] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0xcU] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__11__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x13U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0xbU] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0xbU] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0xbU] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0xbU] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x14U)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0xdU] 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0)
            ? VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_quotient, 1U)
            : (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_quotient, 1U)));
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_j_sext);
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                                = (0xfffffffeU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                  + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext));
                        }
                    }
                } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_beq) {
                            if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                 == vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b_sext);
                            }
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bne) {
                            if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                 != vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b_sext);
                            }
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_blt) {
                            if (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b_sext);
                            }
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bge) {
                            if (VL_GTES_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b_sext);
                            }
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bltu) {
                            if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                 < vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b_sext);
                            }
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bgeu) {
                            if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                 >= vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b_sext);
                            }
                        }
                    }
                }
            }
        }
    }
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0xdU] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0xdU] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__12__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x12U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0xcU] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0xcU] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0xcU] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0xcU] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x13U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0xeU] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0xeU] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0xeU] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0xeU] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__13__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x11U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0xdU] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0xdU] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0xdU] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0xdU] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x12U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0xfU] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0xfU] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0xfU] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0xfU] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__14__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a, 0x10U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0xeU] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0xeU] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0xeU] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0xeU] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x11U)));
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0x10U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0x10U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__temp_remainder;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__temp_remainder;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_quotient, 1U);
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[0x10U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[0x10U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk2__BRA__15__KET____DOT__d1__i_quotient, 1U));
    }
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__o_remainder 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__o_remainder 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__o_quotient 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__o_quotient 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__temp_quotient 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__mul = 0ULL;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__mulh = 0ULL;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhsu = 0ULL;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhu = 0ULL;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 0U;
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (0xfffff000U & vlSelf->RiscvProcessor__DOT__insn_from_imem);
                        }
                    }
                } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_add) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_sum;
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sub) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_sum;
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sll) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   << (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slt) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                    ? 1U : 0U);
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sltu) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                    < vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                    ? 1U : 0U);
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_xor) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srl) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sra) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = VL_SHIFTRS_III(32,32,5, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, 
                                                 (0x1fU 
                                                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_or) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   | vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_and) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   & vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mul) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__mul 
                                = ((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data)) 
                                   * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__mul);
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulh) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__mulh 
                                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data), 
                                              VL_EXTENDS_QI(64,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (IData)((vlSelf->RiscvProcessor__DOT__datapath__DOT__mulh 
                                           >> 0x20U));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulhsu) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhsu 
                                = ((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data))) 
                                   * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (IData)((vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhsu 
                                           >> 0x20U));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulhu) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhu 
                                = ((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data)) 
                                   * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (IData)((vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhu 
                                           >> 0x20U));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_div) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (((0U == vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data) 
                                    | (0U == vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data))
                                    ? 0xffffffffU : 
                                   (((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                      >> 0x1fU) != 
                                     (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                      >> 0x1fU)) ? 
                                    ((IData)(1U) + 
                                     (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__div_quotient))
                                     : vlSelf->RiscvProcessor__DOT__datapath__DOT__div_quotient));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_divu) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_quotient;
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rem) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = ((0U == vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data)
                                    ? ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                        >> 0x1fU) ? 
                                       ((IData)(1U) 
                                        + (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data))
                                        : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                    : ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                        >> 0x1fU) ? 
                                       ((IData)(1U) 
                                        + (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__div_remainder))
                                        : vlSelf->RiscvProcessor__DOT__datapath__DOT__div_remainder));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_remu) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_remainder;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sb) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s_sext);
                            if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                if ((1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                        = ((0xffffffU 
                                            & vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data) 
                                           | (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                              << 0x18U));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 8U;
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                        = ((0xff00ffffU 
                                            & vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data) 
                                           | (0xff0000U 
                                              & (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                                 << 0x10U)));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 4U;
                                }
                            } else if ((1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                    = ((0xffff00ffU 
                                        & vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data) 
                                       | (0xff00U & 
                                          (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                           << 8U)));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 2U;
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                    = ((0xffffff00U 
                                        & vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data) 
                                       | (0xffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 1U;
                            }
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sh) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s_sext);
                            if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                        = ((0xffffU 
                                            & vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data) 
                                           | (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                              << 0x10U));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 0xcU;
                                }
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                    = ((0xffff0000U 
                                        & vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data) 
                                       | (0xffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 3U;
                            }
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sw) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s_sext);
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 0xfU;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent 
                               + (0xfffff000U & vlSelf->RiscvProcessor__DOT__insn_from_imem));
                    }
                }
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_addi) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_sum;
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slti) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext)
                                ? 1U : 0U);
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sltiu) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                < vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext)
                                ? 1U : 0U);
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_xori) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                               ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext);
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_ori) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                               | vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext);
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_andi) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                               & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext);
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slli) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                               << (0x1fU & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i)));
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srli) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                               >> (0x1fU & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i)));
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srai) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = VL_SHIFTRS_III(32,32,5, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, 
                                             (0x1fU 
                                              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i)));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr 
                        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                           + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext);
                    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lb) {
                        if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                            if ((1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (((- (IData)(
                                                   (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                    >> 0x1fU))) 
                                        << 8U) | (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                  >> 0x18U));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                       >> 0x17U)))) 
                                        << 8U) | (0xffU 
                                                  & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                     >> 0x10U)));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            }
                        } else if ((1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (((- (IData)((1U 
                                                & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                   >> 0xfU)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                 >> 8U)));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        } else {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (((- (IData)((1U 
                                                & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->RiscvProcessor__DOT__mem_data_loaded_value));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        }
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lh) {
                        if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                            if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (((- (IData)(
                                                   (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                    >> 0x1fU))) 
                                        << 0x10U) | 
                                       (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                        >> 0x10U));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            }
                        } else {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (((- (IData)((1U 
                                                & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->RiscvProcessor__DOT__mem_data_loaded_value));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        }
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lbu) {
                        if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                            if ((1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                       >> 0x18U);
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (0xffU & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                >> 0x10U));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            }
                        } else if ((1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (0xffU & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                            >> 8U));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        } else {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (0xffU & vlSelf->RiscvProcessor__DOT__mem_data_loaded_value);
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        }
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lhu) {
                        if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                            if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                       >> 0x10U);
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            }
                        } else {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (0xffffU & vlSelf->RiscvProcessor__DOT__mem_data_loaded_value);
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        }
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lw) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = vlSelf->RiscvProcessor__DOT__mem_data_loaded_value;
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                    }
                }
            }
        }
    }
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0xfU] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0xfU] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__temp_remainder;
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0xfU] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0xfU] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d1__i_quotient, 1U));
        RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__we 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__we;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rd_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem 
        = (0xfffffffcU & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__temp_quotient 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__temp_remainder 
        = (VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_remainder, 1U) 
           | (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend, 0x10U)));
    vlSelf->RiscvProcessor__DOT__mem__DOT__store_data_to_dmem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem;
    vlSelf->RiscvProcessor__DOT__mem_data_to_write 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem;
    vlSelf->RiscvProcessor__DOT__mem__DOT__store_we_to_dmem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem;
    vlSelf->RiscvProcessor__DOT__mem_data_we = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != (3U & vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem)))) {
            VL_WRITEF("[%0t] %%Error: DatapathMultiCycle.sv:729: Assertion failed in %NRiscvProcessor.mem: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/penn/riscv32/hw4-multicycle/DatapathMultiCycle.sv", 729, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != (3U & vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem)))) {
            VL_WRITEF("[%0t] %%Error: DatapathMultiCycle.sv:730: Assertion failed in %NRiscvProcessor.mem: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/penn/riscv32/hw4-multicycle/DatapathMultiCycle.sv", 730, "");
        }
    }
    vlSelf->RiscvProcessor__DOT__mem__DOT__addr_to_dmem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem;
    vlSelf->RiscvProcessor__DOT__mem_data_addr = vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem;
    RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__temp_remainder 
           < vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    if (RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT____VdfgTmp_h69a4f8fb__0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__o_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__temp_remainder;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__o_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0x10U] 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0x10U] 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__temp_remainder;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__o_remainder 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__o_quotient 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0x10U] 
            = (1U | VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d1__i_quotient, 1U));
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0x10U] 
            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__temp_remainder 
               - vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor);
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__temp_quotient 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__o_quotient;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock_mem) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_mem__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->clock_mem)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_mem__0)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->clock_proc) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_proc__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock_mem__0 = vlSelf->clock_mem;
    vlSelf->__Vtrigprevexpr___TOP__clock_proc__0 = vlSelf->clock_proc;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__mul = 0ULL;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__mulh = 0ULL;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhsu = 0ULL;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhu = 0ULL;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 0U;
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (0xfffff000U & vlSelf->RiscvProcessor__DOT__insn_from_imem);
                        }
                    }
                } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_add) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_sum;
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sub) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_sum;
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sll) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   << (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slt) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                    ? 1U : 0U);
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sltu) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                    < vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                    ? 1U : 0U);
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_xor) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srl) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sra) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = VL_SHIFTRS_III(32,32,5, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, 
                                                 (0x1fU 
                                                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_or) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   | vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_and) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   & vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mul) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__mul 
                                = ((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data)) 
                                   * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__mul);
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulh) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__mulh 
                                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data), 
                                              VL_EXTENDS_QI(64,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (IData)((vlSelf->RiscvProcessor__DOT__datapath__DOT__mulh 
                                           >> 0x20U));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulhsu) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhsu 
                                = ((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data))) 
                                   * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (IData)((vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhsu 
                                           >> 0x20U));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulhu) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhu 
                                = ((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data)) 
                                   * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (IData)((vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhu 
                                           >> 0x20U));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_div) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (((0U == vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data) 
                                    | (0U == vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data))
                                    ? 0xffffffffU : 
                                   (((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                      >> 0x1fU) != 
                                     (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                      >> 0x1fU)) ? 
                                    ((IData)(1U) + 
                                     (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__div_quotient))
                                     : vlSelf->RiscvProcessor__DOT__datapath__DOT__div_quotient));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_divu) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_quotient;
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rem) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = ((0U == vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data)
                                    ? ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                        >> 0x1fU) ? 
                                       ((IData)(1U) 
                                        + (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data))
                                        : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                    : ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                        >> 0x1fU) ? 
                                       ((IData)(1U) 
                                        + (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__div_remainder))
                                        : vlSelf->RiscvProcessor__DOT__datapath__DOT__div_remainder));
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_remu) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__div_remainder;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sb) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s_sext);
                            if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                if ((1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                        = ((0xffffffU 
                                            & vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data) 
                                           | (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                              << 0x18U));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 8U;
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                        = ((0xff00ffffU 
                                            & vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data) 
                                           | (0xff0000U 
                                              & (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                                 << 0x10U)));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 4U;
                                }
                            } else if ((1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                    = ((0xffff00ffU 
                                        & vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data) 
                                       | (0xff00U & 
                                          (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                           << 8U)));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 2U;
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                    = ((0xffffff00U 
                                        & vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data) 
                                       | (0xffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 1U;
                            }
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sh) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s_sext);
                            if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                        = ((0xffffU 
                                            & vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data) 
                                           | (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                              << 0x10U));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 0xcU;
                                }
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                    = ((0xffff0000U 
                                        & vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data) 
                                       | (0xffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 3U;
                            }
                        } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sw) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s_sext);
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = 0xfU;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent 
                               + (0xfffff000U & vlSelf->RiscvProcessor__DOT__insn_from_imem));
                    }
                }
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_addi) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_sum;
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slti) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext)
                                ? 1U : 0U);
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sltiu) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                < vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext)
                                ? 1U : 0U);
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_xori) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                               ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext);
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_ori) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                               | vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext);
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_andi) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                               & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext);
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slli) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                               << (0x1fU & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i)));
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srli) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                               >> (0x1fU & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i)));
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srai) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = VL_SHIFTRS_III(32,32,5, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, 
                                             (0x1fU 
                                              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i)));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr 
                        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                           + vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext);
                    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lb) {
                        if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                            if ((1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (((- (IData)(
                                                   (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                    >> 0x1fU))) 
                                        << 8U) | (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                  >> 0x18U));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                       >> 0x17U)))) 
                                        << 8U) | (0xffU 
                                                  & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                     >> 0x10U)));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            }
                        } else if ((1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (((- (IData)((1U 
                                                & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                   >> 0xfU)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                 >> 8U)));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        } else {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (((- (IData)((1U 
                                                & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->RiscvProcessor__DOT__mem_data_loaded_value));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        }
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lh) {
                        if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                            if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (((- (IData)(
                                                   (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                    >> 0x1fU))) 
                                        << 0x10U) | 
                                       (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                        >> 0x10U));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            }
                        } else {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (((- (IData)((1U 
                                                & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->RiscvProcessor__DOT__mem_data_loaded_value));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        }
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lbu) {
                        if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                            if ((1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                       >> 0x18U);
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (0xffU & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                                >> 0x10U));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            }
                        } else if ((1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (0xffU & (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                            >> 8U));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        } else {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (0xffU & vlSelf->RiscvProcessor__DOT__mem_data_loaded_value);
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        }
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lhu) {
                        if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                            if ((2U & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
                                       >> 0x10U);
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            }
                        } else {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (0xffffU & vlSelf->RiscvProcessor__DOT__mem_data_loaded_value);
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        }
                    } else if (vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lw) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = vlSelf->RiscvProcessor__DOT__mem_data_loaded_value;
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                    }
                }
            }
        }
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__we 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__we;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rd_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem 
        = (0xfffffffcU & vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr);
    vlSelf->RiscvProcessor__DOT__mem__DOT__store_data_to_dmem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem;
    vlSelf->RiscvProcessor__DOT__mem_data_to_write 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem;
    vlSelf->RiscvProcessor__DOT__mem__DOT__store_we_to_dmem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem;
    vlSelf->RiscvProcessor__DOT__mem_data_we = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != (3U & vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem)))) {
            VL_WRITEF("[%0t] %%Error: DatapathMultiCycle.sv:729: Assertion failed in %NRiscvProcessor.mem: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/penn/riscv32/hw4-multicycle/DatapathMultiCycle.sv", 729, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != (3U & vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem)))) {
            VL_WRITEF("[%0t] %%Error: DatapathMultiCycle.sv:730: Assertion failed in %NRiscvProcessor.mem: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/penn/riscv32/hw4-multicycle/DatapathMultiCycle.sv", 730, "");
        }
    }
    vlSelf->RiscvProcessor__DOT__mem__DOT__addr_to_dmem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem;
    vlSelf->RiscvProcessor__DOT__mem_data_addr = vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem;
}
