#include "main.h"
/**
 * *string_toupper - changes all lowercase to uppercase
 *@s : string 
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		if (s[y] >= 'a' && s[y] <= 'z')
		{
			s[y] = s[y] - 32;
		}
		y++;
	}
	return (s);
}
		
