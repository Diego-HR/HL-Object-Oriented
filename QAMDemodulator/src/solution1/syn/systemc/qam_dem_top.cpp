// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.4
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "qam_dem_top.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_lv<16> qam_dem_top::ap_const_lv16_0 = "0000000000000000";
const sc_lv<12> qam_dem_top::ap_const_lv12_0 = "000000000000";
const sc_lv<28> qam_dem_top::ap_const_lv28_0 = "0000000000000000000000000000";
const sc_logic qam_dem_top::ap_const_logic_1 = sc_dt::Log_1;
const bool qam_dem_top::ap_true = true;
const sc_logic qam_dem_top::ap_const_logic_0 = sc_dt::Log_0;

qam_dem_top::qam_dem_top(sc_module_name name) : sc_module(name), mVcdFile(0) {
    qam_dem_top_mounstrito_U0 = new qam_dem_top_mounstrito("qam_dem_top_mounstrito_U0");
    qam_dem_top_mounstrito_U0->ap_clk(ap_clk);
    qam_dem_top_mounstrito_U0->ap_rst(ap_rst);
    qam_dem_top_mounstrito_U0->ap_start(qam_dem_top_mounstrito_U0_ap_start);
    qam_dem_top_mounstrito_U0->ap_done(qam_dem_top_mounstrito_U0_ap_done);
    qam_dem_top_mounstrito_U0->ap_continue(qam_dem_top_mounstrito_U0_ap_continue);
    qam_dem_top_mounstrito_U0->ap_idle(qam_dem_top_mounstrito_U0_ap_idle);
    qam_dem_top_mounstrito_U0->ap_ready(qam_dem_top_mounstrito_U0_ap_ready);
    qam_dem_top_mounstrito_U0->din_i_V(qam_dem_top_mounstrito_U0_din_i_V);
    qam_dem_top_mounstrito_U0->din_q_V(qam_dem_top_mounstrito_U0_din_q_V);
    qam_dem_top_mounstrito_U0->dout_mix_i_V(qam_dem_top_mounstrito_U0_dout_mix_i_V);
    qam_dem_top_mounstrito_U0->dout_mix_i_V_ap_vld(qam_dem_top_mounstrito_U0_dout_mix_i_V_ap_vld);
    qam_dem_top_mounstrito_U0->dout_mix_q_V(qam_dem_top_mounstrito_U0_dout_mix_q_V);
    qam_dem_top_mounstrito_U0->dout_mix_q_V_ap_vld(qam_dem_top_mounstrito_U0_dout_mix_q_V_ap_vld);
    qam_dem_top_mounstrito_U0->ph_in_i_V(qam_dem_top_mounstrito_U0_ph_in_i_V);
    qam_dem_top_mounstrito_U0->ph_in_q_V(qam_dem_top_mounstrito_U0_ph_in_q_V);
    qam_dem_top_mounstrito_U0->ph_out_i_V(qam_dem_top_mounstrito_U0_ph_out_i_V);
    qam_dem_top_mounstrito_U0->ph_out_i_V_ap_vld(qam_dem_top_mounstrito_U0_ph_out_i_V_ap_vld);
    qam_dem_top_mounstrito_U0->ph_out_q_V(qam_dem_top_mounstrito_U0_ph_out_q_V);
    qam_dem_top_mounstrito_U0->ph_out_q_V_ap_vld(qam_dem_top_mounstrito_U0_ph_out_q_V_ap_vld);
    qam_dem_top_mounstrito_U0->loop_integ_V(qam_dem_top_mounstrito_U0_loop_integ_V);
    qam_dem_top_mounstrito_U0->loop_integ_V_ap_vld(qam_dem_top_mounstrito_U0_loop_integ_V_ap_vld);
    qam_dem_top_mounstrito_U0->control_lf_p(qam_dem_top_mounstrito_U0_control_lf_p);
    qam_dem_top_mounstrito_U0->control_lf_i(qam_dem_top_mounstrito_U0_control_lf_i);
    qam_dem_top_mounstrito_U0->control_lf_out_gain(qam_dem_top_mounstrito_U0_control_lf_out_gain);
    qam_dem_top_mounstrito_U0->control_reg_clr(qam_dem_top_mounstrito_U0_control_reg_clr);
    qam_dem_top_mounstrito_U0->control_reg_init_V(qam_dem_top_mounstrito_U0_control_reg_init_V);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_sig_hs_done );

    SC_METHOD(thread_ap_idle);
    sensitive << ( qam_dem_top_mounstrito_U0_ap_idle );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_sig_top_allready );

    SC_METHOD(thread_ap_sig_hs_continue);

    SC_METHOD(thread_ap_sig_hs_done);
    sensitive << ( qam_dem_top_mounstrito_U0_ap_done );

    SC_METHOD(thread_ap_sig_top_allready);
    sensitive << ( qam_dem_top_mounstrito_U0_ap_ready );

    SC_METHOD(thread_dout_mix_i_V);
    sensitive << ( qam_dem_top_mounstrito_U0_dout_mix_i_V );

    SC_METHOD(thread_dout_mix_q_V);
    sensitive << ( qam_dem_top_mounstrito_U0_dout_mix_q_V );

    SC_METHOD(thread_loop_integ_V);
    sensitive << ( qam_dem_top_mounstrito_U0_loop_integ_V );

    SC_METHOD(thread_ph_out_i_V);
    sensitive << ( qam_dem_top_mounstrito_U0_ph_out_i_V );

    SC_METHOD(thread_ph_out_q_V);
    sensitive << ( qam_dem_top_mounstrito_U0_ph_out_q_V );

    SC_METHOD(thread_qam_dem_top_mounstrito_U0_ap_continue);
    sensitive << ( ap_sig_hs_continue );

    SC_METHOD(thread_qam_dem_top_mounstrito_U0_ap_start);
    sensitive << ( ap_start );

    SC_METHOD(thread_qam_dem_top_mounstrito_U0_control_lf_i);
    sensitive << ( control_lf_i );

    SC_METHOD(thread_qam_dem_top_mounstrito_U0_control_lf_out_gain);
    sensitive << ( control_lf_out_gain );

    SC_METHOD(thread_qam_dem_top_mounstrito_U0_control_lf_p);
    sensitive << ( control_lf_p );

    SC_METHOD(thread_qam_dem_top_mounstrito_U0_control_reg_clr);
    sensitive << ( control_reg_clr );

    SC_METHOD(thread_qam_dem_top_mounstrito_U0_control_reg_init_V);
    sensitive << ( control_reg_init_V );

    SC_METHOD(thread_qam_dem_top_mounstrito_U0_din_i_V);
    sensitive << ( din_i_V );

    SC_METHOD(thread_qam_dem_top_mounstrito_U0_din_q_V);
    sensitive << ( din_q_V );

    SC_METHOD(thread_qam_dem_top_mounstrito_U0_ph_in_i_V);
    sensitive << ( ph_in_i_V );

    SC_METHOD(thread_qam_dem_top_mounstrito_U0_ph_in_q_V);
    sensitive << ( ph_in_q_V );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_reg_procdone_qam_dem_top_mounstrito_U0 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "qam_dem_top_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, din_i_V, "(port)din_i_V");
    sc_trace(mVcdFile, din_q_V, "(port)din_q_V");
    sc_trace(mVcdFile, dout_mix_i_V, "(port)dout_mix_i_V");
    sc_trace(mVcdFile, dout_mix_q_V, "(port)dout_mix_q_V");
    sc_trace(mVcdFile, ph_in_i_V, "(port)ph_in_i_V");
    sc_trace(mVcdFile, ph_in_q_V, "(port)ph_in_q_V");
    sc_trace(mVcdFile, ph_out_i_V, "(port)ph_out_i_V");
    sc_trace(mVcdFile, ph_out_q_V, "(port)ph_out_q_V");
    sc_trace(mVcdFile, loop_integ_V, "(port)loop_integ_V");
    sc_trace(mVcdFile, control_qam_V, "(port)control_qam_V");
    sc_trace(mVcdFile, control_lf_p, "(port)control_lf_p");
    sc_trace(mVcdFile, control_lf_i, "(port)control_lf_i");
    sc_trace(mVcdFile, control_lf_out_gain, "(port)control_lf_out_gain");
    sc_trace(mVcdFile, control_reg_clr, "(port)control_reg_clr");
    sc_trace(mVcdFile, control_reg_init_V, "(port)control_reg_init_V");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_ap_start, "qam_dem_top_mounstrito_U0_ap_start");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_ap_done, "qam_dem_top_mounstrito_U0_ap_done");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_ap_continue, "qam_dem_top_mounstrito_U0_ap_continue");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_ap_idle, "qam_dem_top_mounstrito_U0_ap_idle");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_ap_ready, "qam_dem_top_mounstrito_U0_ap_ready");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_din_i_V, "qam_dem_top_mounstrito_U0_din_i_V");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_din_q_V, "qam_dem_top_mounstrito_U0_din_q_V");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_dout_mix_i_V, "qam_dem_top_mounstrito_U0_dout_mix_i_V");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_dout_mix_i_V_ap_vld, "qam_dem_top_mounstrito_U0_dout_mix_i_V_ap_vld");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_dout_mix_q_V, "qam_dem_top_mounstrito_U0_dout_mix_q_V");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_dout_mix_q_V_ap_vld, "qam_dem_top_mounstrito_U0_dout_mix_q_V_ap_vld");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_ph_in_i_V, "qam_dem_top_mounstrito_U0_ph_in_i_V");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_ph_in_q_V, "qam_dem_top_mounstrito_U0_ph_in_q_V");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_ph_out_i_V, "qam_dem_top_mounstrito_U0_ph_out_i_V");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_ph_out_i_V_ap_vld, "qam_dem_top_mounstrito_U0_ph_out_i_V_ap_vld");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_ph_out_q_V, "qam_dem_top_mounstrito_U0_ph_out_q_V");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_ph_out_q_V_ap_vld, "qam_dem_top_mounstrito_U0_ph_out_q_V_ap_vld");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_loop_integ_V, "qam_dem_top_mounstrito_U0_loop_integ_V");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_loop_integ_V_ap_vld, "qam_dem_top_mounstrito_U0_loop_integ_V_ap_vld");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_control_lf_p, "qam_dem_top_mounstrito_U0_control_lf_p");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_control_lf_i, "qam_dem_top_mounstrito_U0_control_lf_i");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_control_lf_out_gain, "qam_dem_top_mounstrito_U0_control_lf_out_gain");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_control_reg_clr, "qam_dem_top_mounstrito_U0_control_reg_clr");
    sc_trace(mVcdFile, qam_dem_top_mounstrito_U0_control_reg_init_V, "qam_dem_top_mounstrito_U0_control_reg_init_V");
    sc_trace(mVcdFile, ap_sig_hs_continue, "ap_sig_hs_continue");
    sc_trace(mVcdFile, ap_reg_procdone_qam_dem_top_mounstrito_U0, "ap_reg_procdone_qam_dem_top_mounstrito_U0");
    sc_trace(mVcdFile, ap_sig_hs_done, "ap_sig_hs_done");
    sc_trace(mVcdFile, ap_CS, "ap_CS");
    sc_trace(mVcdFile, ap_sig_top_allready, "ap_sig_top_allready");
