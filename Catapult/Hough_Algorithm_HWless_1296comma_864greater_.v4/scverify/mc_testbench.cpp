// ----------------------------------------------------------------------------
// SystemC Testbench Body
//
//    HLS version: 10.5a/871028 Production Release
//       HLS date: Tue Apr 14 07:55:32 PDT 2020
//  Flow Packages: HDL_Tcl 8.0a, SCVerify 10.4
//
//   Generated by: user2@edatools.ee.duth.gr
// Generated date: Wed Jul 07 19:51:02 EEST 2021
//
// ----------------------------------------------------------------------------
// 
// -------------------------------------
// mc_testbench
// SCVerify mc_testbench SC_MODULE
// -------------------------------------
// 
#include "mc_testbench.h"
#include <mc_testbench_util.h>
#include <mc_simulator_extensions.h>

mc_testbench* mc_testbench::that;
bool testbench::enable_idle_sync_mode;
unsigned short testbench::idle_sync_stable_cycles;
void testbench::set_enable_stalls(bool flag) { mc_testbench::set_enable_stalls(flag); }
void testbench::reset_request() { mc_testbench::that->reset_request(); }
void mc_testbench_reset_request() { mc_testbench::that->reset_request(); }
bool testbench::data_in_ignore;
void mc_testbench_data_in_skip(bool v) { testbench::data_in_skip = v; }
bool testbench::data_in_skip;
bool testbench::data_in_skip_quiet;
bool testbench::data_in_skip_once;
bool testbench::data_in_skip_noerr;
int  testbench::data_in_array_comp_first;
int  testbench::data_in_array_comp_last;
mc_wait_ctrl testbench::data_in_wait_ctrl;
bool testbench::widthIn_ignore;
void mc_testbench_widthIn_skip(bool v) { testbench::widthIn_skip = v; }
bool testbench::widthIn_skip;
bool testbench::widthIn_skip_quiet;
bool testbench::widthIn_skip_once;
bool testbench::widthIn_skip_noerr;
int  testbench::widthIn_array_comp_first;
int  testbench::widthIn_array_comp_last;
mc_wait_ctrl testbench::widthIn_wait_ctrl;
bool testbench::heightIn_ignore;
void mc_testbench_heightIn_skip(bool v) { testbench::heightIn_skip = v; }
bool testbench::heightIn_skip;
bool testbench::heightIn_skip_quiet;
bool testbench::heightIn_skip_once;
bool testbench::heightIn_skip_noerr;
int  testbench::heightIn_array_comp_first;
int  testbench::heightIn_array_comp_last;
mc_wait_ctrl testbench::heightIn_wait_ctrl;
bool testbench::x1_ignore;
void mc_testbench_x1_skip(bool v) { testbench::x1_skip = v; }
bool testbench::x1_skip;
bool testbench::x1_skip_quiet;
bool testbench::x1_skip_once;
bool testbench::x1_skip_noerr;
int  testbench::x1_array_comp_first;
int  testbench::x1_array_comp_last;
bool testbench::x1_use_mask;
ac_int<11, false > testbench::x1_output_mask;
mc_wait_ctrl testbench::x1_wait_ctrl;
bool testbench::y1_ignore;
void mc_testbench_y1_skip(bool v) { testbench::y1_skip = v; }
bool testbench::y1_skip;
bool testbench::y1_skip_quiet;
bool testbench::y1_skip_once;
bool testbench::y1_skip_noerr;
int  testbench::y1_array_comp_first;
int  testbench::y1_array_comp_last;
bool testbench::y1_use_mask;
ac_int<10, false > testbench::y1_output_mask;
mc_wait_ctrl testbench::y1_wait_ctrl;
bool testbench::x2_ignore;
void mc_testbench_x2_skip(bool v) { testbench::x2_skip = v; }
bool testbench::x2_skip;
bool testbench::x2_skip_quiet;
bool testbench::x2_skip_once;
bool testbench::x2_skip_noerr;
int  testbench::x2_array_comp_first;
int  testbench::x2_array_comp_last;
bool testbench::x2_use_mask;
ac_int<11, false > testbench::x2_output_mask;
mc_wait_ctrl testbench::x2_wait_ctrl;
bool testbench::y2_ignore;
void mc_testbench_y2_skip(bool v) { testbench::y2_skip = v; }
bool testbench::y2_skip;
bool testbench::y2_skip_quiet;
bool testbench::y2_skip_once;
bool testbench::y2_skip_noerr;
int  testbench::y2_array_comp_first;
int  testbench::y2_array_comp_last;
bool testbench::y2_use_mask;
ac_int<10, false > testbench::y2_output_mask;
mc_wait_ctrl testbench::y2_wait_ctrl;
#ifndef CCS_SCVERIFY_USE_CCS_BLOCK
void testbench::exec_run( ac_channel<ac_int<8, false > > &data_in,  ac_int<11, false > &widthIn,  ac_int<10, false > &heightIn,  ac_channel<ac_int<11, false > > &x1,  ac_channel<ac_int<10, false > > &y1,  ac_channel<ac_int<11, false > > &x2,  ac_channel<ac_int<10, false > > &y2) {
   return mc_testbench::exec_run(data_in, widthIn, heightIn, x1, y1, x2, y2);
}
#endif

