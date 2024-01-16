#include "main.h"
/**
 * _puts - prints a string
 * @s : string
 *
 * Return: Always 0
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
