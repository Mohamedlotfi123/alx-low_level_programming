#include "main.h"
#include <stdio.h>
/**
 * _strlen - length of the string
 * @str : pointer to the string
 *
 * Return: Length ofthe string
 */
int _strlen(char *str)
{
	int x = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[x])
	{
		x += 1;
	}
	return (x);
}
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac : number of arguments
 * @av : array of arguments
 *
 * Return: pointer to a new string or NULL if fail
 */
char *argstostr(int ac, char **av)
{
	int x, len = 0, y = 0;
	char *ptr, *av_ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; av[x] != NULL; x++)
	{
		len += _strlen(av[x]);
	}
	ptr = malloc(sizeof(char) * (len + ac + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; av[x] != NULL; x++)
	{
		av_ptr = av[x];
		while (*av_ptr != '\0')
		{
			ptr[y] = *av_ptr;
			y++;
			av_ptr++;
		}
		ptr[y] = '\n';
		y++;
	}
	return (ptr);
}
