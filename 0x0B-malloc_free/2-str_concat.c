#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1 : first string
 * @s2 : second string
 *
 * Return: pointer to the concatenated sring or NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, x = 0, y = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	str = malloc(sizeof(char) * (len1 + len2 + 2));
	if (str == NULL)
	{
		return (NULL);
	}
	while (s1[x])
	{
		str[x] = s1[x];
		x++;
	}
	while (s2[y])
	{
		str[x] = s2[y];
		x++;
		y++;
	}
	return (str);
}
