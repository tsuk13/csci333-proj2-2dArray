CPP = g++
CFLAGS = -Wall -Werror
ArrayDir = src/A_TwoDArray
BUILD = build
TEST = test
LIB = lib

all: $(BUILD)/A_TwoDArray $(TEST)/A_TwoDArray_Test

$(BUILD)/A_TwoDArray: $(ArrayDir)/TwoDArray.cpp $(ArrayDir)/TwoDArray.h $(ArrayDir)/TwoDArrayTest.cpp
	cd $(ArrayDir); $(MAKE)

$(TEST)/A_TwoDArray_Test: $(TEST)/A_TwoDArray_Test.cpp
	cd $(TEST); $(MAKE)
