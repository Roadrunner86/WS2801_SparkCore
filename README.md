WS2801_SparkCore
Quick port of exiting WS2801 library to Spark Core platform

Put WS2801.h in the inc directroy under core-firmware

Put WS2801.cpp example application application.cpp in the scr directory under core-firmware

add

>CPPSRC += $(TARGET_SRC_PATH)/Ws2801.cpp
to your build.mk file the scr directory under core-firmware

make and enjoy.

WS2801 Libary from https://github.com/neophob/WS2801-Library
