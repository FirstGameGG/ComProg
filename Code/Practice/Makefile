SHELL := bash
CC = gcc
CFLAGS = -g

run: main
	./main.exe

main: clean mylib.o main.o
	$(CC) $(CFLAGS) mylib.o main.o -o main.exe

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

mylib.o: mylib.c
	$(CC) $(CFLAGS) -c mylib.c

clean:
	rm -f *.o main.exe