// ============================================
// Function: wait_for_idle_sync
// --------------------------------------------

void mc_testbench::wait_for_idle_sync()
{
   if (testbench::enable_idle_sync_mode) {
      std::cout << "mc_testbench STOPPING   @ " << sc_time_stamp() << std::endl;
      that->cpp_testbench_active.write(false);
      while (that->design_is_idle.read())  that->wait(that->design_is_idle.value_changed_event());
      while (!that->design_is_idle.read()) that->wait(that->design_is_idle.value_changed_event());
      that->cpp_testbench_active.write(true);
      std::cout << "mc_testbench CONTINUING @ " << sc_time_stamp() << std::endl;
   } else {
      that->cpp_testbench_active.write(true);
   }
}
// ============================================
// Function: set_enable_stalls
// --------------------------------------------

void mc_testbench::set_enable_stalls(bool flag)
{
   if (flag) {
     std::cout << "Enabling STALL_FLAG toggling" << std::endl;
     that->enable_stalls.write(sc_dt::Log_1);
   } else {
     std::cout << "Disabling STALL_FLAG toggling" << std::endl;
     that->enable_stalls.write(sc_dt::Log_0);
   }
}
// ============================================
// Function: reset_request
// --------------------------------------------

void mc_testbench::reset_request()
{
   reset_request_event.notify(0,SC_NS);
}
// ============================================
// Function: capture_data_in
// --------------------------------------------

void mc_testbench::capture_data_in( ac_channel<ac_int<8, false > > &data_in)
{
   static ac_int<8, false > data_in_tmp;
   static int last_j_data_in_in = 0;
   if (data_in_iteration_count == wait_cnt)
      wait_on_input_required();
   if (_capture_data_in && !testbench::data_in_ignore)
   {
      if (!data_in_pointer_set) {
         data_in_pointer = &(data_in);
         data_in_pointer_set = true;
      } else if (data_in_pointer != &(data_in) && remaining_ccs_data_in == 0) {
         std::ostringstream msg; msg.str("");
         msg << "Interface data_in source switched to a difference object in testbench with "
             << remaining_ccs_data_in << " values remaining in input fifo. No data mismatch detected." <<" @ " << sc_time_stamp();
         SC_REPORT_INFO("User testbench", msg.str().c_str());
         data_in_pointer = &(data_in);
      } else if (data_in_pointer != &(data_in) && remaining_ccs_data_in > 0 && remaining_ccs_data_in != data_in.ac_channel<ac_int<8, false > >::debug_size()) {
         std::ostringstream msg; msg.str("");
         msg << "Interface data_in source switched to a different object in testbench with "
             << remaining_ccs_data_in << " values remaining in input fifo. Simulation mismatch likely. Check golden vs DUT comparison values for errors." <<" @ " << sc_time_stamp();
         SC_REPORT_WARNING("User testbench", msg.str().c_str());
         _channel_mismatch = true;
      }
      int cur_iter = data_in_capture_count;
      ++data_in_iteration_count;
      unsigned int chan_factor = 1;
      unsigned int ccs_scv_i,ccs_scv_j;
      ccs_scv_i = remaining_ccs_data_in;
      while (ccs_scv_i < data_in.ac_channel<ac_int<8, false > >::debug_size()) {
         for (ccs_scv_j = last_j_data_in_in; ccs_scv_j < chan_factor; ccs_scv_j++,ccs_scv_i++) {
            if (ccs_scv_i < data_in.ac_channel<ac_int<8, false > >::debug_size()) {
               data_in_tmp = data_in.ac_channel<ac_int<8, false > >::chan[ccs_scv_i];
            } else {
               break;
            }
         }
         if (ccs_scv_j == chan_factor) {
            ccs_data_in->put(data_in_tmp);
            last_j_data_in_in = 0;
            data_in_capture_count += chan_factor;
         } else {
            last_j_data_in_in = ccs_scv_j;
         }
      }
      mc_testbench_util::process_wait_ctrl("data_in",testbench::data_in_wait_ctrl,ccs_wait_ctrl_data_in.operator->(),cur_iter,data_in_capture_count,1);
   }
   testbench::data_in_ignore = false;
}
// ============================================
// Function: capture_widthIn
// --------------------------------------------

