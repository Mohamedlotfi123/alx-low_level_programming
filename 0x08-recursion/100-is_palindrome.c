#include "main.h"
int _strlen(char *s);
int check_pal(char *s, int y, int x);
/**
 * is_palindrome - return 1 if string is palindrome ,0 if it not
 * @s : string will be check
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, _strlen(s), 0));
}
/**
 * _strlen - string length
 * @s : pointer to the first of the string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
 * check_pal - check string
 * @s : string to check
 * @y : string length
 * @x : integer
 *
 * Return: 1 if yes, no if not
 */
int check_pal(char *s, int y, int x)
{
	y--;
	if (s[y] == s[x] && s[x] != '\0')
	{
		return (check_pal(s, y, x + 1));
	}
	else if (s[x] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
