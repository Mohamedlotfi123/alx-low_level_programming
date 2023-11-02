#include "main.h"
/**
 * _strlen - length of the string
 * @str : Pointer to the string
 *
 * Return: length of the string
 */
unsigned int _strlen(char *str)
{
	int x = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (*str != '\0')
	{
		x += 1;
		str++;
	}
	return (x);
}
/**
 * string_nconcat - concatenates two strings
 * @s1 : first string
 * @s2 : second string
 * @n : bytes of s2 will be concatenated
 *
 * Return: pointer to the newly allocated memory or NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int x = 0, len = 0, y = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= _strlen(s2))
	{
		len = _strlen(s1) + _strlen(s2);
		ptr = malloc(sizeof(char) * len + 1);
	}
	else
	{
		len = _strlen(s1) + n;
		ptr = malloc(sizeof(char) * len + 1);
	}
	if (ptr == NULL)
		return (NULL);
	while (s1[x])
	{
		ptr[x] = s1[x];
		x++;
	}
	while (y < n)
	{
		ptr[x] = s2[y];
		y++;
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}