void mc_testbench::capture_widthIn( ac_int<11, false > &widthIn)
{
   if (widthIn_capture_count == wait_cnt)
      wait_on_input_required();
   if (_capture_widthIn && !testbench::widthIn_ignore)
   {
      int cur_iter = widthIn_iteration_count;
      ++widthIn_iteration_count;
      ccs_widthIn->put(widthIn); // THIS
      ++widthIn_capture_count;
      mc_testbench_util::process_wait_ctrl("widthIn",testbench::widthIn_wait_ctrl,ccs_wait_ctrl_widthIn.operator->(),cur_iter,widthIn_capture_count,0);
   }
   testbench::widthIn_ignore = false;
}
// ============================================
// Function: capture_heightIn
// --------------------------------------------

void mc_testbench::capture_heightIn( ac_int<10, false > &heightIn)
{
   if (heightIn_capture_count == wait_cnt)
      wait_on_input_required();
   if (_capture_heightIn && !testbench::heightIn_ignore)
   {
      int cur_iter = heightIn_iteration_count;
      ++heightIn_iteration_count;
      ccs_heightIn->put(heightIn); // THIS
      ++heightIn_capture_count;
      mc_testbench_util::process_wait_ctrl("heightIn",testbench::heightIn_wait_ctrl,ccs_wait_ctrl_heightIn.operator->(),cur_iter,heightIn_capture_count,0);
   }
   testbench::heightIn_ignore = false;
}
// ============================================
// Function: capture_x1
// --------------------------------------------

void mc_testbench::capture_x1( ac_channel<ac_int<11, false > > &x1)
{
   static mc_golden_info< ac_int<11, false >, MaskPacket<1, 11> > x1_tmp(testbench::x1_ignore, false, x1_iteration_count);
   x1_tmp._ignore = testbench::x1_ignore;
   x1_tmp._iteration = x1_iteration_count;
   // BEGIN: testbench output_mask control for field_name x1
   if ( testbench::x1_use_mask ) {
      sc_lv<11> tmp_mask_lv;
      type_to_vector(testbench::x1_output_mask, 11, tmp_mask_lv);
      x1_tmp._use_mask = true;
      x1_tmp._packet._mask = tmp_mask_lv;
   }
   // END: testbench output_mask control for field_name x1
   static int last_j_x1_out = 0;
   if (_capture_x1)
   {
      int cur_iter = x1_capture_count;
      ++x1_iteration_count;
      unsigned int chan_factor = 1;
      unsigned int ccs_scv_i,ccs_scv_j;
      ccs_scv_i = remaining_x1_golden;
      while (ccs_scv_i < x1.ac_channel<ac_int<11, false > >::debug_size()) {
         for (ccs_scv_j = last_j_x1_out; ccs_scv_j < chan_factor; ccs_scv_j++,ccs_scv_i++) {
            if (ccs_scv_i < x1.ac_channel<ac_int<11, false > >::debug_size()) {
               x1_tmp._data = x1.ac_channel<ac_int<11, false > >::chan[ccs_scv_i];
            } else {
               break;
            }
         }
         if (ccs_scv_j == chan_factor) {
            x1_golden.put(x1_tmp);
            last_j_x1_out = 0;
            x1_capture_count += chan_factor;
         } else {
            last_j_x1_out = ccs_scv_j;
         }
      }
      mc_testbench_util::process_wait_ctrl("x1",testbench::x1_wait_ctrl,ccs_wait_ctrl_x1.operator->(),cur_iter,x1_capture_count,1);
      testbench::x1_use_mask = false;
   }
   testbench::x1_ignore = false;
   testbench::x1_skip = false;
}
// ============================================
// Function: capture_y1
// --------------------------------------------

