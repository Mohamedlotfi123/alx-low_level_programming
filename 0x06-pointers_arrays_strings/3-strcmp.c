#include "main.h"
/**
 * _strcmp - compare two string
 * @s1 : first string
 * @s2 : second string
 *
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0;

	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	if (x > y)
	{
		return (15);
	}
	else if (x == y)
	{
		return (0);
	}
	else
	{
		return (-15);
	}
}
