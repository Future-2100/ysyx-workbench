TOPNAME = top

###1. Check

# Check for sanity to avoid later confusion
ifneq ($(words $(CURDIR)),1)
	$(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# package install, and verilator is in your path. Otherwise find the
# binary relative to $VERILATOR_ROOT (such as when inside the git sources).
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif


###2. General Compilation Targets

#Create the destination directory
WORK_DIR = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

#Compilation targets
VSRCS = $(shell find $(WORK_DIR)/vsrc -name "*.v")
CSRCS = $(shell find $(WORK_DIR)/csrc -name "*.c" -or -name "*.cc" -or -name "*.cpp")


###3. Generate Compilation Flags

# For best performance
VERILATOR_FLAGS += -O3 --x-assign fast --x-initial fast --noassert

#Stronger lint warning enabled
VERILATOR_FLAGS += -Wall

# Get C++ output(versus e.g. SystemC or only linting).
VERILATOR_FLAGS += --cc
# Enable creation of .d dependency files, used for make dependency detection, similar to gcc -MMD option. By default this option os enabled for --cc or --sc models.
VERILATOR_FLAGS += --MMD

# Optimize
VERILATOR_FLAGS += -Os -x-assign 0

# Make waveforms
VERILATOR_FLAGS += --trace 

# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert

# Build model executable/library after Verilation
VERILATOR_FLAGS += --build

# Name of output object directory
VERILATOR_FLAGS += --Mdir $(BUILD_DIR)

# along with sim_amin.cpp wrapper file, so the build will crete an executable instead of only a library
VERILATOR_FLAGS += --exe

#specify the name for the executable built if using --exe. Default to the --prefix if not specified.
VERILATOR_FLAGS += -o $(BIN)


######################################################################

$(BIN) : $(VSRCS) $(CSRCS) 
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(TOPNAME) $^

all : default


sim: $(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "-- Verilator hello-world simple example"
	@echo "-- VERILATE & BUILD --------"
	@echo "-- RUN ---------------------"
	@$(BIN)
	@echo "-- DONE --------------------"
	@echo "Note: Once this example is understood, see examples/make_tracing_c."
	@echo "Note: Also see the EXAMPLE section in the verilator manpage/document."

wave :
	@gtkwave $(BUILD_DIR)/logs/$(TOPNAME).vcd

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf $(DST_DIR)
	
include ../Makefile