void mc_testbench::capture_y1( ac_channel<ac_int<10, false > > &y1)
{
   static mc_golden_info< ac_int<10, false >, MaskPacket<1, 10> > y1_tmp(testbench::y1_ignore, false, y1_iteration_count);
   y1_tmp._ignore = testbench::y1_ignore;
   y1_tmp._iteration = y1_iteration_count;
   // BEGIN: testbench output_mask control for field_name y1
   if ( testbench::y1_use_mask ) {
      sc_lv<10> tmp_mask_lv;
      type_to_vector(testbench::y1_output_mask, 10, tmp_mask_lv);
      y1_tmp._use_mask = true;
      y1_tmp._packet._mask = tmp_mask_lv;
   }
   // END: testbench output_mask control for field_name y1
   static int last_j_y1_out = 0;
   if (_capture_y1)
   {
      int cur_iter = y1_capture_count;
      ++y1_iteration_count;
      unsigned int chan_factor = 1;
      unsigned int ccs_scv_i,ccs_scv_j;
      ccs_scv_i = remaining_y1_golden;
      while (ccs_scv_i < y1.ac_channel<ac_int<10, false > >::debug_size()) {
         for (ccs_scv_j = last_j_y1_out; ccs_scv_j < chan_factor; ccs_scv_j++,ccs_scv_i++) {
            if (ccs_scv_i < y1.ac_channel<ac_int<10, false > >::debug_size()) {
               y1_tmp._data = y1.ac_channel<ac_int<10, false > >::chan[ccs_scv_i];
            } else {
               break;
            }
         }
         if (ccs_scv_j == chan_factor) {
            y1_golden.put(y1_tmp);
            last_j_y1_out = 0;
            y1_capture_count += chan_factor;
         } else {
            last_j_y1_out = ccs_scv_j;
         }
      }
      mc_testbench_util::process_wait_ctrl("y1",testbench::y1_wait_ctrl,ccs_wait_ctrl_y1.operator->(),cur_iter,y1_capture_count,1);
      testbench::y1_use_mask = false;
   }
   testbench::y1_ignore = false;
   testbench::y1_skip = false;
}
// ============================================
// Function: capture_x2
// --------------------------------------------

void mc_testbench::capture_x2( ac_channel<ac_int<11, false > > &x2)
{
   static mc_golden_info< ac_int<11, false >, MaskPacket<1, 11> > x2_tmp(testbench::x2_ignore, false, x2_iteration_count);
   x2_tmp._ignore = testbench::x2_ignore;
   x2_tmp._iteration = x2_iteration_count;
   // BEGIN: testbench output_mask control for field_name x2
   if ( testbench::x2_use_mask ) {
      sc_lv<11> tmp_mask_lv;
      type_to_vector(testbench::x2_output_mask, 11, tmp_mask_lv);
      x2_tmp._use_mask = true;
      x2_tmp._packet._mask = tmp_mask_lv;
   }
   // END: testbench output_mask control for field_name x2
   static int last_j_x2_out = 0;
   if (_capture_x2)
   {
      int cur_iter = x2_capture_count;
      ++x2_iteration_count;
      unsigned int chan_factor = 1;
      unsigned int ccs_scv_i,ccs_scv_j;
      ccs_scv_i = remaining_x2_golden;
      while (ccs_scv_i < x2.ac_channel<ac_int<11, false > >::debug_size()) {
         for (ccs_scv_j = last_j_x2_out; ccs_scv_j < chan_factor; ccs_scv_j++,ccs_scv_i++) {
            if (ccs_scv_i < x2.ac_channel<ac_int<11, false > >::debug_size()) {
               x2_tmp._data = x2.ac_channel<ac_int<11, false > >::chan[ccs_scv_i];
            } else {
               break;
            }
         }
         if (ccs_scv_j == chan_factor) {
            x2_golden.put(x2_tmp);
            last_j_x2_out = 0;
            x2_capture_count += chan_factor;
         } else {
            last_j_x2_out = ccs_scv_j;
         }
      }
      mc_testbench_util::process_wait_ctrl("x2",testbench::x2_wait_ctrl,ccs_wait_ctrl_x2.operator->(),cur_iter,x2_capture_count,1);
      testbench::x2_use_mask = false;
   }
   testbench::x2_ignore = false;
   testbench::x2_skip = false;
}
// ============================================
// Function: capture_y2
// --------------------------------------------

