#!/bin/bash
gcc -o test src/main.c struct.c -I.
./test
rm test
