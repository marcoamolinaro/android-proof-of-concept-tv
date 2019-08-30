LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE     := AstroTV_DTV_Connector
LOCAL_C_INCLUDES := inc ../AstroTV_Android/include
LOCAL_SRC_FILES  := ../src/hello.cpp ../src/goodbye.cpp 
include $(BUILD_SHARED_LIBRARY)

#LOCAL_MODULE     := AstroTV_DTV_Connector
#LOCAL_C_INCLUDES := inc ../AstroTV_Android/include
#LOCAL_SRC_FILES  := ../src/hello.cpp ../src/goodbye.cpp ../src/main.cpp 
#LOCAL_LDLIBS     := ../AstroTV_Android/libs/$(TARGET_ARCH_ABI)/libtqtvd_astrotv_over_android.so
#iibAstroTV_DTV_Connector.sonclude $(BUILD_EXECUTABLE)