void mc_testbench::capture_y2( ac_channel<ac_int<10, false > > &y2)
{
   static mc_golden_info< ac_int<10, false >, MaskPacket<1, 10> > y2_tmp(testbench::y2_ignore, false, y2_iteration_count);
   y2_tmp._ignore = testbench::y2_ignore;
   y2_tmp._iteration = y2_iteration_count;
   // BEGIN: testbench output_mask control for field_name y2
   if ( testbench::y2_use_mask ) {
      sc_lv<10> tmp_mask_lv;
      type_to_vector(testbench::y2_output_mask, 10, tmp_mask_lv);
      y2_tmp._use_mask = true;
      y2_tmp._packet._mask = tmp_mask_lv;
   }
   // END: testbench output_mask control for field_name y2
   static int last_j_y2_out = 0;
   if (_capture_y2)
   {
      int cur_iter = y2_capture_count;
      ++y2_iteration_count;
      unsigned int chan_factor = 1;
      unsigned int ccs_scv_i,ccs_scv_j;
      ccs_scv_i = remaining_y2_golden;
      while (ccs_scv_i < y2.ac_channel<ac_int<10, false > >::debug_size()) {
         for (ccs_scv_j = last_j_y2_out; ccs_scv_j < chan_factor; ccs_scv_j++,ccs_scv_i++) {
            if (ccs_scv_i < y2.ac_channel<ac_int<10, false > >::debug_size()) {
               y2_tmp._data = y2.ac_channel<ac_int<10, false > >::chan[ccs_scv_i];
            } else {
               break;
            }
         }
         if (ccs_scv_j == chan_factor) {
            y2_golden.put(y2_tmp);
            last_j_y2_out = 0;
            y2_capture_count += chan_factor;
         } else {
            last_j_y2_out = ccs_scv_j;
         }
      }
      mc_testbench_util::process_wait_ctrl("y2",testbench::y2_wait_ctrl,ccs_wait_ctrl_y2.operator->(),cur_iter,y2_capture_count,1);
      testbench::y2_use_mask = false;
   }
   testbench::y2_ignore = false;
   testbench::y2_skip = false;
}
// ============================================
// Function: wait_on_input_required
// --------------------------------------------

void mc_testbench::wait_on_input_required()
{
   ++wait_cnt;
   wait(SC_ZERO_TIME); // get fifos a chance to update
   ++period_counter;
   sc_time timeout = sc_time_stamp() - previous_timestamp;
   if (calculate_period && sc_time_stamp() > SC_ZERO_TIME && sc_time_stamp() != previous_timestamp && sc_time_stamp() != timeout) {
      average_period = (average_period + timeout) / 2;
   }
   previous_timestamp = sc_time_stamp();
   while (atleast_one_active_input) {
      if (_capture_data_in && ccs_data_in->used() == 0) return;
      if (_capture_widthIn && ccs_widthIn->used() == 0) return;
      if (_capture_heightIn && ccs_heightIn->used() == 0) return;
      that->cpp_testbench_active.write(false);
      if (average_period > SC_ZERO_TIME && sc_time_stamp() != timeout)
         wait(average_period * 10, ccs_data_in->ok_to_put() | ccs_widthIn->ok_to_put() | ccs_heightIn->ok_to_put());
      else
         wait(ccs_data_in->ok_to_put() | ccs_widthIn->ok_to_put() | ccs_heightIn->ok_to_put());
      that->cpp_testbench_active.write(true);
      if (timed_out()) {
         calculate_period = false;
         return;
      }
   }
}
// ============================================
// Function: capture_IN
// --------------------------------------------

