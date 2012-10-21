CPP = g++
CFLAGS = -Wall -Werror
ArrayDir = src/A_TwoDArray
build = build

all: $(build)/A_TwoDArray

$(build)/A_TwoDArray: $(ArrayDir)/TwoDArray.cpp $(ArrayDir)/TwoDArray.h $(ArrayDir)/TwoDArrayTest.cpp
	cd $(ArrayDir); $(MAKE)
