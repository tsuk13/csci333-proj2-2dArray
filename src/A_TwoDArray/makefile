CPP = g++
CFLAGS = -Wall -Werror
build = ../../build

$(build)/A_TwoDArray: TwoDArray.o TwoDArrayTest.cpp
	$(CPP) $(CFLAGS) -o $(build)/A_TwoDArray TwoDArrayTest.cpp TwoDArray.o

TwoDArray.o: TwoDArray.h TwoDArray.cpp
	$(CPP) $(CFLAGS) -c TwoDArray.cpp

clean:
	rm -f *.o
