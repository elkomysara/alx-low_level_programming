#!/bin/bash
gcc -c 0x09-static_libraries/*.c
ar rcs liball.a 0x09-static_libraries/*.o
rm 0x09-static_libraries/*.o
