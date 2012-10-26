CPP = g++
CFLAGS = -Wall -Werror
ArrayDir = src/A_TwoDArray
VectorDir = src/V_TwoDArray
BUILD = build
TEST = test
LIB = lib

all: $(BUILD)/A_TwoDArray $(TEST)/A_TwoDArray_Test $(BUILD)/V_TwoDArray $(TEST)/V_TwoDArray_Test

$(BUILD)/A_TwoDArray: $(ArrayDir)/TwoDArray.cpp $(ArrayDir)/TwoDArray.h $(ArrayDir)/TwoDArrayTest.cpp
	cd $(ArrayDir); $(MAKE)

$(BUILD)/V_TwoDArray: $(VectorDir)/TwoDArray.cpp $(VectorDir)/TwoDArray.h $(VectorDir)/TwoDArrayTest.cpp
	cd $(VectorDir); $(MAKE)

$(TEST)/A_TwoDArray_Test: $(TEST)/A_TwoDArray_Test.cpp
	cd $(TEST); $(MAKE)

$(TEST)/V_TwoDArray_Test: $(TEST)/V_TwoDArray_Test.cpp
	cd $(TEST); $(MAKE)
