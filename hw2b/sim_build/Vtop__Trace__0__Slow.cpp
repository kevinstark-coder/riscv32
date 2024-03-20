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
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cla", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"gin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"pin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"c_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"c_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"c_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"c_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"gout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"pout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"gout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"pout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"gout3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"pout3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"gout4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"pout4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("m_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+26,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+30,0,"gout_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"pout_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"gout_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"pout_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+41,0,"G10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"P10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"G32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"P32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+47,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+51,0,"G10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"P10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"G32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"P32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+57,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+61,0,"gout_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"pout_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"gout_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"pout_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+66,0,"gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+67,0,"pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+68,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+72,0,"G10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"P10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"G32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"P32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+78,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+82,0,"G10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"P10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"G32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"P32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+88,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+92,0,"gout_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"pout_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"gout_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"pout_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+97,0,"gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+98,0,"pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+99,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+103,0,"G10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"P10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"G32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"P32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+107,0,"gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+108,0,"pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+109,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+113,0,"G10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"P10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"G32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"P32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("m_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+117,0,"gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+119,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+123,0,"gout_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"pout_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"gout_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"pout_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"cin_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+128,0,"gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+130,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+134,0,"G10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"P10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"G32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"P32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+138,0,"gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+139,0,"pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+140,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+144,0,"G10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"P10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"G32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"P32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->a),32);
    bufp->fullIData(oldp+2,(vlSelf->b),32);
    bufp->fullBit(oldp+3,(vlSelf->cin));
    bufp->fullIData(oldp+4,(vlSelf->sum),32);
    bufp->fullIData(oldp+5,(vlSelf->cla__DOT__a),32);
    bufp->fullIData(oldp+6,(vlSelf->cla__DOT__b),32);
    bufp->fullBit(oldp+7,(vlSelf->cla__DOT__cin));
    bufp->fullIData(oldp+8,(vlSelf->cla__DOT__sum),32);
    bufp->fullIData(oldp+9,(vlSelf->cla__DOT__gin),32);
    bufp->fullIData(oldp+10,(vlSelf->cla__DOT__pin),32);
    bufp->fullIData(oldp+11,(vlSelf->cla__DOT__cout),32);
    bufp->fullBit(oldp+12,(vlSelf->cla__DOT__c_7));
    bufp->fullBit(oldp+13,(vlSelf->cla__DOT__c_15));
    bufp->fullBit(oldp+14,(vlSelf->cla__DOT__c_23));
    bufp->fullBit(oldp+15,(vlSelf->cla__DOT__c_31));
    bufp->fullBit(oldp+16,(vlSelf->cla__DOT__gout1));
    bufp->fullBit(oldp+17,(vlSelf->cla__DOT__pout1));
    bufp->fullBit(oldp+18,(vlSelf->cla__DOT__gout2));
    bufp->fullBit(oldp+19,(vlSelf->cla__DOT__pout2));
    bufp->fullBit(oldp+20,(vlSelf->cla__DOT__gout3));
    bufp->fullBit(oldp+21,(vlSelf->cla__DOT__pout3));
    bufp->fullBit(oldp+22,(vlSelf->cla__DOT__gout4));
    bufp->fullBit(oldp+23,(vlSelf->cla__DOT__pout4));
    bufp->fullCData(oldp+24,(vlSelf->cla__DOT__m_1__DOT__gin),8);
    bufp->fullCData(oldp+25,(vlSelf->cla__DOT__m_1__DOT__pin),8);
    bufp->fullBit(oldp+26,(vlSelf->cla__DOT__m_1__DOT__cin));
    bufp->fullBit(oldp+27,(vlSelf->cla__DOT__m_1__DOT__gout));
    bufp->fullBit(oldp+28,(vlSelf->cla__DOT__m_1__DOT__pout));
    bufp->fullCData(oldp+29,(vlSelf->cla__DOT__m_1__DOT__cout),7);
    bufp->fullBit(oldp+30,(vlSelf->cla__DOT__m_1__DOT__gout_3));
    bufp->fullBit(oldp+31,(vlSelf->cla__DOT__m_1__DOT__pout_3));
    bufp->fullBit(oldp+32,(vlSelf->cla__DOT__m_1__DOT__gout_7));
    bufp->fullBit(oldp+33,(vlSelf->cla__DOT__m_1__DOT__pout_7));
    bufp->fullBit(oldp+34,(vlSelf->cla__DOT__m_1__DOT__cin_1));
    bufp->fullCData(oldp+35,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__gin),4);
    bufp->fullCData(oldp+36,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__pin),4);
    bufp->fullBit(oldp+37,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__cin));
    bufp->fullBit(oldp+38,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__gout));
    bufp->fullBit(oldp+39,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__pout));
    bufp->fullCData(oldp+40,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__cout),3);
    bufp->fullBit(oldp+41,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__G10));
    bufp->fullBit(oldp+42,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__P10));
    bufp->fullBit(oldp+43,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__G32));
    bufp->fullBit(oldp+44,(vlSelf->cla__DOT__m_1__DOT__a3__DOT__P32));
    bufp->fullCData(oldp+45,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__gin),4);
    bufp->fullCData(oldp+46,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__pin),4);
    bufp->fullBit(oldp+47,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__cin));
    bufp->fullBit(oldp+48,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__gout));
    bufp->fullBit(oldp+49,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__pout));
    bufp->fullCData(oldp+50,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__cout),3);
    bufp->fullBit(oldp+51,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__G10));
    bufp->fullBit(oldp+52,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__P10));
    bufp->fullBit(oldp+53,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__G32));
    bufp->fullBit(oldp+54,(vlSelf->cla__DOT__m_1__DOT__a7__DOT__P32));
    bufp->fullCData(oldp+55,(vlSelf->cla__DOT__m_2__DOT__gin),8);
    bufp->fullCData(oldp+56,(vlSelf->cla__DOT__m_2__DOT__pin),8);
    bufp->fullBit(oldp+57,(vlSelf->cla__DOT__m_2__DOT__cin));
    bufp->fullBit(oldp+58,(vlSelf->cla__DOT__m_2__DOT__gout));
    bufp->fullBit(oldp+59,(vlSelf->cla__DOT__m_2__DOT__pout));
    bufp->fullCData(oldp+60,(vlSelf->cla__DOT__m_2__DOT__cout),7);
    bufp->fullBit(oldp+61,(vlSelf->cla__DOT__m_2__DOT__gout_3));
    bufp->fullBit(oldp+62,(vlSelf->cla__DOT__m_2__DOT__pout_3));
    bufp->fullBit(oldp+63,(vlSelf->cla__DOT__m_2__DOT__gout_7));
    bufp->fullBit(oldp+64,(vlSelf->cla__DOT__m_2__DOT__pout_7));
    bufp->fullBit(oldp+65,(vlSelf->cla__DOT__m_2__DOT__cin_1));
    bufp->fullCData(oldp+66,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__gin),4);
    bufp->fullCData(oldp+67,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__pin),4);
    bufp->fullBit(oldp+68,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__cin));
    bufp->fullBit(oldp+69,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__gout));
    bufp->fullBit(oldp+70,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__pout));
    bufp->fullCData(oldp+71,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__cout),3);
    bufp->fullBit(oldp+72,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__G10));
    bufp->fullBit(oldp+73,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__P10));
    bufp->fullBit(oldp+74,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__G32));
    bufp->fullBit(oldp+75,(vlSelf->cla__DOT__m_2__DOT__a3__DOT__P32));
    bufp->fullCData(oldp+76,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__gin),4);
    bufp->fullCData(oldp+77,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__pin),4);
    bufp->fullBit(oldp+78,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__cin));
    bufp->fullBit(oldp+79,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__gout));
    bufp->fullBit(oldp+80,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__pout));
    bufp->fullCData(oldp+81,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__cout),3);
    bufp->fullBit(oldp+82,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__G10));
    bufp->fullBit(oldp+83,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__P10));
    bufp->fullBit(oldp+84,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__G32));
    bufp->fullBit(oldp+85,(vlSelf->cla__DOT__m_2__DOT__a7__DOT__P32));
    bufp->fullCData(oldp+86,(vlSelf->cla__DOT__m_3__DOT__gin),8);
    bufp->fullCData(oldp+87,(vlSelf->cla__DOT__m_3__DOT__pin),8);
    bufp->fullBit(oldp+88,(vlSelf->cla__DOT__m_3__DOT__cin));
    bufp->fullBit(oldp+89,(vlSelf->cla__DOT__m_3__DOT__gout));
    bufp->fullBit(oldp+90,(vlSelf->cla__DOT__m_3__DOT__pout));
    bufp->fullCData(oldp+91,(vlSelf->cla__DOT__m_3__DOT__cout),7);
    bufp->fullBit(oldp+92,(vlSelf->cla__DOT__m_3__DOT__gout_3));
    bufp->fullBit(oldp+93,(vlSelf->cla__DOT__m_3__DOT__pout_3));
    bufp->fullBit(oldp+94,(vlSelf->cla__DOT__m_3__DOT__gout_7));
    bufp->fullBit(oldp+95,(vlSelf->cla__DOT__m_3__DOT__pout_7));
    bufp->fullBit(oldp+96,(vlSelf->cla__DOT__m_3__DOT__cin_1));
    bufp->fullCData(oldp+97,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__gin),4);
    bufp->fullCData(oldp+98,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__pin),4);
    bufp->fullBit(oldp+99,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__cin));
    bufp->fullBit(oldp+100,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__gout));
    bufp->fullBit(oldp+101,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__pout));
    bufp->fullCData(oldp+102,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__cout),3);
    bufp->fullBit(oldp+103,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__G10));
    bufp->fullBit(oldp+104,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__P10));
    bufp->fullBit(oldp+105,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__G32));
    bufp->fullBit(oldp+106,(vlSelf->cla__DOT__m_3__DOT__a3__DOT__P32));
    bufp->fullCData(oldp+107,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__gin),4);
    bufp->fullCData(oldp+108,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__pin),4);
    bufp->fullBit(oldp+109,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__cin));
    bufp->fullBit(oldp+110,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__gout));
    bufp->fullBit(oldp+111,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__pout));
    bufp->fullCData(oldp+112,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__cout),3);
    bufp->fullBit(oldp+113,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__G10));
    bufp->fullBit(oldp+114,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__P10));
    bufp->fullBit(oldp+115,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__G32));
    bufp->fullBit(oldp+116,(vlSelf->cla__DOT__m_3__DOT__a7__DOT__P32));
    bufp->fullCData(oldp+117,(vlSelf->cla__DOT__m_4__DOT__gin),8);
    bufp->fullCData(oldp+118,(vlSelf->cla__DOT__m_4__DOT__pin),8);
    bufp->fullBit(oldp+119,(vlSelf->cla__DOT__m_4__DOT__cin));
    bufp->fullBit(oldp+120,(vlSelf->cla__DOT__m_4__DOT__gout));
    bufp->fullBit(oldp+121,(vlSelf->cla__DOT__m_4__DOT__pout));
    bufp->fullCData(oldp+122,(vlSelf->cla__DOT__m_4__DOT__cout),7);
    bufp->fullBit(oldp+123,(vlSelf->cla__DOT__m_4__DOT__gout_3));
    bufp->fullBit(oldp+124,(vlSelf->cla__DOT__m_4__DOT__pout_3));
    bufp->fullBit(oldp+125,(vlSelf->cla__DOT__m_4__DOT__gout_7));
    bufp->fullBit(oldp+126,(vlSelf->cla__DOT__m_4__DOT__pout_7));
    bufp->fullBit(oldp+127,(vlSelf->cla__DOT__m_4__DOT__cin_1));
    bufp->fullCData(oldp+128,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__gin),4);
    bufp->fullCData(oldp+129,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__pin),4);
    bufp->fullBit(oldp+130,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__cin));
    bufp->fullBit(oldp+131,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__gout));
    bufp->fullBit(oldp+132,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__pout));
    bufp->fullCData(oldp+133,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__cout),3);
    bufp->fullBit(oldp+134,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__G10));
    bufp->fullBit(oldp+135,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__P10));
    bufp->fullBit(oldp+136,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__G32));
    bufp->fullBit(oldp+137,(vlSelf->cla__DOT__m_4__DOT__a3__DOT__P32));
    bufp->fullCData(oldp+138,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__gin),4);
    bufp->fullCData(oldp+139,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__pin),4);
    bufp->fullBit(oldp+140,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__cin));
    bufp->fullBit(oldp+141,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__gout));
    bufp->fullBit(oldp+142,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__pout));
    bufp->fullCData(oldp+143,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__cout),3);
    bufp->fullBit(oldp+144,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__G10));
    bufp->fullBit(oldp+145,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__P10));
    bufp->fullBit(oldp+146,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__G32));
    bufp->fullBit(oldp+147,(vlSelf->cla__DOT__m_4__DOT__a7__DOT__P32));
}
