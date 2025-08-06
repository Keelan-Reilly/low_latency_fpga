// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top___024root.h"

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_top___024root___act_sequent__TOP__0(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_top___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_top___024root___act_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___act_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top___024root___nba_sequent__TOP__2(vlSelf);
        Vtb_top___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__crc_shift 
        = vlSelfRef.tb_top__DOT__u_eth__DOT__crc_shift;
    vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__pre_cnt 
        = vlSelfRef.tb_top__DOT__u_eth__DOT__pre_cnt;
    vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt 
        = vlSelfRef.tb_top__DOT__u_eth__DOT__hdr_cnt;
    vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__payload_len 
        = vlSelfRef.tb_top__DOT__u_eth__DOT__payload_len;
    vlSelfRef.__Vdly__tb_top__DOT__u_eth__DOT__payload_cnt 
        = vlSelfRef.tb_top__DOT__u_eth__DOT__payload_cnt;
    vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__len_hi 
        = vlSelfRef.tb_top__DOT__u_pr__DOT__len_hi;
    vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__len_lo 
        = vlSelfRef.tb_top__DOT__u_pr__DOT__len_lo;
    vlSelfRef.__Vdly__tb_top__DOT__u_pr__DOT__cnt = vlSelfRef.tb_top__DOT__u_pr__DOT__cnt;
    vlSelfRef.__Vdly__tb_top__DOT__u_ut__DOT__tick_cnt 
        = vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt;
}

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_top__DOT__out_f)))) {
        VL_FWRITEF_NX(vlSelfRef.tb_top__DOT__out_f,"%0b\n",0,
                      1,vlSelfRef.tb_top__DOT__uart_tx);
    }
}

void Vtb_top___024root___timing_commit(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___timing_commit\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h50ca02e9__0.commit(
                                                   "@(posedge tb_top.clk)");
    }
}

void Vtb_top___024root___timing_resume(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___timing_resume\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h50ca02e9__0.resume(
                                                   "@(posedge tb_top.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_top___024root___eval_triggers__act(Vtb_top___024root* vlSelf);

bool Vtb_top___024root___eval_phase__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_top___024root___eval_triggers__act(vlSelf);
    Vtb_top___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_top___024root___timing_resume(vlSelf);
        Vtb_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_top___024root___eval_phase__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__nba(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top___024root___eval(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_top.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_top.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_debug_assertions\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
