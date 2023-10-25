#include "main.h"
/**
 * _strlen_recursion - returns length of the string
 * @s : string we want it's length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	char *ptr = s;

	if (*ptr != '\0')
	{
		return (1 + _strlen_recursion(ptr + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * com_str - compare two characters
 * @s : string to compare it's character
 * @x : character in the begining of the string
 * @y : character in the end of the string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int com_str(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
		{
			return (1);
		}
		return (0 + com_str(s, x + 1, y - 1));
	}
	return (0);
}
/**
 * is_palindrome - check if the string is palindrome or not
 * @s : string to be check
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	return (com_str(s, 0, _strlen_recursion(s) - 1));
}
