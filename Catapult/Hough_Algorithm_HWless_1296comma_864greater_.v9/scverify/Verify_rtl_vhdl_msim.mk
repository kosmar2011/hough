# ----------------------------------------------------------------------------
# RTL VHDL output 'rtl.vhdl' vs Untimed C++
#
#    HLS version: 10.5a/871028 Production Release
#       HLS date: Tue Apr 14 07:55:32 PDT 2020
#  Flow Packages: HDL_Tcl 8.0a, SCVerify 10.4
#
#   Generated by: user2@edatools.ee.duth.gr
# Generated date: Wed Jul 07 20:22:54 EEST 2021
#
# ----------------------------------------------------------------------------
# ===================================================
# DEFAULT GOAL is the help target
.PHONY: all
all: help

# ===================================================
# Directories (at the time this makefile was created)
#   MGC_HOME      /opt/mentor/catapult_10.5a/Mgc_home
#   PROJECT_HOME  /home/user2/Desktop/Hough
#   SOLUTION_DIR  /home/user2/Desktop/Hough/Catapult/Hough_Algorithm_HWless_1296comma_864greater_.v9
#   WORKING_DIR   /home/user2/Desktop/Hough/Catapult/Hough_Algorithm_HWless_1296comma_864greater_.v9/.

# ===================================================
# VARIABLES
# 
MGC_HOME          = /opt/mentor/catapult_10.5a/Mgc_home
export MGC_HOME

WORK_DIR  = $(CURDIR)
WORK2PROJ = ../..
WORK2SOLN = .
PROJ2WORK = ./Catapult/Hough_Algorithm_HWless_1296comma_864greater_.v9
PROJ2SOLN = ./Catapult/Hough_Algorithm_HWless_1296comma_864greater_.v9
export WORK_DIR
export WORK2PROJ
export WORK2SOLN
export PROJ2WORK
export PROJ2SOLN

# Variables that can be overridden from the make command line
ifeq "$(INCL_DIRS)" ""
INCL_DIRS                   = ./scverify . ../..
endif
export INCL_DIRS
ifeq "$(STAGE)" ""
STAGE                       = rtl
endif
export STAGE
ifeq "$(NETLIST_LEAF)" ""
NETLIST_LEAF                = rtl
endif
export NETLIST_LEAF
ifeq "$(SIMTOOL)" ""
SIMTOOL                     = msim
endif
export SIMTOOL
ifeq "$(NETLIST)" ""
NETLIST                     = vhdl
endif
export NETLIST
ifeq "$(RTL_NETLIST_FNAME)" ""
RTL_NETLIST_FNAME           = /home/user2/Desktop/Hough/Catapult/Hough_Algorithm_HWless_1296comma_864greater_.v9/rtl.vhdl
endif
export RTL_NETLIST_FNAME
ifeq "$(GATE_FNAME_BASE)" ""
GATE_FNAME_BASE             = gate.or.vhdl
endif
export GATE_FNAME_BASE
ifeq "$(INVOKE_ARGS)" ""
INVOKE_ARGS                 = 
endif
export INVOKE_ARGS
export SCVLIBS
export MODELSIM
TOP_HDL_ENTITY           := Hough_Algorithm_HW_1296_864
TOP_DU                   := scverify_top
CXX_TYPE                 := gcc
MSIM_SCRIPT              := ./Catapult/Hough_Algorithm_HWless_1296comma_864greater_.v9/scverify_msim.tcl
TARGET                   := scverify/$(NETLIST_LEAF)_$(NETLIST)_$(SIMTOOL)
export TOP_HDL_ENTITY
export TARGET

ifeq ($(RECUR),)
ifeq ($(STAGE),mapped)
ifeq ($(RTLTOOL),)
   $(error This makefile requires specifying the RTLTOOL variable on the make command line)
endif
endif
endif
# ===================================================
# Include environment variables set by flow options
include ./ccs_env.mk

# ===================================================
# Include makefile for default commands and variables
include $(MGC_HOME)/shared/include/mkfiles/ccs_default_cmds.mk

