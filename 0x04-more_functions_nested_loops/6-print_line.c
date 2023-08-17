#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 *@n : number of times the character
 *
 * Return: straight line
 */
void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
