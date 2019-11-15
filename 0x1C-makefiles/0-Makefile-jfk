# _*_ MakeFile _*_
CC = gcc
CFLAGS = -c
XFLAGS = -o
EXEC = holberton

all: holberton main

holberton: holberton.o main.o
# gcc holberton.o main.o -o holberton
	$(CC) $(XFLAGS) $(EXEC) main.o holberton.o

holberton.o: holberton.c m.h
# gcc -c holberton.c
	$(CC) $(CFLAGS) holberton.c

main.o: main.c
# gcc -c main.c
	$(CC) $(CFLAGS) main.c

clean:
	rm *.o holberton
