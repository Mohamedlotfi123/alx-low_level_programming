#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str : string
 *
 * Return: Always 0
 */
void puts22(char *str)
{
	int x = 0;
	char *y = str;
	int z = 0;
	int g;

	while (*y != '\0')
	{
		y++;
		x++;
	}
	z = x - 1;
	for (g = 0; g <= z; g++)
	{
		if (g % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
