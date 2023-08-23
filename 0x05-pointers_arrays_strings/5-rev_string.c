#include "main.h"
/**
 * rev_string - reverses a string.
 * @s : string will be reverse
 *
 *Return: Nothing
 */
void rev_string(char *s)
{
	int z = 0;
	char x = s[0];
	int y;

	while (s[z])
	{
		z++;
	}
	for (y = 0; y < z; y++)
	{
		z--;
		x = s[y];
		s[y] = s[z];
		s[z] = x;
	}
}
