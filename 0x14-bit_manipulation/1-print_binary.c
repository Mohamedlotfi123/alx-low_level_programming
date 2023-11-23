#include "main.h"
/**
 * print - print binary number
 * @x : decimal number
 *
 * Return: Void
 */
void print(unsigned long int x)
{
	if (x == 0)
	{
		return;
	}
	print(x >> 1);
	if (x & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
/**
 * print_binary - prints the binary representation of a number
 * @n : Number in decimal
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print(n);
	}
}
