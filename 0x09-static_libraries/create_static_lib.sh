#!/bin/bash
c_file = $(ls *c)
for c_file in $c_file; do
	gcc -c $c_file
done
ar rcs liball.a *.o
ranlib liball.c
rm *.c
exit 0
