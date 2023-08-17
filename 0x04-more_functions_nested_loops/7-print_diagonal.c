#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n : number of times the character \ should be printe
 *
 * Return: a diagonal line on the terminal.
 */
void print_diagonal(int n)
{
	int x, y;

	for (x = 1; x <= n; x++)
	{
		if (x == 1)
		{
			_putchar(92);
			_putchar('\n');
		}
		else
		{
			for (y = 1; y <= (x - 1); y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
