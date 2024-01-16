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
	int y = 0;

	for (; s[y] >= '\0'; y++)
	{
		if (s[y] == c)
		{
			return (&s[y]);
		}
	}
	return (0);
}
