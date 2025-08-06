// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top___024root.h"

void Vtb_top___024root___eval_act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__Vfuncout;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc_in;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc_in = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__data_byte;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__data_byte = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__Vfuncout;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc_in;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc_in = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__data_byte;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__data_byte = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc;
    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc = 0;
    IData/*31:0*/ __Vdly__cycle_cnt;
    __Vdly__cycle_cnt = 0;
    CData/*2:0*/ __Vdly__tb_top__DOT__u_eth__DOT__state;
    __Vdly__tb_top__DOT__u_eth__DOT__state = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__u_eth__DOT__crc_recv_shift;
    __Vdly__tb_top__DOT__u_eth__DOT__crc_recv_shift = 0;
    CData/*3:0*/ __Vdly__tb_top__DOT__u_eth__DOT__crc_cnt;
    __Vdly__tb_top__DOT__u_eth__DOT__crc_cnt = 0;
    CData/*2:0*/ __Vdly__tb_top__DOT__u_eth__DOT__pre_cnt;
    __Vdly__tb_top__DOT__u_eth__DOT__pre_cnt = 0;
    CData/*7:0*/ __Vdly__tb_top__DOT__u_eth__DOT__len_hi;
    __Vdly__tb_top__DOT__u_eth__DOT__len_hi = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__u_eth__DOT__payload_len;
    __Vdly__tb_top__DOT__u_eth__DOT__payload_len = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__u_eth__DOT__payload_cnt;
    __Vdly__tb_top__DOT__u_eth__DOT__payload_cnt = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__u_eth__DOT__crc_reg;
    __Vdly__tb_top__DOT__u_eth__DOT__crc_reg = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt;
    __Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__u_pr__DOT__cnt;
    __Vdly__tb_top__DOT__u_pr__DOT__cnt = 0;
    CData/*1:0*/ __Vdly__tb_top__DOT__u_pr__DOT__state;
    __Vdly__tb_top__DOT__u_pr__DOT__state = 0;
    QData/*63:0*/ __Vdly__order_id;
    __Vdly__order_id = 0;
    IData/*31:0*/ __Vdly__price;
    __Vdly__price = 0;
    IData/*31:0*/ __Vdly__volume;
    __Vdly__volume = 0;
    CData/*7:0*/ __Vdly__tb_top__DOT__u_pr__DOT__len_hi;
    __Vdly__tb_top__DOT__u_pr__DOT__len_hi = 0;
    CData/*7:0*/ __Vdly__tb_top__DOT__u_pr__DOT__len_lo;
    __Vdly__tb_top__DOT__u_pr__DOT__len_lo = 0;
    SData/*9:0*/ __Vdly__tb_top__DOT__u_ut__DOT__tick_cnt;
    __Vdly__tb_top__DOT__u_ut__DOT__tick_cnt = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__uart_busy;
    __Vdly__tb_top__DOT__uart_busy = 0;
    // Body
    __Vdly__cycle_cnt = vlSelfRef.cycle_cnt;
    __Vdly__tb_top__DOT__u_eth__DOT__state = vlSelfRef.tb_top__DOT__u_eth__DOT__state;
    __Vdly__tb_top__DOT__u_eth__DOT__crc_recv_shift 
        = vlSelfRef.tb_top__DOT__u_eth__DOT__crc_recv_shift;
    __Vdly__tb_top__DOT__u_eth__DOT__crc_cnt = vlSelfRef.tb_top__DOT__u_eth__DOT__crc_cnt;
    __Vdly__tb_top__DOT__u_eth__DOT__pre_cnt = vlSelfRef.tb_top__DOT__u_eth__DOT__pre_cnt;
    __Vdly__tb_top__DOT__u_eth__DOT__len_hi = vlSelfRef.tb_top__DOT__u_eth__DOT__len_hi;
    __Vdly__tb_top__DOT__u_eth__DOT__payload_len = vlSelfRef.tb_top__DOT__u_eth__DOT__payload_len;
    __Vdly__tb_top__DOT__u_eth__DOT__payload_cnt = vlSelfRef.tb_top__DOT__u_eth__DOT__payload_cnt;
    __Vdly__tb_top__DOT__u_eth__DOT__crc_reg = vlSelfRef.tb_top__DOT__u_eth__DOT__crc_reg;
    __Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt = vlSelfRef.tb_top__DOT__u_eth__DOT__hdr_cnt;
    __Vdly__tb_top__DOT__u_pr__DOT__cnt = vlSelfRef.tb_top__DOT__u_pr__DOT__cnt;
    __Vdly__tb_top__DOT__u_pr__DOT__state = vlSelfRef.tb_top__DOT__u_pr__DOT__state;
    __Vdly__order_id = vlSelfRef.order_id;
    __Vdly__price = vlSelfRef.price;
    __Vdly__volume = vlSelfRef.volume;
    __Vdly__tb_top__DOT__u_pr__DOT__len_hi = vlSelfRef.tb_top__DOT__u_pr__DOT__len_hi;
    __Vdly__tb_top__DOT__u_pr__DOT__len_lo = vlSelfRef.tb_top__DOT__u_pr__DOT__len_lo;
    __Vdly__tb_top__DOT__uart_busy = vlSelfRef.tb_top__DOT__uart_busy;
    __Vdly__tb_top__DOT__u_ut__DOT__tick_cnt = vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt;
    if (vlSelfRef.rst_n) {
        __Vdly__cycle_cnt = ((IData)(1U) + vlSelfRef.cycle_cnt);
        if (((IData)(vlSelfRef.tb_top__DOT__payload_ready) 
             & (IData)(vlSelfRef.payload_valid))) {
            vlSelfRef.t_ingress = vlSelfRef.cycle_cnt;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__parser_ready) 
             & (IData)(vlSelfRef.field_valid))) {
            vlSelfRef.t_parser = vlSelfRef.cycle_cnt;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__l2t_ready) 
             & (IData)(vlSelfRef.decision_valid))) {
            vlSelfRef.t_logic = vlSelfRef.cycle_cnt;
            vlSelfRef.t_decision = vlSelfRef.cycle_cnt;
        }
        vlSelfRef.cycle_cnt = __Vdly__cycle_cnt;
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__state))) {
                __Vdly__tb_top__DOT__u_ut__DOT__tick_cnt 
                    = ((0x363U == (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt))
                        ? 0U : (0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt))));
                vlSelfRef.uart_tx = 1U;
            } else {
                vlSelfRef.uart_tx = (1U & vlSelfRef.tb_top__DOT__u_ut__DOT__shift_reg);
                if ((0x363U == (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt))) {
                    __Vdly__tb_top__DOT__u_ut__DOT__tick_cnt = 0U;
                    vlSelfRef.tb_top__DOT__u_ut__DOT__shift_reg 
                        = VL_SHIFTR_III(32,32,32, vlSelfRef.tb_top__DOT__u_ut__DOT__shift_reg, 1U);
                    vlSelfRef.tb_top__DOT__u_ut__DOT__bit_cnt 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__bit_cnt)));
                } else {
                    __Vdly__tb_top__DOT__u_ut__DOT__tick_cnt 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__state))) {
            __Vdly__tb_top__DOT__u_ut__DOT__tick_cnt 
                = ((0x363U == (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt))
                    ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt))));
            vlSelfRef.uart_tx = 0U;
        } else {
            __Vdly__tb_top__DOT__u_ut__DOT__tick_cnt = 0U;
            vlSelfRef.tb_top__DOT__u_ut__DOT__bit_cnt = 0U;
            __Vdly__tb_top__DOT__uart_busy = 0U;
            vlSelfRef.uart_tx = 1U;
            if (vlSelfRef.tb_top__DOT__u_prg__DOT__l2t_data_valid) {
                vlSelfRef.tb_top__DOT__u_ut__DOT__shift_reg 
                    = vlSelfRef.tb_top__DOT__u_prg__DOT__l2t_data_reg;
                __Vdly__tb_top__DOT__uart_busy = 1U;
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__l2t_ready) 
             & (IData)(vlSelfRef.decision_valid))) {
            vlSelfRef.tb_top__DOT__u_prg__DOT__l2t_data_valid = 1U;
            vlSelfRef.tb_top__DOT__u_prg__DOT__l2t_data_reg 
                = vlSelfRef.tb_top__DOT__decision_data;
        } else if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__uart_busy)))) {
            vlSelfRef.tb_top__DOT__u_prg__DOT__l2t_data_valid = 0U;
        }
        vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt 
            = __Vdly__tb_top__DOT__u_ut__DOT__tick_cnt;
        vlSelfRef.tb_top__DOT__u_ut__DOT__state = vlSelfRef.tb_top__DOT__u_ut__DOT__nxt_state;
        vlSelfRef.tb_top__DOT__uart_busy = __Vdly__tb_top__DOT__uart_busy;
    } else {
        __Vdly__cycle_cnt = 0U;
        vlSelfRef.t_ingress = 0U;
        vlSelfRef.t_parser = 0U;
        vlSelfRef.t_logic = 0U;
        vlSelfRef.t_decision = 0U;
        vlSelfRef.cycle_cnt = __Vdly__cycle_cnt;
        __Vdly__tb_top__DOT__u_ut__DOT__tick_cnt = 0U;
        vlSelfRef.tb_top__DOT__u_ut__DOT__bit_cnt = 0U;
        vlSelfRef.tb_top__DOT__u_ut__DOT__shift_reg = 0U;
        __Vdly__tb_top__DOT__uart_busy = 0U;
        vlSelfRef.uart_tx = 1U;
        vlSelfRef.tb_top__DOT__u_ut__DOT__tick_cnt 
            = __Vdly__tb_top__DOT__u_ut__DOT__tick_cnt;
        vlSelfRef.tb_top__DOT__u_ut__DOT__state = 0U;
        vlSelfRef.tb_top__DOT__u_prg__DOT__l2t_data_valid = 0U;
        vlSelfRef.tb_top__DOT__uart_busy = __Vdly__tb_top__DOT__uart_busy;
    }
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
    vlSelfRef.decision_valid = ((IData)(vlSelfRef.rst_n) 
                                && (((IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__p2l_data_valid) 
                                     & (0x54U == (IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__p2l_type_reg))) 
                                    & (0x4e20U > vlSelfRef.tb_top__DOT__u_prg__DOT__p2l_price_reg)));
    if (vlSelfRef.rst_n) {
        if ((((IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__p2l_data_valid) 
              & (0x54U == (IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__p2l_type_reg))) 
             & (0x4e20U > vlSelfRef.tb_top__DOT__u_prg__DOT__p2l_price_reg))) {
            vlSelfRef.tb_top__DOT__decision_data = vlSelfRef.tb_top__DOT__u_prg__DOT__p2l_price_reg;
        }
    } else {
        vlSelfRef.tb_top__DOT__decision_data = 0U;
    }
    vlSelfRef.tb_top__DOT__u_prg__DOT__p2l_data_valid 
        = ((IData)(vlSelfRef.rst_n) && ((IData)(vlSelfRef.tb_top__DOT__parser_ready) 
                                        & (IData)(vlSelfRef.field_valid)));
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.tb_top__DOT__parser_ready) 
             & (IData)(vlSelfRef.field_valid))) {
            vlSelfRef.tb_top__DOT__u_prg__DOT__p2l_price_reg 
                = vlSelfRef.price;
            vlSelfRef.tb_top__DOT__u_prg__DOT__p2l_type_reg 
                = vlSelfRef.msg_type;
        }
    }
    if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__state)) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data_valid))))) {
        VL_WRITEF_NX("%0t: parser WAIT_HEADER saw byte %02x (cnt=%0#)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data),
                     16,vlSelfRef.tb_top__DOT__u_pr__DOT__cnt);
    }
    if (VL_UNLIKELY((((1U == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__state)) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data_valid))))) {
        VL_WRITEF_NX("%0t: parser READ_FIELDS saw byte %02x (cnt=%0#)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data),
                     16,vlSelfRef.tb_top__DOT__u_pr__DOT__cnt);
    }
    if (VL_UNLIKELY(((2U == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__state))))) {
        VL_WRITEF_NX("%0t: parser DISPATCH msg_type=%02x order_id=%016x price=%0# volume=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__type_reg),
                     64,vlSelfRef.order_id,32,vlSelfRef.price,
                     32,vlSelfRef.volume);
    }
    if (vlSelfRef.rst_n) {
        vlSelfRef.field_valid = 0U;
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__state))) {
                if (vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data_valid) {
                    __Vdly__tb_top__DOT__u_pr__DOT__cnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)));
                    if ((((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)) 
                         == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__length))) {
                        __Vdly__tb_top__DOT__u_pr__DOT__state = 0U;
                        __Vdly__tb_top__DOT__u_pr__DOT__cnt = 0U;
                    }
                }
            } else {
                __Vdly__order_id = vlSelfRef.order_id;
                __Vdly__price = vlSelfRef.price;
                __Vdly__volume = vlSelfRef.volume;
                vlSelfRef.field_valid = 1U;
                vlSelfRef.msg_type = vlSelfRef.tb_top__DOT__u_pr__DOT__type_reg;
                __Vdly__tb_top__DOT__u_pr__DOT__state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__state))) {
            if (vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data_valid) {
                if ((8U > (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                    __Vdly__order_id = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.order_id, 8U) 
                                        | (QData)((IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data)));
                } else if ((0xcU > (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                    __Vdly__price = (VL_SHIFTL_III(32,32,32, vlSelfRef.price, 8U) 
                                     | (IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data));
                } else if ((0x10U > (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                    __Vdly__volume = (VL_SHIFTL_III(32,32,32, vlSelfRef.volume, 8U) 
                                      | (IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data));
                }
                __Vdly__tb_top__DOT__u_pr__DOT__cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)));
                if ((((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)) 
                     == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__length))) {
                    __Vdly__tb_top__DOT__u_pr__DOT__state = 2U;
                    __Vdly__tb_top__DOT__u_pr__DOT__cnt = 0U;
                }
            }
        } else if (vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data_valid) {
            if ((0U == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                __Vdly__tb_top__DOT__u_pr__DOT__cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)));
                __Vdly__tb_top__DOT__u_pr__DOT__len_hi 
                    = vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data;
            } else if ((1U == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                __Vdly__tb_top__DOT__u_pr__DOT__cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt)));
                __Vdly__tb_top__DOT__u_pr__DOT__len_lo 
                    = vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data;
            } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__cnt))) {
                vlSelfRef.tb_top__DOT__u_pr__DOT__type_reg 
                    = vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data;
                vlSelfRef.tb_top__DOT__u_pr__DOT__length 
                    = (((IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__len_hi) 
                        << 8U) | (IData)(vlSelfRef.tb_top__DOT__u_pr__DOT__len_lo));
                __Vdly__tb_top__DOT__u_pr__DOT__cnt = 0U;
                __Vdly__tb_top__DOT__u_pr__DOT__state 
                    = ((0x54U == (IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data))
                        ? 1U : 3U);
            }
        }
        vlSelfRef.tb_top__DOT__u_pr__DOT__cnt = __Vdly__tb_top__DOT__u_pr__DOT__cnt;
        vlSelfRef.tb_top__DOT__u_pr__DOT__state = __Vdly__tb_top__DOT__u_pr__DOT__state;
        vlSelfRef.order_id = __Vdly__order_id;
        vlSelfRef.price = __Vdly__price;
        vlSelfRef.volume = __Vdly__volume;
        vlSelfRef.tb_top__DOT__u_pr__DOT__len_hi = __Vdly__tb_top__DOT__u_pr__DOT__len_hi;
        vlSelfRef.tb_top__DOT__u_pr__DOT__len_lo = __Vdly__tb_top__DOT__u_pr__DOT__len_lo;
        if (((IData)(vlSelfRef.tb_top__DOT__payload_ready) 
             & (IData)(vlSelfRef.payload_valid))) {
            vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data_valid = 1U;
            vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data 
                = vlSelfRef.payload_byte;
        } else if (vlSelfRef.tb_top__DOT__parser_ready) {
            vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data_valid = 0U;
        }
    } else {
        __Vdly__order_id = 0ULL;
        __Vdly__price = 0U;
        __Vdly__volume = 0U;
        __Vdly__tb_top__DOT__u_pr__DOT__state = 0U;
        __Vdly__tb_top__DOT__u_pr__DOT__len_hi = 0U;
        __Vdly__tb_top__DOT__u_pr__DOT__len_lo = 0U;
        vlSelfRef.tb_top__DOT__u_pr__DOT__length = 0U;
        vlSelfRef.tb_top__DOT__u_pr__DOT__type_reg = 0U;
        __Vdly__tb_top__DOT__u_pr__DOT__cnt = 0U;
        vlSelfRef.field_valid = 0U;
        vlSelfRef.tb_top__DOT__u_pr__DOT__cnt = __Vdly__tb_top__DOT__u_pr__DOT__cnt;
        vlSelfRef.tb_top__DOT__u_pr__DOT__state = __Vdly__tb_top__DOT__u_pr__DOT__state;
        vlSelfRef.order_id = __Vdly__order_id;
        vlSelfRef.price = __Vdly__price;
        vlSelfRef.volume = __Vdly__volume;
        vlSelfRef.tb_top__DOT__u_pr__DOT__len_hi = __Vdly__tb_top__DOT__u_pr__DOT__len_hi;
        vlSelfRef.tb_top__DOT__u_pr__DOT__len_lo = __Vdly__tb_top__DOT__u_pr__DOT__len_lo;
        vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data_valid = 0U;
    }
    if (VL_UNLIKELY(((((1U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state)) 
                       & (IData)(vlSelfRef.rx_valid)) 
                      & (0x55U == (IData)(vlSelfRef.rx_byte)))))) {
        VL_WRITEF_NX("%0t: eth_rx PREAMBLE saw #%0# 0x55\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__pre_cnt)));
    }
    if (VL_UNLIKELY((((2U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state)) 
                      & (IData)(vlSelfRef.rx_valid))))) {
        VL_WRITEF_NX("%0t: eth_rx ENTERED SFD on byte %02x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (IData)(vlSelfRef.rx_byte));
    }
    if (vlSelfRef.rst_n) {
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
                __Vdly__tb_top__DOT__u_eth__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
                if (vlSelfRef.rx_valid) {
                    __Vdly__tb_top__DOT__u_eth__DOT__crc_recv_shift 
                        = ((vlSelfRef.tb_top__DOT__u_eth__DOT__crc_recv_shift 
                            << 8U) | (IData)(vlSelfRef.rx_byte));
                    __Vdly__tb_top__DOT__u_eth__DOT__crc_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__crc_cnt)));
                    if ((3U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__crc_cnt))) {
                        if ((vlSelfRef.tb_top__DOT__u_eth__DOT__crc_recv_shift 
                             == vlSelfRef.tb_top__DOT__u_eth__DOT__crc_reg)) {
                            VL_WRITEF_NX("%0t: eht_rx CRC OK, frame accepted\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9);
                        } else {
                            VL_WRITEF_NX("%0t: eth_rx CRC ERROR, frame dropped\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9);
                        }
                        __Vdly__tb_top__DOT__u_eth__DOT__state = 0U;
                        __Vdly__tb_top__DOT__u_eth__DOT__pre_cnt = 0U;
                        vlSelfRef.payload_valid = 0U;
                    }
                }
            } else if (VL_UNLIKELY((vlSelfRef.rx_valid))) {
                __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__data_byte 
                    = vlSelfRef.rx_byte;
                __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc_in 
                    = vlSelfRef.tb_top__DOT__u_eth__DOT__crc_reg;
                VL_WRITEF_NX("%0t: eth_rx PAYLD[%0#]=%02x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,16,(IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__payload_cnt),
                             8,vlSelfRef.rx_byte);
                __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                    = (__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc_in 
                       ^ VL_SHIFTL_III(32,32,32, (1U 
                                                  & (IData)(__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__data_byte)), 0x18U));
                if ((0U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__payload_cnt))) {
                    __Vdly__tb_top__DOT__u_eth__DOT__len_hi 
                        = vlSelfRef.rx_byte;
                } else if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__payload_cnt))))) {
                    __Vdly__tb_top__DOT__u_eth__DOT__payload_len 
                        = (((IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__len_hi) 
                            << 8U) | (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__len_lo));
                    VL_WRITEF_NX("%0t: eth_rx PAYLD len=%0#\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__len_hi));
                    vlSelfRef.tb_top__DOT__u_eth__DOT__len_lo 
                        = vlSelfRef.rx_byte;
                }
                if (((IData)(vlSelfRef.tb_top__DOT__payload_ready) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__mac_match))) {
                    vlSelfRef.payload_byte = vlSelfRef.rx_byte;
                    vlSelfRef.payload_valid = 1U;
                }
                __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                    = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                        >> 0x1fU) ? (0x4c11db7U ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U))
                        : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U));
                __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                    = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                        >> 0x1fU) ? (0x4c11db7U ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U))
                        : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U));
                __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                    = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                        >> 0x1fU) ? (0x4c11db7U ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U))
                        : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U));
                __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                    = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                        >> 0x1fU) ? (0x4c11db7U ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U))
                        : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U));
                __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                    = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                        >> 0x1fU) ? (0x4c11db7U ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U))
                        : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U));
                __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                    = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                        >> 0x1fU) ? (0x4c11db7U ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U))
                        : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U));
                __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                    = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                        >> 0x1fU) ? (0x4c11db7U ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U))
                        : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U));
                __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                    = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc 
                        >> 0x1fU) ? (0x4c11db7U ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U))
                        : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc, 1U));
                __Vdly__tb_top__DOT__u_eth__DOT__payload_cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__payload_cnt)));
                if ((((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__payload_cnt)) 
                     == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__payload_len))) {
                    __Vdly__tb_top__DOT__u_eth__DOT__state = 5U;
                    __Vdly__tb_top__DOT__u_eth__DOT__crc_cnt = 0U;
                }
                __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__Vfuncout 
                    = __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__crc;
                __Vdly__tb_top__DOT__u_eth__DOT__crc_reg 
                    = __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__0__Vfuncout;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
                if (VL_UNLIKELY((vlSelfRef.rx_valid))) {
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__data_byte 
                        = vlSelfRef.rx_byte;
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc_in 
                        = vlSelfRef.tb_top__DOT__u_eth__DOT__crc_reg;
                    VL_WRITEF_NX("%0t: eth_rx HDR[%0#]=%02x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,16,(IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__hdr_cnt),
                                 8,vlSelfRef.rx_byte);
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                        = (__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc_in 
                           ^ VL_SHIFTL_III(32,32,32, 
                                           (1U & (IData)(__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__data_byte)), 0x18U));
                    __Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__hdr_cnt)));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U));
                    if ((6U > (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__hdr_cnt))) {
                        vlSelfRef.tb_top__DOT__u_eth__DOT__unnamedblk2__DOT__full_dest 
                            = ((0xffffffffff00ULL & 
                                (vlSelfRef.tb_top__DOT__u_eth__DOT__dest_mac_shift 
                                 << 8U)) | (QData)((IData)(vlSelfRef.rx_byte)));
                        vlSelfRef.tb_top__DOT__u_eth__DOT__dest_mac_shift 
                            = vlSelfRef.tb_top__DOT__u_eth__DOT__unnamedblk2__DOT__full_dest;
                        if (VL_UNLIKELY(((5U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__hdr_cnt))))) {
                            VL_WRITEF_NX("%0t: eth_rx MAC match=%b\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,1,(IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__mac_match));
                            vlSelfRef.tb_top__DOT__u_eth__DOT__mac_match 
                                = ((0x1122334455ULL 
                                    == vlSelfRef.tb_top__DOT__u_eth__DOT__unnamedblk2__DOT__full_dest) 
                                   | (0xffffffffffffULL 
                                      == vlSelfRef.tb_top__DOT__u_eth__DOT__unnamedblk2__DOT__full_dest));
                        }
                    }
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U));
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                        = ((__Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc 
                            >> 0x1fU) ? (0x4c11db7U 
                                         ^ VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U))
                            : VL_SHIFTL_III(32,32,32, __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc, 1U));
                    if ((0xdU == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__hdr_cnt))) {
                        __Vdly__tb_top__DOT__u_eth__DOT__state = 4U;
                        __Vdly__tb_top__DOT__u_eth__DOT__payload_cnt = 0U;
                    }
                    __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__Vfuncout 
                        = __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__crc;
                    __Vdly__tb_top__DOT__u_eth__DOT__crc_reg 
                        = __Vfunc_tb_top__DOT__u_eth__DOT__crc32_next__1__Vfuncout;
                }
            } else if (vlSelfRef.rx_valid) {
                if (VL_UNLIKELY(((0xd5U == (IData)(vlSelfRef.rx_byte))))) {
                    VL_WRITEF_NX("%0t: eth_rx SFD detected\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9);
                    __Vdly__tb_top__DOT__u_eth__DOT__state = 3U;
                    __Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt = 0U;
                    vlSelfRef.tb_top__DOT__u_eth__DOT__dest_mac_shift = 0ULL;
                    vlSelfRef.tb_top__DOT__u_eth__DOT__mac_match = 0U;
                    __Vdly__tb_top__DOT__u_eth__DOT__crc_reg = 0xffffffffU;
                    __Vdly__tb_top__DOT__u_eth__DOT__crc_recv_shift = 0U;
                } else {
                    __Vdly__tb_top__DOT__u_eth__DOT__state = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__state))) {
            if (vlSelfRef.rx_valid) {
                if ((0x55U == (IData)(vlSelfRef.rx_byte))) {
                    __Vdly__tb_top__DOT__u_eth__DOT__pre_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__pre_cnt)));
                    if (VL_UNLIKELY(((6U == (IData)(vlSelfRef.tb_top__DOT__u_eth__DOT__pre_cnt))))) {
                        VL_WRITEF_NX("%0t: eth_rx ENTER SFD\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9);
                        __Vdly__tb_top__DOT__u_eth__DOT__state = 2U;
                    }
                } else {
                    __Vdly__tb_top__DOT__u_eth__DOT__state = 0U;
                    __Vdly__tb_top__DOT__u_eth__DOT__pre_cnt = 0U;
                }
            }
        } else {
            vlSelfRef.payload_valid = 0U;
            if (((IData)(vlSelfRef.rx_valid) & (0x55U 
                                                == (IData)(vlSelfRef.rx_byte)))) {
                __Vdly__tb_top__DOT__u_eth__DOT__state = 1U;
                __Vdly__tb_top__DOT__u_eth__DOT__pre_cnt = 1U;
            }
        }
    } else {
        __Vdly__tb_top__DOT__u_eth__DOT__state = 0U;
        __Vdly__tb_top__DOT__u_eth__DOT__pre_cnt = 0U;
        __Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt = 0U;
        __Vdly__tb_top__DOT__u_eth__DOT__payload_cnt = 0U;
        __Vdly__tb_top__DOT__u_eth__DOT__payload_len = 0U;
        vlSelfRef.tb_top__DOT__u_eth__DOT__mac_match = 0U;
        vlSelfRef.payload_valid = 0U;
        __Vdly__tb_top__DOT__u_eth__DOT__crc_cnt = 0U;
        vlSelfRef.tb_top__DOT__u_eth__DOT__dest_mac_shift = 0ULL;
        __Vdly__tb_top__DOT__u_eth__DOT__crc_reg = 0xffffffffU;
        __Vdly__tb_top__DOT__u_eth__DOT__crc_recv_shift = 0U;
    }
    vlSelfRef.tb_top__DOT__u_eth__DOT__state = __Vdly__tb_top__DOT__u_eth__DOT__state;
    vlSelfRef.tb_top__DOT__u_eth__DOT__crc_recv_shift 
        = __Vdly__tb_top__DOT__u_eth__DOT__crc_recv_shift;
    vlSelfRef.tb_top__DOT__u_eth__DOT__crc_cnt = __Vdly__tb_top__DOT__u_eth__DOT__crc_cnt;
    vlSelfRef.tb_top__DOT__u_eth__DOT__pre_cnt = __Vdly__tb_top__DOT__u_eth__DOT__pre_cnt;
    vlSelfRef.tb_top__DOT__u_eth__DOT__len_hi = __Vdly__tb_top__DOT__u_eth__DOT__len_hi;
    vlSelfRef.tb_top__DOT__u_eth__DOT__payload_len 
        = __Vdly__tb_top__DOT__u_eth__DOT__payload_len;
    vlSelfRef.tb_top__DOT__u_eth__DOT__payload_cnt 
        = __Vdly__tb_top__DOT__u_eth__DOT__payload_cnt;
    vlSelfRef.tb_top__DOT__u_eth__DOT__crc_reg = __Vdly__tb_top__DOT__u_eth__DOT__crc_reg;
    vlSelfRef.tb_top__DOT__u_eth__DOT__hdr_cnt = __Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt;
    vlSelfRef.tb_top__DOT__payload_ready = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_prg__DOT__rx2p_data_valid)) 
                                                  | (IData)(vlSelfRef.tb_top__DOT__parser_ready)));
}

void Vtb_top___024root___eval_triggers__act(Vtb_top___024root* vlSelf);

bool Vtb_top___024root___eval_phase__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
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
            VL_FATAL_MT("tb_top.sv", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("tb_top.sv", 3, "", "Active region did not converge.");
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
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.rx_valid & 0xfeU)))) {
        Verilated::overWidthError("rx_valid");}
}
#endif  // VL_DEBUG
