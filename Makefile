# Run "make" in console to build gradebook program.

CFLAGS=-std=c99 -Wall

gradebook: gradebook.o main.o
	gcc $(CFLAGS) gradebook.o main.o -o gradebook

main.o: main.c gradebook.h
	gcc $(CFLAGS) -c main.c

gradebook.o: gradebook.h gradebook.c
	gcc $(CFLAGS) -c gradebook.c

clean:
	rm -f stats main.o gradebook.0
