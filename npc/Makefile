TOPNAME = top

ifeq ($(NV),en)
NXDC_FILES = $(NPC_HOME)/constr/top.nxdc
INC_PATH ?=
endif

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
VERILATOR_FLAGS += -O3 --x-assign fast --x-initial fast --noassert

#Stronger lint warning enabled
#VERILATOR_FLAGS += -Wall

# Get C++ output(versus e.g. SystemC or only linting).
VERILATOR_FLAGS += --cc 

# Enable creation of .d dependency files, used for make dependency detection, 
# similar to gcc -MMD option. By default this option os enabled for --cc or 
# --sc models.
VERILATOR_FLAGS += --MMD

# Optimize
# VERILATOR_FLAGS += -Os -x-assign 0

#Make waveforms
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += --coverage

# Check SystemVerilog assertions
# VERILATOR_FLAGS += --assert

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

# constraint file
ifeq ($(NV),en)
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	@python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
endif


# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
ifeq ($(NV),en)
CSRCS = $(shell find $(abspath ./csrc/nvboard) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)
else
CSRCS = $(shell find $(abspath ./csrc/verilator) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
endif

#rules for NVBoard
ifeq ($(NV),en)
include $(NVBOARD_HOME)/scripts/nvboard.mk
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -lSDL2 -lSDL2_image
NVBOARD_FLAGS += $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))
else
INC_PATH = $(abspath ./csrc/verilator/include)
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS)
#CFLAGS += $(shell llvm-config --cxxflags) -fPIE
LDFLAGS += $(shell llvm-config --libs) ~/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so
LDFLAGS += -O2 -Og -ggdb3 -ldl -pie -lreadline 
LDFLAGS = "$(LDFLAGS)"
VERILATOR_FLAGS += $(addprefix -CFLAGS , $(CFLAGS)) -LDFLAGS $(LDFLAGS)
#VERILATOR_FLAGS += $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))
endif

#rules for verilator output

# Name of output object directory
VERILATOR_OUTFLAGS += --Mdir $(OBJ_DIR) 

# Along with sim_main.cpp wrapper file, so the build will create an executable instead of only a library
VERILATOR_OUTFLAGS += --exe

# Specify the name for the executable built if using --exe. Default to the --prefix if not specified
VERILATOR_OUTFLAGS += -o $(abspath $(BIN))

#image file
IMG =

NPCFLAGS += $(ARGS)

NPCFLAGS += $(IMG)

NPCFLAGS += --diff=$(NEMU_HOME)/build/riscv64-nemu-interpreter-so

ifeq ($(WAVE),en)
WAVEFLAGS = gtkwave $(BUILD_DIR)/logs/$(TOPNAME).vcd
endif

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	@$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(NVBOARD_FLAGS) \
		$(VERILATOR_OUTFLAGS) 

all : default

run : sim

sim: $(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "----------------------------------------- RUN -----------------------------------------------"
	@$(BIN) $(NPCFLAGS)
	@echo "---------------------------------------- DONE  ----------------------------------------------"
	$(WAVEFLAGS)

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	@rm -rf $(BUILD_DIR)
	
include ../Makefile

