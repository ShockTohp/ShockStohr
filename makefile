CC := g++
CFLAGS := -g -Wall
TARGET := ShockStohr


default: all

all: main.o encrypt.o 
	$(CC) $(CFLAGS) -o $(TARGET)  main.o encrypt.o

encrypt.o: encrypt.cpp encrypt.h 
	$(CC) $(CFLAGS) -c encrypt.cpp 

main.0: main.cpp
	$(CC) $(CFLAGS)  -c main.cpp

clean:
	$(RM) ShockStohr. *.0 *~

