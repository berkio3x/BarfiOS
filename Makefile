CXX = g++
CXXFLAGS = -Wall -g

ARCHDIR = arch/i386

main:
	./kernel/kernel.cpp ./arch/i386/tty.cpp
		g++ -I ./include -o kernel ./kernel/kernel.cpp 


