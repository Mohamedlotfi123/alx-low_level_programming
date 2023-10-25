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
