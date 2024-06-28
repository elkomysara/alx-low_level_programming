#!/bin/bash
cd 0x09-static_libraries/
gcc -c *.c
ar rcs liball.a *.o
