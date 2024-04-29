mkfile_path := $(dir $(lastword $(MAKEFILE_LIST)))

# APPL_COBJS += 
APPL_CXXOBJS += JsonReader.o

SRCLANG := c++

INCLUDES += \
	-I$(mkfile_path)external/json/single_include/nlohmann/ \
	-I$(mkfile_path)src

APPL_DIRS += $(mkfile_path)src

ifdef CONFIG_EV3RT_APPLICATION

# Include libraries
include $(EV3RT_SDK_LIB_DIR)/libcpp-test/Makefile
include $(EV3RT_SDK_LIB_DIR)/lib2/Makefile

endif
