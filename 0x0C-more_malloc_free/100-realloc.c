#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - reallocate a memory block using malloc and free
 * @*ptr : pointer point to memory previously allocated
 * @old_size : old size that allcoated
 * @new_size : new size will allocate
 *
 * Return: same as realloc
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *x;
	unsigned int y = 0, z = 0;

	x = malloc(old_size);
	for (; y <= old_size; y++)
	{
		(int *)x[y] = (int *)ptr[y];
	}
	free(ptr);
	ptr = malloc(new_size);
	for (; z <= new_size; z++)
	{
		(int *)ptr[z] = (int *)x[new_size + z];
	}
	free(x);
	if (new_size > old_size)
	{
		return (ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
}
