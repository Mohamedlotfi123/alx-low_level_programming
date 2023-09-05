#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *str_concat - concatenates two strings
 * @s1 : first string
 * @s2 : second string
 *
 * Return: pointer point to the new memory space
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int x = 0;
	int  y = 0;
	char *z;
	int i = 0;

	z = malloc(sizeof(s1) + sizeof(s2) - 2);
	if (s1 == NULL)
	{
		*s1 = ' ';
	}
	else if (s2 == NULL)
	{
		*s2 = ' ';
	}
	while (s1[y] != '\0')
	{
		if (z == NULL)
		{
			return (NULL);
		}
		z[x] = s1[y];
		x++;
		y++;
	}
	while (s1[y] == '\0')
	{
		z[x] = s2[i];
		x++;
		i++;
		if (s2[i] == '\0')
		{
			break;
		}
	}
	return (z);
}
