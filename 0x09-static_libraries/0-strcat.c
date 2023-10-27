#include "main.h"
#include<stdio.h>
/**
 * _strcat - concatenates two string
 * @dest : first string
 * @src : second string
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y;

	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
