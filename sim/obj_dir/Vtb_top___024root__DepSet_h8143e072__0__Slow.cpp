// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top___024root.h"

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__rst_n__0 
        = vlSelfRef.tb_top__DOT__rst_n;
}

VL_ATTR_COLD void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_settle(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_settle\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_top.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__u_ut__DOT__nxt_state = vlSelfRef.tb_top__DOT__u_ut__DOT__state;
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
    vlSelfRef.tb_top__DOT__u_eth__DOT__nxt_state = vlSelfRef.tb_top__DOT__u_eth__DOT__state;
    if ((0U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
        if (((IData)(vlSelfRef.tb_top__DOT__rx_valid) 
             & (0x55U == (IData)(vlSelfRef.tb_top__DOT__rx_byte)))) {
            vlSelfRef.tb_top__DOT__u_eth__DOT__nxt_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
        if (vlSelfRef.tb_top__DOT__rx_valid) {
            if (((0x55U == (IData)(vlSelfRef.tb_top__DOT__rx_byte)) 
                 & (6U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__pre_cnt)))) {
                vlSelfRef.tb_top__DOT__u_eth__DOT__nxt_state = 2U;
            } else if ((0x55U != (IData)(vlSelfRef.tb_top__DOT__rx_byte))) {
                vlSelfRef.tb_top__DOT__u_eth__DOT__nxt_state = 0U;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
        if (((IData)(vlSelfRef.tb_top__DOT__rx_valid) 
             & (0xd5U == (IData)(vlSelfRef.tb_top__DOT__rx_byte)))) {
            vlSelfRef.tb_top__DOT__u_eth__DOT__nxt_state = 3U;
        } else if (vlSelfRef.tb_top__DOT__rx_valid) {
            vlSelfRef.tb_top__DOT__u_eth__DOT__nxt_state = 0U;
        }
    } else if ((3U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
        if (((0xfU == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__hdr_cnt)) 
             & (IData)(vlSelfRef.tb_top__DOT__rx_valid))) {
            vlSelfRef.tb_top__DOT__u_eth__DOT__nxt_state = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
        if (((IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__payload_cnt) 
             == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__payload_len))) {
            vlSelfRef.tb_top__DOT__u_eth__DOT__nxt_state = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
        vlSelfRef.tb_top__DOT__u_eth__DOT__nxt_state = 0U;
    }
}

VL_ATTR_COLD void Vtb_top___024root___eval_triggers__stl(Vtb_top___024root* vlSelf);

VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_top.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_top.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    for (int __Vi0 = 0; __Vi0 < 45; ++__Vi0) {
        vlSelf->tb_top__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12926046022934801104ull);
    }
    vlSelf->tb_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16256328344204653681ull);
    vlSelf->tb_top__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6801375050781125300ull);
    vlSelf->tb_top__DOT__rx_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12484317215364442667ull);
    vlSelf->tb_top__DOT__rx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4735705288045343685ull);
    vlSelf->tb_top__DOT__payload_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15096353030394722340ull);
    vlSelf->tb_top__DOT__payload_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16994808619953399410ull);
    vlSelf->tb_top__DOT__payload_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2192666773345656821ull);
    vlSelf->tb_top__DOT__msg_type = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18380169528817455308ull);
    vlSelf->tb_top__DOT__field_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6182406673016798552ull);
    vlSelf->tb_top__DOT__order_id = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12147254740973874959ull);
    vlSelf->tb_top__DOT__price = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17500232272735865057ull);
    vlSelf->tb_top__DOT__volume = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9244419378934772312ull);
    vlSelf->tb_top__DOT__decision_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11999937777870635984ull);
    vlSelf->tb_top__DOT__decision_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9942249076898778352ull);
    vlSelf->tb_top__DOT__uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12891834612522065827ull);
    vlSelf->tb_top__DOT__out_f = 0;
    vlSelf->tb_top__DOT__u_eth__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15029872069736386114ull);
    vlSelf->tb_top__DOT__u_eth__DOT__nxt_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18337473456808293874ull);
    vlSelf->tb_top__DOT__u_eth__DOT__pre_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9677294354185211448ull);
    vlSelf->tb_top__DOT__u_eth__DOT__hdr_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11811636319214650912ull);
    vlSelf->tb_top__DOT__u_eth__DOT__payload_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13022119508406076304ull);
    vlSelf->tb_top__DOT__u_eth__DOT__payload_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12352227462054457809ull);
    vlSelf->tb_top__DOT__u_eth__DOT__crc_shift = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15434207982722022300ull);
    vlSelf->tb_top__DOT__u_pr__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17398361975033380899ull);
    vlSelf->tb_top__DOT__u_pr__DOT__nxt_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10513485671288268173ull);
    vlSelf->tb_top__DOT__u_pr__DOT__length = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12712719073720236990ull);
    vlSelf->tb_top__DOT__u_pr__DOT__cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7211336559187267301ull);
    vlSelf->tb_top__DOT__u_pr__DOT__len_hi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14816641791114838859ull);
    vlSelf->tb_top__DOT__u_pr__DOT__len_lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15253744090986000762ull);
    vlSelf->tb_top__DOT__u_ut__DOT__tick_cnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4913081159965478533ull);
    vlSelf->tb_top__DOT__u_ut__DOT__bit_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11570072368728196379ull);
    vlSelf->tb_top__DOT__u_ut__DOT__shift_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2290359341845418559ull);
    vlSelf->tb_top__DOT__u_ut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15423345634115139869ull);
    vlSelf->tb_top__DOT__u_ut__DOT__nxt_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3653946603978984379ull);
    vlSelf->__Vdly__tb_top__DOT__u_eth__DOT__pre_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15225394973043375135ull);
    vlSelf->__Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10087419748159212526ull);
    vlSelf->__Vdly__tb_top__DOT__u_eth__DOT__payload_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16387614231996863267ull);
    vlSelf->__Vdly__tb_top__DOT__u_eth__DOT__payload_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3815185305069583539ull);
    vlSelf->__Vdly__tb_top__DOT__u_eth__DOT__crc_shift = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13002601296434904864ull);
    vlSelf->__Vdly__tb_top__DOT__u_pr__DOT__cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5816135081887672177ull);
    vlSelf->__Vdly__tb_top__DOT__u_pr__DOT__len_hi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10059493630364691774ull);
    vlSelf->__Vdly__tb_top__DOT__u_pr__DOT__len_lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4841118318345664121ull);
    vlSelf->__Vdly__tb_top__DOT__u_ut__DOT__tick_cnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13625391961846476898ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9069298637648042572ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8822103849715780970ull);
}
