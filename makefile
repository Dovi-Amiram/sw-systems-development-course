CC = gcc
FLAGS = -Wall -g

all: mains maind

mains: main.o mymaths
	$(CC) $(FLAGS) -o mains main.o libmyMath.a
maind: main.o mymathd
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
mymathd: basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o
mymaths: basicMath.o power.o
	ar -rcs libmyMath.a basicMath.o power.o
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
myMath.o: basicMath.c power.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c power.c

.PHONY: all clean

clean:
	rm -f mains maind *.so *.a *.o


