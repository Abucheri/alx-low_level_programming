#!/bin/bash
gcc -shared -o my-jackpot.so -fPIC my-jackpot.c
export LD_PRELOAD=/$PWD/my-jackpot.so
