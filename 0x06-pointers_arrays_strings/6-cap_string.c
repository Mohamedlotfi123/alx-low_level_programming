#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s : string
 *
 * Return: string with all Capital words
 */
char *cap_string(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		if ((s[y] == '!' || s[y] == '(' || s[y] == ')' || s[y] == '{' || s[y] == '}' || s[y] == ';' || s[y] == '?' || s[y] == ',' || s[y] == '\t' || s[y] == '\n' || s[y] == '.' || s[y] == ' ') && s[y + 1] >= 'a' && s[y + 1] <= 'z')
		{
			s[y + 1] = s[y + 1] - 32;
		}
		y++;
	}
	return (s);
}
