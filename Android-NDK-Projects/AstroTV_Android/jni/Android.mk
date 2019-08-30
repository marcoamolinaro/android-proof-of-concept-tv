LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE           := tqtvd_astrotv_over_android
LOCAL_SRC_FILES        := tqtvd_astrotv_over_android.cpp
LOCAL_SHARED_LIBRARIES := tqtvd_astrotv_over_android

include $(BUILD_SHARED_LIBRARY)

