#include "main.h"
/**
 * _strup - allocate space of memory contains copy of the srting
 * @str : string to by copied
 *
 * Return: Pointer to the copy or NULL if fail
 */
char *_strdup(char *str)
{
	int len = 0, x = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	copy = malloc(sizeof(char) * len);
	if (copy == NULL)
	{
		return (NULL);
	}
	while (str[x])
	{
		copy[x] = str[x];
		x++;
	}
	return (copy);
}
