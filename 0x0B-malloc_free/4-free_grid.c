#include "main.h"
/**
 * free_grid - frees two dimensional array
 * @grid : pointer to two dimensional array
 * @height : number of rows in the array
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	for (; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
