#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest : first string
 * @src : second string
 * @n : number of byets
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (x < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
