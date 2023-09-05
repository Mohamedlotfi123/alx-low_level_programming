#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * @str : pointer to a string
 *
 * Return: pointer to new allocated memory
 */
char *_strdup(char *str)
{
	int x = 0, y = 0;
	char *z;

	if (str == NULL)
	{
		return (NULL);
	}
	z = malloc(sizeof(str));
	while (str[x] != '\0')
	{
		z[y] = str[x];
		y++;
		x++;
	}
	return (z);
}
