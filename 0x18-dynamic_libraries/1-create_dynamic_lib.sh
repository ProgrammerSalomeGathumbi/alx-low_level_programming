#!/bin/bash
gcc -c -fPIC *.c
ld -shared -o liball.so *o         
