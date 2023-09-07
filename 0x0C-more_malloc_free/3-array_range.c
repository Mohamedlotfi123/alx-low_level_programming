#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range -  creates an array of integers.
 * @min : minimum number of array
 * @max : maximum number of array
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *x, y = 0;

	if (min > max)
	{
		return (NULL);
	}
	x = malloc(sizeof(*x) * (max - min + 1));
	for (; y <= max; y++)
	{
		if (x == NULL)
		{
			return (NULL);
		}
			x[y] = min + y;
	}
	return (x);
}
