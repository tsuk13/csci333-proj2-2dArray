CPP = g++
CFLAGS = -Wall -Werror

BUILD = ../../build

$(BUILD)/V_TwoDArray: TwoDArray.o TwoDArrayTest.cpp
	$(CPP) $(CFLAGS) -o $(BUILD)/V_TwoDArray TwoDArrayTest.cpp TwoDArray.o

TwoDArray.o: TwoDArray.h TwoDArray.cpp
	$(CPP) $(CFLAGS) -c TwoDArray.cpp

clean:
	rm -f *.o
