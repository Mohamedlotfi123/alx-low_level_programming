#include "main.h"
/**
 * alloc_grid - allocate memory for two deminsional array of integer
 * @width : width of the array
 * @height : height of the array
 *
 * Return: pointer to the array or NULL if fail
 */
int **alloc_grid(int width, int height)
{
	int x = 0, y = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * height + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);
		if (ptr[x] == NULL)
		{
			free(ptr);
			return (NULL);
		}
		for (; y < width; y++)
		{
			ptr[x][y] = 0;
		}
	}
	return (ptr);
}
