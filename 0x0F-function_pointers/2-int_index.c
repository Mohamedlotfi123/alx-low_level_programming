#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array : pointer to array
 * @size : size of the array
 * @cmp : pointer to function
 *
 * Return: intger
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		cmp(array[x]);
		if (cmp(array[x]))
		{
			return (x);
		}
	}
	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}
	return (-1);
}
