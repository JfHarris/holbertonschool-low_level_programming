#!/bin/bash
gcc -c *.c
ar rcs liball.a *.o
# creates static library
