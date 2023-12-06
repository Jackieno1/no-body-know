// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__s11__DOT__mem__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__s11__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__s11__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__s11__DOT__mem__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__s11__DOT__mem__v1;
    SData/*15:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__s11__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v1;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__s11__DOT__mem__v2;
    IData/*31:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__s11__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v3;
    IData/*31:0*/ __Vilp;
    // Body
    __Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v1 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v2 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v3 = 0U;
    if (vlSelf->rst_ni) {
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__sw_reg 
            = vlSelf->io_sw_i;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x0____pinNumber2 
            = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x0____pinNumber2;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x31____pinNumber2 
            = ((vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y 
                >> 0x1fU) ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x31____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x30____pinNumber2 
            = ((0x40000000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x30____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x29____pinNumber2 
            = ((0x20000000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x29____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x28____pinNumber2 
            = ((0x10000000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x28____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x27____pinNumber2 
            = ((0x8000000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x27____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x26____pinNumber2 
            = ((0x4000000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x26____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x25____pinNumber2 
            = ((0x2000000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x25____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x24____pinNumber2 
            = ((0x1000000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x24____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x23____pinNumber2 
            = ((0x800000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x23____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x22____pinNumber2 
            = ((0x400000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x22____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x21____pinNumber2 
            = ((0x200000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x21____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x20____pinNumber2 
            = ((0x100000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x20____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x19____pinNumber2 
            = ((0x80000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x19____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x18____pinNumber2 
            = ((0x40000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x18____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x17____pinNumber2 
            = ((0x20000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x17____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x16____pinNumber2 
            = ((0x10000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x16____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x15____pinNumber2 
            = ((0x8000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x15____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x14____pinNumber2 
            = ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x14____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x13____pinNumber2 
            = ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x13____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x12____pinNumber2 
            = ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x12____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x11____pinNumber2 
            = ((0x800U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x11____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x10____pinNumber2 
            = ((0x400U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x10____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x9____pinNumber2 
            = ((0x200U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x9____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x8____pinNumber2 
            = ((0x100U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x8____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x7____pinNumber2 
            = ((0x80U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x7____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x6____pinNumber2 
            = ((0x40U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x6____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x5____pinNumber2 
            = ((0x20U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x5____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x4____pinNumber2 
            = ((0x10U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x4____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x3____pinNumber2 
            = ((8U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x3____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x2____pinNumber2 
            = ((4U & vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y)
                ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x2____pinNumber2);
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x1____pinNumber2 
            = ((1U & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                      | (vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y 
                         >> 1U))) ? vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp
                : vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x1____pinNumber2);
        if (vlSelf->top__DOT__singleCycle__DOT__st_en_MEM) {
            if ((0x800U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                if ((0U == (7U & (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                  >> 8U)))) {
                    if ((0x80U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                        if ((0x40U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                            vlSelf->top__DOT__singleCycle__DOT__s11__DOT__trash 
                                = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                        } else if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                            if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                                vlSelf->top__DOT__singleCycle__DOT__s11__DOT__trash 
                                    = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                            }
                        }
                        if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                      >> 6U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                          >> 5U)))) {
                                if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                                    if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledg_reg 
                                            = ((0xffffff00U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledg_reg) 
                                               | (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else if ((1U 
                                                == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledg_reg 
                                            = ((0xffff0000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledg_reg) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledg_reg 
                                            = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                                    }
                                }
                                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                              >> 4U)))) {
                                    if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledr_reg 
                                            = ((0xffffff00U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledr_reg) 
                                               | (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else if ((1U 
                                                == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledr_reg 
                                            = ((0xffff0000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledr_reg) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledr_reg 
                                            = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                                    }
                                }
                            }
                            if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                              >> 4U)))) {
                                    if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__lcd_reg 
                                            = ((0xffffff00U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__lcd_reg) 
                                               | (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else if ((1U 
                                                == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__lcd_reg 
                                            = ((0xffff0000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__lcd_reg) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__lcd_reg 
                                            = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                  >> 7U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                      >> 6U)))) {
                            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                              >> 4U)))) {
                                    if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex0_reg 
                                            = ((0xffffff00U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex0_reg) 
                                               | (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else if ((1U 
                                                == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex0_reg 
                                            = ((0xffff0000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex0_reg) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex0_reg 
                                            = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                                    }
                                }
                                if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                                    if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex1_reg 
                                            = ((0xffffff00U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex1_reg) 
                                               | (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else if ((1U 
                                                == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex1_reg 
                                            = ((0xffff0000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex1_reg) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex1_reg 
                                            = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                                    }
                                }
                            }
                            if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                                if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                                    if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex3_reg 
                                            = ((0xffffff00U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex3_reg) 
                                               | (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else if ((1U 
                                                == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex3_reg 
                                            = ((0xffff0000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex3_reg) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex3_reg 
                                            = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                                    }
                                }
                                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                              >> 4U)))) {
                                    if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex2_reg 
                                            = ((0xffffff00U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex2_reg) 
                                               | (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else if ((1U 
                                                == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex2_reg 
                                            = ((0xffff0000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex2_reg) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex2_reg 
                                            = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                                    }
                                }
                            }
                        }
                        if ((0x40U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                              >> 4U)))) {
                                    if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex4_reg 
                                            = ((0xffffff00U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex4_reg) 
                                               | (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else if ((1U 
                                                == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex4_reg 
                                            = ((0xffff0000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex4_reg) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex4_reg 
                                            = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                                    }
                                }
                                if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                                    if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex5_reg 
                                            = ((0xffffff00U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex5_reg) 
                                               | (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else if ((1U 
                                                == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex5_reg 
                                            = ((0xffff0000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex5_reg) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex5_reg 
                                            = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                                    }
                                }
                            }
                            if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                              >> 4U)))) {
                                    if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex6_reg 
                                            = ((0xffffff00U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex6_reg) 
                                               | (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else if ((1U 
                                                == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex6_reg 
                                            = ((0xffff0000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex6_reg) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex6_reg 
                                            = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                                    }
                                }
                                if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)) {
                                    if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex7_reg 
                                            = ((0xffffff00U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex7_reg) 
                                               | (0xffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else if ((1U 
                                                == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex7_reg 
                                            = ((0xffff0000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex7_reg) 
                                               | (0xffffU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM));
                                    } else {
                                        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex7_reg 
                                            = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                          >> 0xbU)))) {
                if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                    __Vdlyvval__top__DOT__singleCycle__DOT__s11__DOT__mem__v0 
                        = (0xffU & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM);
                    __Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v0 = 1U;
                    __Vdlyvlsb__top__DOT__singleCycle__DOT__s11__DOT__mem__v0 = 0U;
                    __Vdlyvdim0__top__DOT__singleCycle__DOT__s11__DOT__mem__v0 
                        = (0x1ffU & (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                     >> 2U));
                } else if ((1U == (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4))) {
                    __Vdlyvval__top__DOT__singleCycle__DOT__s11__DOT__mem__v1 
                        = (0xffffU & vlSelf->top__DOT__singleCycle__DOT__outmux_MEM);
                    __Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v1 = 1U;
                    __Vdlyvlsb__top__DOT__singleCycle__DOT__s11__DOT__mem__v1 = 0U;
                    __Vdlyvdim0__top__DOT__singleCycle__DOT__s11__DOT__mem__v1 
                        = (0x1ffU & (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                     >> 2U));
                } else {
                    __Vdlyvval__top__DOT__singleCycle__DOT__s11__DOT__mem__v2 
                        = vlSelf->top__DOT__singleCycle__DOT__outmux_MEM;
                    __Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v2 = 1U;
                    __Vdlyvdim0__top__DOT__singleCycle__DOT__s11__DOT__mem__v2 
                        = (0x1ffU & (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                                     >> 2U));
                }
            }
        }
    } else {
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__sw_reg = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x0____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x31____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x30____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x29____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x28____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x27____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x26____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x25____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x24____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x23____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x22____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x21____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x20____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x19____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x18____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x17____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x16____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x15____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x14____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x13____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x12____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x11____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x10____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x9____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x8____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x7____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x6____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x5____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x4____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x3____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x2____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x1____pinNumber2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex0_reg = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledg_reg = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__lcd_reg = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex4_reg = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex1_reg = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex6_reg = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex5_reg = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex3_reg = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex2_reg = 0U;
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex7_reg = 0U;
        __Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v3 = 1U;
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v0) {
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__s11__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__s11__DOT__mem__v0))) 
                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__mem
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__s11__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__s11__DOT__mem__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__s11__DOT__mem__v0))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v1) {
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__s11__DOT__mem__v1] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__s11__DOT__mem__v1))) 
                & vlSelf->top__DOT__singleCycle__DOT__s11__DOT__mem
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__s11__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__s11__DOT__mem__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__s11__DOT__mem__v1))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v2) {
        vlSelf->top__DOT__singleCycle__DOT__s11__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__s11__DOT__mem__v2] 
            = __Vdlyvval__top__DOT__singleCycle__DOT__s11__DOT__mem__v2;
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__s11__DOT__mem__v3) {
        __Vilp = 0U;
        while ((__Vilp <= 0x1ffU)) {
            vlSelf->top__DOT__singleCycle__DOT__s11__DOT__mem[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x0____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x1fU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x31____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x1eU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x30____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x1dU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x29____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x1cU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x28____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x1bU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x27____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x1aU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x26____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x19U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x25____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x18U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x24____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x17U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x23____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x16U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x22____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x15U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x21____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x14U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x20____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x13U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x19____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x12U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x18____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x11U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x17____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0x10U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x16____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0xfU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x15____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0xeU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x14____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0xdU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x13____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0xcU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x12____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0xbU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x11____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[0xaU] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x10____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[9U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x9____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[8U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x8____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[7U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x7____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[6U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x6____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[5U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x5____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[4U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x4____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[3U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x3____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[2U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x2____pinNumber2;
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__d[1U] 
        = vlSelf->top__DOT__singleCycle__DOT__s6__DOT____Vcellout__x1____pinNumber2;
    vlSelf->io_hex0_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex0_reg;
    vlSelf->io_ledg_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledg_reg;
    vlSelf->io_lcd_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__lcd_reg;
    vlSelf->io_hex4_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex4_reg;
    vlSelf->io_hex1_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex1_reg;
    vlSelf->io_hex6_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex6_reg;
    vlSelf->io_hex5_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex5_reg;
    vlSelf->io_hex3_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex3_reg;
    vlSelf->io_hex2_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex2_reg;
    vlSelf->io_ledr_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledr_reg;
    vlSelf->io_hex7_o = vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex7_reg;
}

extern const VlUnpacked<IData/*31:0*/, 64> Vtop__ConstPool__TABLE_h59e4a426_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0;
    CData/*5:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v1;
    CData/*5:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v1;
    CData/*3:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v2;
    CData/*5:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v2;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3;
    CData/*5:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3;
    CData/*1:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v4;
    IData/*31:0*/ __Vdly__top__DOT__singleCycle__DOT__pc;
    IData/*31:0*/ __Vdly__top__DOT__singleCycle__DOT__pc_ID;
    IData/*31:0*/ __Vdly__top__DOT__singleCycle__DOT__inst_ID;
    IData/*31:0*/ __Vilp;
    // Body
    __Vdly__top__DOT__singleCycle__DOT__pc = vlSelf->top__DOT__singleCycle__DOT__pc;
    __Vdly__top__DOT__singleCycle__DOT__pc_ID = vlSelf->top__DOT__singleCycle__DOT__pc_ID;
    __Vdly__top__DOT__singleCycle__DOT__inst_ID = vlSelf->top__DOT__singleCycle__DOT__inst_ID;
    __Vdlyvset__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v4 = 0U;
    if (vlSelf->rst_ni) {
        __Vdly__top__DOT__singleCycle__DOT__pc = ((IData)(vlSelf->top__DOT__singleCycle__DOT__stall_PC)
                                                   ? vlSelf->top__DOT__singleCycle__DOT__pc
                                                   : vlSelf->top__DOT__singleCycle__DOT__outmux_pc);
        vlSelf->top__DOT__singleCycle__DOT__outmux_MEM 
            = vlSelf->top__DOT__singleCycle__DOT__outmux;
        if (vlSelf->top__DOT__singleCycle__DOT__s24__DOT__br_write_en_i) {
            __Vdlyvval__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0 
                = vlSelf->top__DOT__singleCycle__DOT__alu;
            __Vdlyvset__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0 = 0U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__pc_EX 
                            >> 2U));
            __Vdlyvval__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v1 
                = (0xfU & (vlSelf->top__DOT__singleCycle__DOT__pc_EX 
                           >> 0xaU));
            __Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v1 = 0x21U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v1 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__pc_EX 
                            >> 2U));
            __Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v2 = 0x20U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v2 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__pc_EX 
                            >> 2U));
        }
        __Vdlyvval__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3 
            = ((IData)(vlSelf->top__DOT__singleCycle__DOT__PCSel_EX)
                ? 3U : 0U);
        __Vdlyvset__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3 = 1U;
        __Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3 = 0x25U;
        __Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3 
            = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__pc_EX 
                        >> 2U));
        vlSelf->top__DOT__singleCycle__DOT__WBSel_WB 
            = vlSelf->top__DOT__singleCycle__DOT__WBSel_MEM;
        vlSelf->top__DOT__singleCycle__DOT__pc_WBp4 
            = ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc_MEM);
        vlSelf->top__DOT__singleCycle__DOT__alu_WB 
            = vlSelf->top__DOT__singleCycle__DOT__alu_MEM;
        vlSelf->top__DOT__singleCycle__DOT__inst_WB 
            = vlSelf->top__DOT__singleCycle__DOT__inst_MEM;
        vlSelf->top__DOT__singleCycle__DOT__mem_WB 
            = ((0x900U == (0xfffU & vlSelf->top__DOT__singleCycle__DOT__alu_MEM))
                ? vlSelf->top__DOT__singleCycle__DOT__s11__DOT__sw_reg
                : ((0x800U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                    ? ((0x80U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                        ? ((0x40U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                            ? 0U : ((0x20U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                                     ? ((0x10U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                                         ? 0U : vlSelf->top__DOT__singleCycle__DOT__s11__DOT__lcd_reg)
                                     : ((0x10U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                                         ? vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledg_reg
                                         : vlSelf->top__DOT__singleCycle__DOT__s11__DOT__ledr_reg)))
                        : ((0x40U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                            ? ((0x20U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                                ? ((0x10U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                                    ? vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex7_reg
                                    : vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex6_reg)
                                : ((0x10U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                                    ? vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex5_reg
                                    : vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex4_reg))
                            : ((0x20U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                                ? ((0x10U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                                    ? vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex3_reg
                                    : vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex2_reg)
                                : ((0x10U & vlSelf->top__DOT__singleCycle__DOT__alu_MEM)
                                    ? vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex1_reg
                                    : vlSelf->top__DOT__singleCycle__DOT__s11__DOT__hex0_reg))))
                    : vlSelf->top__DOT__singleCycle__DOT__s11__DOT__mem
                   [(0x1ffU & (vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
                               >> 2U))]));
        vlSelf->top__DOT__singleCycle__DOT__s24__DOT__br_write_en_i 
            = (6U == (7U & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                            >> 4U)));
        vlSelf->top__DOT__singleCycle__DOT__WBSel_MEM 
            = vlSelf->top__DOT__singleCycle__DOT__WBSel_EX;
        vlSelf->top__DOT__singleCycle__DOT__pc_MEM 
            = vlSelf->top__DOT__singleCycle__DOT__pc_EX;
        vlSelf->top__DOT__singleCycle__DOT__inst_MEM 
            = vlSelf->top__DOT__singleCycle__DOT__inst_EX;
        vlSelf->top__DOT__singleCycle__DOT__alu_MEM 
            = vlSelf->top__DOT__singleCycle__DOT__alu;
    } else {
        __Vdly__top__DOT__singleCycle__DOT__pc = 0U;
        vlSelf->top__DOT__singleCycle__DOT__outmux_MEM = 0U;
        __Vdlyvset__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v4 = 1U;
        vlSelf->top__DOT__singleCycle__DOT__WBSel_WB = 0U;
        vlSelf->top__DOT__singleCycle__DOT__pc_WBp4 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__alu_WB = 0U;
        vlSelf->top__DOT__singleCycle__DOT__inst_WB = 0U;
        vlSelf->top__DOT__singleCycle__DOT__mem_WB = 0U;
        vlSelf->top__DOT__singleCycle__DOT__WBSel_MEM = 0U;
        vlSelf->top__DOT__singleCycle__DOT__pc_MEM = 0U;
        vlSelf->top__DOT__singleCycle__DOT__inst_MEM = 0U;
        vlSelf->top__DOT__singleCycle__DOT__alu_MEM = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_IF_ID)))) {
        __Vdly__top__DOT__singleCycle__DOT__pc_ID = 0U;
        __Vdly__top__DOT__singleCycle__DOT__inst_ID = 0U;
    } else if (vlSelf->top__DOT__singleCycle__DOT__stall_ID) {
        __Vdly__top__DOT__singleCycle__DOT__pc_ID = vlSelf->top__DOT__singleCycle__DOT__pc_ID;
        __Vdly__top__DOT__singleCycle__DOT__inst_ID 
            = vlSelf->top__DOT__singleCycle__DOT__inst_ID;
    } else {
        __Vdly__top__DOT__singleCycle__DOT__pc_ID = vlSelf->top__DOT__singleCycle__DOT__pc;
        __Vdly__top__DOT__singleCycle__DOT__inst_ID 
            = vlSelf->top__DOT__singleCycle__DOT__s4__DOT__imem
            [(0x7ffU & (vlSelf->top__DOT__singleCycle__DOT__pc 
                        >> 2U))];
    }
    vlSelf->top__DOT__singleCycle__DOT__st_en_MEM = 
        ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__singleCycle__DOT__st_en_EX));
    vlSelf->top__DOT__singleCycle__DOT__SB_MEM = ((IData)(vlSelf->rst_ni) 
                                                  & (IData)(vlSelf->top__DOT__singleCycle__DOT__SB_EX));
    vlSelf->top__DOT__singleCycle__DOT__SH_MEM = ((IData)(vlSelf->rst_ni) 
                                                  & (IData)(vlSelf->top__DOT__singleCycle__DOT__SH_EX));
    vlSelf->top__DOT__singleCycle__DOT__LH_WB = ((IData)(vlSelf->rst_ni) 
                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__LH_MEM));
    vlSelf->top__DOT__singleCycle__DOT__LB_WB = ((IData)(vlSelf->rst_ni) 
                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__LB_MEM));
    vlSelf->top__DOT__singleCycle__DOT__LHU_WB = ((IData)(vlSelf->rst_ni) 
                                                  & (IData)(vlSelf->top__DOT__singleCycle__DOT__LHU_MEM));
    vlSelf->top__DOT__singleCycle__DOT__LBU_WB = ((IData)(vlSelf->rst_ni) 
                                                  & (IData)(vlSelf->top__DOT__singleCycle__DOT__LBU_MEM));
    if ((1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX)))) {
        vlSelf->top__DOT__singleCycle__DOT__ALUop_EX = 0U;
        vlSelf->top__DOT__singleCycle__DOT__DataA_EX = 0U;
        vlSelf->top__DOT__singleCycle__DOT__DataB_EX = 0U;
        vlSelf->top__DOT__singleCycle__DOT__imm_EX = 0U;
        vlSelf->top__DOT__singleCycle__DOT__WBSel_EX = 0U;
        vlSelf->top__DOT__singleCycle__DOT__pc_EX = 0U;
        vlSelf->top__DOT__singleCycle__DOT__inst_EX = 0U;
    } else {
        vlSelf->top__DOT__singleCycle__DOT__ALUop_EX 
            = (7U & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                     >> 1U));
        vlSelf->top__DOT__singleCycle__DOT__DataA_EX 
            = vlSelf->top__DOT__singleCycle__DOT__DataA;
        vlSelf->top__DOT__singleCycle__DOT__DataB_EX 
            = vlSelf->top__DOT__singleCycle__DOT__DataB;
        vlSelf->top__DOT__singleCycle__DOT__imm_EX 
            = vlSelf->top__DOT__singleCycle__DOT__Imm;
        vlSelf->top__DOT__singleCycle__DOT__WBSel_EX 
            = (3U & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                     >> 0x10U));
        vlSelf->top__DOT__singleCycle__DOT__pc_EX = vlSelf->top__DOT__singleCycle__DOT__pc_ID;
        vlSelf->top__DOT__singleCycle__DOT__inst_EX 
            = vlSelf->top__DOT__singleCycle__DOT__inst_ID;
    }
    vlSelf->top__DOT__singleCycle__DOT__BrUn_EX = (1U 
                                                   & ((~ 
                                                       ((~ (IData)(vlSelf->rst_ni)) 
                                                        | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX))) 
                                                      & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                                                         >> 9U)));
    vlSelf->top__DOT__singleCycle__DOT__BSel_EX = (1U 
                                                   & ((~ 
                                                       ((~ (IData)(vlSelf->rst_ni)) 
                                                        | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX))) 
                                                      & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                                                         >> 0x13U)));
    vlSelf->top__DOT__singleCycle__DOT__ASel_EX = (1U 
                                                   & ((~ 
                                                       ((~ (IData)(vlSelf->rst_ni)) 
                                                        | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX))) 
                                                      & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                                                         >> 7U)));
    vlSelf->top__DOT__singleCycle__DOT__RegWen_WB = 
        ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__singleCycle__DOT__RegWen_MEM));
    vlSelf->top__DOT__singleCycle__DOT__pc = __Vdly__top__DOT__singleCycle__DOT__pc;
    if (__Vdlyvset__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0) {
        vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB[__Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0] 
            = (((~ (0xffffffffULL << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0))) 
                & vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0]) 
               | (0x7fffffffffULL & ((QData)((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0)) 
                                     << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v0))));
        vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB[__Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v1] 
            = (((~ (0xfULL << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v1))) 
                & vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v1]) 
               | (0x7fffffffffULL & ((QData)((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v1)) 
                                     << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v1))));
        vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB[__Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v2] 
            = (vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB
               [__Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v2] 
               | (0x7fffffffffULL & ((QData)((IData)(1U)) 
                                     << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v2))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3) {
        vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB[__Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3] 
            = (((~ (3ULL << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3))) 
                & vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3]) 
               | (0x7fffffffffULL & ((QData)((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3)) 
                                     << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v3))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__s24__DOT__mem_BTB__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->top__DOT__singleCycle__DOT__st_en_EX = 
        (1U & ((~ ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX))) 
               & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                  >> 0x12U)));
    vlSelf->top__DOT__singleCycle__DOT__SB_EX = (1U 
                                                 & ((~ 
                                                     ((~ (IData)(vlSelf->rst_ni)) 
                                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX))) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                                                       >> 0xbU)));
    vlSelf->top__DOT__singleCycle__DOT____Vcellinp__s11____pinNumber4 
        = (((IData)(vlSelf->top__DOT__singleCycle__DOT__SB_MEM) 
            << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__SH_MEM));
    vlSelf->top__DOT__singleCycle__DOT__SH_EX = (1U 
                                                 & ((~ 
                                                     ((~ (IData)(vlSelf->rst_ni)) 
                                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX))) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                                                       >> 0xaU)));
    vlSelf->top__DOT__singleCycle__DOT__LH_MEM = ((IData)(vlSelf->rst_ni) 
                                                  & (IData)(vlSelf->top__DOT__singleCycle__DOT__LH_EX));
    vlSelf->top__DOT__singleCycle__DOT__LB_MEM = ((IData)(vlSelf->rst_ni) 
                                                  & (IData)(vlSelf->top__DOT__singleCycle__DOT__LB_EX));
    vlSelf->top__DOT__singleCycle__DOT__LHU_MEM = ((IData)(vlSelf->rst_ni) 
                                                   & (IData)(vlSelf->top__DOT__singleCycle__DOT__LHU_EX));
    vlSelf->top__DOT__singleCycle__DOT__LBU_MEM = ((IData)(vlSelf->rst_ni) 
                                                   & (IData)(vlSelf->top__DOT__singleCycle__DOT__LBU_EX));
    vlSelf->pc_debug_o = vlSelf->top__DOT__singleCycle__DOT__pc;
    vlSelf->top__DOT__singleCycle__DOT__PCSel_EX = 
        (1U & ((~ ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX))) 
               & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                  >> 8U)));
    vlSelf->top__DOT__singleCycle__DOT__RegWen_MEM 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__singleCycle__DOT__RegWen_EX));
    __Vtableidx1 = ((0x3eU & (vlSelf->top__DOT__singleCycle__DOT__inst_WB 
                              >> 6U)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__RegWen_WB));
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__Y 
        = Vtop__ConstPool__TABLE_h59e4a426_0[__Vtableidx1];
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
    vlSelf->top__DOT__singleCycle__DOT__s6__DOT__temp 
        = ((IData)(vlSelf->top__DOT__singleCycle__DOT__LB_WB)
            ? (((- (IData)((1U & (vlSelf->top__DOT__singleCycle__DOT__WB 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelf->top__DOT__singleCycle__DOT__WB))
            : ((IData)(vlSelf->top__DOT__singleCycle__DOT__LH_WB)
                ? (((- (IData)((1U & (vlSelf->top__DOT__singleCycle__DOT__WB 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->top__DOT__singleCycle__DOT__WB))
                : ((IData)(vlSelf->top__DOT__singleCycle__DOT__LBU_WB)
                    ? (0xffU & vlSelf->top__DOT__singleCycle__DOT__WB)
                    : ((IData)(vlSelf->top__DOT__singleCycle__DOT__LHU_WB)
                        ? (0xffffU & vlSelf->top__DOT__singleCycle__DOT__WB)
                        : vlSelf->top__DOT__singleCycle__DOT__WB))));
    vlSelf->top__DOT__singleCycle__DOT__LH_EX = (1U 
                                                 & ((~ 
                                                     ((~ (IData)(vlSelf->rst_ni)) 
                                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX))) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                                                       >> 0xeU)));
    vlSelf->top__DOT__singleCycle__DOT__LB_EX = (1U 
                                                 & ((~ 
                                                     ((~ (IData)(vlSelf->rst_ni)) 
                                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX))) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                                                       >> 0xfU)));
    vlSelf->top__DOT__singleCycle__DOT__LHU_EX = (1U 
                                                  & ((~ 
                                                      ((~ (IData)(vlSelf->rst_ni)) 
                                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX))) 
                                                     & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                                                        >> 0xcU)));
    vlSelf->top__DOT__singleCycle__DOT__LBU_EX = (1U 
                                                  & ((~ 
                                                      ((~ (IData)(vlSelf->rst_ni)) 
                                                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX))) 
                                                     & (vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                                                        >> 0xdU)));
    vlSelf->top__DOT__singleCycle__DOT__RegWen_EX = (IData)(
                                                            ((vlSelf->top__DOT__singleCycle__DOT__ss__DOT__control_signal 
                                                              >> 0x14U) 
                                                             & (~ 
                                                                ((~ (IData)(vlSelf->rst_ni)) 
                                                                 | (IData)(vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX)))));
    vlSelf->top__DOT__singleCycle__DOT__pc_ID = __Vdly__top__DOT__singleCycle__DOT__pc_ID;
    vlSelf->top__DOT__singleCycle__DOT__inst_ID = __Vdly__top__DOT__singleCycle__DOT__inst_ID;
    vlSelf->top__DOT__singleCycle__DOT__stall_ID = (IData)(
                                                           ((0x60U 
                                                             == 
                                                             (0x70U 
                                                              & vlSelf->top__DOT__singleCycle__DOT__inst_ID)) 
                                                            & (((0x1fU 
                                                                 & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                                    >> 0xfU)) 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT__singleCycle__DOT__inst_MEM 
                                                                    >> 7U))) 
                                                               | ((0x1fU 
                                                                   & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                                      >> 0x14U)) 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->top__DOT__singleCycle__DOT__inst_MEM 
                                                                      >> 7U))))));
    vlSelf->top__DOT__singleCycle__DOT__stall_PC = (IData)(
                                                           ((0x60U 
                                                             == 
                                                             (0x70U 
                                                              & vlSelf->top__DOT__singleCycle__DOT__inst_ID)) 
                                                            & (((0x1fU 
                                                                 & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                                    >> 0xfU)) 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT__singleCycle__DOT__inst_MEM 
                                                                    >> 7U))) 
                                                               | ((0x1fU 
                                                                   & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                                                                      >> 0x14U)) 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->top__DOT__singleCycle__DOT__inst_MEM 
                                                                      >> 7U))))));
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
    vlSelf->top__DOT__singleCycle__DOT__outmux2fb = 
        ((IData)(vlSelf->top__DOT__singleCycle__DOT__BSel_EX)
          ? vlSelf->top__DOT__singleCycle__DOT__imm_EX
          : vlSelf->top__DOT__singleCycle__DOT__outmux);
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__sign 
        = ((2U & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                  >> 0x1eU)) | (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                >> 0x1fU));
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__0\n"); );
    // Body
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
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign 
        = ((2U & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                  >> 0x1eU)) | (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                >> 0x1fU));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber7;
    CData/*0:0*/ top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber7;
    // Body
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber7 
        = ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
            >> 0x1fU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                             ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                            >> 0x1eU)));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x1eU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1dU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x1dU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1cU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x1cU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1bU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x1bU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1aU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x1aU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x19U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x19U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x18U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x18U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x17U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x17U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x16U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x16U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x15U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x15U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x14U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x14U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x13U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x13U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x12U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x12U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x11U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x11U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x10U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0x10U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0xfU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0xfU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xeU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0xeU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xdU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0xdU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xcU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0xcU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xbU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0xbU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xaU))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 0xaU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 9U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 9U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 8U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 8U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 7U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 7U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 6U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 6U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 5U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 5U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 4U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 4U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 3U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 3U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 2U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 2U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 1U))));
    top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                  >> 1U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                               ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber7 
        = ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
            >> 0x1fU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                             ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                            >> 0x1eU)));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x1eU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1dU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x1dU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1cU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x1cU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1bU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x1bU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x1aU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x1aU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x19U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x19U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x18U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x18U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x17U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x17U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x16U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x16U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x15U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x15U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x14U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x14U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x13U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x13U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x12U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x12U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x11U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x11U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0x10U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0x10U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                  >> 0xfU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0xfU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xeU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0xeU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xdU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0xdU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xcU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0xcU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xbU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0xbU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 0xaU))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 0xaU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                                 >> 9U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 9U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 8U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 8U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 7U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 7U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 6U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 6U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 5U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 5U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 4U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 4U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 3U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 3U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 2U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 2U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                               >> 1U))));
    top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                  >> 1U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                               ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
        = ((0x80000000U & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                           & ((~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1fU)) << 0x1fU))) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber6) 
               << 0x1eU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber6) 
                             << 0x1dU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber6) 
                                           << 0x1cU) 
                                          | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber6) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber6) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber6) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber6) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber6) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber6) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber6) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber6) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber6) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber6) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber6) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber6) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber6) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber6) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber6) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber6) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber6) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber6) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber6) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber6) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber6) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber6) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber6) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber6) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber6))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
        = ((0x80000000U & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                           & ((~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1fU)) << 0x1fU))) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber6) 
               << 0x1eU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber6) 
                             << 0x1dU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber6) 
                                           << 0x1cU) 
                                          | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber6) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber6) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber6) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber6) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber6) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber6) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber6) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber6) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber6) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber6) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber6) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber6) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber6) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber6) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber6) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber6) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber6) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber6) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber6) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber6) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber6) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber6) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber6) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber6) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber6))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
        = ((0x80000000U & (((~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                >> 0x1fU)) << 0x1fU) 
                           & vlSelf->top__DOT__singleCycle__DOT__outmux2fb)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber8) 
               << 0x1eU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber8) 
                             << 0x1dU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber8) 
                                           << 0x1cU) 
                                          | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber8) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber8) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber8) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber8) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber8) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber8) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber8) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber8) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber8) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber8) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber8) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber8) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber8) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber8) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber8) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber8) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber8) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber8) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber8) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber8) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber8) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber8) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber8) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber8) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber8) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber8))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
        = ((0x80000000U & (((~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                >> 0x1fU)) << 0x1fU) 
                           & vlSelf->top__DOT__singleCycle__DOT__outmux2fb)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber8) 
               << 0x1eU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber8) 
                             << 0x1dU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber8) 
                                           << 0x1cU) 
                                          | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber8) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber8) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber8) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber8) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber8) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber8) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber8) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber8) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber8) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber8) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber8) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber8) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber8) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber8) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber8) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber8) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber8) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber8) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber8) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber8) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber8) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber8) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber8) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber8) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber8) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber8))))))))))))))))))))))))))))))));
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
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber7 
        = ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
            >> 0x1fU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                             ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                            >> 0x1eU)));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x1eU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x1dU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x1dU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x1cU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x1cU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x1bU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x1bU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x1aU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x1aU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x19U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x19U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x18U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x18U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x17U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x17U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x16U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x16U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x15U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x15U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x14U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x14U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x13U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x13U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x12U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x12U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x11U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x11U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0x10U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0x10U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                  >> 0xfU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0xfU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                 >> 0xeU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0xeU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                 >> 0xdU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0xdU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                 >> 0xcU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0xcU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                 >> 0xbU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0xbU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                 >> 0xaU))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 0xaU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                                 >> 9U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 9U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                               >> 8U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 8U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                               >> 7U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 7U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                               >> 6U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 6U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                               >> 5U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 5U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                               >> 4U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 4U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                               >> 3U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 3U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                               >> 2U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 2U) & (~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                                ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                               >> 1U))));
    top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber7 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                  >> 1U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                               ^ vlSelf->top__DOT__singleCycle__DOT__DataB))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
        = ((0x80000000U & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                           & ((~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x1fU)) << 0x1fU))) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber6) 
               << 0x1eU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber6) 
                             << 0x1dU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber6) 
                                           << 0x1cU) 
                                          | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber6) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber6) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber6) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber6) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber6) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber6) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber6) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber6) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber6) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber6) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber6) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber6) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber6) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber6) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber6) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber6) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber6) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber6) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber6) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber6) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber6) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber6) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber6) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber6) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber6))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
        = ((0x80000000U & (((~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                >> 0x1fU)) << 0x1fU) 
                           & vlSelf->top__DOT__singleCycle__DOT__DataB)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber8) 
               << 0x1eU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber8) 
                             << 0x1dU) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber8) 
                                           << 0x1cU) 
                                          | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber8) 
                                              << 0x1bU) 
                                             | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber8) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber8) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber8) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber8) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber8) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber8) 
                                                                << 0x15U) 
                                                               | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber8) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber8) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber8) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber8) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber8) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber8) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber8) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber8) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber8) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber8) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber8) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber8) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber8) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber8) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber8) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber8) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber8) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber8) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber8))))))))))))))))))))))))))))))));
    if ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign))) {
        vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AeqB 
            = (1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign) 
                     & vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq));
        vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AgtB 
            = (1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign) 
                     & vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt));
        vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AltB 
            = (1U & ((~ (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign)) 
                     | vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt));
    } else {
        vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AeqB 
            = (1U & ((~ (IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign)) 
                     & vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq));
        vlSelf->top__DOT__singleCycle__DOT__s7__DOT__temp_AgtB 
            = (1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__s7__DOT__sign) 
                     | vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt));
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
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
        = (((~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                 ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                >> 0x1fU)) << 0x1fU) | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber7) 
                                         << 0x1eU) 
                                        | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber7) 
                                            << 0x1dU) 
                                           | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber7) 
                                               << 0x1cU) 
                                              | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber7) 
                                                  << 0x1bU) 
                                                 | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber7) 
                                                     << 0x1aU) 
                                                    | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber7) 
                                                        << 0x19U) 
                                                       | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber7) 
                                                           << 0x18U) 
                                                          | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber7) 
                                                              << 0x17U) 
                                                             | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber7) 
                                                                 << 0x16U) 
                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber7) 
                                                                    << 0x15U) 
                                                                   | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber7) 
                                                                       << 0x14U) 
                                                                      | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber7) 
                                                                          << 0x13U) 
                                                                         | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber7) 
                                                                             << 0x12U) 
                                                                            | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber7) 
                                                                                << 0x11U) 
                                                                               | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber7) 
                                                                                << 0x10U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber7) 
                                                                                << 0xfU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber7) 
                                                                                << 0xdU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber7) 
                                                                                << 0xcU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber7) 
                                                                                << 0xaU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber7) 
                                                                                << 9U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber7) 
                                                                                << 8U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber7) 
                                                                                << 7U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber7) 
                                                                                << 6U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber7) 
                                                                                << 5U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber7) 
                                                                                << 4U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber7) 
                                                                                << 3U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber7) 
                                                                                << 2U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber7) 
                                                                                << 1U) 
                                                                                | (IData)(top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber7))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
        = (((~ ((vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                 ^ vlSelf->top__DOT__singleCycle__DOT__outmux2fb) 
                >> 0x1fU)) << 0x1fU) | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber7) 
                                         << 0x1eU) 
                                        | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber7) 
                                            << 0x1dU) 
                                           | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber7) 
                                               << 0x1cU) 
                                              | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber7) 
                                                  << 0x1bU) 
                                                 | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber7) 
                                                     << 0x1aU) 
                                                    | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber7) 
                                                        << 0x19U) 
                                                       | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber7) 
                                                           << 0x18U) 
                                                          | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber7) 
                                                              << 0x17U) 
                                                             | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber7) 
                                                                 << 0x16U) 
                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber7) 
                                                                    << 0x15U) 
                                                                   | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber7) 
                                                                       << 0x14U) 
                                                                      | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber7) 
                                                                          << 0x13U) 
                                                                         | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber7) 
                                                                             << 0x12U) 
                                                                            | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber7) 
                                                                                << 0x11U) 
                                                                               | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber7) 
                                                                                << 0x10U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber7) 
                                                                                << 0xfU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber7) 
                                                                                << 0xdU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber7) 
                                                                                << 0xcU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber7) 
                                                                                << 0xaU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber7) 
                                                                                << 9U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber7) 
                                                                                << 8U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber7) 
                                                                                << 7U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber7) 
                                                                                << 6U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber7) 
                                                                                << 5U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber7) 
                                                                                << 4U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber7) 
                                                                                << 3U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber7) 
                                                                                << 2U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber7) 
                                                                                << 1U) 
                                                                                | (IData)(top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber7))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x1fU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1fU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1eU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1eU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x1eU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1eU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1dU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1dU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x1dU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1dU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1cU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x1cU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1cU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1bU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1bU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x1bU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1bU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1aU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1aU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x1aU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1aU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x19U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x19U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x19U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x19U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x18U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x18U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x18U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x17U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x17U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x17U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x17U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x16U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x16U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x16U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x16U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x15U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x15U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x15U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x15U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x14U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x14U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x14U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x13U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x13U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x13U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x13U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x12U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x12U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x12U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x12U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x11U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x11U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x11U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x11U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x10U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0x10U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x10U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0xfU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0xfU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0xfU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xfU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xeU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xeU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0xeU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xeU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xdU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xdU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0xdU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xdU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xcU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xcU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0xcU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xcU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xbU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xbU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0xbU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xbU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xaU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xaU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 0xaU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xaU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 9U)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 9U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 9U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 8U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 8U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 8U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 7U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 7U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 7U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 6U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 6U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 6U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 5U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 5U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 5U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 4U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 4U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 4U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 3U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 3U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 3U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 2U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 2U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 2U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 1U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 1U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__ogt 
                  >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 1U) & vlSelf->top__DOT__singleCycle__DOT__outmux_branch) 
                            & (~ vlSelf->top__DOT__singleCycle__DOT__outmux2fb))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x1fU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1fU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1eU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1eU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x1eU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1eU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1dU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1dU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x1dU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1dU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1cU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x1cU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1cU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1bU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1bU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x1bU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1bU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x1aU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x1aU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x1aU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1aU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x19U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x19U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x19U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x19U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x18U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x18U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x18U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x17U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x17U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x17U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x17U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x16U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x16U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x16U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x16U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x15U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x15U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x15U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x15U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x14U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x14U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x14U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x13U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x13U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x13U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x13U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x12U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x12U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x12U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x12U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x11U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x11U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x11U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x11U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0x10U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0x10U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x10U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                              >> 0xfU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                     >> 0xfU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0xfU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xfU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xeU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xeU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0xeU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xeU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xdU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xdU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0xdU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xdU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xcU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xcU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0xcU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xcU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xbU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xbU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0xbU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xbU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 0xaU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 0xaU)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 0xaU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xaU) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                            >> 9U)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                    >> 9U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 9U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 8U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 8U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 8U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 7U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 7U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 7U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 6U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 6U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 6U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 5U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 5U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 5U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 4U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 4U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 4U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 3U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 3U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 3U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 2U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 2U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 2U) & (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                        >> 1U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                                    >> 1U)))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__ogt 
                  >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 1U) & vlSelf->top__DOT__singleCycle__DOT__outmux_branch) 
                            & (~ vlSelf->top__DOT__singleCycle__DOT__outmux2fb))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x1fU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1eU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1eU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x1eU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1eU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1dU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1dU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x1dU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1dU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1cU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x1cU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1cU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1bU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1bU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x1bU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1bU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1aU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1aU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x1aU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x1aU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x19U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x19U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x19U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x19U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x18U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x18U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x18U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x17U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x17U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x17U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x17U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x16U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x16U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x16U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x16U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x15U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x15U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x15U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x15U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x14U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x14U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x14U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x13U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x13U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x13U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x13U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x12U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x12U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x12U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x12U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x11U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x11U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x11U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x11U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x10U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0x10U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                 >> 0x10U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0xfU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0xfU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0xfU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xfU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xeU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xeU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0xeU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xeU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xdU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xdU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0xdU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xdU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xcU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xcU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0xcU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xbU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xbU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0xbU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xbU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xaU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xaU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 0xaU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                                >> 0xaU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 9U))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 9U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 9U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 8U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 8U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 7U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 7U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 7U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 6U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 6U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 6U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 5U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 5U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 5U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 4U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 4U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 3U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 3U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 3U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 2U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 2U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 2U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 1U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 1U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__olt 
                  >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
                              >> 1U) & (~ vlSelf->top__DOT__singleCycle__DOT__outmux_branch)) 
                            & vlSelf->top__DOT__singleCycle__DOT__outmux2fb)));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x1fU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1eU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1eU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x1eU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1eU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1dU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1dU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x1dU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1dU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1cU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x1cU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1cU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1bU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1bU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x1bU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1bU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x1aU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x1aU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x1aU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x1aU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x19U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x19U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x19U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x19U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x18U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x18U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x18U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x17U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x17U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x17U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x17U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x16U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x16U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x16U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x16U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x15U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x15U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x15U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x15U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x14U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x14U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x14U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x13U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x13U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x13U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x13U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x12U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x12U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x12U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x12U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x11U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x11U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x11U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x11U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0x10U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0x10U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                 >> 0x10U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                                 >> 0xfU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                  >> 0xfU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0xfU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xfU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xeU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xeU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0xeU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xeU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xdU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xdU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0xdU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xdU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xcU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xcU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0xcU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xbU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xbU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0xbU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xbU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 0xaU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 0xaU))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 0xaU) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                                >> 0xaU) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                               >> 9U))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                                 >> 9U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 9U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 8U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 8U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 7U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 7U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 7U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 6U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 6U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 6U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 5U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 5U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 5U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 4U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 4U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 3U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 3U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 3U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 2U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 2U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 2U) & (~ (vlSelf->top__DOT__singleCycle__DOT__outmux_branch 
                                           >> 1U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__outmux2fb 
                               >> 1U))));
    vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__olt 
                  >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
                              >> 1U) & (~ vlSelf->top__DOT__singleCycle__DOT__outmux_branch)) 
                            & vlSelf->top__DOT__singleCycle__DOT__outmux2fb)));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
        = (((~ ((vlSelf->top__DOT__singleCycle__DOT__DataA 
                 ^ vlSelf->top__DOT__singleCycle__DOT__DataB) 
                >> 0x1fU)) << 0x1fU) | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber7) 
                                         << 0x1eU) 
                                        | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber7) 
                                            << 0x1dU) 
                                           | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber7) 
                                               << 0x1cU) 
                                              | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber7) 
                                                  << 0x1bU) 
                                                 | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber7) 
                                                     << 0x1aU) 
                                                    | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber7) 
                                                        << 0x19U) 
                                                       | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber7) 
                                                           << 0x18U) 
                                                          | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber7) 
                                                              << 0x17U) 
                                                             | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber7) 
                                                                 << 0x16U) 
                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber7) 
                                                                    << 0x15U) 
                                                                   | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber7) 
                                                                       << 0x14U) 
                                                                      | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber7) 
                                                                          << 0x13U) 
                                                                         | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber7) 
                                                                             << 0x12U) 
                                                                            | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber7) 
                                                                                << 0x11U) 
                                                                               | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber7) 
                                                                                << 0x10U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber7) 
                                                                                << 0xfU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber7) 
                                                                                << 0xdU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber7) 
                                                                                << 0xcU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber7) 
                                                                                << 0xaU) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber7) 
                                                                                << 9U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber7) 
                                                                                << 8U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber7) 
                                                                                << 7U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber7) 
                                                                                << 6U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber7) 
                                                                                << 5U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber7) 
                                                                                << 4U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber7) 
                                                                                << 3U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber7) 
                                                                                << 2U) 
                                                                                | (((IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber7) 
                                                                                << 1U) 
                                                                                | (IData)(top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber7))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x1fU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1fU) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x1eU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x1eU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x1eU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1eU) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x1dU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x1dU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x1dU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1dU) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x1cU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x1cU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1cU) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x1bU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x1bU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x1bU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1bU) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x1aU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x1aU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x1aU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1aU) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x19U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x19U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x19U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x19U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x18U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x18U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x18U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x17U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x17U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x17U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x17U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x16U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x16U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x16U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x16U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x15U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x15U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x15U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x15U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x14U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x14U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x14U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x13U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x13U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x13U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x13U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x12U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x12U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x12U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x12U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x11U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x11U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x11U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x11U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0x10U)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0x10U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x10U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                              >> 0xfU)) 
                               & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                     >> 0xfU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0xfU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xfU) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                            >> 0xeU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                    >> 0xeU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0xeU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xeU) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                            >> 0xdU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                    >> 0xdU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0xdU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xdU) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                            >> 0xcU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                    >> 0xcU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0xcU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xcU) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                            >> 0xbU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                    >> 0xbU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0xbU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xbU) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                            >> 0xaU)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                    >> 0xaU)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 0xaU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xaU) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                            >> 9U)) 
                              & (~ (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                    >> 9U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 9U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                        >> 8U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                                    >> 8U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 8U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                        >> 7U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                                    >> 7U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 7U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                        >> 6U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                                    >> 6U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 6U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                        >> 5U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                                    >> 5U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 5U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                        >> 4U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                                    >> 4U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 4U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                        >> 3U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                                    >> 3U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 3U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                        >> 2U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                                    >> 2U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 2U) & (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                        >> 1U)) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                                    >> 1U)))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber6 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__ogt 
                  >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 1U) & vlSelf->top__DOT__singleCycle__DOT__DataA) 
                            & (~ vlSelf->top__DOT__singleCycle__DOT__DataB))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x1fU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x1eU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x1eU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x1eU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1eU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x1dU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x1dU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x1dU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1dU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x1cU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x1cU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1cU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x1bU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x1bU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x1bU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1bU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x1aU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x1aU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x1aU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x1aU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x19U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x19U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x19U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x19U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x18U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x18U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x18U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x17U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x17U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x17U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x17U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x16U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x16U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x16U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x16U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x15U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x15U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x15U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x15U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x14U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x14U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x14U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x13U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x13U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x13U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x13U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x12U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x12U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x12U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x12U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x11U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x11U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x11U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x11U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0x10U))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0x10U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                 >> 0x10U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                                 >> 0xfU))) 
                               & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                  >> 0xfU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0xfU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xfU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                               >> 0xeU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                 >> 0xeU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0xeU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xeU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                               >> 0xdU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                 >> 0xdU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0xdU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xdU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                               >> 0xcU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                 >> 0xcU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0xcU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                               >> 0xbU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                 >> 0xbU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0xbU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xbU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                               >> 0xaU))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                 >> 0xaU))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 0xaU) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                                >> 0xaU) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                               >> 9U))) 
                              & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                                 >> 9U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 9U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                           >> 8U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                               >> 8U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                           >> 7U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                               >> 7U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 7U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                           >> 6U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                               >> 6U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 6U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                           >> 5U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                               >> 5U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 5U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                           >> 4U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                               >> 4U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                           >> 3U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                               >> 3U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 3U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                           >> 2U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                               >> 2U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 2U) & (~ (vlSelf->top__DOT__singleCycle__DOT__DataA 
                                           >> 1U))) 
                            & (vlSelf->top__DOT__singleCycle__DOT__DataB 
                               >> 1U))));
    vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber8 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__olt 
                  >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq 
                              >> 1U) & (~ vlSelf->top__DOT__singleCycle__DOT__DataA)) 
                            & vlSelf->top__DOT__singleCycle__DOT__DataB)));
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
    vlSelf->top__DOT__singleCycle__DOT__s21__DOT__temp 
        = ((IData)(vlSelf->top__DOT__singleCycle__DOT__PCSel_EX)
            ? vlSelf->top__DOT__singleCycle__DOT__alu
            : ((IData)(vlSelf->top__DOT__singleCycle__DOT__PCSel_EX)
                ? 0U : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc_EX)));
    vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX 
        = ((((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                       >> 0xfU)) == (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                                              >> 7U))) 
            | ((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_ID 
                         >> 0x14U)) == (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                                                 >> 7U)))) 
           & (3U == (0x7fU & vlSelf->top__DOT__singleCycle__DOT__inst_EX)));
    if ((6U != (7U & (vlSelf->top__DOT__singleCycle__DOT__inst_EX 
                      >> 4U)))) {
        vlSelf->top__DOT__singleCycle__DOT__br_comp = 0U;
        vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX = 0U;
        vlSelf->top__DOT__singleCycle__DOT__flush_IF_ID = 0U;
    } else if ((vlSelf->top__DOT__singleCycle__DOT__s21__DOT__temp 
                == vlSelf->top__DOT__singleCycle__DOT__pc_ID)) {
        vlSelf->top__DOT__singleCycle__DOT__br_comp = 0U;
        vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX = 0U;
        vlSelf->top__DOT__singleCycle__DOT__flush_IF_ID = 0U;
    } else {
        vlSelf->top__DOT__singleCycle__DOT__br_comp = 1U;
        vlSelf->top__DOT__singleCycle__DOT__flush_ID_EX = 1U;
        vlSelf->top__DOT__singleCycle__DOT__flush_IF_ID = 1U;
    }
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
    vlSelf->br_comp_o = vlSelf->top__DOT__singleCycle__DOT__br_comp;
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
             & (IData)((vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB
                        [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__pc 
                                   >> 2U))] >> 0x26U))))
          ? ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_comp)
              ? vlSelf->top__DOT__singleCycle__DOT__alu
              : (IData)(vlSelf->top__DOT__singleCycle__DOT__s24__DOT__mem_BTB
                        [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__pc 
                                   >> 2U))])) : ((IData)(4U) 
                                                 + vlSelf->top__DOT__singleCycle__DOT__pc));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vtop___024root___multiclk__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT__oeq)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber8)
        || (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber8)
        || (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber8)
        || (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber8)
        || (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber8)
        || (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber8)
        || (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber6)
        || (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber6)
        || (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber6)
        || (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber6)
        || (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber6)
        || (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber6)
        || (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber8)
        || (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber8)
        || (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber8)
        || (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber8)
        || (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber8)
        || (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber8)
        || (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber6)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber8)
         | (vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber6));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT__oeq))) VL_DBG_MSGF("        CHANGE: ../src/Branch_Comp.sv:9: top.singleCycle.s7.oeq\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[30].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[30].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[29].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[29].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[28].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[28].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[27].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[27].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[26].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[26].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[25].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[25].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[24].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[24].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[23].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[23].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[22].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[22].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[21].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[21].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[20].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[20].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[19].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[19].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[18].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[18].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[17].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[17].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[16].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[16].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[15].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[15].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[14].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[14].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[13].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[13].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[12].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[12].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[11].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[11].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[10].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[10].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[9].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[9].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[8].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[8].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[7].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[7].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[6].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[6].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[5].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[5].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[4].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[4].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[3].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[3].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[2].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[2].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[1].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[1].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s7.__Vcellout__cc[0].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s7.__Vcellout__cc[0].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq))) VL_DBG_MSGF("        CHANGE: ../src/compare32bit_signed.sv:9: top.singleCycle.s10.s2.oeq\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[30].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[30].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[29].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[29].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[28].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[28].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[27].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[27].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[26].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[26].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[25].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[25].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[24].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[24].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[23].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[23].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[22].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[22].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[21].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[21].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[20].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[20].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[19].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[19].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[18].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[18].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[17].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[17].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[16].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[16].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[15].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[15].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[14].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[14].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[13].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[13].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[12].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[12].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[11].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[11].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[10].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[10].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[9].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[9].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[8].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[8].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[7].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[7].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[6].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[6].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[5].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[5].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[4].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[4].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[3].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[3].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[2].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[2].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[1].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[1].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s2.__Vcellout__aa[0].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s2.__Vcellout__aa[0].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq))) VL_DBG_MSGF("        CHANGE: ../src/compare32bit.sv:9: top.singleCycle.s10.s1.oeq\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[30].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[30].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[29].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[29].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[28].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[28].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[27].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[27].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[26].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[26].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[25].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[25].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[24].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[24].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[23].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[23].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[22].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[22].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[21].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[21].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[20].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[20].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[19].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[19].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[18].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[18].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[17].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[17].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[16].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[16].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[15].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[15].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[14].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[14].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[13].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[13].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[12].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[12].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[11].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[11].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[10].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[10].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[9].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[9].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[8].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[8].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[7].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[7].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[6].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[6].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[5].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[5].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[4].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[4].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[3].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[3].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[2].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[2].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[1].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[1].u____pinNumber6\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber8 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber8))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:10: top.singleCycle.s10.s1.__Vcellout__bb[0].u____pinNumber8\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber6 ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber6))) VL_DBG_MSGF("        CHANGE: ../src/compare1bit.sv:8: top.singleCycle.s10.s1.__Vcellout__bb[0].u____pinNumber6\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT__oeq 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT__oeq;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__30__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__29__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__28__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__27__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__26__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__25__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__24__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__23__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__22__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__21__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__20__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__19__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__18__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__17__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__16__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__15__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__14__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__13__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__12__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__11__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__10__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__9__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__8__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__7__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__6__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__5__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__4__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__3__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__2__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__1__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s7__DOT____Vcellout__cc__BRA__0__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT__oeq;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__30__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__29__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__28__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__27__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__26__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__25__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__24__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__23__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__22__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__21__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__20__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__19__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__18__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__17__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__16__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__15__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__14__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__13__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__12__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__11__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__10__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__9__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__8__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__7__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__6__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__5__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__4__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__3__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__2__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__1__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s2__DOT____Vcellout__aa__BRA__0__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT__oeq;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__30__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__29__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__28__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__27__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__26__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__25__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__24__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__23__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__22__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__21__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__20__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__19__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__18__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__17__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__16__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__15__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__14__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__13__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__12__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__11__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__10__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__9__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__8__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__7__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__6__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__5__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__4__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__3__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__2__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__1__KET____DOT__u____pinNumber6;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber8 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber8;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber6 
        = vlSelf->top__DOT__singleCycle__DOT__s10__DOT__s1__DOT____Vcellout__bb__BRA__0__KET____DOT__u____pinNumber6;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
