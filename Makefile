INCLUDE = -I/usr/include/
LIBDIR  = -L/usr/X11R6/lib

COMPILERFLAGS = -Wall
CC = g++
OBJECT = -c
CFLAGS = $(COMPILERFLAGS) $(INCLUDE)
LIBRARIES = -lX11 -lXi -lXmu -lglut -lGL -lGLU -lm

BusDriver:
	$(CC) $(OBJECT) House.cpp -lglut -lGL -lGLU
	$(CC) $(OBJECT) $(CFLAGS) GLFunc.cpp $(LIBDIR) $(LIBRARIES)
	$(CC) House.o GLFunc.o Bus_simulator.cpp -o $@ $(CFLAGS) $(LIBDIR) $< $(LIBRARIES)
clean:
	rm -f *.o
	rm BusDriver