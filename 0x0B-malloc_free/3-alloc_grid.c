#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * **alloc_grid -  function that returns a pointer
 * @width : width of array
 * @height : height of array
 *
 * Return: pointer to 2 dimensinale array
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int y = 0, z = 0;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
	{
		return (NULL);
	}
	while (y < height)
	{
		x[y] = malloc(sizeof(int) * width);
		while (z < width)
		{
			x[y][z] = 0;
			z++;
		}
		y++;
	}
	return (x);
}
