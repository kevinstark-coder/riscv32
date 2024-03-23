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

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clock_mem__0 = vlSelf->clock_mem;
    vlSelf->__Vtrigprevexpr___TOP__clock_proc__0 = vlSelf->clock_proc;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__i_remainder = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__i_quotient = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0U] = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[0U] = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[0U] = 0U;
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x656e7473U;
    __Vtemp_1[2U] = 0x636f6e74U;
    __Vtemp_1[3U] = 0x69616c5fU;
    __Vtemp_1[4U] = 0x696e6974U;
    __Vtemp_1[5U] = 0x6d656d5fU;
    VL_READMEM_N(true, 32, 8192, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                 ,  &(vlSelf->RiscvProcessor__DOT__mem__DOT__mem)
                 , 0U, ~0ULL);
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
            VL_FATAL_MT("/home/penn/riscv32/hw4-multicycle/DatapathMultiCycle.sv", 777, "", "Settle region did not converge.");
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
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock_mem)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clock_mem)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clock_proc)\n");
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
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock_mem)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clock_mem)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clock_proc)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock_proc = VL_RAND_RESET_I(1);
    vlSelf->clock_mem = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->halt = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__clock_proc = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__clock_mem = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__halt = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__pc_to_imem = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__insn_from_imem = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__mem_data_addr = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__mem_data_loaded_value = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__mem_data_to_write = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__mem_data_we = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__mem__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__mem__DOT__clock_mem = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__mem__DOT__pc_to_imem = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__mem__DOT__addr_to_dmem = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__mem__DOT__load_data_from_dmem = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__mem__DOT__store_data_to_dmem = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__mem__DOT__store_we_to_dmem = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->RiscvProcessor__DOT__mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__halt = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_from_imem = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__load_data_from_dmem = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7 = VL_RAND_RESET_I(7);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3 = VL_RAND_RESET_I(3);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rd = VL_RAND_RESET_I(5);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode = VL_RAND_RESET_I(7);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i = VL_RAND_RESET_I(12);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_shamt = VL_RAND_RESET_I(5);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s = VL_RAND_RESET_I(12);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b = VL_RAND_RESET_I(13);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_j = VL_RAND_RESET_I(21);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s_sext = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b_sext = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_j_sext = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lui = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_auipc = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_jal = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_jalr = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_beq = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bne = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_blt = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bge = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bltu = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bgeu = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lb = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lh = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lw = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lbu = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lhu = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sb = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sh = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sw = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_addi = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slti = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sltiu = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_xori = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_ori = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_andi = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slli = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srli = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srai = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_add = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sub = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sll = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slt = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sltu = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_xor = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srl = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sra = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_or = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_and = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mul = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulh = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulhu = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_div = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_divu = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rem = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_remu = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_ecall = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_fence = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div_state = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div_operation = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cycles_current = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__num_insns_current = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_a = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_b = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla_sum = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__initial_addr = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__mul = VL_RAND_RESET_Q(64);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__mulh = VL_RAND_RESET_Q(64);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhsu = VL_RAND_RESET_Q(64);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__mulhu = VL_RAND_RESET_Q(64);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gin = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pin = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__cout = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_7 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_15 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_23 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__c_31 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gout1 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pout1 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gout2 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pout2 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gout3 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pout3 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__gout4 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__pout4 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__gin = VL_RAND_RESET_I(8);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__pin = VL_RAND_RESET_I(8);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__cout = VL_RAND_RESET_I(7);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__gout_3 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__pout_3 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__gout_7 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__pout_7 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__cin_1 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a3__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_1__DOT__a7__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__gin = VL_RAND_RESET_I(8);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__pin = VL_RAND_RESET_I(8);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__cout = VL_RAND_RESET_I(7);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__gout_3 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__pout_3 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__gout_7 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__pout_7 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__cin_1 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a3__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_2__DOT__a7__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__gin = VL_RAND_RESET_I(8);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__pin = VL_RAND_RESET_I(8);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__cout = VL_RAND_RESET_I(7);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__gout_3 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__pout_3 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__gout_7 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__pout_7 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__cin_1 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a3__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_3__DOT__a7__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__gin = VL_RAND_RESET_I(8);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__pin = VL_RAND_RESET_I(8);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__cout = VL_RAND_RESET_I(7);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__gout_3 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__pout_3 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__gout_7 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__pout_7 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__cin_1 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a3__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__gin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__pin = VL_RAND_RESET_I(4);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__gout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__pout = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__cout = VL_RAND_RESET_I(3);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__G10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__P10 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__G32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__cla__DOT__m_4__DOT__a7__DOT__P32 = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__o_quotient = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_1 = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divisor_2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__divided_2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder_2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient_2[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__0__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__1__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__2__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__3__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__4__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__5__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__6__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__7__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__8__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__9__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__10__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__11__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__12__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__13__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__14__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__i_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__i_divisor = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__i_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__i_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__o_dividend = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__o_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__o_quotient = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__temp_remainder = VL_RAND_RESET_I(32);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__div__DOT__genblk2__BRA__15__KET____DOT__d1__DOT__temp_quotient = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clock_mem__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock_proc__0 = VL_RAND_RESET_I(1);
}
