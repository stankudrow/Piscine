#!/usr/bin/env bash

gcc -Wall -Werror -Wextra -c *.c
ar crs libft.a *.o