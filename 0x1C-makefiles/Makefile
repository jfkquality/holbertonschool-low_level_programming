# _*_ MakeFile _*_
# _*_ MakeFile _*_
CC = gcc
SRC := $(wildcard *.c)
OBJ :=$(wildcard *.o)
# CFLAGS = -c
# XFLAGS = -o
NAME = holberton

all: holberton

holberton: holberton.o main.o
	gcc holberton.o main.o -o holberton
# $(CC) $(XFLAGS) $(EXEC) main.o holberton.o

holberton.o: holberton.c m.h
	gcc -c holberton.c
# $(CC) $(CFLAGS) holberton.c

main.o: main.c
	gcc -c main.c
# $(CC) $(CFLAGS) main.c

clean:
	rm *.o holberton
