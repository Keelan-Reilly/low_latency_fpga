// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_top__DOT__clk;
    CData/*0:0*/ tb_top__DOT__rst_n;
    CData/*7:0*/ tb_top__DOT__rx_byte;
    CData/*0:0*/ tb_top__DOT__rx_valid;
    CData/*7:0*/ tb_top__DOT__payload_byte;
    CData/*0:0*/ tb_top__DOT__payload_valid;
    CData/*0:0*/ tb_top__DOT__payload_ready;
    CData/*7:0*/ tb_top__DOT__msg_type;
    CData/*0:0*/ tb_top__DOT__field_valid;
    CData/*0:0*/ tb_top__DOT__decision_valid;
    CData/*0:0*/ tb_top__DOT__uart_tx;
    CData/*2:0*/ tb_top__DOT__u_eth__DOT__state;
    CData/*2:0*/ tb_top__DOT__u_eth__DOT__nxt_state;
    CData/*2:0*/ tb_top__DOT__u_eth__DOT__pre_cnt;
    CData/*1:0*/ tb_top__DOT__u_pr__DOT__state;
    CData/*1:0*/ tb_top__DOT__u_pr__DOT__nxt_state;
    CData/*7:0*/ tb_top__DOT__u_pr__DOT__len_hi;
    CData/*7:0*/ tb_top__DOT__u_pr__DOT__len_lo;
    CData/*5:0*/ tb_top__DOT__u_ut__DOT__bit_cnt;
    CData/*1:0*/ tb_top__DOT__u_ut__DOT__state;
    CData/*1:0*/ tb_top__DOT__u_ut__DOT__nxt_state;
    CData/*2:0*/ __Vdly__tb_top__DOT__u_eth__DOT__pre_cnt;
    CData/*7:0*/ __Vdly__tb_top__DOT__u_pr__DOT__len_hi;
    CData/*7:0*/ __Vdly__tb_top__DOT__u_pr__DOT__len_lo;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_top__DOT__u_eth__DOT__hdr_cnt;
    SData/*15:0*/ tb_top__DOT__u_eth__DOT__payload_len;
    SData/*15:0*/ tb_top__DOT__u_eth__DOT__payload_cnt;
    SData/*15:0*/ tb_top__DOT__u_pr__DOT__length;
    SData/*15:0*/ tb_top__DOT__u_pr__DOT__cnt;
    SData/*9:0*/ tb_top__DOT__u_ut__DOT__tick_cnt;
    SData/*15:0*/ __Vdly__tb_top__DOT__u_eth__DOT__hdr_cnt;
    SData/*15:0*/ __Vdly__tb_top__DOT__u_eth__DOT__payload_len;
    SData/*15:0*/ __Vdly__tb_top__DOT__u_eth__DOT__payload_cnt;
    SData/*15:0*/ __Vdly__tb_top__DOT__u_pr__DOT__cnt;
    SData/*9:0*/ __Vdly__tb_top__DOT__u_ut__DOT__tick_cnt;
    IData/*31:0*/ tb_top__DOT__price;
    IData/*31:0*/ tb_top__DOT__volume;
    IData/*31:0*/ tb_top__DOT__decision_data;
    IData/*31:0*/ tb_top__DOT__out_f;
    IData/*31:0*/ tb_top__DOT__u_eth__DOT__crc_shift;
    IData/*31:0*/ tb_top__DOT__u_ut__DOT__shift_reg;
    IData/*31:0*/ __Vdly__tb_top__DOT__u_eth__DOT__crc_shift;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_top__DOT__order_id;
    VlUnpacked<CData/*7:0*/, 45> tb_top__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h50ca02e9__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

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
