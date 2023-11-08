#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array : array to be searched
 * @size : number of element in the array
 * @cmp : Pointer to a function the compare values
 *
 * Return: index of integer or -1 if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) == 1)
		{
			return (x);
		}
	}
	return (-1);
}
