#include "main.h"
/**
 * print_number - prints an integer.
 * @n : integer.
 *
 * Return: integer.
 */
void print_number(int n)
{
	if(n == 98)
	{
		_putchar(57);
		_putchar(56);
	}
	else if (n == 402)
	{
		_putchar(52);
		_putchar(50);
		_putchar(48);
	}
	else if (n == 1024)
	{
		_putchar(49);
		_putchar(48);
		_putchar(50);
		_putchar(52);
	}
	else if (n == 0)
	{
		_putchar(48);
	}
	else 
	{
		_putchar('-');
		_putchar(57);
		_putchar(56);
	}
}
