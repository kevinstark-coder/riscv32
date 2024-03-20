// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_cla);
    __Vhier.remove(&__Vscope_cla, &__Vscope_cla__m_1);
    __Vhier.remove(&__Vscope_cla, &__Vscope_cla__m_2);
    __Vhier.remove(&__Vscope_cla, &__Vscope_cla__m_3);
    __Vhier.remove(&__Vscope_cla, &__Vscope_cla__m_4);
    __Vhier.remove(&__Vscope_cla__m_1, &__Vscope_cla__m_1__a3);
    __Vhier.remove(&__Vscope_cla__m_1, &__Vscope_cla__m_1__a7);
    __Vhier.remove(&__Vscope_cla__m_2, &__Vscope_cla__m_2__a3);
    __Vhier.remove(&__Vscope_cla__m_2, &__Vscope_cla__m_2__a7);
    __Vhier.remove(&__Vscope_cla__m_3, &__Vscope_cla__m_3__a3);
    __Vhier.remove(&__Vscope_cla__m_3, &__Vscope_cla__m_3__a7);
    __Vhier.remove(&__Vscope_cla__m_4, &__Vscope_cla__m_4__a3);
    __Vhier.remove(&__Vscope_cla__m_4, &__Vscope_cla__m_4__a7);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cla.configure(this, name(), "cla", "cla", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cla__m_1.configure(this, name(), "cla.m_1", "m_1", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cla__m_1__a3.configure(this, name(), "cla.m_1.a3", "a3", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cla__m_1__a7.configure(this, name(), "cla.m_1.a7", "a7", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cla__m_2.configure(this, name(), "cla.m_2", "m_2", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cla__m_2__a3.configure(this, name(), "cla.m_2.a3", "a3", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cla__m_2__a7.configure(this, name(), "cla.m_2.a7", "a7", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cla__m_3.configure(this, name(), "cla.m_3", "m_3", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cla__m_3__a3.configure(this, name(), "cla.m_3.a3", "a3", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cla__m_3__a7.configure(this, name(), "cla.m_3.a7", "a7", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cla__m_4.configure(this, name(), "cla.m_4", "m_4", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cla__m_4__a3.configure(this, name(), "cla.m_4.a3", "a3", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cla__m_4__a7.configure(this, name(), "cla.m_4.a7", "a7", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_cla);
    __Vhier.add(&__Vscope_cla, &__Vscope_cla__m_1);
    __Vhier.add(&__Vscope_cla, &__Vscope_cla__m_2);
    __Vhier.add(&__Vscope_cla, &__Vscope_cla__m_3);
    __Vhier.add(&__Vscope_cla, &__Vscope_cla__m_4);
    __Vhier.add(&__Vscope_cla__m_1, &__Vscope_cla__m_1__a3);
    __Vhier.add(&__Vscope_cla__m_1, &__Vscope_cla__m_1__a7);
    __Vhier.add(&__Vscope_cla__m_2, &__Vscope_cla__m_2__a3);
    __Vhier.add(&__Vscope_cla__m_2, &__Vscope_cla__m_2__a7);
    __Vhier.add(&__Vscope_cla__m_3, &__Vscope_cla__m_3__a3);
    __Vhier.add(&__Vscope_cla__m_3, &__Vscope_cla__m_3__a7);
    __Vhier.add(&__Vscope_cla__m_4, &__Vscope_cla__m_4__a3);
    __Vhier.add(&__Vscope_cla__m_4, &__Vscope_cla__m_4__a7);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"a", &(TOP.a), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"b", &(TOP.b), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"cin", &(TOP.cin), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"sum", &(TOP.sum), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cla.varInsert(__Vfinal,"a", &(TOP.cla__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cla.varInsert(__Vfinal,"b", &(TOP.cla__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cla.varInsert(__Vfinal,"c_15", &(TOP.cla__DOT__c_15), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"c_23", &(TOP.cla__DOT__c_23), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"c_31", &(TOP.cla__DOT__c_31), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"c_7", &(TOP.cla__DOT__c_7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__cout), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cla.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__gin), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cla.varInsert(__Vfinal,"gout1", &(TOP.cla__DOT__gout1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"gout2", &(TOP.cla__DOT__gout2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"gout3", &(TOP.cla__DOT__gout3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"gout4", &(TOP.cla__DOT__gout4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__pin), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cla.varInsert(__Vfinal,"pout1", &(TOP.cla__DOT__pout1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"pout2", &(TOP.cla__DOT__pout2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"pout3", &(TOP.cla__DOT__pout3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"pout4", &(TOP.cla__DOT__pout4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla.varInsert(__Vfinal,"sum", &(TOP.cla__DOT__sum), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cla__m_1.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__m_1__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1.varInsert(__Vfinal,"cin_1", &(TOP.cla__DOT__m_1__DOT__cin_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__m_1__DOT__cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_cla__m_1.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__m_1__DOT__gin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_cla__m_1.varInsert(__Vfinal,"gout", &(TOP.cla__DOT__m_1__DOT__gout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1.varInsert(__Vfinal,"gout_3", &(TOP.cla__DOT__m_1__DOT__gout_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1.varInsert(__Vfinal,"gout_7", &(TOP.cla__DOT__m_1__DOT__gout_7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__m_1__DOT__pin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_cla__m_1.varInsert(__Vfinal,"pout", &(TOP.cla__DOT__m_1__DOT__pout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1.varInsert(__Vfinal,"pout_3", &(TOP.cla__DOT__m_1__DOT__pout_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1.varInsert(__Vfinal,"pout_7", &(TOP.cla__DOT__m_1__DOT__pout_7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a3.varInsert(__Vfinal,"G10", &(TOP.cla__DOT__m_1__DOT__a3__DOT__G10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a3.varInsert(__Vfinal,"G32", &(TOP.cla__DOT__m_1__DOT__a3__DOT__G32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a3.varInsert(__Vfinal,"P10", &(TOP.cla__DOT__m_1__DOT__a3__DOT__P10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a3.varInsert(__Vfinal,"P32", &(TOP.cla__DOT__m_1__DOT__a3__DOT__P32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a3.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__m_1__DOT__a3__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a3.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__m_1__DOT__a3__DOT__cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cla__m_1__a3.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__m_1__DOT__a3__DOT__gin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_1__a3.varInsert(__Vfinal,"gout", &(TOP.cla__DOT__m_1__DOT__a3__DOT__gout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a3.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__m_1__DOT__a3__DOT__pin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_1__a3.varInsert(__Vfinal,"pout", &(TOP.cla__DOT__m_1__DOT__a3__DOT__pout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a7.varInsert(__Vfinal,"G10", &(TOP.cla__DOT__m_1__DOT__a7__DOT__G10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a7.varInsert(__Vfinal,"G32", &(TOP.cla__DOT__m_1__DOT__a7__DOT__G32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a7.varInsert(__Vfinal,"P10", &(TOP.cla__DOT__m_1__DOT__a7__DOT__P10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a7.varInsert(__Vfinal,"P32", &(TOP.cla__DOT__m_1__DOT__a7__DOT__P32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a7.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__m_1__DOT__a7__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a7.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__m_1__DOT__a7__DOT__cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cla__m_1__a7.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__m_1__DOT__a7__DOT__gin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_1__a7.varInsert(__Vfinal,"gout", &(TOP.cla__DOT__m_1__DOT__a7__DOT__gout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_1__a7.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__m_1__DOT__a7__DOT__pin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_1__a7.varInsert(__Vfinal,"pout", &(TOP.cla__DOT__m_1__DOT__a7__DOT__pout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__m_2__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2.varInsert(__Vfinal,"cin_1", &(TOP.cla__DOT__m_2__DOT__cin_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__m_2__DOT__cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_cla__m_2.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__m_2__DOT__gin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_cla__m_2.varInsert(__Vfinal,"gout", &(TOP.cla__DOT__m_2__DOT__gout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2.varInsert(__Vfinal,"gout_3", &(TOP.cla__DOT__m_2__DOT__gout_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2.varInsert(__Vfinal,"gout_7", &(TOP.cla__DOT__m_2__DOT__gout_7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__m_2__DOT__pin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_cla__m_2.varInsert(__Vfinal,"pout", &(TOP.cla__DOT__m_2__DOT__pout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2.varInsert(__Vfinal,"pout_3", &(TOP.cla__DOT__m_2__DOT__pout_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2.varInsert(__Vfinal,"pout_7", &(TOP.cla__DOT__m_2__DOT__pout_7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a3.varInsert(__Vfinal,"G10", &(TOP.cla__DOT__m_2__DOT__a3__DOT__G10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a3.varInsert(__Vfinal,"G32", &(TOP.cla__DOT__m_2__DOT__a3__DOT__G32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a3.varInsert(__Vfinal,"P10", &(TOP.cla__DOT__m_2__DOT__a3__DOT__P10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a3.varInsert(__Vfinal,"P32", &(TOP.cla__DOT__m_2__DOT__a3__DOT__P32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a3.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__m_2__DOT__a3__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a3.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__m_2__DOT__a3__DOT__cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cla__m_2__a3.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__m_2__DOT__a3__DOT__gin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_2__a3.varInsert(__Vfinal,"gout", &(TOP.cla__DOT__m_2__DOT__a3__DOT__gout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a3.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__m_2__DOT__a3__DOT__pin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_2__a3.varInsert(__Vfinal,"pout", &(TOP.cla__DOT__m_2__DOT__a3__DOT__pout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a7.varInsert(__Vfinal,"G10", &(TOP.cla__DOT__m_2__DOT__a7__DOT__G10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a7.varInsert(__Vfinal,"G32", &(TOP.cla__DOT__m_2__DOT__a7__DOT__G32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a7.varInsert(__Vfinal,"P10", &(TOP.cla__DOT__m_2__DOT__a7__DOT__P10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a7.varInsert(__Vfinal,"P32", &(TOP.cla__DOT__m_2__DOT__a7__DOT__P32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a7.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__m_2__DOT__a7__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a7.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__m_2__DOT__a7__DOT__cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cla__m_2__a7.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__m_2__DOT__a7__DOT__gin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_2__a7.varInsert(__Vfinal,"gout", &(TOP.cla__DOT__m_2__DOT__a7__DOT__gout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_2__a7.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__m_2__DOT__a7__DOT__pin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_2__a7.varInsert(__Vfinal,"pout", &(TOP.cla__DOT__m_2__DOT__a7__DOT__pout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__m_3__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3.varInsert(__Vfinal,"cin_1", &(TOP.cla__DOT__m_3__DOT__cin_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__m_3__DOT__cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_cla__m_3.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__m_3__DOT__gin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_cla__m_3.varInsert(__Vfinal,"gout", &(TOP.cla__DOT__m_3__DOT__gout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3.varInsert(__Vfinal,"gout_3", &(TOP.cla__DOT__m_3__DOT__gout_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3.varInsert(__Vfinal,"gout_7", &(TOP.cla__DOT__m_3__DOT__gout_7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__m_3__DOT__pin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_cla__m_3.varInsert(__Vfinal,"pout", &(TOP.cla__DOT__m_3__DOT__pout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3.varInsert(__Vfinal,"pout_3", &(TOP.cla__DOT__m_3__DOT__pout_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3.varInsert(__Vfinal,"pout_7", &(TOP.cla__DOT__m_3__DOT__pout_7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a3.varInsert(__Vfinal,"G10", &(TOP.cla__DOT__m_3__DOT__a3__DOT__G10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a3.varInsert(__Vfinal,"G32", &(TOP.cla__DOT__m_3__DOT__a3__DOT__G32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a3.varInsert(__Vfinal,"P10", &(TOP.cla__DOT__m_3__DOT__a3__DOT__P10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a3.varInsert(__Vfinal,"P32", &(TOP.cla__DOT__m_3__DOT__a3__DOT__P32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a3.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__m_3__DOT__a3__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a3.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__m_3__DOT__a3__DOT__cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cla__m_3__a3.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__m_3__DOT__a3__DOT__gin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_3__a3.varInsert(__Vfinal,"gout", &(TOP.cla__DOT__m_3__DOT__a3__DOT__gout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a3.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__m_3__DOT__a3__DOT__pin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_3__a3.varInsert(__Vfinal,"pout", &(TOP.cla__DOT__m_3__DOT__a3__DOT__pout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a7.varInsert(__Vfinal,"G10", &(TOP.cla__DOT__m_3__DOT__a7__DOT__G10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a7.varInsert(__Vfinal,"G32", &(TOP.cla__DOT__m_3__DOT__a7__DOT__G32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a7.varInsert(__Vfinal,"P10", &(TOP.cla__DOT__m_3__DOT__a7__DOT__P10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a7.varInsert(__Vfinal,"P32", &(TOP.cla__DOT__m_3__DOT__a7__DOT__P32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a7.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__m_3__DOT__a7__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a7.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__m_3__DOT__a7__DOT__cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cla__m_3__a7.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__m_3__DOT__a7__DOT__gin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_3__a7.varInsert(__Vfinal,"gout", &(TOP.cla__DOT__m_3__DOT__a7__DOT__gout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_3__a7.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__m_3__DOT__a7__DOT__pin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_3__a7.varInsert(__Vfinal,"pout", &(TOP.cla__DOT__m_3__DOT__a7__DOT__pout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__m_4__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4.varInsert(__Vfinal,"cin_1", &(TOP.cla__DOT__m_4__DOT__cin_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__m_4__DOT__cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_cla__m_4.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__m_4__DOT__gin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_cla__m_4.varInsert(__Vfinal,"gout", &(TOP.cla__DOT__m_4__DOT__gout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4.varInsert(__Vfinal,"gout_3", &(TOP.cla__DOT__m_4__DOT__gout_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4.varInsert(__Vfinal,"gout_7", &(TOP.cla__DOT__m_4__DOT__gout_7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__m_4__DOT__pin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_cla__m_4.varInsert(__Vfinal,"pout", &(TOP.cla__DOT__m_4__DOT__pout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4.varInsert(__Vfinal,"pout_3", &(TOP.cla__DOT__m_4__DOT__pout_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4.varInsert(__Vfinal,"pout_7", &(TOP.cla__DOT__m_4__DOT__pout_7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a3.varInsert(__Vfinal,"G10", &(TOP.cla__DOT__m_4__DOT__a3__DOT__G10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a3.varInsert(__Vfinal,"G32", &(TOP.cla__DOT__m_4__DOT__a3__DOT__G32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a3.varInsert(__Vfinal,"P10", &(TOP.cla__DOT__m_4__DOT__a3__DOT__P10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a3.varInsert(__Vfinal,"P32", &(TOP.cla__DOT__m_4__DOT__a3__DOT__P32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a3.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__m_4__DOT__a3__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a3.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__m_4__DOT__a3__DOT__cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cla__m_4__a3.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__m_4__DOT__a3__DOT__gin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_4__a3.varInsert(__Vfinal,"gout", &(TOP.cla__DOT__m_4__DOT__a3__DOT__gout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a3.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__m_4__DOT__a3__DOT__pin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_4__a3.varInsert(__Vfinal,"pout", &(TOP.cla__DOT__m_4__DOT__a3__DOT__pout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a7.varInsert(__Vfinal,"G10", &(TOP.cla__DOT__m_4__DOT__a7__DOT__G10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a7.varInsert(__Vfinal,"G32", &(TOP.cla__DOT__m_4__DOT__a7__DOT__G32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a7.varInsert(__Vfinal,"P10", &(TOP.cla__DOT__m_4__DOT__a7__DOT__P10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a7.varInsert(__Vfinal,"P32", &(TOP.cla__DOT__m_4__DOT__a7__DOT__P32), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a7.varInsert(__Vfinal,"cin", &(TOP.cla__DOT__m_4__DOT__a7__DOT__cin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a7.varInsert(__Vfinal,"cout", &(TOP.cla__DOT__m_4__DOT__a7__DOT__cout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cla__m_4__a7.varInsert(__Vfinal,"gin", &(TOP.cla__DOT__m_4__DOT__a7__DOT__gin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_4__a7.varInsert(__Vfinal,"gout", &(TOP.cla__DOT__m_4__DOT__a7__DOT__gout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cla__m_4__a7.varInsert(__Vfinal,"pin", &(TOP.cla__DOT__m_4__DOT__a7__DOT__pin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cla__m_4__a7.varInsert(__Vfinal,"pout", &(TOP.cla__DOT__m_4__DOT__a7__DOT__pout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
