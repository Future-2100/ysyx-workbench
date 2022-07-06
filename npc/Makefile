TOPNAME = top

#Create the destination directory

WORK_DIR = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

include $(NPC_HOME)/script/verilator.mk


###2. General Compilation Targets

ifeq ($(PLATFORM),nvboard)
include $(NPC_HOME)/script/nvboard.mk
endif

#Compilation targets
VSRCS = $(shell find $(WORK_DIR)/vsrc -name "*.v")

ifeq ($(PLATFORM),nvboard)
CSRCS = $(shell find $(WORK_DIR)/csrc/nvboard -name "*.c" -or -name "*.cc" -or -name "*.cpp")
else
CSRCS = $(shell find $(WORK_DIR)/csrc/verilator -name "*.c" -or -name "*.cc" -or -name "*.cpp")
endif


######################################################################

$(BIN) : $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(NVBOARD_FLAGS) \
		$(VERILATOR_OUT)

all : default

sim: $(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "-- Verilator hello-world simple example"
	@echo "-- VERILATE & BUILD --------"
	@echo "-- RUN ---------------------"
	@$(BIN) +trace
	@echo "-- DONE --------------------"
	@echo "Note: Once this example is understood, see examples/make_tracing_c."
	@echo "Note: Also see the EXAMPLE section in the verilator manpage/document."

wave: sim
	@gtkwave $(BUILD_DIR)/logs/$(TOPNAME).vcd

run : $(BIN)
	$^

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf $(BUILD_DIR)
	
include ../Makefile
