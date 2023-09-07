#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenate two string
 * @s1 : pointer to the first string
 * @s2 : pointer to the second string
 * @n : number of character from second string
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	int y = 0;
	unsigned int z = 0;

	x = malloc(sizeof(s1) + n + 1);
	if (*s1 == NULL)
	{
		*s1 = " ";
	}
	if (*s2 == NULL)
	{
		*s2 = ' ';
	}
	while (s1[y] != '\0')
	{
		if (x == NULL)
		{
			return (NULL);
		}
		x[y] = s1[y];
		y++;
	}
	if (sizeof(s2) > n || sizeof(s2) == n)
	{
		while(z < n)
		{
			x[y] = s2[z];
			z++;
			y++;
		}
	}
	else if (sizeof(s2) < n)
	{
		while(s2[z] != '\0')
		{
			x[y] = s2[z];
			z++;
			y++;
		}
	}
	return (x);
}
