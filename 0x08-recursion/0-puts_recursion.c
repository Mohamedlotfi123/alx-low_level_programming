#include "main.h"
/**
 * _puts_recursion - print string
 * @s : string to be printed
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	char *ptr = s;

	if (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
		_puts_recursion(ptr);
	}
	else
	{
		_putchar('\n');
	}
}
