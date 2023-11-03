#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb : number of the elements
 * @size : size of one element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x = 0, m = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	m = nmemb * size;
	ptr = malloc(m);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (x < nmemb)
	{
		ptr[x] = 0;
		x++;
	}
	return (ptr);
}
