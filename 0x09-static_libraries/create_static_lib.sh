#!/bin/bash
gcc -wall -pedaantic -werror -wextra -c *.c

ar rc liball.a *.o
