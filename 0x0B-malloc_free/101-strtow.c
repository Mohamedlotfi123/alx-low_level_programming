#include "main.h"
/**
 * strtow - splits string into words
 * @str : pointer to string will be splited
 *
 * Return: Pointer to the arrray of strings or NULL if fail
 */
char **strtow(char *str)
{
	char **ptr, *str_ptr, *p;
	int x = 0, y = 0, c, z = 0, g = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[x])
	{
		if (str[x] == ' ' && str[x + 1] != ' ' && str[x + 2] != ' ')
		{
			y++;
			x++;
		}
		else
		{
			x++;
			continue;
		}
	}
	ptr = malloc(sizeof(char *) * y);
	if (ptr == NULL)
	{
		return (NULL);
	}
	str_ptr = str;
	while (str[g] != '\0')
	{
		y = 0;
		c = 0;
		while (*str_ptr == ' ')
		{
			str_ptr++;
			g++;
		}
		if (*str_ptr == '\0')
		{
			break;
		}
		p = str_ptr;
		while (*str_ptr != ' ')
		{
			c += 1;
			str_ptr++;
			g++;
		}
		ptr[z] = malloc(sizeof(char) * c + 1);
		while (y < c)
		{
			ptr[z][y] = *p;
			y++;
			p++;
		}
		ptr[z][y] = '\0';
		z++;
		g++;
	}
	return (ptr);
}
