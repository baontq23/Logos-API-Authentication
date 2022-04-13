export THEOS=/opt/theos
ARCHS = arm64
TARGET := iphone:clang:latest:8.0
DEBUG = 0
FINALPACKAGE = 1
FOR_RELEASE = 1
THEOS_DEVICE_IP = 192.168.2.70 -p 22
include $(THEOS)/makefiles/common.mk

TWEAK_NAME = keytest

keytest_CFLAGS = -fobjc-arc
keytest_CCFLAGS = -std=c++11 -fno-rtti -fno-exceptions -DNDEBUG
keytest_LDFLAGS += FAHMenu/libFAHMenu.dylib FAHMenu/libAPIKey.dylib FAHMenu/JRMemory.framework/JRMemory
keytest_LIBRARIES += substrate
keytest_FRAMEWORKS = UIKit Foundation Security QuartzCore CoreGraphics CoreText
keytest_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk
