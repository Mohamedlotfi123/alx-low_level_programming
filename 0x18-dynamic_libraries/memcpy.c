#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest : memory will copy to
 * @src : memory will copy from
 * @n : number of bytes
 *
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	int y = 0;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[y];
		y++;
	}
	return (dest);
}