void mc_testbench::capture_IN( ac_channel<ac_int<8, false > > &data_in,  ac_int<11, false > &widthIn,  ac_int<10, false > &heightIn,  ac_channel<ac_int<11, false > > &x1,  ac_channel<ac_int<10, false > > &y1,  ac_channel<ac_int<11, false > > &x2,  ac_channel<ac_int<10, false > > &y2)
{
   that->capture_data_in(data_in);
   that->capture_widthIn(widthIn);
   that->capture_heightIn(heightIn);
   that->remaining_x1_golden =  x1.ac_channel<ac_int<11, false > >::debug_size();
   that->remaining_y1_golden =  y1.ac_channel<ac_int<10, false > >::debug_size();
   that->remaining_x2_golden =  x2.ac_channel<ac_int<11, false > >::debug_size();
   that->remaining_y2_golden =  y2.ac_channel<ac_int<10, false > >::debug_size();
}
// ============================================
// Function: capture_OUT
// --------------------------------------------

void mc_testbench::capture_OUT( ac_channel<ac_int<8, false > > &data_in,  ac_int<11, false > &widthIn,  ac_int<10, false > &heightIn,  ac_channel<ac_int<11, false > > &x1,  ac_channel<ac_int<10, false > > &y1,  ac_channel<ac_int<11, false > > &x2,  ac_channel<ac_int<10, false > > &y2)
{
   that->remaining_ccs_data_in =  data_in.ac_channel<ac_int<8, false > >::debug_size();
   if (testbench::enable_idle_sync_mode && that->remaining_ccs_data_in != 0) {
      cout << "Warning: Testbench input channel 'data_in' not empty. Remaining size: " << that->remaining_ccs_data_in << endl;
   }
   that->capture_x1(x1);
   that->capture_y1(y1);
   that->capture_x2(x2);
   that->capture_y2(y2);
}
// ============================================
// Function: exec_run
// --------------------------------------------

void mc_testbench::exec_run( ac_channel<ac_int<8, false > > &data_in,  ac_int<11, false > &widthIn,  ac_int<10, false > &heightIn,  ac_channel<ac_int<11, false > > &x1,  ac_channel<ac_int<10, false > > &y1,  ac_channel<ac_int<11, false > > &x2,  ac_channel<ac_int<10, false > > &y2)
{
   #ifndef CCS_SCVERIFY_USE_CCS_BLOCK
   that->cpp_testbench_active.write(true);
   capture_IN(data_in, widthIn, heightIn, x1, y1, x2, y2);
   Hough_Algorithm_HW<1296, 864>::run(data_in, widthIn, heightIn, x1, y1, x2, y2);
   // throttle ac_channel based on number of calls to chan::size() or chan::empty() or chan::nb_read() (but not chan::available()) 
   if (1) {
      int cnt=0;
      if (cnt) std::cout << "mc_testbench.cpp: CONTINUES @ " << sc_time_stamp() << std::endl;
      if (cnt) that->cpp_testbench_active.write(true);
   }
   capture_OUT(data_in, widthIn, heightIn, x1, y1, x2, y2);
   #else
   #endif
}
// ============================================
// Function: start_of_simulation
// --------------------------------------------

void mc_testbench::start_of_simulation()
{
   set_enable_stalls(false);
}
// ============================================
// Function: end_of_simulation
// --------------------------------------------

void mc_testbench::end_of_simulation()
{
   if (!_checked_results) {
      SC_REPORT_INFO(name(), "Testbench exited early or ran into deadlock");
      check_results();
   }
}
// ============================================
// Function: check_results
// --------------------------------------------

