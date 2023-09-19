#!/bin/bash
gcc -shared -o myjackpot.so -fPIC myjackpot.c -ldl
export LD_PRELOAD="$PWD/myjackpot.so"
