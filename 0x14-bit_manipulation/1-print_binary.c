#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n : Number in decimal
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 1024;
	int y = 0;

	for (y = 11; y > 0; y--)
	{
		if (n & x)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		x = x >> 1;
	}
}
