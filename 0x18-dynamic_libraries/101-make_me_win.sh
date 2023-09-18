#!/bin/bash
gcc -shared -o my-jackpot.so -fPIC my-jackpot.c
export LD_PRELOAD=./my-jackpot.so:$LD_LIBRARY_PATH
