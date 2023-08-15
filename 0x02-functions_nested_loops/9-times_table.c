#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: integer
 */
void times_table(void)
{
	int x, y, z, g, f;

	for (x = 0; x <=9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z > 9)
			{
				g = z % 10;
				f = (z - g) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(f + 48);
				_putchar(g + 48);
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + 48);
			}
		}
		_putchar('\n');
	}
}
