#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: the numbers from 0 to 14 followed by a new line
 */
void more_numbers(void)
{
	int x, y, z;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			_putchar(y + 48);
		}
		for (z = 0; z <= 4; z++)
		{
			_putchar(49);
			_putchar(z + 48);
		}
		_putchar('\n');
	}
}
