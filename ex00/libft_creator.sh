#!/bin/sh

rm -f libft.a
rm -f *.o
gcc -Wall -Wextra -Werror -c *.c
ar rcs libft.a *.o
