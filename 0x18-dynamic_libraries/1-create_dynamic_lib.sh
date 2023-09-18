#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
rm -f *.o
echo "Dynamic library liball.so created successfully."
