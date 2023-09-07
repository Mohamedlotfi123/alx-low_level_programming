#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - reallocate a memory block using malloc and free
 * @ptr : pointer point to memory previously allocated
 * @old_size : old size that allcoated
 * @new_size : new size will allocate
 *
 * Return: same as realloc
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x, *y;
	unsigned int z = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	x = malloc(new_size);
	if (x == NULL)
	{
		return (NULL);
	}
	y = ptr;
	if (new_size < old_size)
	{
		for (; z < new_size; z++)
		{
			x[z] = y[z];
		}
	}
	if (new_size > old_size)
	{
		for (; z < old_size; z++)
			x[z] = y[z];
	}
	free(ptr);
	return (x);
}