void mc_testbench::check_results()
{
   if (_checked_results) return;
   _checked_results = true;
   cout<<endl;
   cout<<"Checking results"<<endl;
   if (main_exit_code) _failed = true;
   int _num_outputs_checked = 0;
   bool _has_capture_counts = false;
   std::ostringstream mctb_msg;
   
   if (!_capture_x1) {
      cout<<"'x1' - warning, output was optimized away"<<endl;
   } else {
      _num_outputs_checked++;
      _failed |= x1_comp->check_results(x1_capture_count,testbench::x1_skip_noerr);
      _has_capture_counts |= !!(x1_capture_count);
   }
   if (!_capture_y1) {
      cout<<"'y1' - warning, output was optimized away"<<endl;
   } else {
      _num_outputs_checked++;
      _failed |= y1_comp->check_results(y1_capture_count,testbench::y1_skip_noerr);
      _has_capture_counts |= !!(y1_capture_count);
   }
   if (!_capture_x2) {
      cout<<"'x2' - warning, output was optimized away"<<endl;
   } else {
      _num_outputs_checked++;
      _failed |= x2_comp->check_results(x2_capture_count,testbench::x2_skip_noerr);
      _has_capture_counts |= !!(x2_capture_count);
   }
   if (!_capture_y2) {
      cout<<"'y2' - warning, output was optimized away"<<endl;
   } else {
      _num_outputs_checked++;
      _failed |= y2_comp->check_results(y2_capture_count,testbench::y2_skip_noerr);
      _has_capture_counts |= !!(y2_capture_count);
   }
   cout<<endl;
   if (_num_outputs_checked == 0) {
      cout<<"Error: All outputs were optimized away. No output values were compared."<<endl;
      _failed = _failed || (_num_outputs_checked == 0);
   }
   if (!_has_capture_counts) {
      cout<<"Error: Nothing to compare, all output capture counts are zero."<<endl;
      _failed = true;
   }
   if (main_exit_code) cout << "Error: C++ Testbench 'main()' returned a non-zero exit code ("<<main_exit_code<<"). Check your testbench." <<endl;
   mctb_msg.clear();
   if (_failed) mctb_msg << "Simulation FAILED";
   else         mctb_msg << "Simulation PASSED";
   mctb_msg << " @ " << sc_time_stamp();
   if (_channel_mismatch && _failed)
   mctb_msg << endl << "An input channel was switched before the input fifo was fully empty. Check your testbench.";
   SC_REPORT_INFO(this->name(), mctb_msg.str().c_str());
}
// ============================================
// Function: failed
// --------------------------------------------

bool mc_testbench::failed()
{
   return _failed;
}
// ============================================
// Function: set_failed
// --------------------------------------------

void mc_testbench::set_failed(bool fail)
{
   _failed = fail;
}
// ---------------------------------------------------------------
// Process: SC_METHOD wait_for_end
// Static sensitivity: sensitive << clk.pos() << testbench_end_event;

void mc_testbench::wait_for_end() {
   // If run() has not finished, we do nothing here
   if (!testbench_ended) return;
   // check for completed outputs
   if (x1_comp->get_compare_count() < x1_capture_count) {testbench_end_event.notify(1,SC_NS); return;}
   if (y1_comp->get_compare_count() < y1_capture_count) {testbench_end_event.notify(1,SC_NS); return;}
   if (x2_comp->get_compare_count() < x2_capture_count) {testbench_end_event.notify(1,SC_NS); return;}
   if (y2_comp->get_compare_count() < y2_capture_count) {testbench_end_event.notify(1,SC_NS); return;}
   // If we made it here, all outputs have flushed. Check the results
   SC_REPORT_INFO(name(), "Simulation completed");
   check_results();
   sc_stop();
}
// ---------------------------------------------------------------
// Process: SC_THREAD run
// Static sensitivity: 

