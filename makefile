CPP = g++
CFLAGS = -Wall -Werror

all: build/A_TwoDArray

build/A_TwoDArray: src/A_TwoDArray/TwoDArray.cpp src/A_TwoDArray/TwoDArray.h
	$(CPP) $(CFLAGS) -o build/A_TwoDArray src/A_TwoDArray/TwoDArray.cpp
