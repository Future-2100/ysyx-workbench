TOPNAME = top

CC = gcc
CXX = g++

# *************************** file path ****************************
WORK_DIR = $(NPC_HOME)
BUILD_DIR = $(WORK_DIR)/build

SRC_DIR = $(WORK_DIR)/csrc/verilator
INC_PATH = $(SRC_DIR)/include
OBJ_DIR =$(BUILD_DIR)/obj_dir

# ************************* Compilation flags ***********************
INCLUDES = $(addprefix -I, $(INC_PATH))

CSRCS = $(shell find $(SRC_DIR) -name "*.c")
COBJS = $(notdir $(CSRCS)) 
CFLAGS = -O2 -MMD -Wall -Werror $(INCLUDES) -O2 -Og -ggdb3

CXXSRCS = $(shell find $(SRC_DIR) -name "*.cc")
CXXOBJS = $(notdir $(CXXSRCS))
CXXFLAGS = $(shell llvm-config --cxxflags) -fPIE

VSRC_DIR = $(WORK_DIR)/vsrc
VSRCS = $(shell find $(VSRC_DIR) -name "*.v")

LIBS = $(shell llvm-config --libs)

OBJS = $(COBJS:%.c=$(OBJ_DIR)/%.o) $(CXXOBJS:%.cc=$(OBJ_DIR)/%.o)

BIN = $(BUILD_DIR)/$(TOPNAME)

# ***************************** asm ********************************
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cc
	mkdir -p $(dir $@)
	@$(CXX) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<

asm : $(OBJS)
	@echo $(OBJS)


default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# ************************** link verilator *************************
VERILATOR = verilator

CPPSRC =  $(shell find $(SRC_DIR) -name "*.cpp")
VERILATOR_FLAGS = $(OBJS) -CFLAGS $(INCLUDES) -CFLAGS -c
VERILATOR_FLAGS += -O3 --x-assign fast --x-initial fast --noassert -Wall 
VERILATOR_FLAGS += --cc --trace --coverage --build

LDFLAGS += $(shell llvm-config --libs)
LDFLAGS += -ldl -pie -lreadline
VERILATOR_FLAGS += $(addprefix -LDFLAGS , $(LDFLAGS))


VERILATOR_OUTFLAGS += --Mdir $(OBJ_DIR)
VERILATOR_OUTFLAGS += --exe
VERILATOR_OUTFLAGS += -o $(abspath $(BIN))

$(BIN): $(VSRCS) $(CPPSRC)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(VERILATOR_OUTFLAGS)

all : default

run : sim

NPCFLAGS = --diff=$(NEMU_HOME)/build/riscv64-nemu-interpreter-so

sim: $(BIN)
	@$(BIN) $(NPCFLAGS)

clean : 
	rm -rf $(BUILD_DIR)

.PHONY: asm clean




