INCLUDE = -I/usr/include/
LIBDIR  = -L/usr/X11R6/lib

COMPILERFLAGS = -Wall
CC = g++
OBJECT = -c
CFLAGS = $(COMPILERFLAGS) $(INCLUDE)
LIBRARIES = -lX11 -lXi -lXmu -lglut -lGL -lGLU -lm

all: BusDriver

BusDriver: GLFunc.o House.o Bus_simulator.o
	$(CC) House.o GLFunc.o Bus_simulator.o -o BusDriver $(CFLAGS) $(LIBDIR) $(LIBRARIES)

House.o: House.cpp
	$(CC) $(OBJECT) House.cpp

GLFunc.o: GLFunc.cpp
	$(CC) $(OBJECT)  GLFunc.cpp

Bus_simulator: Bus_simulator.cpp
	$(CC) $(OBJECT) Bus_simulator.cpp

clean:
	rm -f *.o BusDriver