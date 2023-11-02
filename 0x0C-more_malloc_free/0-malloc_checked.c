#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b : size will be allocated
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
