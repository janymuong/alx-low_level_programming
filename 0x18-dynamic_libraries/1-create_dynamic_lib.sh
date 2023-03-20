#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -shared -Wl,-soname,liball.so -o liball.so -fPIC *.c
