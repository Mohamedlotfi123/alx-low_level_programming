#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - allocate memory for and array
 * @nmemb : number of element
 * @size : size of each element
 *
 * Retrun: pointer to allcoated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	x = malloc(nmemb * size);
	for (; y < (nmemb * size); y++)
	{
		if ( x == NULL)
		{
			return (NULL);
		}
		x[y] = 0;
	}
	return (x);
}
