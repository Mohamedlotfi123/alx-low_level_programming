#include "main.h"
/**
 * *_strstr - locates substring
 * @haystack : string we search
 * @needle : string we search for
 *
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *z = haystack;
		char *g = needle;

		while (*z == *g && *g != '\0')
		{
			g++;
			z++;
		}
		if (*g == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
