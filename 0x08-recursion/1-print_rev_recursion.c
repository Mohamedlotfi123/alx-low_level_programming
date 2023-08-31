#include "main.h"
/**
 * _print_rev_recursion - print string in reverse
 * @s : pointer to the string will be printed
 *
 * Return: string in reverse
 */
void _print_rev_recursion(char *s)
{
	int x = 0;

	if (s[x])
	{
		_print_rev_recursion(&s[x + 1]);
		_putchar(s[x]);
		x++;
	}
}