SYNTHESIS_FLOWPKG := OasysRTL
SYN_FLOW          := OasysRTL
# ===================================================
# SOURCES
# 
# Specify list of Questa SIM libraries to create
HDL_LIB_NAMES = mgc_hls work
# ===================================================
# Simulation libraries required by loaded Catapult libraries or gate simulation
SIMLIBS_V   += 
SIMLIBS_VHD += 
# 
# Specify list of source files - MUST be ordered properly
ifeq ($(STAGE),gate)
ifeq ($(RTLTOOL),)
ifeq ($(GATE_VHDL_DEP),)
GATE_VHDL_DEP = ./rtl.vhdl/rtl.vhdl.vhdlts
endif
ifeq ($(GATE_VLOG_DEP),)
GATE_VLOG_DEP = 
endif
endif
VHDL_SRC += $(MGC_HOME)/pkgs/siflibs/ccs_in_wait_v1.vhd/ccs_in_wait_v1.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/ccs_out_wait_v1.vhd/ccs_out_wait_v1.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/mgc_io_sync_v2.vhd/mgc_io_sync_v2.vhd.vhdlts $(MGC_HOME)/pkgs/hls_pkgs/src/funcs.vhd/funcs.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/mgc_shift_comps_v5.vhd/mgc_shift_comps_v5.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/mgc_shift_r_beh_v5.vhd/mgc_shift_r_beh_v5.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/ccs_in_v1.vhd/ccs_in_v1.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/ram_sync_dualRW_be_generic.vhd/ram_sync_dualRW_be_generic.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/ccs_genreg_v1.vhd/ccs_genreg_v1.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/ccs_fifo_wait_core_v5.vhd/ccs_fifo_wait_core_v5.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/ccs_pipe_v5.vhd/ccs_pipe_v5.vhd.vhdlts ./rtl_hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60.vhdl/rtl_hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60.vhdl.vhdlts ./rtl_hough_algorithm_hw_1296_864mgc_rom_26_70_32_1_60.vhdl/rtl_hough_algorithm_hw_1296_864mgc_rom_26_70_32_1_60.vhdl.vhdlts $(GATE_VHDL_DEP)
VLOG_SRC +=  $(GATE_VLOG_DEP)
else
VHDL_SRC += $(MGC_HOME)/pkgs/siflibs/ccs_in_wait_v1.vhd/ccs_in_wait_v1.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/ccs_out_wait_v1.vhd/ccs_out_wait_v1.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/mgc_io_sync_v2.vhd/mgc_io_sync_v2.vhd.vhdlts $(MGC_HOME)/pkgs/hls_pkgs/src/funcs.vhd/funcs.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/mgc_shift_comps_v5.vhd/mgc_shift_comps_v5.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/mgc_shift_r_beh_v5.vhd/mgc_shift_r_beh_v5.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/ccs_in_v1.vhd/ccs_in_v1.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/ram_sync_dualRW_be_generic.vhd/ram_sync_dualRW_be_generic.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/ccs_genreg_v1.vhd/ccs_genreg_v1.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/ccs_fifo_wait_core_v5.vhd/ccs_fifo_wait_core_v5.vhd.vhdlts $(MGC_HOME)/pkgs/siflibs/ccs_pipe_v5.vhd/ccs_pipe_v5.vhd.vhdlts ./rtl_hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60.vhdl/rtl_hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60.vhdl.vhdlts ./rtl_hough_algorithm_hw_1296_864mgc_rom_26_70_32_1_60.vhdl/rtl_hough_algorithm_hw_1296_864mgc_rom_26_70_32_1_60.vhdl.vhdlts ./rtl.vhdl/rtl.vhdl.vhdlts
VLOG_SRC += 
endif
CXX_SRC  = ../../hough/Hough_tb.cpp/Hough_tb.cpp.cxxts ./scverify/mc_testbench.cpp/mc_testbench.cpp.cxxts ./scverify/scverify_top.cpp/scverify_top.cpp.cxxts
# Specify RTL synthesis scripts (if any)
RTL_SCRIPT = 

# Specify hold time file name (for verifying synthesized netlists)
HLD_CONSTRAINT_FNAME = top_gate_constraints.cpp

# ===================================================
# GLOBAL OPTIONS
# 
# CXXFLAGS - global C++ options (apply to all C++ compilations) except for include file search paths
CXXFLAGS += -DCCS_SCVERIFY -DSC_INCLUDE_DYNAMIC_PROCESSES -DSC_USE_STD_STRING -DTOP_HDL_ENTITY=$(TOP_HDL_ENTITY) -DCCS_DESIGN_FUNC_Hough_Algorithm_HW_1296_864_run -DCCS_DESIGN_TOP_$(TOP_HDL_ENTITY) -DCCS_MISMATCHED_OUTPUTS_ONLY $(F_WRAP_OPT)
# 
# If the make command line includes a definition of the special variable MC_DEFAULT_TRANSACTOR_LOG
# then define that value for all compilations as well
ifneq "$(MC_DEFAULT_TRANSACTOR_LOG)" ""
CXXFLAGS += -DMC_DEFAULT_TRANSACTOR_LOG=$(MC_DEFAULT_TRANSACTOR_LOG)
endif
# 
# CXX_INCLUDES - include file search paths
CXX_INCLUDES = ./scverify . ../..
# 
# TCL shell
TCLSH_CMD = /opt/mentor/catapult_10.5a/Mgc_home/bin/tclsh8.5

