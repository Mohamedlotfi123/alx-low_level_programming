#include "main.h"
/**
 * _strpbrk - searching a string for any set of bytes
 * @s : string we search in it
 * @accept : string have the character
 *
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return ((s + y - 1));
			}
		}
	}
	return ('\0');
}
