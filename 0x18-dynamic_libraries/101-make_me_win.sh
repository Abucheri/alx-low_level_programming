#!/bin/bash
gcc -shared -o my-jackpot.so -fPIC my-jackpot.c -ldl
LD_PRELOAD=/$PWD/my-jackpot.so ./gm 9 8 10 24 75 9
