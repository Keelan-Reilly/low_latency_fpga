// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(rx_byte,7,0);
    VL_IN8(rx_valid,0,0);
    VL_OUT8(uart_tx,0,0);
    VL_OUT8(payload_valid,0,0);
    VL_OUT8(payload_byte,7,0);
    VL_OUT8(field_valid,0,0);
    VL_OUT8(msg_type,7,0);
    VL_OUT8(decision_valid,0,0);
    CData/*0:0*/ tb_top__DOT__payload_ready;
    CData/*0:0*/ tb_top__DOT__parser_ready;
    CData/*0:0*/ tb_top__DOT__uart_busy;
    CData/*0:0*/ tb_top__DOT__l2t_ready;
    CData/*7:0*/ tb_top__DOT__u_prg__DOT__rx2p_data;
    CData/*0:0*/ tb_top__DOT__u_prg__DOT__rx2p_data_valid;
    CData/*7:0*/ tb_top__DOT__u_prg__DOT__p2l_type_reg;
    CData/*0:0*/ tb_top__DOT__u_prg__DOT__p2l_data_valid;
    CData/*0:0*/ tb_top__DOT__u_prg__DOT__l2t_data_valid;
    CData/*2:0*/ tb_top__DOT__u_eth__DOT__state;
    CData/*2:0*/ tb_top__DOT__u_eth__DOT__pre_cnt;
    CData/*3:0*/ tb_top__DOT__u_eth__DOT__crc_cnt;
    CData/*7:0*/ tb_top__DOT__u_eth__DOT__len_hi;
    CData/*7:0*/ tb_top__DOT__u_eth__DOT__len_lo;
    CData/*0:0*/ tb_top__DOT__u_eth__DOT__mac_match;
    CData/*1:0*/ tb_top__DOT__u_pr__DOT__state;
    CData/*7:0*/ tb_top__DOT__u_pr__DOT__len_hi;
    CData/*7:0*/ tb_top__DOT__u_pr__DOT__len_lo;
    CData/*7:0*/ tb_top__DOT__u_pr__DOT__type_reg;
    CData/*1:0*/ tb_top__DOT__u_ut__DOT__state;
    CData/*1:0*/ tb_top__DOT__u_ut__DOT__nxt_state;
    CData/*5:0*/ tb_top__DOT__u_ut__DOT__bit_cnt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_top__DOT__u_eth__DOT__payload_len;
    SData/*15:0*/ tb_top__DOT__u_eth__DOT__payload_cnt;
    SData/*15:0*/ tb_top__DOT__u_eth__DOT__hdr_cnt;
    SData/*15:0*/ tb_top__DOT__u_pr__DOT__length;
    SData/*15:0*/ tb_top__DOT__u_pr__DOT__cnt;
    SData/*9:0*/ tb_top__DOT__u_ut__DOT__tick_cnt;
    VL_OUT(price,31,0);
    VL_OUT(volume,31,0);
    VL_OUT(t_ingress,31,0);
    VL_OUT(t_parser,31,0);
    VL_OUT(t_logic,31,0);
    VL_OUT(t_decision,31,0);
    VL_OUT(cycle_cnt,31,0);
    IData/*31:0*/ tb_top__DOT__decision_data;
    IData/*31:0*/ tb_top__DOT__u_prg__DOT__p2l_price_reg;
    IData/*31:0*/ tb_top__DOT__u_prg__DOT__l2t_data_reg;
    IData/*31:0*/ tb_top__DOT__u_eth__DOT__crc_reg;
    IData/*31:0*/ tb_top__DOT__u_eth__DOT__crc_recv_shift;
    IData/*31:0*/ tb_top__DOT__u_ut__DOT__shift_reg;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(order_id,63,0);
    QData/*47:0*/ tb_top__DOT__u_eth__DOT__dest_mac_shift;
    QData/*47:0*/ tb_top__DOT__u_eth__DOT__unnamedblk2__DOT__full_dest;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top___024root(Vtb_top__Syms* symsp, const char* v__name);
    ~Vtb_top___024root();
    VL_UNCOPYABLE(Vtb_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