void mc_testbench::run() {
   testbench::enable_idle_sync_mode = false;
   testbench::idle_sync_stable_cycles = 1;
   _channel_mismatch = false;
   testbench::data_in_ignore = false;
   testbench::data_in_skip = false;
   testbench::data_in_skip_quiet = false;
   testbench::data_in_skip_once = false;
   testbench::data_in_skip_noerr = false;
   testbench::data_in_array_comp_first = -1;
   testbench::data_in_array_comp_last = -1;
   testbench::data_in_wait_ctrl.clear();
   data_in_capture_count = 0;
   data_in_iteration_count = 0;
   data_in_pointer_set = false;
   testbench::widthIn_ignore = false;
   testbench::widthIn_skip = false;
   testbench::widthIn_skip_quiet = false;
   testbench::widthIn_skip_once = false;
   testbench::widthIn_skip_noerr = false;
   testbench::widthIn_array_comp_first = -1;
   testbench::widthIn_array_comp_last = -1;
   testbench::widthIn_wait_ctrl.clear();
   widthIn_capture_count = 0;
   widthIn_iteration_count = 0;
   testbench::heightIn_ignore = false;
   testbench::heightIn_skip = false;
   testbench::heightIn_skip_quiet = false;
   testbench::heightIn_skip_once = false;
   testbench::heightIn_skip_noerr = false;
   testbench::heightIn_array_comp_first = -1;
   testbench::heightIn_array_comp_last = -1;
   testbench::heightIn_wait_ctrl.clear();
   heightIn_capture_count = 0;
   heightIn_iteration_count = 0;
   testbench::x1_ignore = false;
   testbench::x1_skip = false;
   testbench::x1_skip_quiet = false;
   testbench::x1_skip_once = false;
   testbench::x1_skip_noerr = false;
   testbench::x1_array_comp_first = -1;
   testbench::x1_array_comp_last = -1;
   testbench::x1_use_mask = false;
   testbench::x1_output_mask = (ac_int<11, false >) ~0;
   testbench::x1_wait_ctrl.clear();
   x1_capture_count = 0;
   x1_iteration_count = 0;
   x1_pointer_set = false;
   testbench::y1_ignore = false;
   testbench::y1_skip = false;
   testbench::y1_skip_quiet = false;
   testbench::y1_skip_once = false;
   testbench::y1_skip_noerr = false;
   testbench::y1_array_comp_first = -1;
   testbench::y1_array_comp_last = -1;
   testbench::y1_use_mask = false;
   testbench::y1_output_mask = (ac_int<10, false >) ~0;
   testbench::y1_wait_ctrl.clear();
   y1_capture_count = 0;
   y1_iteration_count = 0;
   y1_pointer_set = false;
   testbench::x2_ignore = false;
   testbench::x2_skip = false;
   testbench::x2_skip_quiet = false;
   testbench::x2_skip_once = false;
   testbench::x2_skip_noerr = false;
   testbench::x2_array_comp_first = -1;
   testbench::x2_array_comp_last = -1;
   testbench::x2_use_mask = false;
   testbench::x2_output_mask = (ac_int<11, false >) ~0;
   testbench::x2_wait_ctrl.clear();
   x2_capture_count = 0;
   x2_iteration_count = 0;
   x2_pointer_set = false;
   testbench::y2_ignore = false;
   testbench::y2_skip = false;
   testbench::y2_skip_quiet = false;
   testbench::y2_skip_once = false;
   testbench::y2_skip_noerr = false;
   testbench::y2_array_comp_first = -1;
   testbench::y2_array_comp_last = -1;
   testbench::y2_use_mask = false;
   testbench::y2_output_mask = (ac_int<10, false >) ~0;
   testbench::y2_wait_ctrl.clear();
   y2_capture_count = 0;
   y2_iteration_count = 0;
   y2_pointer_set = false;
   testbench testbench_inst(sc_argc(), sc_argv());
   main_exit_code = testbench_inst.main();
   cout<<"Info: Execution of user-supplied C++ testbench 'main()' has completed with exit code = " << main_exit_code << endl;
   cout<<endl;
   cout<<"Info: Collecting data completed"<<endl;
   cout<<"   captured "<<data_in_capture_count<<" values of data_in"<<endl;
   cout<<"   captured "<<widthIn_capture_count<<" values of widthIn"<<endl;
   cout<<"   captured "<<heightIn_capture_count<<" values of heightIn"<<endl;
   cout<<"   captured "<<x1_capture_count<<" values of x1"<<endl;
   cout<<"   captured "<<y1_capture_count<<" values of y1"<<endl;
   cout<<"   captured "<<x2_capture_count<<" values of x2"<<endl;
   cout<<"   captured "<<y2_capture_count<<" values of y2"<<endl;
   testbench_ended = true;
   testbench_end_event.notify(SC_ZERO_TIME);
}
#ifdef CCS_SCVERIFY_USE_CCS_BLOCK
#include "ccs_block_macros.cpp"
#endif
