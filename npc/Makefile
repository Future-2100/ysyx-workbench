TOPNAME = top

############################## Verilator Check #####################################

# Check for sanity to avoid later confusion
ifneq ($(words $(CURDIR)),1)
	$(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# package install, and verilator is in your path. Otherwise find the binary
# relative to $VERIALTOR_ROOT (such as when inside the git source).
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

####################################################################################



############################### Verilator Flags ####################################

# For best performance
VERILATOR_FLAGS += -O3 --x-assign fast --x-initial fast 
#VERILATOR_FLAGS += --noassert

#Stronger lint warning enabled
VERILATOR_FLAGS += -Wall

# Get C++ output(versus e.g. SystemC or only linting).
VERILATOR_FLAGS += --cc 

# Enable creation of .d dependency files, used for make dependency detection, 
# similar to gcc -MMD option. By default this option os enabled for --cc or 
# --sc models.
VERILATOR_FLAGS += --MMD

# Optimize
# VERILATOR_FLAGS += -Os -x-assign 0

#Make waveforms
#VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += --coverage

# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert

# Build model executable/library after Verilation
VERILATOR_FLAGS += --build

####################################################################################

#Create the destination directory

WORK_DIR = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))


# project source
VS_DIR = $(WORK_DIR)/vsrc/Single_Cycle
#VS_DIR = $(WORK_DIR)/vsrc/Pipeline
VSRCS = $(shell find $(VS_DIR) -name "*.v")

CS_DIR = $(WORK_DIR)/csrc
CSRCS = $(shell find $(CS_DIR) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

INC_PATH = $(abspath ./csrc/include)
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += -O2 -MMD -Wall -Werror $(INCFLAGS) -Og -ggdb3 -g
#CFLAGS += $(shell llvm-config --cxxflags) -fPIE
LDFLAGS += $(shell llvm-config --libs) 
LDFLAGS += -O2 -Og -ggdb3 -ldl -pie -lreadline 
VERILATOR_FLAGS += $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))

#rules for verilator output

# Name of output object directory
VERILATOR_OUTFLAGS += --Mdir $(OBJ_DIR) 

# Along with sim_main.cpp wrapper file, so the build will create an executable instead of only a library
VERILATOR_OUTFLAGS += --exe

# Specify the name for the executable built if using --exe. Default to the --prefix if not specified
VERILATOR_OUTFLAGS += -o $(abspath $(BIN))



$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	@$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(NVBOARD_FLAGS) \
		$(VERILATOR_OUTFLAGS) 


# -b -e <elf_file> from abstract_machine
NPC_FLAGS += $(ARGS)

LOG_FLAGS += --log=/home/grand/ysyx-workbench/npc/build/npc-log.txt

DIFF_FLAGS += --diff=$(NEMU_HOME)/build/riscv64-nemu-interpreter-so

# image file from abstract_machine
#IMG = /home/grand/ysyx-workbench/am-kernels/benchmarks/microbench/build/microbench-riscv64-npc.bin
NPC_FLAGS += $(IMG)

ifeq ($(WAVE),en)
WAVEFLAGS = gtkwave $(BUILD_DIR)/logs/$(TOPNAME).vcd
endif

all : default

wave : 
	gtkwave build/logs/top.vcd

run : sim

gdb : $(BIN)
	@gdb --args $(BIN) $(DIFF_FLAGS) $(LOG_FLAGS) $(NPC_FLAGS) 

sim: $(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "----------------------------------------- RUN -----------------------------------------------"
	@$(BIN) --diff=$(NEMU_HOME)/build/riscv64-nemu-interpreter-so $(LOG_FLAGS) $(NPC_FLAGS) 
	@echo "---------------------------------------- DONE  ----------------------------------------------"
	$(WAVEFLAGS)

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	@rm -rf $(BUILD_DIR)
	
include ../Makefile

