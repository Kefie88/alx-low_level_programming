#!/bin/bash
gee -fPIC -c *.c
gcc -shared -o liball.so *.o
