// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top__Syms.h"
#include "Vtb_top___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    VlWide<7>/*223:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x74757265U;
    __Vtemp_1[2U] = 0x5f636170U;
    __Vtemp_1[3U] = 0x74707574U;
    __Vtemp_1[4U] = 0x6d2f6f75U;
    __Vtemp_1[5U] = 0x2e2f7369U;
    __Vtemp_1[6U] = 0x2eU;
    vlSelfRef.tb_top__DOT__out_f = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(7, __Vtemp_1)
                                               , std::string{"w"});
    ;
    __Vtemp_2[0U] = 0x2e766364U;
    __Vtemp_2[1U] = 0x64756d70U;
    __Vtemp_2[2U] = 0x766c745fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_2));
    VL_PRINTF_MT("-Info: tb_top.sv:80: $dumpvar ignored, as Verilated without --trace\n");
    __Vtemp_3[0U] = 0x2e6d656dU;
    __Vtemp_3[1U] = 0x6d706c65U;
    __Vtemp_3[2U] = 0x732f7361U;
    __Vtemp_3[3U] = 0x73616765U;
    __Vtemp_3[4U] = 0x2f6d6573U;
    __Vtemp_3[5U] = 0x2e2eU;
    VL_READMEM_N(true, 8, 45, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_3)
                 ,  &(vlSelfRef.tb_top__DOT__mem), 0
                 , ~0ULL);
    vlSelfRef.tb_top__DOT__clk = 0U;
    vlSelfRef.tb_top__DOT__rst_n = 0U;
    vlSelfRef.tb_top__DOT__rx_valid = 0U;
    vlSelfRef.tb_top__DOT__rx_byte = 0U;
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         90);
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         90);
    vlSelfRef.tb_top__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [1U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [2U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [3U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [4U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [5U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [6U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [7U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [8U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [9U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0xaU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0xbU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0xcU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0xdU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0xeU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0xfU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x10U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x11U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x12U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x13U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x14U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x15U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x16U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x17U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x18U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x19U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x1aU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x1bU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x1cU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x1dU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x1eU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x1fU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x20U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x21U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x22U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x23U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x24U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x25U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x26U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x27U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x28U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x29U];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x2aU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x2bU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         95);
    vlSelfRef.tb_top__DOT__rx_valid = 1U;
    vlSelfRef.tb_top__DOT__rx_byte = vlSelfRef.tb_top__DOT__mem
        [0x2cU];
    co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb_top.sv", 
                                                         101);
    vlSelfRef.tb_top__DOT__rx_valid = 0U;
    tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x3e8U;
    while (VL_LTS_III(32, 0U, tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top.clk)", 
                                                             "tb_top.sv", 
                                                             105);
        tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_FCLOSE_I(vlSelfRef.tb_top__DOT__out_f); VL_FINISH_MT("tb_top.sv", 108, "");
}

VL_INLINE_OPT VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_top.sv", 
                                             61);
        vlSelfRef.tb_top__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top___024root___eval_triggers__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_top__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_top__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__rst_n__0 
        = vlSelfRef.tb_top__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__Vfuncout;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__data;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__data = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__Vfuncout;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__data;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__data = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c = 0;
    // Body
    if (vlSelfRef.tb_top__DOT__rst_n) {
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__state))) {
                if ((0x363U == (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt))) {
                    vlSelfRef.tb_top__DOT__uart_tx = 1U;
                    vlSelfRef.__Vdly__tb_top__DOT__u_ut__DOT__tick_cnt = 0U;
                } else {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ut__DOT__tick_cnt 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt)));
                }
            } else if ((0x363U == (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt))) {
                vlSelfRef.tb_top__DOT__u_ut__DOT__bit_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__bit_cnt)));
                vlSelfRef.__Vdly__tb_top__DOT__u_ut__DOT__tick_cnt = 0U;
                vlSelfRef.tb_top__DOT__uart_tx = (1U 
                                                  & vlSelfRef.tb_top__DOT__u_ut__DOT__shift_reg);
                vlSelfRef.tb_top__DOT__u_ut__DOT__shift_reg 
                    = VL_SHIFTR_III(32,32,32, vlSelfRef.tb_top__DOT__u_ut__DOT__shift_reg, 1U);
            } else {
                vlSelfRef.__Vdly__tb_top__DOT__u_ut__DOT__tick_cnt 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt)));
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__state))) {
            if ((0x363U == (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt))) {
                vlSelfRef.tb_top__DOT__uart_tx = 0U;
                vlSelfRef.__Vdly__tb_top__DOT__u_ut__DOT__tick_cnt = 0U;
            } else {
                vlSelfRef.__Vdly__tb_top__DOT__u_ut__DOT__tick_cnt 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt)));
            }
        } else {
            if (vlSelfRef.tb_top__DOT__decision_valid) {
                vlSelfRef.tb_top__DOT__u_ut__DOT__shift_reg 
                    = vlSelfRef.tb_top__DOT__decision_data;
            }
            vlSelfRef.tb_top__DOT__uart_tx = 1U;
        }
        vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt 
            = vlSelfRef.__Vdly__tb_top__DOT__u_ut__DOT__tick_cnt;
        vlSelfRef.tb_top__DOT__u_ut__DOT__state = vlSelfRef.tb_top__DOT__u_ut__DOT__nxt_state;
        vlSelfRef.tb_top__DOT__u_ut__DOT__nxt_state 
            = vlSelfRef.tb_top__DOT__u_ut__DOT__state;
        vlSelfRef.tb_top__DOT__decision_valid = 0U;
        if ((((IData)(vlSelfRef.tb_top__DOT__field_valid) 
              & (0x54U == (IData)(vlSelfRef.tb_top__DOT__msg_type))) 
             & (0x2710U > vlSelfRef.tb_top__DOT__price))) {
            vlSelfRef.tb_top__DOT__decision_data = vlSelfRef.tb_top__DOT__price;
            vlSelfRef.tb_top__DOT__decision_valid = 1U;
        }
    } else {
        vlSelfRef.tb_top__DOT__u_ut__DOT__bit_cnt = 0U;
        vlSelfRef.tb_top__DOT__uart_tx = 1U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ut__DOT__tick_cnt = 0U;
        vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt 
            = vlSelfRef.__Vdly__tb_top__DOT__u_ut__DOT__tick_cnt;
        vlSelfRef.tb_top__DOT__u_ut__DOT__state = 0U;
        vlSelfRef.tb_top__DOT__u_ut__DOT__nxt_state 
            = vlSelfRef.tb_top__DOT__u_ut__DOT__state;
        vlSelfRef.tb_top__DOT__decision_valid = 0U;
    }
    if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__state))) {
            if ((0x363U == (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt))) {
                vlSelfRef.tb_top__DOT__u_ut__DOT__nxt_state = 0U;
            }
        } else if (((0x363U == (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt)) 
                    & (0x20U == (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__bit_cnt)))) {
            vlSelfRef.tb_top__DOT__u_ut__DOT__nxt_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__state))) {
        if ((0x363U == (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt))) {
            vlSelfRef.tb_top__DOT__u_ut__DOT__nxt_state = 2U;
        }
    } else if (vlSelfRef.tb_top__DOT__decision_valid) {
        vlSelfRef.tb_top__DOT__u_ut__DOT__nxt_state = 1U;
    }
    if (vlSelfRef.tb_top__DOT__rst_n) {
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__state))) {
                if (((IData)(vlSelfRef.tb_top__DOT__payload_valid) 
                     & (((IData)(3U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)) 
                        < (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__length)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__cnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)));
                }
            } else {
                vlSelfRef.tb_top__DOT__field_valid = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__state))) {
            if (vlSelfRef.tb_top__DOT__payload_valid) {
                if ((0x54U != (IData)(vlSelfRef.tb_top__DOT__msg_type))) {
                    if ((0x54U != (IData)(vlSelfRef.tb_top__DOT__msg_type))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: parser.sv:54: Assertion failed in %Ntb_top.u_pr: unique case, but none matched for '8'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,vlSymsp->name(),
                                         8,(IData)(vlSelfRef.tb_top__DOT__msg_type));
                            VL_STOP_MT("/Users/keelanreilly/Desktop/low_latency_fpga/tools/../hdl/parser.sv", 54, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: parser.sv:54: Assertion failed in %Ntb_top.u_pr: unique case, but multiple matches found for '8'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name(),
                                     8,(IData)(vlSelfRef.tb_top__DOT__msg_type));
                        VL_STOP_MT("/Users/keelanreilly/Desktop/low_latency_fpga/tools/../hdl/parser.sv", 54, "");
                    }
                }
                vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)));
                if ((0x54U == (IData)(vlSelfRef.tb_top__DOT__msg_type))) {
                    if ((8U > (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                        vlSelfRef.tb_top__DOT__order_id 
                            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_top__DOT__order_id, 8U) 
                               | (QData)((IData)(vlSelfRef.tb_top__DOT__payload_byte)));
                    } else if ((0xcU > (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                        vlSelfRef.tb_top__DOT__price 
                            = (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_top__DOT__price, 8U) 
                               | (IData)(vlSelfRef.tb_top__DOT__payload_byte));
                    } else if ((0x10U > (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                        vlSelfRef.tb_top__DOT__volume 
                            = (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_top__DOT__volume, 8U) 
                               | (IData)(vlSelfRef.tb_top__DOT__payload_byte));
                    }
                }
                if ((((IData)(3U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)) 
                     == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__length))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__cnt = 0U;
                }
            }
        } else {
            vlSelfRef.tb_top__DOT__field_valid = 0U;
            if (vlSelfRef.tb_top__DOT__payload_valid) {
                if ((0U == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__len_hi 
                        = vlSelfRef.tb_top__DOT__payload_byte;
                } else if ((1U == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__len_lo 
                        = vlSelfRef.tb_top__DOT__payload_byte;
                } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                    vlSelfRef.tb_top__DOT__msg_type 
                        = vlSelfRef.tb_top__DOT__payload_byte;
                }
                vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)));
                if ((2U == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                    vlSelfRef.tb_top__DOT__u_pr__DOT__length 
                        = (((IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__len_hi) 
                            << 8U) | (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__len_lo));
                    vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__cnt = 0U;
                }
            }
        }
        vlSelfRef.tb_top__DOT__u_pr__DOT__state = vlSelfRef.tb_top__DOT__u_pr__DOT__nxt_state;
    } else {
        vlSelfRef.tb_top__DOT__u_pr__DOT__state = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__len_hi = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__len_lo = 0U;
        vlSelfRef.tb_top__DOT__u_pr__DOT__length = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__cnt = 0U;
        vlSelfRef.tb_top__DOT__field_valid = 0U;
    }
    if (vlSelfRef.tb_top__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
            vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__pre_cnt = 0U;
        } else if ((1U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
            if (((IData)(vlSelfRef.tb_top__DOT__rx_valid) 
                 & (0x55U == (IData)(vlSelfRef.tb_top__DOT__rx_byte)))) {
                vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__pre_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__pre_cnt)));
            }
        } else if ((2U != (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
            if ((3U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
                if (vlSelfRef.tb_top__DOT__rx_valid) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__hdr_cnt)));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__data 
                        = vlSelfRef.tb_top__DOT__rx_byte;
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                        = vlSelfRef.tb_top__DOT__u_eth__DOT__crc_shift;
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                        = (__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                           ^ ((IData)(__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__data) 
                              << 0x18U));
                    if ((0xfU == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__hdr_cnt))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__payload_len = 0x2eU;
                        vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__payload_cnt = 0U;
                    }
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__Vfuncout 
                        = __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__c;
                    vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__crc_shift 
                        = __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__Vfuncout;
                }
            } else if ((4U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
                if (((IData)(vlSelfRef.tb_top__DOT__rx_valid) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__payload_cnt) 
                        < (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__payload_len)))) {
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__data 
                        = vlSelfRef.tb_top__DOT__rx_byte;
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                        = vlSelfRef.tb_top__DOT__u_eth__DOT__crc_shift;
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                        = (__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                           ^ ((IData)(__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__data) 
                              << 0x18U));
                    if (vlSelfRef.tb_top__DOT__payload_ready) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__payload_cnt 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__payload_cnt)));
                        vlSelfRef.tb_top__DOT__payload_byte 
                            = vlSelfRef.tb_top__DOT__rx_byte;
                        vlSelfRef.tb_top__DOT__payload_valid = 1U;
                    }
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__Vfuncout 
                        = __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__c;
                    vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__crc_shift 
                        = __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__Vfuncout;
                } else {
                    vlSelfRef.tb_top__DOT__payload_valid = 0U;
                }
            }
        }
        vlSelfRef.tb_top__DOT__u_eth__DOT__state = vlSelfRef.tb_top__DOT__u_eth__DOT__nxt_state;
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__pre_cnt = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__payload_cnt = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__payload_len = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__crc_shift = 0xffffffffU;
        vlSelfRef.tb_top__DOT__payload_valid = 0U;
        vlSelfRef.tb_top__DOT__u_eth__DOT__state = 0U;
    }
    vlSelfRef.tb_top__DOT__u_pr__DOT__len_hi = vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__len_hi;
    vlSelfRef.tb_top__DOT__u_pr__DOT__len_lo = vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__len_lo;
    vlSelfRef.tb_top__DOT__u_pr__DOT__cnt = vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__cnt;
    vlSelfRef.tb_top__DOT__u_eth__DOT__crc_shift = vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__crc_shift;
    vlSelfRef.tb_top__DOT__u_eth__DOT__pre_cnt = vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__pre_cnt;
    vlSelfRef.tb_top__DOT__u_eth__DOT__hdr_cnt = vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt;
    vlSelfRef.tb_top__DOT__u_eth__DOT__payload_len 
        = vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__payload_len;
    vlSelfRef.tb_top__DOT__u_eth__DOT__payload_cnt 
        = vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__payload_cnt;
    vlSelfRef.tb_top__DOT__u_pr__DOT__nxt_state = vlSelfRef.tb_top__DOT__u_pr__DOT__state;
    if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__state))) {
            if ((((IData)(3U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)) 
                 == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__length))) {
                vlSelfRef.tb_top__DOT__u_pr__DOT__nxt_state = 0U;
            }
        } else {
            vlSelfRef.tb_top__DOT__u_pr__DOT__nxt_state = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__state))) {
        if ((((IData)(3U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)) 
             == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__length))) {
            vlSelfRef.tb_top__DOT__u_pr__DOT__nxt_state = 2U;
        }
    } else if (((0U == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)) 
                & (IData)(vlSelfRef.tb_top__DOT__payload_valid))) {
        vlSelfRef.tb_top__DOT__u_pr__DOT__nxt_state = 0U;
    } else if (((2U == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)) 
                & (IData)(vlSelfRef.tb_top__DOT__payload_valid))) {
        vlSelfRef.tb_top__DOT__u_pr__DOT__nxt_state 
            = ((0x54U == (IData)(vlSelfRef.tb_top__DOT__payload_byte))
                ? 1U : 3U);
    }
}
