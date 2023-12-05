// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hdab43888__0;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->io_ledr_o = 0U;
    vlSelf->io_hex7_o = 0U;
    __Vtemp_hdab43888__0[0U] = 0x2e747874U;
    __Vtemp_hdab43888__0[1U] = 0x2f6d656dU;
    __Vtemp_hdab43888__0[2U] = 0x2f6d656dU;
    __Vtemp_hdab43888__0[3U] = 0x2e2eU;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hdab43888__0)
                 ,  &(vlSelf->top__DOT__singleCycle__DOT__s4__DOT__imem)
                 , 0, ~0ULL);
    __Vilp = 0U;
    while ((__Vilp <= 0xffU)) {
        vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB[__Vilp] = 0ULL;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1 
        = (0x1fffffU & VL_RAND_RESET_I(21));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h95f09b13__0 
        = (0x190042U | (0xfe80U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h95de709f__0 
        = (0x1900c0U | (0xfe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9631dff0__0 
        = (0x1a0101U | (0xfe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h963224f4__0 
        = (0x1a01b1U | (0xfe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__0 
        = (0x1fffffU & VL_RAND_RESET_I(21));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__9 
        = (0x802a0U | (0x3fc00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__8 
        = (0x802a0U | (0x3fc00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__6 
        = (0x803a0U | (0x3fc00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__7 
        = (0x802a0U | (0x3fc00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__6 
        = (0x802a0U | (0x3fc00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__5 
        = (0x803a0U | (0x3fc00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__4 
        = (0x803a0U | (0x3fc00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__5 
        = (0x800a0U | (0x3fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__4 
        = (0x800a0U | (0x3fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__3 
        = (0x801a0U | (0x3fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a086a17__1 
        = (0x800a0U | (0x3fc00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a086a17__0 
        = (0x800a0U | (0x3fc00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0eab57__1 
        = (0x801a0U | (0x3fc00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0eab57__0 
        = (0x801a0U | (0x3fc00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__3 
        = (0x800a0U | (0x3fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__2 
        = (0x800a0U | (0x3fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__2 
        = (0x801a0U | (0x3fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__1 
        = (0x801a0U | (0x3fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9895dc5b__0 
        = (0x400d0U | (0x1ff00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__0 
        = (0x801a0U | (0x3fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__1 
        = (0x800a0U | (0x3fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__0 
        = (0x800a0U | (0x3fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h930c25cb__0 
        = (0xc0010U | (0x3f200U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h930d20cb__0 
        = (0xc0410U | (0x3f200U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h930ad3cb__0 
        = (0xc0810U | (0x3f200U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h946bdeef__1 
        = (0x180000U | (0xe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9467caef__0 
        = (0x181000U | (0xe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9473c6ef__0 
        = (0x182000U | (0xe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h946bdeef__0 
        = (0x180000U | (0xe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h947c4eef__0 
        = (0x184000U | (0xe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h948b7eef__0 
        = (0x188000U | (0xe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8ef55766__0 
        = (0x190006U | (0x4fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8ef387ca__1 
        = (0x190056U | (0x4fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8ef387ca__0 
        = (0x190056U | (0x4fe00U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h94e18156__0 
        = (0x110004U | (0x4fe70U & VL_RAND_RESET_I(21)));
    vlSelf->top__DOT__singleCycle__DOT__sa__DOT____Vxrand_h96ff575f__2 
        = (0xfU & VL_RAND_RESET_I(4));
    vlSelf->top__DOT__singleCycle__DOT__sa__DOT____Vxrand_h96ff575f__1 
        = (0xfU & VL_RAND_RESET_I(4));
    vlSelf->top__DOT__singleCycle__DOT__sa__DOT____Vxrand_h96ff575f__0 
        = (0xfU & VL_RAND_RESET_I(4));
}

extern const VlUnpacked<IData/*31:0*/, 64> Vtop__ConstPool__TABLE_h59e4a426_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber7;
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->pc_debug_o = vlSelf->top__DOT__singleCycle__DOT__pc;
    __Vtableidx1 = ((0x3eU & (vlSelf->top__DOT__singleCycle__DOT__inst_WB 
                              >> 6U)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__RegWen_WB));
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y 
        = Vtop__ConstPool__TABLE_h59e4a426_0[__Vtableidx1];
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber7 
        = ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
            >> 0x1fU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                             ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                            >> 0x1eU)));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x1eU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x1dU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x1dU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x1cU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x1cU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x1bU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x1bU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x1aU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x1aU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x19U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x19U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x18U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x18U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x17U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x17U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x16U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x16U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x15U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x15U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x14U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x14U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x13U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x13U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x12U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x12U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x11U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x11U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0x10U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x10U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                  >> 0xfU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0xfU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                 >> 0xeU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0xeU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                 >> 0xdU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0xdU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                 >> 0xcU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0xcU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                 >> 0xbU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0xbU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                 >> 0xaU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0xaU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                                 >> 9U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 9U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                               >> 8U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 8U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                               >> 7U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 7U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                               >> 6U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 6U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                               >> 5U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 5U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                               >> 4U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 4U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                               >> 3U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 3U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                               >> 2U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 2U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                               >> 1U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 1U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                               ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX))));
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x0____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[1U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x1____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[2U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x2____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[3U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x3____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[4U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x4____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[5U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x5____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[6U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x6____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[7U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x7____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[8U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x8____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[9U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x9____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0xaU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x10____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0xbU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x11____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0xcU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x12____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0xdU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x13____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0xeU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x14____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0xfU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x15____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x10U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x16____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x11U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x17____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x12U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x18____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x13U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x19____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x14U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x20____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x15U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x21____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x16U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x22____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x17U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x23____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x18U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x24____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x19U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x25____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x1aU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x26____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x1bU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x27____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x1cU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x28____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x1dU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x29____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x1eU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x30____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x1fU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x31____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
        = ((0x80000000U & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                           & ((~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x1fU)) << 0x1fU))) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber6) 
               << 0x1eU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber6) 
                             << 0x1dU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber6) 
                                           << 0x1cU) 
                                          | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber6) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber6) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber6) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber6) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber6) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber6) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber6) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber6) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber6) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber6) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber6) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber6) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber6) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber6) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber6) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber6) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber6) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber6) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber6) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber6) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber6) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber6) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber6) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber6) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber6))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign 
        = ((2U & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                  >> 0x1eU)) | (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                >> 0x1fU));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
        = ((0x80000000U & (((~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                >> 0x1fU)) << 0x1fU) 
                           & vlSelf->top__DOT__singleCycle__DOT__DataB_EX)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber8) 
               << 0x1eU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber8) 
                             << 0x1dU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber8) 
                                           << 0x1cU) 
                                          | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber8) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber8) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber8) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber8) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber8) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber8) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber8) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber8) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber8) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber8) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber8) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber8) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber8) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber8) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber8) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber8) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber8) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber8) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber8) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber8) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber8) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber8) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber8) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber8) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber8) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber8))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__WB = ((0U == (IData)(vlSelf->top__DOT__singleCycle__DOT__WBSel_WB))
                                               ? vlSelf->top__DOT__singleCycle__DOT__mem_WB
                                               : ((1U 
                                                   == (IData)(vlSelf->top__DOT__singleCycle__DOT__WBSel_WB))
                                                   ? vlSelf->top__DOT__singleCycle__DOT__alu_WB
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__singleCycle__DOT__WBSel_WB))
                                                    ? vlSelf->top__DOT__singleCycle__DOT__pc_WBp4
                                                    : 0U)));
    vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4 
        = (((IData)(vlSelf->top__DOT__singleCycle__DOT__SB_MEM) 
            << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__SH_MEM));
    vlSelf->io_hex1_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex1_reg;
    vlSelf->io_hex2_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex2_reg;
    vlSelf->io_hex3_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex3_reg;
    vlSelf->io_hex4_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex4_reg;
    vlSelf->io_hex5_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex5_reg;
    vlSelf->io_hex6_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex6_reg;
    vlSelf->io_lcd_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__lcd_reg;
    vlSelf->io_ledg_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledg_reg;
    vlSelf->io_hex0_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex0_reg;
    vlSelf->io_ledr_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledr_reg;
    vlSelf->io_hex7_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex7_reg;
    vlSelf->top__DOT__singleCycle__DOT__stall_ID = 
        ((((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                     >> 0xfU)) == (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                                            >> 7U))) 
          | ((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                       >> 0x14U)) == (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                                               >> 7U)))) 
         & (3U == (0x7fU & vlSelf->top__DOT__singleCycle__DOT__inst_EX)));
    vlSelf->top__DOT__singleCycle__DOT__predicted_target_address 
        = (vlSelf->top__DOT__singleCycle__DOT__pc_EX 
           + vlSelf->top__DOT__singleCycle__DOT__imm_EX);
    vlSelf->top__DOT__singleCycle__DOT__forwardingA 
        = ((((IData)(vlSelf->top__DOT__singleCycle__DOT__RegWen_MEM) 
             & ((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                          >> 0xfU)) == (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_MEM 
                                                 >> 7U)))) 
            & (0U != (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                               >> 0xfU)))) ? 3U : (
                                                   ((((IData)(vlSelf->top__DOT__singleCycle__DOT__RegWen_WB) 
                                                      & ((0x1fU 
                                                          & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                                                             >> 0xfU)) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__singleCycle__DOT__inst_WB 
                                                             >> 7U)))) 
                                                     & (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                                                            >> 0xfU)))) 
                                                    & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__ASel_EX)))
                                                    ? 2U
                                                    : (IData)(vlSelf->top__DOT__singleCycle__DOT__ASel_EX)));
    vlSelf->top__DOT__singleCycle__DOT__forwardingB 
        = ((((IData)(vlSelf->top__DOT__singleCycle__DOT__RegWen_MEM) 
             & ((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                          >> 0x14U)) == (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_MEM 
                                                  >> 7U)))) 
            & (0U != (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                               >> 0x14U)))) ? 3U : 
           ((((IData)(vlSelf->top__DOT__singleCycle__DOT__RegWen_WB) 
              & ((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                           >> 0x14U)) == (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_WB 
                                                   >> 7U)))) 
             & (0U != (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                                >> 0x14U)))) ? 2U : 0U));
    vlSelf->top__DOT__singleCycle__DOT__inst = vlSelf->top__DOT__singleCycle__DOT__s4__DOT__imem
        [(0x7ffU & (vlSelf->top__DOT__singleCycle__DOT__pc 
                    >> 2U))];
    vlSelf->top__DOT__singleCycle__DOT__taken = (3U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB
                                                            [
                                                            (0xffU 
                                                             & (vlSelf->top__DOT__singleCycle__DOT__pc 
                                                                >> 2U))] 
                                                            >> 0x25U)));
    vlSelf->top__DOT__singleCycle__DOT__ALUSel = ((4U 
                                                   & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUop_EX))
                                                   ? (IData)(vlSelf->top__DOT__singleCycle__DOT__sa__DOT____Vxrand_h96ff575f__2)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUop_EX))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUop_EX))
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? 9U
                                                         : 8U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? 7U
                                                         : 5U))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? 4U
                                                         : 3U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? (IData)(vlSelf->top__DOT__singleCycle__DOT__sa__DOT____Vxrand_h96ff575f__1)
                                                         : 0U)))
                                                      : 
                                                     ((0x4000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? 9U
                                                         : 8U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? 6U
                                                         : 5U))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? 4U
                                                         : 3U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? 2U
                                                         : 0U))))
                                                     : 
                                                    ((0x40000000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                        ? (IData)(vlSelf->top__DOT__singleCycle__DOT__sa__DOT____Vxrand_h96ff575f__0)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? 7U
                                                         : (IData)(vlSelf->top__DOT__singleCycle__DOT__sa__DOT____Vxrand_h96ff575f__0)))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                        ? (IData)(vlSelf->top__DOT__singleCycle__DOT__sa__DOT____Vxrand_h96ff575f__0)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? (IData)(vlSelf->top__DOT__singleCycle__DOT__sa__DOT____Vxrand_h96ff575f__0)
                                                         : 1U)))
                                                      : 
                                                     ((0x4000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? 9U
                                                         : 8U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? 6U
                                                         : 5U))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? 4U
                                                         : 3U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__inst_EX)
                                                         ? 2U
                                                         : 0U)))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUop_EX))
                                                     ? 0xaU
                                                     : 0U)));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
        = (((~ ((vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                 ^ vlSelf->top__DOT__singleCycle__DOT__DataB_EX) 
                >> 0x1fU)) << 0x1fU) | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber7) 
                                         << 0x1eU) 
                                        | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber7) 
                                            << 0x1dU) 
                                           | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber7) 
                                               << 0x1cU) 
                                              | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber7) 
                                                  << 0x1bU) 
                                                 | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber7) 
                                                     << 0x1aU) 
                                                    | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber7) 
                                                        << 0x19U) 
                                                       | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber7) 
                                                           << 0x18U) 
                                                          | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber7) 
                                                              << 0x17U) 
                                                             | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber7) 
                                                                 << 0x16U) 
                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber7) 
                                                                    << 0x15U) 
                                                                   | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber7) 
                                                                       << 0x14U) 
                                                                      | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber7) 
                                                                          << 0x13U) 
                                                                         | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber7) 
                                                                             << 0x12U) 
                                                                            | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber7) 
                                                                                << 0x11U) 
                                                                               | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber7) 
                                                                                << 0x10U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber7) 
                                                                                << 0xfU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber7) 
                                                                                << 0xdU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber7) 
                                                                                << 0xcU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber7) 
                                                                                << 0xaU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber7) 
                                                                                << 9U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber7) 
                                                                                << 8U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber7) 
                                                                                << 7U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber7) 
                                                                                << 6U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber7) 
                                                                                << 5U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber7) 
                                                                                << 4U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber7) 
                                                                                << 3U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber7) 
                                                                                << 2U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber7) 
                                                                                << 1U) 
                                                                                | (IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber7))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__DataA = ((0x80000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                  ? 
                                                 ((0x40000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                   ? 
                                                  ((0x20000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x1fU]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x1eU])
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x1dU]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x1cU]))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x1bU]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x1aU])
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x19U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x18U])))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x17U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x16U])
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x15U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x14U]))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x13U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x12U])
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x11U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x10U]))))
                                                  : 
                                                 ((0x40000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                   ? 
                                                  ((0x20000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0xfU]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0xeU])
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0xdU]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0xcU]))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0xbU]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0xaU])
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [9U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [8U])))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [7U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [6U])
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [5U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [4U]))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [3U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [2U])
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [1U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0U])))));
    vlSelf->top__DOT__singleCycle__DOT__DataB = ((0x1000000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                  ? 
                                                 ((0x800000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                   ? 
                                                  ((0x400000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x1fU]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x1eU])
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x1dU]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x1cU]))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x1bU]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x1aU])
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x19U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x18U])))
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x17U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x16U])
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x15U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x14U]))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x13U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x12U])
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x11U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0x10U]))))
                                                  : 
                                                 ((0x800000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                   ? 
                                                  ((0x400000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0xfU]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0xeU])
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0xdU]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0xcU]))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0xbU]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0xaU])
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [9U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [8U])))
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [7U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [6U])
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [5U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [4U]))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [3U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [2U])
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                      ? 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [1U]
                                                      : 
                                                     vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d
                                                     [0U])))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x1fU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1fU) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x1eU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x1eU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x1eU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1eU) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x1dU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x1dU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x1dU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1dU) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x1cU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x1cU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1cU) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x1bU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x1bU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x1bU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1bU) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x1aU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x1aU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x1aU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1aU) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x19U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x19U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x19U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x19U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x18U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x18U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x18U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x17U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x17U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x17U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x17U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x16U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x16U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x16U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x16U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x15U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x15U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x15U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x15U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x14U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x14U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x14U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x13U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x13U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x13U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x13U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x12U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x12U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x12U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x12U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x11U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x11U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x11U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x11U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0x10U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x10U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x10U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                              >> 0xfU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                     >> 0xfU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0xfU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xfU) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                            >> 0xeU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                    >> 0xeU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0xeU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xeU) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                            >> 0xdU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                    >> 0xdU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0xdU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xdU) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                            >> 0xcU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                    >> 0xcU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0xcU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xcU) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                            >> 0xbU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                    >> 0xbU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0xbU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xbU) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                            >> 0xaU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                    >> 0xaU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0xaU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xaU) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                            >> 9U)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                    >> 9U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 9U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                        >> 8U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                                    >> 8U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 8U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                        >> 7U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                                    >> 7U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 7U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                        >> 6U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                                    >> 6U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 6U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                        >> 5U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                                    >> 5U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 5U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                        >> 4U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                                    >> 4U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 4U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                        >> 3U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                                    >> 3U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 3U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                        >> 2U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                                    >> 2U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 2U) & (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                        >> 1U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                                    >> 1U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 1U) & vlSelf->top__DOT__singleCycle__DOT__DataA_EX) 
                            & (~ vlSelf->top__DOT__singleCycle__DOT__DataB_EX))));
    if ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign))) {
        vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AgtB 
            = (1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign) 
                     & vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt));
        vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AeqB 
            = (1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign) 
                     & vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq));
        vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AltB 
            = (1U & ((~ (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign)) 
                     | vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt));
    } else {
        vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AgtB 
            = (1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign) 
                     | vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt));
        vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AeqB 
            = (1U & ((~ (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign)) 
                     & vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq));
        vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AltB 
            = (1U & ((~ (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign)) 
                     & vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt));
    }
    if (vlSelf->top__DOT__singleCycle__DOT__BrUn_EX) {
        vlSelf->top__DOT__singleCycle__DOT__BrEq = 
            (1U & vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq);
        vlSelf->top__DOT__singleCycle__DOT__BrLt = 
            (1U & vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt);
    } else {
        vlSelf->top__DOT__singleCycle__DOT__BrEq = 
            (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AeqB));
        vlSelf->top__DOT__singleCycle__DOT__BrLt = 
            (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AltB));
    }
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x1fU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x1eU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x1eU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x1eU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1eU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x1dU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x1dU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x1dU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1dU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x1cU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x1cU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1cU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x1bU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x1bU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x1bU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1bU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x1aU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x1aU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x1aU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1aU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x19U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x19U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x19U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x19U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x18U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x18U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x18U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x17U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x17U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x17U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x17U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x16U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x16U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x16U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x16U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x15U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x15U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x15U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x15U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x14U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x14U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x14U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x13U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x13U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x13U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x13U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x12U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x12U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x12U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x12U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x11U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x11U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x11U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x11U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0x10U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x10U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x10U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                                 >> 0xfU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                  >> 0xfU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0xfU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xfU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                               >> 0xeU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                 >> 0xeU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0xeU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xeU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                               >> 0xdU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                 >> 0xdU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0xdU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xdU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                               >> 0xcU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                 >> 0xcU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0xcU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                               >> 0xbU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                 >> 0xbU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0xbU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xbU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                               >> 0xaU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                 >> 0xaU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0xaU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xaU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                               >> 9U))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                                 >> 9U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 9U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                           >> 8U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                               >> 8U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                           >> 7U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                               >> 7U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 7U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                           >> 6U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                               >> 6U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 6U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                           >> 5U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                               >> 5U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 5U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                           >> 4U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                               >> 4U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                           >> 3U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                               >> 3U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 3U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                           >> 2U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                               >> 2U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 2U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
                                           >> 1U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
                               >> 1U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 1U) & (~ vlSelf->top__DOT__singleCycle__DOT__DataA_EX)) 
                            & vlSelf->top__DOT__singleCycle__DOT__DataB_EX)));
    vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__forwardingA))
            ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__forwardingA))
                ? vlSelf->top__DOT__singleCycle__DOT__alu_MEM
                : vlSelf->top__DOT__singleCycle__DOT__WB)
            : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__forwardingA))
                ? vlSelf->top__DOT__singleCycle__DOT__pc_EX
                : vlSelf->top__DOT__singleCycle__DOT__DataA_EX));
    vlSelf->top__DOT__singleCycle__DOT__outmux = ((2U 
                                                   & (IData)(vlSelf->top__DOT__singleCycle__DOT__forwardingB))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__singleCycle__DOT__forwardingB))
                                                    ? vlSelf->top__DOT__singleCycle__DOT__alu_MEM
                                                    : vlSelf->top__DOT__singleCycle__DOT__WB)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__singleCycle__DOT__forwardingB))
                                                    ? vlSelf->top__DOT__singleCycle__DOT__imm_EX
                                                    : vlSelf->top__DOT__singleCycle__DOT__DataB_EX));
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
        = ((0x40U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
            ? ((0x20U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                ? ((0x10U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                    ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1
                    : ((8U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                        ? ((4U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                            ? ((2U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                ? ((1U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                    ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h963224f4__0
                                    : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                            : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                        : ((4U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                            ? ((2U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                ? ((1U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                    ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9631dff0__0
                                    : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                            : ((2U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                ? ((1U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                    ? ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                        ? ((0x2000U 
                                            & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                            ? ((0x1000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                ? ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrEq)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrLt)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__0
                                                     : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__9)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrLt)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__8
                                                     : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__6))
                                                : ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrEq)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrLt)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__5
                                                     : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__7)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrLt)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__4
                                                     : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__6)))
                                            : ((0x1000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                ? ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrEq)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrLt)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__0
                                                     : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__5)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrLt)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__4
                                                     : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__3))
                                                : ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrEq)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrLt)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0eab57__1
                                                     : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a086a17__1)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrLt)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0eab57__0
                                                     : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a086a17__0))))
                                        : ((0x2000U 
                                            & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                            ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__0
                                            : ((0x1000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                ? ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrEq)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrLt)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__3
                                                     : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__2)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrLt)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__2
                                                     : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__1))
                                                : ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrEq)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrLt)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9895dc5b__0
                                                     : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__0)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__BrLt)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__1
                                                     : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__0)))))
                                    : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1))))
                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
            : ((0x20U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                ? ((0x10U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                    ? ((8U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                        ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1
                        : ((4U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                            ? ((2U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                ? ((1U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                    ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h95f09b13__0
                                    : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                            : ((2U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                ? ((1U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                    ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h94e18156__0
                                    : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)))
                    : ((8U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                        ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1
                        : ((4U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                            ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1
                            : ((2U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                ? ((1U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                    ? ((0U == (7U & 
                                               (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                >> 0xcU)))
                                        ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h930ad3cb__0
                                        : ((1U == (7U 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                      >> 0xcU)))
                                            ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h930d20cb__0
                                            : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h930c25cb__0))
                                    : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1))))
                : ((0x10U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                    ? ((8U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                        ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1
                        : ((4U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                            ? ((2U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                ? ((1U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                    ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h95de709f__0
                                    : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                            : ((2U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                ? ((1U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                    ? ((1U == (7U & 
                                               (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                >> 0xcU)))
                                        ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8ef387ca__0
                                        : ((5U == (7U 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                      >> 0xcU)))
                                            ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8ef387ca__1
                                            : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8ef55766__0))
                                    : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)))
                    : ((8U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                        ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1
                        : ((4U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                            ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1
                            : ((2U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                ? ((1U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                    ? ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                        ? ((0x2000U 
                                            & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                            ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h946bdeef__1
                                            : ((0x1000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9467caef__0
                                                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9473c6ef__0))
                                        : ((0x2000U 
                                            & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                            ? ((0x1000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h946bdeef__1
                                                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h946bdeef__0)
                                            : ((0x1000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__inst_ID)
                                                ? vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h947c4eef__0
                                                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h948b7eef__0)))
                                    : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1)
                                : vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1))))));
    vlSelf->top__DOT__singleCycle__DOT__outmux2fb = 
        ((IData)(vlSelf->top__DOT__singleCycle__DOT__BSel_EX)
          ? vlSelf->top__DOT__singleCycle__DOT__imm_EX
          : vlSelf->top__DOT__singleCycle__DOT__outmux);
    vlSelf->top__DOT__singleCycle__DOT__Imm = ((0x40U 
                                                & vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal)
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal)
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                        >> 0x14U))
                                                     : 
                                                    (0xfffff000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__inst_ID)))
                                                : (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                                  >> 0x1fU))) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                            >> 0xbU)) 
                                                        | ((0xff000U 
                                                            & vlSelf->top__DOT__singleCycle__DOT__inst_ID) 
                                                           | ((0x800U 
                                                               & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                                    >> 0x14U))))))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                                  >> 0x1fU))) 
                                                      << 0xdU) 
                                                     | ((0x1000U 
                                                         & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                                    >> 7U)))))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                              >> 7U))))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                        >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp 
        = ((0x8000U & vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal)
            ? (((- (IData)((1U & (vlSelf->top__DOT__singleCycle__DOT__WB 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelf->top__DOT__singleCycle__DOT__WB))
            : ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal)
                ? (((- (IData)((1U & (vlSelf->top__DOT__singleCycle__DOT__WB 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->top__DOT__singleCycle__DOT__WB))
                : ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal)
                    ? (0xffU & vlSelf->top__DOT__singleCycle__DOT__WB)
                    : ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal)
                        ? (0xffffU & vlSelf->top__DOT__singleCycle__DOT__WB)
                        : vlSelf->top__DOT__singleCycle__DOT__WB))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber7 
        = ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
            >> 0x1fU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                             ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                            >> 0x1eU)));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x1eU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1dU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x1dU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1cU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x1cU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1bU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x1bU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1aU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x1aU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x19U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x19U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x18U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x18U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x17U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x17U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x16U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x16U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x15U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x15U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x14U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x14U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x13U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x13U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x12U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x12U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x11U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x11U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x10U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x10U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0xfU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0xfU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xeU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0xeU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xdU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0xdU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xcU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0xcU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xbU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0xbU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xaU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0xaU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 9U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 9U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 8U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 8U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 7U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 7U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 6U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 6U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 5U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 5U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 4U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 4U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 3U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 3U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 2U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 2U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 1U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 1U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                               ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber7 
        = ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
            >> 0x1fU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                             ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                            >> 0x1eU)));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x1eU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1dU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x1dU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1cU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x1cU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1bU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x1bU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1aU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x1aU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x19U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x19U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x18U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x18U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x17U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x17U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x16U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x16U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x15U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x15U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x14U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x14U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x13U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x13U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x12U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x12U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x11U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x11U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x10U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x10U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0xfU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0xfU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xeU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0xeU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xdU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0xdU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xcU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0xcU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xbU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0xbU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xaU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0xaU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 9U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 9U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 8U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 8U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 7U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 7U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 6U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 6U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 5U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 5U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 4U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 4U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 3U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 3U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 2U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 2U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 1U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 1U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                               ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__sign 
        = ((2U & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                  >> 0x1eU)) | (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                >> 0x1fU));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
        = ((0x80000000U & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                           & ((~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1fU)) << 0x1fU))) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber6) 
               << 0x1eU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber6) 
                             << 0x1dU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber6) 
                                           << 0x1cU) 
                                          | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber6) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber6) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber6) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber6) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber6) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber6) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber6) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber6) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber6) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber6) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber6) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber6) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber6) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber6) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber6) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber6) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber6) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber6) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber6) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber6) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber6) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber6) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber6) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber6) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber6))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
        = ((0x80000000U & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                           & ((~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1fU)) << 0x1fU))) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber6) 
               << 0x1eU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber6) 
                             << 0x1dU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber6) 
                                           << 0x1cU) 
                                          | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber6) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber6) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber6) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber6) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber6) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber6) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber6) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber6) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber6) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber6) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber6) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber6) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber6) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber6) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber6) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber6) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber6) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber6) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber6) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber6) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber6) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber6) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber6) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber6) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber6))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
        = ((0x80000000U & (((~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                >> 0x1fU)) << 0x1fU) 
                           & vlSelf->top__DOT__singleCycle__DOT__outmux2fb)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber8) 
               << 0x1eU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber8) 
                             << 0x1dU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber8) 
                                           << 0x1cU) 
                                          | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber8) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber8) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber8) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber8) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber8) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber8) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber8) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber8) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber8) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber8) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber8) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber8) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber8) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber8) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber8) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber8) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber8) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber8) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber8) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber8) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber8) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber8) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber8) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber8) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber8) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber8))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
        = ((0x80000000U & (((~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                >> 0x1fU)) << 0x1fU) 
                           & vlSelf->top__DOT__singleCycle__DOT__outmux2fb)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber8) 
               << 0x1eU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber8) 
                             << 0x1dU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber8) 
                                           << 0x1cU) 
                                          | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber8) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber8) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber8) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber8) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber8) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber8) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber8) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber8) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber8) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber8) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber8) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber8) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber8) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber8) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber8) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber8) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber8) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber8) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber8) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber8) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber8) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber8) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber8) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber8) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber8) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber8))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
        = (((~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                 ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                >> 0x1fU)) << 0x1fU) | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber7) 
                                         << 0x1eU) 
                                        | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber7) 
                                            << 0x1dU) 
                                           | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber7) 
                                               << 0x1cU) 
                                              | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber7) 
                                                  << 0x1bU) 
                                                 | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber7) 
                                                     << 0x1aU) 
                                                    | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber7) 
                                                        << 0x19U) 
                                                       | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber7) 
                                                           << 0x18U) 
                                                          | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber7) 
                                                              << 0x17U) 
                                                             | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber7) 
                                                                 << 0x16U) 
                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber7) 
                                                                    << 0x15U) 
                                                                   | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber7) 
                                                                       << 0x14U) 
                                                                      | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber7) 
                                                                          << 0x13U) 
                                                                         | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber7) 
                                                                             << 0x12U) 
                                                                            | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber7) 
                                                                                << 0x11U) 
                                                                               | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber7) 
                                                                                << 0x10U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber7) 
                                                                                << 0xfU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber7) 
                                                                                << 0xdU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber7) 
                                                                                << 0xcU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber7) 
                                                                                << 0xaU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber7) 
                                                                                << 9U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber7) 
                                                                                << 8U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber7) 
                                                                                << 7U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber7) 
                                                                                << 6U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber7) 
                                                                                << 5U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber7) 
                                                                                << 4U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber7) 
                                                                                << 3U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber7) 
                                                                                << 2U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber7) 
                                                                                << 1U) 
                                                                                | (IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber7))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
        = (((~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                 ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                >> 0x1fU)) << 0x1fU) | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber7) 
                                         << 0x1eU) 
                                        | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber7) 
                                            << 0x1dU) 
                                           | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber7) 
                                               << 0x1cU) 
                                              | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber7) 
                                                  << 0x1bU) 
                                                 | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber7) 
                                                     << 0x1aU) 
                                                    | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber7) 
                                                        << 0x19U) 
                                                       | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber7) 
                                                           << 0x18U) 
                                                          | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber7) 
                                                              << 0x17U) 
                                                             | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber7) 
                                                                 << 0x16U) 
                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber7) 
                                                                    << 0x15U) 
                                                                   | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber7) 
                                                                       << 0x14U) 
                                                                      | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber7) 
                                                                          << 0x13U) 
                                                                         | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber7) 
                                                                             << 0x12U) 
                                                                            | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber7) 
                                                                                << 0x11U) 
                                                                               | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber7) 
                                                                                << 0x10U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber7) 
                                                                                << 0xfU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber7) 
                                                                                << 0xdU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber7) 
                                                                                << 0xcU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber7) 
                                                                                << 0xaU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber7) 
                                                                                << 9U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber7) 
                                                                                << 8U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber7) 
                                                                                << 7U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber7) 
                                                                                << 6U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber7) 
                                                                                << 5U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber7) 
                                                                                << 4U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber7) 
                                                                                << 3U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber7) 
                                                                                << 2U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber7) 
                                                                                << 1U) 
                                                                                | (IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber7))))))))))))))))))))))))))))))));
    if ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__sign))) {
        vlSelf->top__DOT__singleCycle__DOT__s10__DOT____Vcellout__s2____pinNumber4 
            = (1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__sign) 
                     & vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq));
        vlSelf->top__DOT__singleCycle__DOT__s10__DOT____Vcellout__s2____pinNumber3 
            = (1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__sign) 
                     & vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt));
        vlSelf->top__DOT__singleCycle__DOT__s10__DOT__lt1 
            = (1U & ((~ (IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__sign)) 
                     | vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt));
    } else {
        vlSelf->top__DOT__singleCycle__DOT__s10__DOT____Vcellout__s2____pinNumber4 
            = (1U & ((~ (IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__sign)) 
                     & vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq));
        vlSelf->top__DOT__singleCycle__DOT__s10__DOT____Vcellout__s2____pinNumber3 
            = (1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__sign) 
                     | vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt));
        vlSelf->top__DOT__singleCycle__DOT__s10__DOT__lt1 
            = (1U & ((~ (IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__sign)) 
                     & vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt));
    }
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x1fU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1fU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1eU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1eU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x1eU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1eU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1dU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1dU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x1dU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1dU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1cU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x1cU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1cU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1bU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1bU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x1bU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1bU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1aU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1aU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x1aU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1aU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x19U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x19U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x19U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x19U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x18U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x18U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x18U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x17U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x17U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x17U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x17U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x16U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x16U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x16U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x16U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x15U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x15U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x15U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x15U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x14U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x14U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x14U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x13U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x13U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x13U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x13U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x12U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x12U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x12U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x12U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x11U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x11U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x11U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x11U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x10U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x10U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x10U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0xfU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0xfU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0xfU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xfU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xeU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xeU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0xeU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xeU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xdU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xdU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0xdU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xdU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xcU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xcU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0xcU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xcU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xbU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xbU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0xbU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xbU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xaU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xaU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0xaU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xaU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 9U)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 9U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 9U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 8U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 8U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 8U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 7U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 7U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 7U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 6U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 6U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 6U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 5U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 5U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 5U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 4U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 4U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 4U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 3U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 3U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 3U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 2U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 2U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 2U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 1U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 1U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 1U) & vlSelf->top__DOT__singleCycle__DOT__outmux_branch) 
                            & (~ vlSelf->top__DOT__singleCycle__DOT__outmux2fb))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x1fU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1fU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1eU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1eU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x1eU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1eU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1dU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1dU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x1dU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1dU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1cU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x1cU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1cU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1bU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1bU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x1bU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1bU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1aU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1aU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x1aU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1aU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x19U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x19U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x19U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x19U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x18U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x18U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x18U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x17U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x17U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x17U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x17U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x16U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x16U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x16U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x16U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x15U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x15U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x15U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x15U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x14U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x14U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x14U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x13U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x13U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x13U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x13U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x12U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x12U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x12U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x12U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x11U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x11U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x11U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x11U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x10U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x10U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x10U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0xfU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0xfU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0xfU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xfU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xeU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xeU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0xeU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xeU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xdU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xdU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0xdU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xdU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xcU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xcU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0xcU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xcU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xbU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xbU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0xbU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xbU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xaU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xaU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0xaU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xaU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 9U)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 9U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 9U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 8U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 8U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 8U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 7U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 7U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 7U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 6U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 6U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 6U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 5U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 5U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 5U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 4U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 4U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 4U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 3U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 3U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 3U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 2U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 2U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 2U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 1U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 1U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 1U) & vlSelf->top__DOT__singleCycle__DOT__outmux_branch) 
                            & (~ vlSelf->top__DOT__singleCycle__DOT__outmux2fb))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x1fU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1eU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1eU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x1eU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1eU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1dU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1dU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x1dU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1dU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1cU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x1cU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1cU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1bU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1bU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x1bU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1bU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1aU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1aU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x1aU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1aU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x19U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x19U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x19U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x19U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x18U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x18U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x18U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x17U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x17U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x17U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x17U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x16U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x16U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x16U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x16U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x15U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x15U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x15U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x15U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x14U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x14U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x14U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x13U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x13U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x13U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x13U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x12U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x12U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x12U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x12U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x11U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x11U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x11U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x11U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x10U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x10U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x10U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0xfU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0xfU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0xfU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xfU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xeU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xeU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0xeU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xeU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xdU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xdU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0xdU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xdU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xcU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xcU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0xcU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xbU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xbU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0xbU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xbU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xaU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xaU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0xaU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xaU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 9U))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 9U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 9U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 8U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 8U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 7U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 7U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 7U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 6U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 6U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 6U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 5U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 5U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 5U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 4U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 4U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 3U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 3U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 3U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 2U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 2U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 2U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 1U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 1U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 1U) & (~ vlSelf->top__DOT__singleCycle__DOT__outmux_branch)) 
                            & vlSelf->top__DOT__singleCycle__DOT__outmux2fb)));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x1fU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1eU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1eU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x1eU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1eU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1dU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1dU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x1dU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1dU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1cU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x1cU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1cU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1bU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1bU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x1bU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1bU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1aU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1aU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x1aU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1aU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x19U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x19U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x19U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x19U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x18U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x18U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x18U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x17U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x17U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x17U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x17U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x16U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x16U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x16U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x16U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x15U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x15U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x15U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x15U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x14U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x14U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x14U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x13U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x13U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x13U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x13U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x12U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x12U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x12U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x12U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x11U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x11U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x11U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x11U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x10U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x10U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x10U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0xfU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0xfU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0xfU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xfU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xeU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xeU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0xeU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xeU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xdU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xdU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0xdU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xdU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xcU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xcU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0xcU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xbU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xbU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0xbU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xbU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xaU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xaU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0xaU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xaU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 9U))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 9U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 9U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 8U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 8U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 7U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 7U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 7U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 6U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 6U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 6U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 5U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 5U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 5U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 4U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 4U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 3U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 3U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 3U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 2U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 2U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 2U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 1U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 1U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 1U) & (~ vlSelf->top__DOT__singleCycle__DOT__outmux_branch)) 
                            & vlSelf->top__DOT__singleCycle__DOT__outmux2fb)));
    vlSelf->top__DOT__singleCycle__DOT__alu = ((8U 
                                                & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUSel))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUSel))
                                                    ? vlSelf->top__DOT__singleCycle__DOT__outmux_branch
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUSel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUSel))
                                                      ? vlSelf->top__DOT__singleCycle__DOT__outmux_branch
                                                      : vlSelf->top__DOT__singleCycle__DOT__outmux2fb)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUSel))
                                                      ? 
                                                     (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                      & vlSelf->top__DOT__singleCycle__DOT__outmux2fb)
                                                      : 
                                                     (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                      | vlSelf->top__DOT__singleCycle__DOT__outmux2fb))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUSel))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUSel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUSel))
                                                      ? 
                                                     ((0x1fU 
                                                       >= vlSelf->top__DOT__singleCycle__DOT__outmux2fb)
                                                       ? 
                                                      (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                       >> vlSelf->top__DOT__singleCycle__DOT__outmux2fb)
                                                       : 0U)
                                                      : 
                                                     ((0x1fU 
                                                       >= vlSelf->top__DOT__singleCycle__DOT__outmux2fb)
                                                       ? 
                                                      (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                       >> vlSelf->top__DOT__singleCycle__DOT__outmux2fb)
                                                       : 0U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUSel))
                                                      ? 
                                                     (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                      ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb)
                                                      : 
                                                     ((1U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUSel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUSel))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__lt1)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((0x1fU 
                                                       >= vlSelf->top__DOT__singleCycle__DOT__outmux2fb)
                                                       ? 
                                                      (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                       << vlSelf->top__DOT__singleCycle__DOT__outmux2fb)
                                                       : 0U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__singleCycle__DOT__ALUSel))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__outmux2fb)))
                                                      : 
                                                     (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                      + vlSelf->top__DOT__singleCycle__DOT__outmux2fb)))));
    vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX 
        = (IData)(((0x60U == (0x70U & vlSelf->top__DOT__singleCycle__DOT__inst_EX)) 
                   & (vlSelf->top__DOT__singleCycle__DOT__alu 
                      != vlSelf->top__DOT__singleCycle__DOT__pc_ID)));
    vlSelf->top__DOT__singleCycle__DOT__br_comp = (IData)(
                                                          ((0x60U 
                                                            == 
                                                            (0x70U 
                                                             & vlSelf->top__DOT__singleCycle__DOT__inst_EX)) 
                                                           & (vlSelf->top__DOT__singleCycle__DOT__alu 
                                                              != vlSelf->top__DOT__singleCycle__DOT__pc_ID)));
    vlSelf->top__DOT__singleCycle__DOT__outmux_pc = 
        (((IData)(vlSelf->top__DOT__singleCycle__DOT__br_comp) 
          | ((((0xfU & (vlSelf->top__DOT__singleCycle__DOT__pc 
                        >> 0xaU)) == (0xfU & (IData)(
                                                     (vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB
                                                      [
                                                      (0xffU 
                                                       & (vlSelf->top__DOT__singleCycle__DOT__pc 
                                                          >> 2U))] 
                                                      >> 0x21U)))) 
              & (IData)((vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB
                         [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__pc 
                                    >> 2U))] >> 0x20U))) 
             & (IData)((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__taken)))))
          ? ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_comp)
              ? vlSelf->top__DOT__singleCycle__DOT__predicted_target_address
              : (IData)(vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB
                        [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__pc 
                                   >> 2U))])) : ((IData)(4U) 
                                                 + vlSelf->top__DOT__singleCycle__DOT__pc));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->pc_debug_o = VL_RAND_RESET_I(32);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BrLt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BrEq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__DataA = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__DataB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__alu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__Imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__outmux = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__outmux_branch = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__WB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__outmux_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__ALUSel = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__pc_ID = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__inst_ID = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__taken = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__pc_EX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__DataA_EX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__DataB_EX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__imm_EX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__inst_EX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__outmux2fb = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__WBSel_EX = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__forwardingA = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__forwardingB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__ALUop_EX = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__singleCycle__DOT__BrUn_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__st_en_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__SB_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__SH_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__RegWen_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__stall_ID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__pc_MEM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__alu_MEM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__inst_MEM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__outmux_MEM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__predicted_target_address = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__WBSel_MEM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__st_en_MEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__SB_MEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__SH_MEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__RegWen_MEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__ASel_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BSel_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__PCSel_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__br_comp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__RegWen_WB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__pc_WBp4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__alu_WB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__mem_WB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__inst_WB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__WBSel_WB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__s4__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x0____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x1____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x2____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x3____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x4____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x5____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x6____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x7____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x8____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x9____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x10____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x11____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x12____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x13____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x14____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x15____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x16____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x17____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x18____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x19____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x20____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x21____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x22____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x23____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x24____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x25____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x26____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x27____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x28____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x29____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x30____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x31____pinNumber2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AgtB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AeqB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AltB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__lt1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT____Vcellout__s2____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT____Vcellout__s2____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__sign = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__trash = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__lcd_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledg_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledr_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex0_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex1_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex2_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex3_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex4_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex5_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex6_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex7_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__s11__DOT__sw_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__1 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h95f09b13__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h95de709f__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9631dff0__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h963224f4__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8e767337__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__9 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__8 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__6 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__7 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__6 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__5 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__4 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__5 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__4 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__3 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a086a17__1 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a086a17__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0eab57__1 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0eab57__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__3 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__2 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__2 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__1 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9895dc5b__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0f37d7__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__1 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9a0ef897__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h930c25cb__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h930d20cb__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h930ad3cb__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h946bdeef__1 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9467caef__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h9473c6ef__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h946bdeef__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h947c4eef__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h948b7eef__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8ef55766__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8ef387ca__1 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h8ef387ca__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT____Vxrand_h94e18156__0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__singleCycle__DOT__sa__DOT____Vxrand_h96ff575f__2 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__sa__DOT____Vxrand_h96ff575f__1 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__sa__DOT____Vxrand_h96ff575f__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT__oeq = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__30__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__29__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__28__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__27__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__26__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__25__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__24__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__23__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__22__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__21__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__20__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__19__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__18__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__17__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u____pinNumber6 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