# Pass along SCVerify_DEADLOCK_DETECTION option
ifneq "$(SCVerify_DEADLOCK_DETECTION)" "false"
CXXFLAGS += -DDEADLOCK_DETECTION
endif
# ===================================================
# PER SOURCE FILE SPECIALIZATIONS
# 
# Specify source file paths
$(TARGET)/ccs_in_wait_v1.vhd.vhdlts: $(MGC_HOME)/pkgs/siflibs/ccs_in_wait_v1.vhd
$(TARGET)/ccs_out_wait_v1.vhd.vhdlts: $(MGC_HOME)/pkgs/siflibs/ccs_out_wait_v1.vhd
$(TARGET)/mgc_io_sync_v2.vhd.vhdlts: $(MGC_HOME)/pkgs/siflibs/mgc_io_sync_v2.vhd
$(TARGET)/funcs.vhd.vhdlts: $(MGC_HOME)/pkgs/hls_pkgs/src/funcs.vhd
$(TARGET)/mgc_shift_comps_v5.vhd.vhdlts: $(MGC_HOME)/pkgs/siflibs/mgc_shift_comps_v5.vhd
$(TARGET)/mgc_shift_r_beh_v5.vhd.vhdlts: $(MGC_HOME)/pkgs/siflibs/mgc_shift_r_beh_v5.vhd
$(TARGET)/ccs_in_v1.vhd.vhdlts: $(MGC_HOME)/pkgs/siflibs/ccs_in_v1.vhd
$(TARGET)/ram_sync_dualRW_be_generic.vhd.vhdlts: $(MGC_HOME)/pkgs/siflibs/ram_sync_dualRW_be_generic.vhd
$(TARGET)/ccs_genreg_v1.vhd.vhdlts: $(MGC_HOME)/pkgs/siflibs/ccs_genreg_v1.vhd
$(TARGET)/ccs_fifo_wait_core_v5.vhd.vhdlts: $(MGC_HOME)/pkgs/siflibs/ccs_fifo_wait_core_v5.vhd
$(TARGET)/ccs_pipe_v5.vhd.vhdlts: $(MGC_HOME)/pkgs/siflibs/ccs_pipe_v5.vhd
$(TARGET)/rtl_hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60.vhdl.vhdlts: ./rtl_hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60.vhdl
$(TARGET)/rtl_hough_algorithm_hw_1296_864mgc_rom_26_70_32_1_60.vhdl.vhdlts: ./rtl_hough_algorithm_hw_1296_864mgc_rom_26_70_32_1_60.vhdl
$(TARGET)/rtl.vhdl.vhdlts: ./rtl.vhdl
ifeq ($(STAGE),gate)
ifneq ($(GATE_VHDL_DEP),)
$(TARGET)/$(notdir $(GATE_VHDL_DEP)): $(dir $(GATE_VHDL_DEP))
endif
ifneq ($(GATE_VLOG_DEP),)
$(TARGET)/$(notdir $(GATE_VLOG_DEP)): $(dir $(GATE_VLOG_DEP))
endif
endif
$(TARGET)/Hough_tb.cpp.cxxts: ../../hough/Hough_tb.cpp
$(TARGET)/mc_testbench.cpp.cxxts: ./scverify/mc_testbench.cpp
$(TARGET)/scverify_top.cpp.cxxts: ./scverify/scverify_top.cpp
# 
# Specify additional C++ options per C++ source by setting CXX_OPTS
$(TARGET)/Hough_tb.cpp.cxxts: CXX_OPTS=
$(TARGET)/scverify_top.cpp.cxxts: CXX_OPTS=
$(TARGET)/mc_testbench.cpp.cxxts: CXX_OPTS=$(F_WRAP_OPT)
# 
# Specify dependencies
$(TARGET)/Hough_tb.cpp.cxxts: .ccs_env_opts/SCVerify_USE_CCS_BLOCK.ts
$(TARGET)/mc_testbench.cpp.cxxts: .ccs_env_opts/SCVerify_USE_CCS_BLOCK.ts
$(TARGET)/scverify_top.cpp.cxxts: .ccs_env_opts/SCVerify_USE_CCS_BLOCK.ts .ccs_env_opts/SCVerify_DEADLOCK_DETECTION.ts
# 
# Specify compilation library for HDL source
$(TARGET)/funcs.vhd.vhdlts: HDL_LIB=mgc_hls
$(TARGET)/ccs_genreg_v1.vhd.vhdlts: HDL_LIB=mgc_hls
$(TARGET)/rtl_hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60.vhdl.vhdlts: HDL_LIB=mgc_hls
$(TARGET)/mgc_shift_comps_v5.vhd.vhdlts: HDL_LIB=mgc_hls
$(TARGET)/rtl.vhdl.vhdlts: HDL_LIB=work
$(TARGET)/ram_sync_dualRW_be_generic.vhd.vhdlts: HDL_LIB=mgc_hls
$(TARGET)/ccs_pipe_v5.vhd.vhdlts: HDL_LIB=mgc_hls
$(TARGET)/ccs_in_wait_v1.vhd.vhdlts: HDL_LIB=mgc_hls
$(TARGET)/mgc_io_sync_v2.vhd.vhdlts: HDL_LIB=mgc_hls
$(TARGET)/ccs_out_wait_v1.vhd.vhdlts: HDL_LIB=mgc_hls
$(TARGET)/ccs_fifo_wait_core_v5.vhd.vhdlts: HDL_LIB=mgc_hls
$(TARGET)/mgc_shift_r_beh_v5.vhd.vhdlts: HDL_LIB=mgc_hls
$(TARGET)/ccs_in_v1.vhd.vhdlts: HDL_LIB=mgc_hls
$(TARGET)/rtl_hough_algorithm_hw_1296_864mgc_rom_26_70_32_1_60.vhdl.vhdlts: HDL_LIB=mgc_hls
ifeq ($(STAGE),gate)
ifneq ($(GATE_VHDL_DEP),)
$(TARGET)/$(notdir $(GATE_VHDL_DEP)): HDL_LIB=work
endif
ifneq ($(GATE_VLOG_DEP),)
$(TARGET)/$(notdir $(GATE_VLOG_DEP)): HDL_LIB=work
endif
endif
# 
# Specify additional HDL source compilation options if any
$(TARGET)/funcs.vhd.vhdlts: VHDL_F_OPTS=
$(TARGET)/ccs_genreg_v1.vhd.vhdlts: VHDL_F_OPTS=
$(TARGET)/rtl_hough_algorithm_hw_1296_864mgc_rom_27_70_32_1_60.vhdl.vhdlts: VHDL_F_OPTS=
$(TARGET)/mgc_shift_comps_v5.vhd.vhdlts: VHDL_F_OPTS=
$(TARGET)/rtl.vhdl.vhdlts: VHDL_F_OPTS=
$(TARGET)/ram_sync_dualRW_be_generic.vhd.vhdlts: VHDL_F_OPTS=
$(TARGET)/ccs_pipe_v5.vhd.vhdlts: VHDL_F_OPTS=
$(TARGET)/ccs_in_wait_v1.vhd.vhdlts: VHDL_F_OPTS=
$(TARGET)/mgc_io_sync_v2.vhd.vhdlts: VHDL_F_OPTS=
$(TARGET)/ccs_out_wait_v1.vhd.vhdlts: VHDL_F_OPTS=
$(TARGET)/ccs_fifo_wait_core_v5.vhd.vhdlts: VHDL_F_OPTS=
$(TARGET)/mgc_shift_r_beh_v5.vhd.vhdlts: VHDL_F_OPTS=
$(TARGET)/ccs_in_v1.vhd.vhdlts: VHDL_F_OPTS=
$(TARGET)/rtl_hough_algorithm_hw_1296_864mgc_rom_26_70_32_1_60.vhdl.vhdlts: VHDL_F_OPTS=
# 
# Specify top design unit for HDL source
$(TARGET)/rtl.vhdl.vhdlts: DUT_E=Hough_Algorithm_HW_1296_864

# Specify top design unit
$(TARGET)/rtl.vhdl.vhdlts: VHDL_TOP=1

ifneq "$(RTLTOOL)" ""
# ===================================================
# Include makefile for RTL synthesis
include $(MGC_HOME)/shared/include/mkfiles/ccs_$(RTLTOOL).mk
else
# ===================================================
# Include makefile for simulator
include $(MGC_HOME)/shared/include/mkfiles/ccs_questasim.mk
endif

