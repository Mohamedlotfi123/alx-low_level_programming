#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes function given as parameter
 * @array : pointer to the array
 * @size : size of the array
 * @action : pointer to function
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	for (x = 0; x <= size - 1; x++)
	{
		action(array[x]);
	}
}
