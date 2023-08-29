#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s : string will be send
 * @c : character we looking for
 *
 * Return: string
 */
char *_strchr(char *s, char c)
{
	char x;
	int y = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (s[y] == c)
		{
			return ((s + y));
		}
		y++;
	}
	return (0);
}
