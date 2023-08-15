#include "main.h"

/**
 * print_last_digit -prints the last digit of a number.
 *
 * @x : the variable
 *
 * Return: the value of the last digit
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
		y = y * -1;
	}
	_putchar(y+48);
	return (y);
}
