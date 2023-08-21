#!/bin/bash

# Compile each .c file into object files with position-independent code
gcc -fPIC -c *.c

# Create a shared library named liball.so by linking compiled object files
gcc -shared -o liball.so *.o
