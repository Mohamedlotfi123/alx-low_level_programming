#include "main.h"
/**
 * print_sing - check the sing of digit
 *
 * @n : the digit will be checked
 *
 * Return: integer
 */
int print_sing(int n)
{
	if (n < 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
