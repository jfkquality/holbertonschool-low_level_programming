#!/bin/bash
gcc -fPIC -g -c -Wall *.c
gcc -shared -Wl,-soname,libholberton.so -o libholberton.so *.o -lc
