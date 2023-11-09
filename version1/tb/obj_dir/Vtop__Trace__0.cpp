// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                               [0x228U]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                               [0x224U]),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                               [0x220U]),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                               [0x200U]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                               [0x204U]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                               [0x208U]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                               [0x20cU]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                               [0x210U]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                               [0x214U]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                               [0x218U]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                                [0x21cU]),32);
        bufp->chgQData(oldp+11,((QData)((IData)(((0U 
                                                  != 
                                                  (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                                                   [0x224U] 
                                                   >> 8U)) 
                                                 | ((0U 
                                                     != 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                                                      [0x220U] 
                                                      >> 0x12U)) 
                                                    | (0U 
                                                       != 
                                                       (0xfffffU 
                                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                                                           [0x228U] 
                                                           >> 0xbU)))))))),58);
        bufp->chgIData(oldp+13,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__s8__DOT__pc)),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__pc),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__inst),32);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__sign),2);
        bufp->chgBit(oldp+19,((1U & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA)));
        bufp->chgBit(oldp+20,((1U & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB)));
        bufp->chgBit(oldp+21,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0xaU))));
        bufp->chgBit(oldp+22,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0xaU))));
        bufp->chgBit(oldp+23,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0xbU))));
        bufp->chgBit(oldp+24,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0xbU))));
        bufp->chgBit(oldp+25,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0xcU))));
        bufp->chgBit(oldp+26,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0xcU))));
        bufp->chgBit(oldp+27,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0xdU))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0xdU))));
        bufp->chgBit(oldp+29,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0xeU))));
        bufp->chgBit(oldp+30,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0xeU))));
        bufp->chgBit(oldp+31,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0xfU))));
        bufp->chgBit(oldp+32,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0xfU))));
        bufp->chgBit(oldp+33,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x10U))));
        bufp->chgBit(oldp+34,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x10U))));
        bufp->chgBit(oldp+35,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x11U))));
        bufp->chgBit(oldp+36,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x11U))));
        bufp->chgBit(oldp+37,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x12U))));
        bufp->chgBit(oldp+38,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x12U))));
        bufp->chgBit(oldp+39,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x13U))));
        bufp->chgBit(oldp+40,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x13U))));
        bufp->chgBit(oldp+41,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 1U))));
        bufp->chgBit(oldp+42,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 1U))));
        bufp->chgBit(oldp+43,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x14U))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x14U))));
        bufp->chgBit(oldp+45,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x15U))));
        bufp->chgBit(oldp+46,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x15U))));
        bufp->chgBit(oldp+47,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x16U))));
        bufp->chgBit(oldp+48,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x16U))));
        bufp->chgBit(oldp+49,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x17U))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x17U))));
        bufp->chgBit(oldp+51,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x18U))));
        bufp->chgBit(oldp+52,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x18U))));
        bufp->chgBit(oldp+53,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x19U))));
        bufp->chgBit(oldp+54,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x19U))));
        bufp->chgBit(oldp+55,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+56,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+57,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+58,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+59,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+60,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+61,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+62,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+63,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 2U))));
        bufp->chgBit(oldp+64,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 2U))));
        bufp->chgBit(oldp+65,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+66,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+67,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                               >> 0x1fU)));
        bufp->chgBit(oldp+68,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                               >> 0x1fU)));
        bufp->chgBit(oldp+69,(((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                >> 0x1fU)))));
        bufp->chgBit(oldp+70,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                         ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                        >> 0x1fU)))));
        bufp->chgBit(oldp+71,(((~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                   >> 0x1fU)) & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                 >> 0x1fU))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 3U))));
        bufp->chgBit(oldp+73,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 3U))));
        bufp->chgBit(oldp+74,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 4U))));
        bufp->chgBit(oldp+75,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 4U))));
        bufp->chgBit(oldp+76,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 5U))));
        bufp->chgBit(oldp+77,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 5U))));
        bufp->chgBit(oldp+78,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 6U))));
        bufp->chgBit(oldp+79,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 6U))));
        bufp->chgBit(oldp+80,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 7U))));
        bufp->chgBit(oldp+81,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 7U))));
        bufp->chgBit(oldp+82,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 8U))));
        bufp->chgBit(oldp+83,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 8U))));
        bufp->chgBit(oldp+84,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                     >> 9U))));
        bufp->chgBit(oldp+85,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                     >> 9U))));
        bufp->chgSData(oldp+86,((0x1fffU & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__pc)),13);
        bufp->chgCData(oldp+87,((3U & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__pc)),2);
        bufp->chgCData(oldp+88,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+89,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+90,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__inst 
                                          >> 7U))),5);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[0]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[1]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[2]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[3]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[4]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[5]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[6]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[7]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[8]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[9]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[10]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[11]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[12]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[13]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[14]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[15]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[16]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[17]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[18]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[19]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[20]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[21]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[22]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[23]),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[24]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[25]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[26]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[27]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[28]),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[29]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[30]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d[31]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0U]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [1U]),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [2U]),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [3U]),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [4U]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [5U]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [6U]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [7U]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [8U]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [9U]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0xaU]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0xbU]),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0xcU]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0xdU]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0xeU]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0xfU]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x10U]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x11U]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x12U]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x13U]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x14U]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x15U]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x16U]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x17U]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x18U]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x19U]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x1aU]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x1bU]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x1cU]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x1dU]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x1eU]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__d
                                 [0x1fU]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x0____pinNumber2),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x1____pinNumber2),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x10____pinNumber2),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x11____pinNumber2),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x12____pinNumber2),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x13____pinNumber2),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x14____pinNumber2),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x15____pinNumber2),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x16____pinNumber2),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x17____pinNumber2),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x18____pinNumber2),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x19____pinNumber2),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x2____pinNumber2),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x20____pinNumber2),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x21____pinNumber2),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x22____pinNumber2),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x23____pinNumber2),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x24____pinNumber2),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x25____pinNumber2),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x26____pinNumber2),32);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x27____pinNumber2),32);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x28____pinNumber2),32);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x29____pinNumber2),32);
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x3____pinNumber2),32);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x30____pinNumber2),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x31____pinNumber2),32);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x4____pinNumber2),32);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x5____pinNumber2),32);
        bufp->chgIData(oldp+183,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x6____pinNumber2),32);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x7____pinNumber2),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x8____pinNumber2),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT____Vcellout__x9____pinNumber2),32);
        bufp->chgCData(oldp+187,((7U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+188,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__inst 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+189,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__inst)),7);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+190,(((0x240U >= (0x3ffU 
                                              & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__alu 
                                                 >> 2U)))
                                   ? vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT__data
                                  [(0x3ffU & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__alu 
                                              >> 2U))]
                                   : vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s6__DOT____Vxrand_h96fd10a2__0)),32);
        bufp->chgIData(oldp+191,(((0x100U & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal)
                                   ? vlSelf->top__DOT__singleCycle__DOT__s8__DOT__alu
                                   : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__s8__DOT__pc))),32);
        bufp->chgBit(oldp+192,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 1U) 
                                                  & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA) 
                                                 & (~ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB))))));
        bufp->chgBit(oldp+193,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                  ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB))))));
        bufp->chgBit(oldp+194,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 1U) 
                                                  & (~ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA)) 
                                                 & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB)))));
        bufp->chgBit(oldp+195,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0xbU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                     >> 0xbU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                       >> 0xaU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                       >> 0xaU)))))));
        bufp->chgBit(oldp+196,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0xbU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+197,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0xbU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                     >> 0xbU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                        >> 0xaU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                      >> 0xaU))))));
        bufp->chgBit(oldp+198,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0xcU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                     >> 0xcU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                       >> 0xbU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                       >> 0xbU)))))));
        bufp->chgBit(oldp+199,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0xcU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+200,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0xcU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                     >> 0xcU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                        >> 0xbU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                      >> 0xbU))))));
        bufp->chgBit(oldp+201,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0xdU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                     >> 0xdU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                       >> 0xcU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                       >> 0xcU)))))));
        bufp->chgBit(oldp+202,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0xdU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+203,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0xdU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                     >> 0xdU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                        >> 0xcU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                      >> 0xcU))))));
        bufp->chgBit(oldp+204,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0xeU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                     >> 0xeU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                       >> 0xdU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                       >> 0xdU)))))));
        bufp->chgBit(oldp+205,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0xeU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+206,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0xeU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                     >> 0xeU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                        >> 0xdU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                      >> 0xdU))))));
        bufp->chgBit(oldp+207,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0xfU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                     >> 0xfU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                       >> 0xeU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                       >> 0xeU)))))));
        bufp->chgBit(oldp+208,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0xfU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+209,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0xfU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                     >> 0xfU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                        >> 0xeU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                      >> 0xeU))))));
        bufp->chgBit(oldp+210,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x10U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x10U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0xfU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0xfU)))))));
        bufp->chgBit(oldp+211,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x10U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+212,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x10U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x10U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0xfU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+213,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x11U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x11U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x10U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x10U)))))));
        bufp->chgBit(oldp+214,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x11U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+215,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x11U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x11U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x10U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+216,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x12U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x12U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x11U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x11U)))))));
        bufp->chgBit(oldp+217,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x12U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+218,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x12U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x12U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x11U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+219,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x13U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x13U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x12U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x12U)))))));
        bufp->chgBit(oldp+220,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x13U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+221,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x13U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x13U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x12U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+222,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x14U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x14U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x13U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x13U)))))));
        bufp->chgBit(oldp+223,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x14U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+224,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x14U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x14U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x13U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+225,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 2U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     >> 1U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+226,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 2U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                  >> 1U))))));
        bufp->chgBit(oldp+227,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 2U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                      >> 1U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                    >> 1U))))));
        bufp->chgBit(oldp+228,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x15U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x15U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x14U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x14U)))))));
        bufp->chgBit(oldp+229,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x15U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+230,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x15U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x15U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x14U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+231,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x16U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x16U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x15U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x15U)))))));
        bufp->chgBit(oldp+232,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x16U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+233,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x16U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x16U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x15U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+234,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x17U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x17U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x16U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x16U)))))));
        bufp->chgBit(oldp+235,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x17U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+236,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x17U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x17U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x16U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+237,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x18U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x18U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x17U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x17U)))))));
        bufp->chgBit(oldp+238,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x18U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+239,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x18U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x18U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x17U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+240,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x19U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x19U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x18U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x18U)))))));
        bufp->chgBit(oldp+241,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x19U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+242,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x19U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x19U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x18U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+243,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x1aU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x1aU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x19U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x19U)))))));
        bufp->chgBit(oldp+244,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x1aU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+245,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x1aU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x1aU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x19U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+246,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x1bU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x1bU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x1aU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x1aU)))))));
        bufp->chgBit(oldp+247,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x1bU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+248,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x1bU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x1bU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x1aU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+249,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x1cU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x1cU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x1bU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x1bU)))))));
        bufp->chgBit(oldp+250,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x1cU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+251,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x1cU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x1cU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x1bU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+252,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x1dU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x1dU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x1cU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x1cU)))))));
        bufp->chgBit(oldp+253,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x1dU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+254,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x1dU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x1dU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x1cU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+255,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x1eU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x1eU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x1dU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x1dU)))))));
        bufp->chgBit(oldp+256,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0x1eU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+257,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x1eU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x1eU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x1dU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+258,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 3U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     >> 2U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+259,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 3U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                  >> 2U))))));
        bufp->chgBit(oldp+260,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                      >> 2U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                    >> 2U))))));
        bufp->chgBit(oldp+261,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0x1fU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x1fU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                           >> 0x1eU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                             >> 0x1eU)))))));
        bufp->chgBit(oldp+262,(((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                 >> 0x1fU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                  ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                 >> 0x1eU)))));
        bufp->chgBit(oldp+263,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0x1fU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                         >> 0x1fU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                              >> 0x1eU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+264,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 4U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     >> 3U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+265,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 4U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                  >> 3U))))));
        bufp->chgBit(oldp+266,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 4U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                      >> 3U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                    >> 3U))))));
        bufp->chgBit(oldp+267,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 5U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     >> 4U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+268,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 5U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                  >> 4U))))));
        bufp->chgBit(oldp+269,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                      >> 4U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                    >> 4U))))));
        bufp->chgBit(oldp+270,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 6U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     >> 5U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+271,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 6U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                  >> 5U))))));
        bufp->chgBit(oldp+272,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 6U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                      >> 5U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                    >> 5U))))));
        bufp->chgBit(oldp+273,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 7U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+274,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 7U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                  >> 6U))))));
        bufp->chgBit(oldp+275,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 7U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                      >> 6U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                    >> 6U))))));
        bufp->chgBit(oldp+276,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 8U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     >> 7U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+277,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 8U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+278,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 8U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                      >> 7U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                    >> 7U))))));
        bufp->chgBit(oldp+279,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 9U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     >> 8U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+280,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 9U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                  >> 8U))))));
        bufp->chgBit(oldp+281,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                   >> 9U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                      >> 8U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                    >> 8U))))));
        bufp->chgBit(oldp+282,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                       >> 0xaU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                     >> 0xaU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                       >> 9U)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                       >> 9U)))))));
        bufp->chgBit(oldp+283,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                       >> 0xaU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB) 
                                                    >> 9U))))));
        bufp->chgBit(oldp+284,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                       >> 0xaU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                                     >> 0xaU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataA 
                                                        >> 9U))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__DataB 
                                                      >> 9U))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+285,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      >> 0x14U))));
        bufp->chgBit(oldp+286,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      >> 0x13U))));
        bufp->chgBit(oldp+287,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      >> 0x12U))));
        bufp->chgBit(oldp+288,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      >> 0xfU))));
        bufp->chgBit(oldp+289,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      >> 0xeU))));
        bufp->chgBit(oldp+290,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      >> 0xdU))));
        bufp->chgBit(oldp+291,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      >> 0xcU))));
        bufp->chgBit(oldp+292,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      >> 0xbU))));
        bufp->chgBit(oldp+293,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      >> 0xaU))));
        bufp->chgBit(oldp+294,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      >> 8U))));
        bufp->chgBit(oldp+295,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      >> 9U))));
        bufp->chgBit(oldp+296,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__BrLt));
        bufp->chgBit(oldp+297,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__BrEq));
        bufp->chgBit(oldp+298,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      >> 7U))));
        bufp->chgBit(oldp+299,((1U & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal)));
        bufp->chgIData(oldp+300,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__alu),32);
        bufp->chgIData(oldp+301,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__Imm),32);
        bufp->chgIData(oldp+302,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux),32);
        bufp->chgIData(oldp+303,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch),32);
        bufp->chgIData(oldp+304,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__WB),32);
        bufp->chgCData(oldp+305,((7U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                        >> 1U))),3);
        bufp->chgCData(oldp+306,((7U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                        >> 4U))),3);
        bufp->chgCData(oldp+307,((3U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                        >> 0x10U))),2);
        bufp->chgCData(oldp+308,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ALUSel),4);
        bufp->chgIData(oldp+309,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt),32);
        bufp->chgIData(oldp+310,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq),32);
        bufp->chgIData(oldp+311,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt),32);
        bufp->chgBit(oldp+312,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__temp_AgtB));
        bufp->chgBit(oldp+313,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__temp_AeqB));
        bufp->chgBit(oldp+314,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__temp_AltB));
        bufp->chgBit(oldp+315,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 1U))));
        bufp->chgBit(oldp+316,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 1U))));
        bufp->chgBit(oldp+317,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 1U))));
        bufp->chgBit(oldp+318,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0xbU))));
        bufp->chgBit(oldp+319,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0xbU))));
        bufp->chgBit(oldp+320,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0xbU))));
        bufp->chgBit(oldp+321,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0xcU))));
        bufp->chgBit(oldp+322,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0xcU))));
        bufp->chgBit(oldp+323,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0xcU))));
        bufp->chgBit(oldp+324,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0xdU))));
        bufp->chgBit(oldp+325,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0xdU))));
        bufp->chgBit(oldp+326,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0xdU))));
        bufp->chgBit(oldp+327,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0xeU))));
        bufp->chgBit(oldp+328,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0xeU))));
        bufp->chgBit(oldp+329,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0xeU))));
        bufp->chgBit(oldp+330,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0xfU))));
        bufp->chgBit(oldp+331,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0xfU))));
        bufp->chgBit(oldp+332,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0xfU))));
        bufp->chgBit(oldp+333,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x10U))));
        bufp->chgBit(oldp+334,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x10U))));
        bufp->chgBit(oldp+335,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x10U))));
        bufp->chgBit(oldp+336,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x11U))));
        bufp->chgBit(oldp+337,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x11U))));
        bufp->chgBit(oldp+338,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x11U))));
        bufp->chgBit(oldp+339,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x12U))));
        bufp->chgBit(oldp+340,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x12U))));
        bufp->chgBit(oldp+341,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x12U))));
        bufp->chgBit(oldp+342,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x13U))));
        bufp->chgBit(oldp+343,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x13U))));
        bufp->chgBit(oldp+344,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x13U))));
        bufp->chgBit(oldp+345,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x14U))));
        bufp->chgBit(oldp+346,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x14U))));
        bufp->chgBit(oldp+347,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x14U))));
        bufp->chgBit(oldp+348,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 2U))));
        bufp->chgBit(oldp+349,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 2U))));
        bufp->chgBit(oldp+350,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 2U))));
        bufp->chgBit(oldp+351,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x15U))));
        bufp->chgBit(oldp+352,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x15U))));
        bufp->chgBit(oldp+353,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x15U))));
        bufp->chgBit(oldp+354,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x16U))));
        bufp->chgBit(oldp+355,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x16U))));
        bufp->chgBit(oldp+356,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x16U))));
        bufp->chgBit(oldp+357,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x17U))));
        bufp->chgBit(oldp+358,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x17U))));
        bufp->chgBit(oldp+359,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x17U))));
        bufp->chgBit(oldp+360,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x18U))));
        bufp->chgBit(oldp+361,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x18U))));
        bufp->chgBit(oldp+362,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x18U))));
        bufp->chgBit(oldp+363,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x19U))));
        bufp->chgBit(oldp+364,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x19U))));
        bufp->chgBit(oldp+365,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x19U))));
        bufp->chgBit(oldp+366,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+367,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+368,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+369,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+370,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+371,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+372,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+373,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+374,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+375,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+376,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+377,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+378,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+379,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+380,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+381,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 3U))));
        bufp->chgBit(oldp+382,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 3U))));
        bufp->chgBit(oldp+383,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 3U))));
        bufp->chgBit(oldp+384,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                >> 0x1fU)));
        bufp->chgBit(oldp+385,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                >> 0x1fU)));
        bufp->chgBit(oldp+386,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                >> 0x1fU)));
        bufp->chgBit(oldp+387,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 4U))));
        bufp->chgBit(oldp+388,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 4U))));
        bufp->chgBit(oldp+389,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 4U))));
        bufp->chgBit(oldp+390,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 5U))));
        bufp->chgBit(oldp+391,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 5U))));
        bufp->chgBit(oldp+392,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 5U))));
        bufp->chgBit(oldp+393,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 6U))));
        bufp->chgBit(oldp+394,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 6U))));
        bufp->chgBit(oldp+395,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 6U))));
        bufp->chgBit(oldp+396,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 7U))));
        bufp->chgBit(oldp+397,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 7U))));
        bufp->chgBit(oldp+398,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 7U))));
        bufp->chgBit(oldp+399,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 8U))));
        bufp->chgBit(oldp+400,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 8U))));
        bufp->chgBit(oldp+401,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 8U))));
        bufp->chgBit(oldp+402,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 9U))));
        bufp->chgBit(oldp+403,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 9U))));
        bufp->chgBit(oldp+404,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 9U))));
        bufp->chgBit(oldp+405,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__ogt 
                                      >> 0xaU))));
        bufp->chgBit(oldp+406,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__oeq 
                                      >> 0xaU))));
        bufp->chgBit(oldp+407,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s12__DOT__olt 
                                      >> 0xaU))));
        bufp->chgIData(oldp+408,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y),32);
        bufp->chgIData(oldp+409,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__temp),32);
        bufp->chgBit(oldp+410,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                      | (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                         >> 1U)))));
        bufp->chgBit(oldp+411,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0xaU))));
        bufp->chgBit(oldp+412,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0xbU))));
        bufp->chgBit(oldp+413,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0xcU))));
        bufp->chgBit(oldp+414,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0xdU))));
        bufp->chgBit(oldp+415,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0xeU))));
        bufp->chgBit(oldp+416,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0xfU))));
        bufp->chgBit(oldp+417,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x10U))));
        bufp->chgBit(oldp+418,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x11U))));
        bufp->chgBit(oldp+419,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x12U))));
        bufp->chgBit(oldp+420,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x13U))));
        bufp->chgBit(oldp+421,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 2U))));
        bufp->chgBit(oldp+422,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x14U))));
        bufp->chgBit(oldp+423,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x15U))));
        bufp->chgBit(oldp+424,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x16U))));
        bufp->chgBit(oldp+425,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x17U))));
        bufp->chgBit(oldp+426,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x18U))));
        bufp->chgBit(oldp+427,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x19U))));
        bufp->chgBit(oldp+428,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+429,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+430,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+431,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+432,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 3U))));
        bufp->chgBit(oldp+433,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+434,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                >> 0x1fU)));
        bufp->chgBit(oldp+435,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 4U))));
        bufp->chgBit(oldp+436,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 5U))));
        bufp->chgBit(oldp+437,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 6U))));
        bufp->chgBit(oldp+438,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 7U))));
        bufp->chgBit(oldp+439,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 8U))));
        bufp->chgBit(oldp+440,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s5__DOT__Y 
                                      >> 9U))));
        bufp->chgSData(oldp+441,((0xfffU & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__alu)),12);
        bufp->chgCData(oldp+442,((3U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal 
                                        >> 0xaU))),2);
        bufp->chgBit(oldp+443,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__alu))));
        bufp->chgCData(oldp+444,((((8U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                          << 3U)) | 
                                   (4U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                          << 2U))) 
                                  | (((IData)(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT____Vcellout__s2____pinNumber4) 
                                      << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT____Vcellout__s2____pinNumber3)))),4);
        bufp->chgBit(oldp+445,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__lt1));
        bufp->chgBit(oldp+446,((1U & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt)));
        bufp->chgBit(oldp+447,((1U & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt)));
        bufp->chgBit(oldp+448,((1U & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq)));
        bufp->chgIData(oldp+449,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt),32);
        bufp->chgIData(oldp+450,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq),32);
        bufp->chgIData(oldp+451,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt),32);
        bufp->chgBit(oldp+452,((1U & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch)));
        bufp->chgBit(oldp+453,((1U & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux)));
        bufp->chgBit(oldp+454,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 1U))));
        bufp->chgBit(oldp+455,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 1U))));
        bufp->chgBit(oldp+456,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 1U))));
        bufp->chgBit(oldp+457,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 1U) 
                                                  & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch) 
                                                 & (~ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux))))));
        bufp->chgBit(oldp+458,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                  ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux))))));
        bufp->chgBit(oldp+459,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 1U) 
                                                  & (~ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch)) 
                                                 & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux)))));
        bufp->chgBit(oldp+460,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0xaU))));
        bufp->chgBit(oldp+461,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0xaU))));
        bufp->chgBit(oldp+462,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0xbU))));
        bufp->chgBit(oldp+463,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0xbU))));
        bufp->chgBit(oldp+464,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0xbU))));
        bufp->chgBit(oldp+465,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0xbU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                     >> 0xbU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                       >> 0xaU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                       >> 0xaU)))))));
        bufp->chgBit(oldp+466,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0xbU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+467,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0xbU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                     >> 0xbU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                        >> 0xaU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                      >> 0xaU))))));
        bufp->chgBit(oldp+468,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0xbU))));
        bufp->chgBit(oldp+469,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0xbU))));
        bufp->chgBit(oldp+470,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0xcU))));
        bufp->chgBit(oldp+471,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0xcU))));
        bufp->chgBit(oldp+472,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0xcU))));
        bufp->chgBit(oldp+473,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0xcU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                     >> 0xcU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                       >> 0xbU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                       >> 0xbU)))))));
        bufp->chgBit(oldp+474,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0xcU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+475,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0xcU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                     >> 0xcU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                        >> 0xbU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                      >> 0xbU))))));
        bufp->chgBit(oldp+476,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0xcU))));
        bufp->chgBit(oldp+477,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0xcU))));
        bufp->chgBit(oldp+478,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0xdU))));
        bufp->chgBit(oldp+479,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0xdU))));
        bufp->chgBit(oldp+480,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0xdU))));
        bufp->chgBit(oldp+481,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0xdU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                     >> 0xdU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                       >> 0xcU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                       >> 0xcU)))))));
        bufp->chgBit(oldp+482,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0xdU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+483,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0xdU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                     >> 0xdU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                        >> 0xcU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                      >> 0xcU))))));
        bufp->chgBit(oldp+484,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0xdU))));
        bufp->chgBit(oldp+485,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0xdU))));
        bufp->chgBit(oldp+486,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0xeU))));
        bufp->chgBit(oldp+487,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0xeU))));
        bufp->chgBit(oldp+488,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0xeU))));
        bufp->chgBit(oldp+489,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0xeU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                     >> 0xeU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                       >> 0xdU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                       >> 0xdU)))))));
        bufp->chgBit(oldp+490,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0xeU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+491,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0xeU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                     >> 0xeU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                        >> 0xdU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                      >> 0xdU))))));
        bufp->chgBit(oldp+492,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0xeU))));
        bufp->chgBit(oldp+493,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0xeU))));
        bufp->chgBit(oldp+494,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0xfU))));
        bufp->chgBit(oldp+495,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0xfU))));
        bufp->chgBit(oldp+496,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0xfU))));
        bufp->chgBit(oldp+497,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0xfU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                     >> 0xfU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                       >> 0xeU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                       >> 0xeU)))))));
        bufp->chgBit(oldp+498,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0xfU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+499,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0xfU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                     >> 0xfU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                        >> 0xeU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                      >> 0xeU))))));
        bufp->chgBit(oldp+500,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0xfU))));
        bufp->chgBit(oldp+501,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0xfU))));
        bufp->chgBit(oldp+502,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x10U))));
        bufp->chgBit(oldp+503,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x10U))));
        bufp->chgBit(oldp+504,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x10U))));
        bufp->chgBit(oldp+505,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x10U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x10U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0xfU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0xfU)))))));
        bufp->chgBit(oldp+506,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x10U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+507,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x10U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x10U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0xfU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+508,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x10U))));
        bufp->chgBit(oldp+509,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x10U))));
        bufp->chgBit(oldp+510,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x11U))));
        bufp->chgBit(oldp+511,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x11U))));
        bufp->chgBit(oldp+512,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x11U))));
        bufp->chgBit(oldp+513,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x11U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x11U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x10U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x10U)))))));
        bufp->chgBit(oldp+514,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x11U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+515,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x11U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x11U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x10U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+516,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x11U))));
        bufp->chgBit(oldp+517,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x11U))));
        bufp->chgBit(oldp+518,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x12U))));
        bufp->chgBit(oldp+519,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x12U))));
        bufp->chgBit(oldp+520,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x12U))));
        bufp->chgBit(oldp+521,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x12U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x12U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x11U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x11U)))))));
        bufp->chgBit(oldp+522,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x12U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+523,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x12U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x12U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x11U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+524,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x12U))));
        bufp->chgBit(oldp+525,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x12U))));
        bufp->chgBit(oldp+526,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x13U))));
        bufp->chgBit(oldp+527,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x13U))));
        bufp->chgBit(oldp+528,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x13U))));
        bufp->chgBit(oldp+529,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x13U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x13U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x12U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x12U)))))));
        bufp->chgBit(oldp+530,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x13U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+531,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x13U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x13U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x12U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+532,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x13U))));
        bufp->chgBit(oldp+533,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x13U))));
        bufp->chgBit(oldp+534,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x14U))));
        bufp->chgBit(oldp+535,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x14U))));
        bufp->chgBit(oldp+536,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x14U))));
        bufp->chgBit(oldp+537,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x14U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x14U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x13U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x13U)))))));
        bufp->chgBit(oldp+538,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x14U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+539,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x14U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x14U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x13U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+540,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 1U))));
        bufp->chgBit(oldp+541,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 1U))));
        bufp->chgBit(oldp+542,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 2U))));
        bufp->chgBit(oldp+543,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 2U))));
        bufp->chgBit(oldp+544,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 2U))));
        bufp->chgBit(oldp+545,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 2U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 1U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+546,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 2U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 1U))))));
        bufp->chgBit(oldp+547,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 2U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 1U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 1U))))));
        bufp->chgBit(oldp+548,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x14U))));
        bufp->chgBit(oldp+549,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x14U))));
        bufp->chgBit(oldp+550,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x15U))));
        bufp->chgBit(oldp+551,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x15U))));
        bufp->chgBit(oldp+552,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x15U))));
        bufp->chgBit(oldp+553,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x15U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x15U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x14U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x14U)))))));
        bufp->chgBit(oldp+554,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x15U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+555,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x15U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x15U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x14U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+556,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x15U))));
        bufp->chgBit(oldp+557,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x15U))));
        bufp->chgBit(oldp+558,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x16U))));
        bufp->chgBit(oldp+559,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x16U))));
        bufp->chgBit(oldp+560,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x16U))));
        bufp->chgBit(oldp+561,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x16U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x16U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x15U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x15U)))))));
        bufp->chgBit(oldp+562,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x16U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+563,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x16U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x16U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x15U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+564,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x16U))));
        bufp->chgBit(oldp+565,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x16U))));
        bufp->chgBit(oldp+566,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x17U))));
        bufp->chgBit(oldp+567,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x17U))));
        bufp->chgBit(oldp+568,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x17U))));
        bufp->chgBit(oldp+569,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x17U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x17U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x16U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x16U)))))));
        bufp->chgBit(oldp+570,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x17U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+571,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x17U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x17U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x16U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+572,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x17U))));
        bufp->chgBit(oldp+573,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x17U))));
        bufp->chgBit(oldp+574,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x18U))));
        bufp->chgBit(oldp+575,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x18U))));
        bufp->chgBit(oldp+576,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x18U))));
        bufp->chgBit(oldp+577,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x18U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x18U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x17U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x17U)))))));
        bufp->chgBit(oldp+578,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x18U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+579,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x18U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x18U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x17U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+580,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x18U))));
        bufp->chgBit(oldp+581,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x18U))));
        bufp->chgBit(oldp+582,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x19U))));
        bufp->chgBit(oldp+583,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x19U))));
        bufp->chgBit(oldp+584,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x19U))));
        bufp->chgBit(oldp+585,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x19U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x19U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x18U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x18U)))))));
        bufp->chgBit(oldp+586,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x19U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+587,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x19U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x19U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x18U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+588,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x19U))));
        bufp->chgBit(oldp+589,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x19U))));
        bufp->chgBit(oldp+590,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+591,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+592,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+593,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x1aU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x1aU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x19U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x19U)))))));
        bufp->chgBit(oldp+594,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x1aU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+595,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x1aU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x1aU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x19U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+596,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+597,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+598,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+599,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+600,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+601,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x1bU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x1bU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x1aU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x1aU)))))));
        bufp->chgBit(oldp+602,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x1bU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+603,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x1bU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x1bU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x1aU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+604,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+605,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+606,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+607,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+608,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+609,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x1cU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x1cU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x1bU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x1bU)))))));
        bufp->chgBit(oldp+610,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x1cU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+611,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x1cU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x1cU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x1bU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+612,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+613,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+614,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+615,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+616,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+617,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x1dU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x1dU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x1cU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x1cU)))))));
        bufp->chgBit(oldp+618,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x1dU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+619,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x1dU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x1dU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x1cU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+620,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+621,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+622,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+623,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+624,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+625,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x1eU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x1eU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x1dU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x1dU)))))));
        bufp->chgBit(oldp+626,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0x1eU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+627,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x1eU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x1eU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x1dU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+628,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 2U))));
        bufp->chgBit(oldp+629,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 2U))));
        bufp->chgBit(oldp+630,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 3U))));
        bufp->chgBit(oldp+631,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 3U))));
        bufp->chgBit(oldp+632,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 3U))));
        bufp->chgBit(oldp+633,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 3U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 2U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+634,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 3U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 2U))))));
        bufp->chgBit(oldp+635,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 2U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 2U))))));
        bufp->chgBit(oldp+636,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+637,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+638,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                >> 0x1fU)));
        bufp->chgBit(oldp+639,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                >> 0x1fU)));
        bufp->chgBit(oldp+640,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                >> 0x1fU)));
        bufp->chgBit(oldp+641,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0x1fU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x1fU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x1eU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x1eU)))))));
        bufp->chgBit(oldp+642,(((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                 >> 0x1fU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                  ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                 >> 0x1eU)))));
        bufp->chgBit(oldp+643,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0x1fU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                         >> 0x1fU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x1eU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+644,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                >> 0x1fU)));
        bufp->chgBit(oldp+645,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                >> 0x1fU)));
        bufp->chgBit(oldp+646,(((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+647,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+648,(((~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                    >> 0x1fU)) & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+649,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 3U))));
        bufp->chgBit(oldp+650,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 3U))));
        bufp->chgBit(oldp+651,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 4U))));
        bufp->chgBit(oldp+652,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 4U))));
        bufp->chgBit(oldp+653,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 4U))));
        bufp->chgBit(oldp+654,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 4U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 3U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+655,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 4U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 3U))))));
        bufp->chgBit(oldp+656,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 4U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 3U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 3U))))));
        bufp->chgBit(oldp+657,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 4U))));
        bufp->chgBit(oldp+658,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 4U))));
        bufp->chgBit(oldp+659,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 5U))));
        bufp->chgBit(oldp+660,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 5U))));
        bufp->chgBit(oldp+661,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 5U))));
        bufp->chgBit(oldp+662,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 5U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 4U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+663,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 5U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 4U))))));
        bufp->chgBit(oldp+664,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 4U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 4U))))));
        bufp->chgBit(oldp+665,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 5U))));
        bufp->chgBit(oldp+666,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 5U))));
        bufp->chgBit(oldp+667,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 6U))));
        bufp->chgBit(oldp+668,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 6U))));
        bufp->chgBit(oldp+669,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 6U))));
        bufp->chgBit(oldp+670,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 6U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 5U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+671,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 6U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 5U))))));
        bufp->chgBit(oldp+672,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 6U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 5U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 5U))))));
        bufp->chgBit(oldp+673,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 6U))));
        bufp->chgBit(oldp+674,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 6U))));
        bufp->chgBit(oldp+675,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 7U))));
        bufp->chgBit(oldp+676,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 7U))));
        bufp->chgBit(oldp+677,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 7U))));
        bufp->chgBit(oldp+678,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 7U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+679,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 7U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 6U))))));
        bufp->chgBit(oldp+680,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 7U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 6U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 6U))))));
        bufp->chgBit(oldp+681,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 7U))));
        bufp->chgBit(oldp+682,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 7U))));
        bufp->chgBit(oldp+683,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 8U))));
        bufp->chgBit(oldp+684,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 8U))));
        bufp->chgBit(oldp+685,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 8U))));
        bufp->chgBit(oldp+686,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 8U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 7U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+687,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 8U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+688,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 8U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 7U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 7U))))));
        bufp->chgBit(oldp+689,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 8U))));
        bufp->chgBit(oldp+690,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 8U))));
        bufp->chgBit(oldp+691,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 9U))));
        bufp->chgBit(oldp+692,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 9U))));
        bufp->chgBit(oldp+693,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 9U))));
        bufp->chgBit(oldp+694,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 9U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 8U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+695,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 9U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 8U))))));
        bufp->chgBit(oldp+696,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                   >> 9U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 8U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 8U))))));
        bufp->chgBit(oldp+697,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                      >> 9U))));
        bufp->chgBit(oldp+698,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                      >> 9U))));
        bufp->chgBit(oldp+699,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                      >> 0xaU))));
        bufp->chgBit(oldp+700,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                      >> 0xaU))));
        bufp->chgBit(oldp+701,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                      >> 0xaU))));
        bufp->chgBit(oldp+702,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__ogt 
                                       >> 0xaU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                     >> 0xaU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                       >> 9U)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                       >> 9U)))))));
        bufp->chgBit(oldp+703,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                       >> 0xaU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                    >> 9U))))));
        bufp->chgBit(oldp+704,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__olt 
                                       >> 0xaU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s1__DOT__oeq 
                                                     >> 0xaU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                        >> 9U))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                      >> 9U))))));
        bufp->chgBit(oldp+705,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT____Vcellout__s2____pinNumber3));
        bufp->chgBit(oldp+706,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT____Vcellout__s2____pinNumber4));
        bufp->chgIData(oldp+707,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt),32);
        bufp->chgIData(oldp+708,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq),32);
        bufp->chgIData(oldp+709,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt),32);
        bufp->chgCData(oldp+710,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__sign),2);
        bufp->chgBit(oldp+711,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 1U))));
        bufp->chgBit(oldp+712,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 1U))));
        bufp->chgBit(oldp+713,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 1U))));
        bufp->chgBit(oldp+714,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 1U) 
                                                  & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch) 
                                                 & (~ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux))))));
        bufp->chgBit(oldp+715,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                  ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux))))));
        bufp->chgBit(oldp+716,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 1U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 1U) 
                                                  & (~ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch)) 
                                                 & vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux)))));
        bufp->chgBit(oldp+717,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0xbU))));
        bufp->chgBit(oldp+718,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0xbU))));
        bufp->chgBit(oldp+719,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0xbU))));
        bufp->chgBit(oldp+720,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0xbU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                     >> 0xbU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                       >> 0xaU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                       >> 0xaU)))))));
        bufp->chgBit(oldp+721,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0xbU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+722,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0xbU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                     >> 0xbU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                        >> 0xaU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                      >> 0xaU))))));
        bufp->chgBit(oldp+723,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0xcU))));
        bufp->chgBit(oldp+724,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0xcU))));
        bufp->chgBit(oldp+725,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0xcU))));
        bufp->chgBit(oldp+726,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0xcU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                     >> 0xcU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                       >> 0xbU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                       >> 0xbU)))))));
        bufp->chgBit(oldp+727,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0xcU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+728,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0xcU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                     >> 0xcU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                        >> 0xbU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                      >> 0xbU))))));
        bufp->chgBit(oldp+729,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0xdU))));
        bufp->chgBit(oldp+730,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0xdU))));
        bufp->chgBit(oldp+731,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0xdU))));
        bufp->chgBit(oldp+732,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0xdU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                     >> 0xdU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                       >> 0xcU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                       >> 0xcU)))))));
        bufp->chgBit(oldp+733,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0xdU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+734,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0xdU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                     >> 0xdU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                        >> 0xcU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                      >> 0xcU))))));
        bufp->chgBit(oldp+735,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0xeU))));
        bufp->chgBit(oldp+736,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0xeU))));
        bufp->chgBit(oldp+737,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0xeU))));
        bufp->chgBit(oldp+738,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0xeU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                     >> 0xeU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                       >> 0xdU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                       >> 0xdU)))))));
        bufp->chgBit(oldp+739,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0xeU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+740,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0xeU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                     >> 0xeU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                        >> 0xdU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                      >> 0xdU))))));
        bufp->chgBit(oldp+741,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0xfU))));
        bufp->chgBit(oldp+742,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0xfU))));
        bufp->chgBit(oldp+743,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0xfU))));
        bufp->chgBit(oldp+744,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0xfU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                     >> 0xfU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                       >> 0xeU)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                       >> 0xeU)))))));
        bufp->chgBit(oldp+745,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0xfU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+746,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0xfU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                     >> 0xfU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                        >> 0xeU))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                      >> 0xeU))))));
        bufp->chgBit(oldp+747,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x10U))));
        bufp->chgBit(oldp+748,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x10U))));
        bufp->chgBit(oldp+749,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x10U))));
        bufp->chgBit(oldp+750,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x10U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x10U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0xfU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0xfU)))))));
        bufp->chgBit(oldp+751,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x10U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+752,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x10U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x10U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0xfU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+753,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x11U))));
        bufp->chgBit(oldp+754,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x11U))));
        bufp->chgBit(oldp+755,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x11U))));
        bufp->chgBit(oldp+756,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x11U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x11U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x10U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x10U)))))));
        bufp->chgBit(oldp+757,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x11U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+758,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x11U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x11U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x10U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+759,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x12U))));
        bufp->chgBit(oldp+760,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x12U))));
        bufp->chgBit(oldp+761,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x12U))));
        bufp->chgBit(oldp+762,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x12U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x12U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x11U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x11U)))))));
        bufp->chgBit(oldp+763,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x12U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+764,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x12U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x12U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x11U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+765,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x13U))));
        bufp->chgBit(oldp+766,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x13U))));
        bufp->chgBit(oldp+767,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x13U))));
        bufp->chgBit(oldp+768,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x13U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x13U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x12U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x12U)))))));
        bufp->chgBit(oldp+769,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x13U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+770,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x13U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x13U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x12U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+771,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x14U))));
        bufp->chgBit(oldp+772,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x14U))));
        bufp->chgBit(oldp+773,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x14U))));
        bufp->chgBit(oldp+774,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x14U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x14U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x13U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x13U)))))));
        bufp->chgBit(oldp+775,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x14U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+776,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x14U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x14U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x13U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+777,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 2U))));
        bufp->chgBit(oldp+778,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 2U))));
        bufp->chgBit(oldp+779,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 2U))));
        bufp->chgBit(oldp+780,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 2U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 1U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+781,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 2U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 1U))))));
        bufp->chgBit(oldp+782,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 2U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 2U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 1U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 1U))))));
        bufp->chgBit(oldp+783,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x15U))));
        bufp->chgBit(oldp+784,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x15U))));
        bufp->chgBit(oldp+785,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x15U))));
        bufp->chgBit(oldp+786,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x15U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x15U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x14U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x14U)))))));
        bufp->chgBit(oldp+787,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x15U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+788,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x15U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x15U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x14U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+789,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x16U))));
        bufp->chgBit(oldp+790,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x16U))));
        bufp->chgBit(oldp+791,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x16U))));
        bufp->chgBit(oldp+792,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x16U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x16U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x15U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x15U)))))));
        bufp->chgBit(oldp+793,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x16U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+794,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x16U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x16U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x15U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+795,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x17U))));
        bufp->chgBit(oldp+796,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x17U))));
        bufp->chgBit(oldp+797,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x17U))));
        bufp->chgBit(oldp+798,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x17U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x17U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x16U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x16U)))))));
        bufp->chgBit(oldp+799,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x17U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+800,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x17U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x17U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x16U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+801,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x18U))));
        bufp->chgBit(oldp+802,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x18U))));
        bufp->chgBit(oldp+803,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x18U))));
        bufp->chgBit(oldp+804,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x18U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x18U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x17U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x17U)))))));
        bufp->chgBit(oldp+805,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x18U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+806,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x18U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x18U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x17U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+807,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x19U))));
        bufp->chgBit(oldp+808,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x19U))));
        bufp->chgBit(oldp+809,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x19U))));
        bufp->chgBit(oldp+810,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x19U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x19U) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x18U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x18U)))))));
        bufp->chgBit(oldp+811,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x19U) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+812,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x19U) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x19U) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x18U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+813,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+814,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+815,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+816,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x1aU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x1aU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x19U)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x19U)))))));
        bufp->chgBit(oldp+817,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x1aU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+818,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x1aU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x1aU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x19U))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+819,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+820,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+821,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+822,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x1bU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x1bU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x1aU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x1aU)))))));
        bufp->chgBit(oldp+823,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x1bU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+824,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x1bU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x1bU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x1aU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+825,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+826,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+827,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+828,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x1cU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x1cU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x1bU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x1bU)))))));
        bufp->chgBit(oldp+829,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x1cU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+830,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x1cU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x1cU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x1bU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+831,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+832,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+833,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+834,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x1dU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x1dU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x1cU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x1cU)))))));
        bufp->chgBit(oldp+835,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x1dU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+836,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x1dU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x1dU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x1cU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+837,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+838,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+839,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+840,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x1eU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x1eU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x1dU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x1dU)))))));
        bufp->chgBit(oldp+841,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0x1eU) & 
                                      (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+842,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x1eU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x1eU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x1dU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+843,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 3U))));
        bufp->chgBit(oldp+844,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 3U))));
        bufp->chgBit(oldp+845,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 3U))));
        bufp->chgBit(oldp+846,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 3U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 2U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+847,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 3U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 2U))))));
        bufp->chgBit(oldp+848,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 3U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 2U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 2U))))));
        bufp->chgBit(oldp+849,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                >> 0x1fU)));
        bufp->chgBit(oldp+850,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                >> 0x1fU)));
        bufp->chgBit(oldp+851,((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                >> 0x1fU)));
        bufp->chgBit(oldp+852,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0x1fU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x1fU) 
                                        & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                           >> 0x1eU)) 
                                       & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                             >> 0x1eU)))))));
        bufp->chgBit(oldp+853,(((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                 >> 0x1fU) & (~ ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                  ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                 >> 0x1eU)))));
        bufp->chgBit(oldp+854,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0x1fU) | 
                                      (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                         >> 0x1fU) 
                                        & (~ (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                              >> 0x1eU))) 
                                       & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+855,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 4U))));
        bufp->chgBit(oldp+856,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 4U))));
        bufp->chgBit(oldp+857,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 4U))));
        bufp->chgBit(oldp+858,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 4U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 3U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+859,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 4U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 3U))))));
        bufp->chgBit(oldp+860,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 4U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 4U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 3U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 3U))))));
        bufp->chgBit(oldp+861,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 5U))));
        bufp->chgBit(oldp+862,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 5U))));
        bufp->chgBit(oldp+863,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 5U))));
        bufp->chgBit(oldp+864,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 5U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 4U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+865,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 5U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 4U))))));
        bufp->chgBit(oldp+866,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 5U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 4U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 4U))))));
        bufp->chgBit(oldp+867,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 6U))));
        bufp->chgBit(oldp+868,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 6U))));
        bufp->chgBit(oldp+869,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 6U))));
        bufp->chgBit(oldp+870,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 6U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 5U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+871,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 6U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 5U))))));
        bufp->chgBit(oldp+872,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 6U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 6U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 5U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 5U))))));
        bufp->chgBit(oldp+873,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 7U))));
        bufp->chgBit(oldp+874,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 7U))));
        bufp->chgBit(oldp+875,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 7U))));
        bufp->chgBit(oldp+876,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 7U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+877,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 7U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 6U))))));
        bufp->chgBit(oldp+878,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 7U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 7U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 6U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 6U))))));
        bufp->chgBit(oldp+879,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 8U))));
        bufp->chgBit(oldp+880,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 8U))));
        bufp->chgBit(oldp+881,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 8U))));
        bufp->chgBit(oldp+882,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 8U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 7U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+883,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 8U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+884,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 8U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 8U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 7U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 7U))))));
        bufp->chgBit(oldp+885,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 9U))));
        bufp->chgBit(oldp+886,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 9U))));
        bufp->chgBit(oldp+887,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 9U))));
        bufp->chgBit(oldp+888,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 9U) 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     >> 8U)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+889,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 9U) & (~ 
                                                 ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                   ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                  >> 8U))))));
        bufp->chgBit(oldp+890,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 9U) | (((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                   >> 9U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                      >> 8U))) 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                    >> 8U))))));
        bufp->chgBit(oldp+891,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                      >> 0xaU))));
        bufp->chgBit(oldp+892,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                      >> 0xaU))));
        bufp->chgBit(oldp+893,((1U & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                      >> 0xaU))));
        bufp->chgBit(oldp+894,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__ogt 
                                       >> 0xaU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                     >> 0xaU) 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                       >> 9U)) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                       >> 9U)))))));
        bufp->chgBit(oldp+895,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                       >> 0xaU) & (~ 
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                     ^ vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux) 
                                                    >> 9U))))));
        bufp->chgBit(oldp+896,((1U & ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__olt 
                                       >> 0xaU) | (
                                                   ((vlSelf->top__DOT__singleCycle__DOT__s8__DOT__s9__DOT__s2__DOT__oeq 
                                                     >> 0xaU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux_branch 
                                                        >> 9U))) 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__s8__DOT__outmux 
                                                      >> 9U))))));
        bufp->chgIData(oldp+897,(vlSelf->top__DOT__singleCycle__DOT__s8__DOT__ss__DOT__control_signal),21);
    }
    bufp->chgIData(oldp+898,(vlSelf->io_sw_i),18);
    bufp->chgSData(oldp+899,(vlSelf->io_lcd_o),12);
    bufp->chgCData(oldp+900,(vlSelf->io_ledg_o),8);
    bufp->chgIData(oldp+901,(vlSelf->io_ledr_o),18);
    bufp->chgCData(oldp+902,(vlSelf->io_hex0_o),7);
    bufp->chgCData(oldp+903,(vlSelf->io_hex1_o),7);
    bufp->chgCData(oldp+904,(vlSelf->io_hex2_o),7);
    bufp->chgCData(oldp+905,(vlSelf->io_hex3_o),7);
    bufp->chgCData(oldp+906,(vlSelf->io_hex4_o),7);
    bufp->chgCData(oldp+907,(vlSelf->io_hex5_o),7);
    bufp->chgCData(oldp+908,(vlSelf->io_hex6_o),7);
    bufp->chgCData(oldp+909,(vlSelf->io_hex7_o),7);
    bufp->chgIData(oldp+910,(vlSelf->pc_debug_o),32);
    bufp->chgBit(oldp+911,(vlSelf->clk_i));
    bufp->chgBit(oldp+912,(vlSelf->rst_ni));
    bufp->chgIData(oldp+913,(vlSelf->io_sw_i),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
