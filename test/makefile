BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a
GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include -pthread

CPP = g++
CPPFLAGS = -Wall -Wextra

all: A_TwoDArray_Test V_TwoDArray_Test S_TwoDArray_Test

A_TwoDArray_Test: A_TwoDArray_Test.cpp $(SRC)/A_TwoDArray/TwoDArray.o $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -o A_TwoDArray_Test A_TwoDArray_Test.cpp $(SRC)/A_TwoDArray/TwoDArray.o $(GTEST_MAINA)

V_TwoDArray_Test: V_TwoDArray_Test.cpp $(SRC)/V_TwoDArray/TwoDArray.o $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -o V_TwoDArray_Test V_TwoDArray_Test.cpp $(SRC)/V_TwoDArray/TwoDArray.o $(GTEST_MAINA)

S_TwoDArray_Test: S_TwoDArray_Test.cpp $(SRC)/S_TwoDArray/TwoDArray.o $(SRC)/S_TwoDArray/Node.o $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -o S_TwoDArray_Test S_TwoDArray_Test.cpp $(SRC)/S_TwoDArray/TwoDArray.o $(SRC)/S_TwoDArray/Node.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f A_TwoDArray_Test
	rm -f S_TwoDArray_Test
	rm -f V_TwoDArray_Test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean
