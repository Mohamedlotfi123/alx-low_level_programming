#include "main.h"
/**
 * _strspn - gets the length of prefix substring
 * @s : string will be check
 * @accept : character am looking for
 *
 * Return: number of bytes in initail segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y = 0;
	unsigned int z = 0;

	for (x = 0; s[x] != ' '; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z = z + 1;
			}
			else
			{
				return ('\0');
			}
		}
	}
	return (z);
}

