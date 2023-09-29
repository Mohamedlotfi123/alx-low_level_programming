#include "main.h"
/**
 * print_binary - print the binary representation of the number
 * @n : number will to print
 *
 * Return: binary representation
 */
void print_binary(unsigned long int n)
{
	unsigned long int x, y;

	if (n == 0)
	{
		_putchar('0');
	}
	while (n != 0)
	{
		x = n & 1;
		y 
		n = n >> 1;
		_putchar(x + 48);
	}
}
