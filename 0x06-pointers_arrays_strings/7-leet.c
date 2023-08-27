#include "main.h"
/**
 * leet - encode a string
 * @s : string will be encripted
 *
 * Return: encripted string
 */
char *leet(char *s)
{
	int x, y;
	char s1[] = "AaEeOoTtLl";
	char s2[] = "4433007711";

	x = 0;
	y = 0;
	while (s[x] != '\0')
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == s1[y])
			{
				s[x] = s2[y];
			}
		}
		x++;
	}
	return (s);
}
