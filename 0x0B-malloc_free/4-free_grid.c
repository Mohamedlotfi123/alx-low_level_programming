#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - frees a 2 dimensional array
 * @grid : pointer to memory
 * @height : height of a string
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
