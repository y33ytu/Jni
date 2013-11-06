LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    :=hello-jni

LOCAL_SRC_FILES :=com_example_jni_MyInterface.c

include $(BUILD_SHARED_LIBRARY)
