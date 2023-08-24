#include "main.h"
/**
 * *_strcat - concatenate two string 
 * @dest : first array
 * @src : second array
 * @n : number of bit will concatenate
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		if (y < n)
		{
			dest[x] = src[y];
			x++;
			y++;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
