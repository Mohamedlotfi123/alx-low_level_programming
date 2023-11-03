#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min : minimum value in the array
 * @max : maximum value in the array
 *
 * Return: pointer to the new array or NULL if fail
 */
int *array_range(int min, int max)
{
	int *ptr, x, y;

	if (min > max)
	{
		return (NULL);
	}
	y = max - min + 1;
	ptr = malloc(sizeof(int) * y);

	if (ptr == NULL)
	{
		return (NULL);
	}
	y = min;
	for (x = 0; y <= max; x++)
	{
		ptr[x] = (min + x);
		y += 1;
	}
	return (ptr);
}
