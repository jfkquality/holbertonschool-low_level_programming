#!/bin/bash
gcc -fPIC -g -c -Wall *.c
gcc -shared -Wl,-soname,liball.so.1 -o liball.so *.o -lc
