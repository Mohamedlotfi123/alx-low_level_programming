#include "main.h"
/**
 * create_array - creates array of chars and initailizes it
 * @size : size of the array
 * @c : character to initializes the array with
 *
 * Return: Pointer to the array or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x = 0;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	while (x < size)
	{
		array[x] = c;
		x++;
	}
	return (array);
}
