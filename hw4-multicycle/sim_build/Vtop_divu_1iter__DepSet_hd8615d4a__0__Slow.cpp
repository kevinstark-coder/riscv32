// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_divu_1iter.h"

VL_ATTR_COLD void Vtop_divu_1iter___ctor_var_reset(Vtop_divu_1iter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_divu_1iter___ctor_var_reset\n"); );
    // Body
    vlSelf->i_dividend = VL_RAND_RESET_I(32);
    vlSelf->i_divisor = VL_RAND_RESET_I(32);
    vlSelf->i_remainder = VL_RAND_RESET_I(32);
    vlSelf->i_quotient = VL_RAND_RESET_I(32);
    vlSelf->o_dividend = VL_RAND_RESET_I(32);
    vlSelf->o_remainder = VL_RAND_RESET_I(32);
    vlSelf->o_quotient = VL_RAND_RESET_I(32);
    vlSelf->temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__temp_remainder = VL_RAND_RESET_I(32);
}
