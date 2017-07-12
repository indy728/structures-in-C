#!/bin/bash
gcc -o battle src/main.c arena.c -I.
./battle
rm battle
