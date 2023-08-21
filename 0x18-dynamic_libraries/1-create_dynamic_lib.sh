#!/bin/bash
gcc -fPIC -c *.c /*  It ensures that the code can be loaded and executed at any memory address.*/
gcc -shared -o liball.so *.o /* linking together the compiled object files */
