#include "main.h"
/**
 * leet - encode a string
 * @s : string will be encripted
 *
 * Return: encripted string
 */
char *leet(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		if (s[y] == 'a' || s[y] == 'A')
		{
			s[y] = 52;
		}
		else if (s[y] == 'e' || s[y] == 'E')
		{
			s[y] = 51;
		}
		else if (s[y] == 'o' || s[y] == 'O')
		{
			s[y] = 48;
		}
		else if (s[y] == 't' || s[y] == 'T')
		{
			s[y] = 55;
		}
		else if (s[y] == 'l' || s[y] == 'L')
		{
			s[y] = 49;
		}
		y++;
	}
	return (s);
}
