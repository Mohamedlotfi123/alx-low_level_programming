#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s : pointer to array
 * @b : character
 * @n : number of array element will fill with b
 *
 * Return: array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
