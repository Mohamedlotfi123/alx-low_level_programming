#include "main.h"
/**
 * _strlen - the length of a string
 * @s : variable
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
