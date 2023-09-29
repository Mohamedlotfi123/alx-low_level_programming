#include "main.h"
/**
 * print_binary - print the binary representation of the number
 * @n : number will to print
 *
 * Return: binary representation
 */
void print_binary(unsigned long int n)
{
	unsigned long int x, z;
	int y, c = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	z = n;
	while (z != 0)
	{
		c = c + 1;
		z = z >> 1;
	}
	y = c;
	for (; y >= 0; y--)
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
