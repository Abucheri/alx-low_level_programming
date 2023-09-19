#!/bin/bash
gcc -shared -o test.so -fPIC test.c
export LD_PRELOAD="$PWD/test.so"
