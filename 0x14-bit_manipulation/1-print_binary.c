#include "main.h"
/**
 * print_binary - print the binary representation of the number
 * @n : number will to print
 *
 * Return: binary representation
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;
	int y;

	if (n == 0)
	{
		_putchar('0');
	}
	for (y = 63; y >= 0; y--)
	{
		x = n >> y;
		if (x & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
