#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
# creates dynamic library
