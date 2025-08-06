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
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__parser_ready = 1U;
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
            VL_FATAL_MT("tb_top.sv", 3, "", "Settle region did not converge.");
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
    vlSelfRef.tb_top__DOT__payload_ready = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data_valid)) 
                                                  | (IData)(vlSelfRef.tb_top__DOT__parser_ready)));
    vlSelfRef.tb_top__DOT__l2t_ready = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__l2t_data_valid)) 
                                              | (~ (IData)(vlSelfRef.tb_top__DOT__uart_busy))));
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
    } else if (vlSelfRef.tb_top__DOT__u_prg__DOT__l2t_data_valid) {
        vlSelfRef.tb_top__DOT__u_ut__DOT__nxt_state = 1U;
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->rx_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5165233808670255665ull);
    vlSelf->rx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13133491208690242300ull);
    vlSelf->uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1761512799854230840ull);
    vlSelf->payload_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2176467603763705949ull);
    vlSelf->payload_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13164836401285759525ull);
    vlSelf->field_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12259774853700995060ull);
    vlSelf->msg_type = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11446285417486708179ull);
    vlSelf->decision_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8756974317132670490ull);
    vlSelf->order_id = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 299721438818937156ull);
    vlSelf->price = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2643329332563602126ull);
    vlSelf->volume = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7699327401757349171ull);
    vlSelf->t_ingress = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7867020519261017246ull);
    vlSelf->t_parser = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14560516640335043805ull);
    vlSelf->t_logic = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1554844325716119321ull);
    vlSelf->t_decision = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4298710004797622715ull);
    vlSelf->cycle_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10774249576030602819ull);
    vlSelf->tb_top__DOT__payload_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2192666773345656821ull);
    vlSelf->tb_top__DOT__parser_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10303587105747038956ull);
    vlSelf->tb_top__DOT__decision_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9942249076898778352ull);
    vlSelf->tb_top__DOT__uart_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9239397716852114557ull);
    vlSelf->tb_top__DOT__l2t_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10221937359926658298ull);
    vlSelf->tb_top__DOT__u_prg__DOT__rx2p_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16656853881024967858ull);
    vlSelf->tb_top__DOT__u_prg__DOT__rx2p_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7611679189719326926ull);
    vlSelf->tb_top__DOT__u_prg__DOT__p2l_type_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17887028387156055058ull);
    vlSelf->tb_top__DOT__u_prg__DOT__p2l_price_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3871568230780112466ull);
    vlSelf->tb_top__DOT__u_prg__DOT__p2l_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16601068329020178298ull);
    vlSelf->tb_top__DOT__u_prg__DOT__l2t_data_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14884705251365461945ull);
    vlSelf->tb_top__DOT__u_prg__DOT__l2t_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4259009920587637411ull);
    vlSelf->tb_top__DOT__u_eth__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15029872069736386114ull);
    vlSelf->tb_top__DOT__u_eth__DOT__pre_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9677294354185211448ull);
    vlSelf->tb_top__DOT__u_eth__DOT__crc_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3471571338738608581ull);
    vlSelf->tb_top__DOT__u_eth__DOT__len_hi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1008969014406353816ull);
    vlSelf->tb_top__DOT__u_eth__DOT__len_lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5654943995401555009ull);
    vlSelf->tb_top__DOT__u_eth__DOT__payload_len = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13022119508406076304ull);
    vlSelf->tb_top__DOT__u_eth__DOT__payload_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12352227462054457809ull);
    vlSelf->tb_top__DOT__u_eth__DOT__hdr_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11811636319214650912ull);
    vlSelf->tb_top__DOT__u_eth__DOT__dest_mac_shift = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 213407336598968690ull);
    vlSelf->tb_top__DOT__u_eth__DOT__mac_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11046987912423589886ull);
    vlSelf->tb_top__DOT__u_eth__DOT__crc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3562341431141590154ull);
    vlSelf->tb_top__DOT__u_eth__DOT__crc_recv_shift = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11610044735412980045ull);
    vlSelf->tb_top__DOT__u_eth__DOT__unnamedblk2__DOT__full_dest = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 14981516863851163883ull);
    vlSelf->tb_top__DOT__u_pr__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17398361975033380899ull);
    vlSelf->tb_top__DOT__u_pr__DOT__length = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12712719073720236990ull);
    vlSelf->tb_top__DOT__u_pr__DOT__len_hi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14816641791114838859ull);
    vlSelf->tb_top__DOT__u_pr__DOT__len_lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15253744090986000762ull);
    vlSelf->tb_top__DOT__u_pr__DOT__type_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3465334659838072642ull);
    vlSelf->tb_top__DOT__u_pr__DOT__cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7211336559187267301ull);
    vlSelf->tb_top__DOT__u_ut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15423345634115139869ull);
    vlSelf->tb_top__DOT__u_ut__DOT__nxt_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3653946603978984379ull);
    vlSelf->tb_top__DOT__u_ut__DOT__tick_cnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4913081159965478533ull);
    vlSelf->tb_top__DOT__u_ut__DOT__bit_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11570072368728196379ull);
    vlSelf->tb_top__DOT__u_ut__DOT__shift_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2290359341845418559ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
}
