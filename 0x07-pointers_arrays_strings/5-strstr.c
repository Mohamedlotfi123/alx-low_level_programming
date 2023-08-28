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
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		while (needle != '\0')
		{
			if (haystack[x] == needle[y] && haystack[x + 1] == needle[y + 1])
			{
				y++;
				break;
			}
			y++;
		}
	}
	return (haystack[x]);
}
