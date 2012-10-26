CPP = g++
CFLAGS = -Wall -Werror
build = ../../build

$(build)/S_TwoDArray: TwoDArray.o TwoDArrayTest.cpp Node.o
	$(CPP) $(CFLAGS) -o $(build)/S_TwoDArray TwoDArrayTest.cpp TwoDArray.o Node.o

TwoDArray.o: TwoDArray.h TwoDArray.cpp
	$(CPP) $(CFLAGS) -c TwoDArray.cpp

Node.o: Node.h Node.cpp
	$(CPP) $(CFLAGS) -c Node.cpp
clean:
	rm -f *.o
