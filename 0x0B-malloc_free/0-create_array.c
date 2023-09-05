#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array -  creates an array of chars
 * @size : size of the array
 * @c : array value
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y = 0;

	if (size == 0)
	{
		return (0);
	}
	x = malloc(sizeof(c) * size);
	while (y < size)
	{
		if (x == NULL)
		{
			return (0);
		}
		x[y] = c;
		y++;
	}
	return (x);
}
