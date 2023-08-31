#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s : pointer to string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		return (n + _strlen_recursion(s + 1));
	}
	return (0);
}
