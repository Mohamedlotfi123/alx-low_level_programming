#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s : string will be reverse
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		x++;
	}
	s--;
	for (y = x; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