#endif

    }
    mHdltvinHandle.open("qam_dem_top.hdltvin.dat");
    mHdltvoutHandle.open("qam_dem_top.hdltvout.dat");
}

qam_dem_top::~qam_dem_top() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete qam_dem_top_mounstrito_U0;
}

void qam_dem_top::thread_ap_clk_no_reset_() {
    ap_CS = ap_const_logic_0;
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_procdone_qam_dem_top_mounstrito_U0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_hs_done.read())) {
            ap_reg_procdone_qam_dem_top_mounstrito_U0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(qam_dem_top_mounstrito_U0_ap_done.read(), ap_const_logic_1)) {
            ap_reg_procdone_qam_dem_top_mounstrito_U0 = ap_const_logic_1;
        }
    }
}

void qam_dem_top::thread_ap_done() {
    ap_done = ap_sig_hs_done.read();
}

void qam_dem_top::thread_ap_idle() {
    if (esl_seteq<1,1,1>(qam_dem_top_mounstrito_U0_ap_idle.read(), ap_const_logic_1)) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void qam_dem_top::thread_ap_ready() {
    ap_ready = ap_sig_top_allready.read();
}

void qam_dem_top::thread_ap_sig_hs_continue() {
    ap_sig_hs_continue = ap_const_logic_1;
}

void qam_dem_top::thread_ap_sig_hs_done() {
    if (esl_seteq<1,1,1>(qam_dem_top_mounstrito_U0_ap_done.read(), ap_const_logic_1)) {
        ap_sig_hs_done = ap_const_logic_1;
    } else {
        ap_sig_hs_done = ap_const_logic_0;
    }
}

void qam_dem_top::thread_ap_sig_top_allready() {
    ap_sig_top_allready = qam_dem_top_mounstrito_U0_ap_ready.read();
}

void qam_dem_top::thread_dout_mix_i_V() {
    dout_mix_i_V = qam_dem_top_mounstrito_U0_dout_mix_i_V.read();
}

void qam_dem_top::thread_dout_mix_q_V() {
    dout_mix_q_V = qam_dem_top_mounstrito_U0_dout_mix_q_V.read();
}

void qam_dem_top::thread_loop_integ_V() {
    loop_integ_V = qam_dem_top_mounstrito_U0_loop_integ_V.read();
}

void qam_dem_top::thread_ph_out_i_V() {
    ph_out_i_V = qam_dem_top_mounstrito_U0_ph_out_i_V.read();
}

void qam_dem_top::thread_ph_out_q_V() {
    ph_out_q_V = qam_dem_top_mounstrito_U0_ph_out_q_V.read();
}

void qam_dem_top::thread_qam_dem_top_mounstrito_U0_ap_continue() {
    qam_dem_top_mounstrito_U0_ap_continue = ap_sig_hs_continue.read();
}

void qam_dem_top::thread_qam_dem_top_mounstrito_U0_ap_start() {
    qam_dem_top_mounstrito_U0_ap_start = ap_start.read();
}

void qam_dem_top::thread_qam_dem_top_mounstrito_U0_control_lf_i() {
    qam_dem_top_mounstrito_U0_control_lf_i = control_lf_i.read();
}

void qam_dem_top::thread_qam_dem_top_mounstrito_U0_control_lf_out_gain() {
    qam_dem_top_mounstrito_U0_control_lf_out_gain = control_lf_out_gain.read();
}

void qam_dem_top::thread_qam_dem_top_mounstrito_U0_control_lf_p() {
    qam_dem_top_mounstrito_U0_control_lf_p = control_lf_p.read();
}

void qam_dem_top::thread_qam_dem_top_mounstrito_U0_control_reg_clr() {
    qam_dem_top_mounstrito_U0_control_reg_clr = control_reg_clr.read();
}

void qam_dem_top::thread_qam_dem_top_mounstrito_U0_control_reg_init_V() {
    qam_dem_top_mounstrito_U0_control_reg_init_V = control_reg_init_V.read();
}

void qam_dem_top::thread_qam_dem_top_mounstrito_U0_din_i_V() {
    qam_dem_top_mounstrito_U0_din_i_V = din_i_V.read();
}

void qam_dem_top::thread_qam_dem_top_mounstrito_U0_din_q_V() {
    qam_dem_top_mounstrito_U0_din_q_V = din_q_V.read();
}

void qam_dem_top::thread_qam_dem_top_mounstrito_U0_ph_in_i_V() {
    qam_dem_top_mounstrito_U0_ph_in_i_V = ph_in_i_V.read();
}

void qam_dem_top::thread_qam_dem_top_mounstrito_U0_ph_in_q_V() {
    qam_dem_top_mounstrito_U0_ph_in_q_V = ph_in_q_V.read();
}

void qam_dem_top::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"din_i_V\" :  \"" << din_i_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"din_q_V\" :  \"" << din_q_V.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"dout_mix_i_V\" :  \"" << dout_mix_i_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dout_mix_q_V\" :  \"" << dout_mix_q_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ph_in_i_V\" :  \"" << ph_in_i_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ph_in_q_V\" :  \"" << ph_in_q_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ph_out_i_V\" :  \"" << ph_out_i_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ph_out_q_V\" :  \"" << ph_out_q_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"loop_integ_V\" :  \"" << loop_integ_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"control_qam_V\" :  \"" << control_qam_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"control_lf_p\" :  \"" << control_lf_p.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"control_lf_i\" :  \"" << control_lf_i.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"control_lf_out_gain\" :  \"" << control_lf_out_gain.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"control_reg_clr\" :  \"" << control_reg_clr.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"control_reg_init_V\" :  \"" << control_reg_init_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

