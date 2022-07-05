
NXDC_FILE = constr/top.nxdc
INC_PATH ?=

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND) : $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

#project source
CSRCS += $(SRC_AUTO_BIND)

#rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

#rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAMEd"\"V$(TOPNAME)\""
LDFLAGS += -lSDL2 -lSDL2_image

NVBOARD_FLAGS = $(addprefix -CFLAGS, $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))


