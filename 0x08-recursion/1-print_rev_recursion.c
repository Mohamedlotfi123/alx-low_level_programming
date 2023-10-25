#include "main.h"
/**
 * _print_rev_recursion - print string in reverse
 * @s : string pointer
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	char *ptr = s;

	if (*ptr != '\0')
	{
		_print_rev_recursion(ptr + 1);
		_putchar(*ptr);
	}
}
