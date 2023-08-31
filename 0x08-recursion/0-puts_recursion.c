#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s : string will be pass to finction
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	int x = 0;

	if (s[x] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[x]);
	x++;
	_puts_recursion(&s[x]);
}
