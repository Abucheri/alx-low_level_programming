#!/bin/bash
gcc -shared -o myjackpot.so -fPIC myjackpot.c
export LD_PRELOAD="$PWD/myjackpot.so"
