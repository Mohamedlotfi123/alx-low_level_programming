#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size : size of the triangle
 *
 * Return: triangle
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size <= 2)
	{
		for (x = 1; x < size; x++)
		{
			for (z = size; z > x; z--)
			{
				_putchar(' ');
			}
			_putchar(35);
			_putchar('\n');
			for (y = 0; y <= x; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		for (x = 1; x < size; x++)
		{
			_putchar(' ');
		}
		for ( y = 0; y < x; y++)
		{
			_putchar(35);
			_putchar('\n');
		}
	}
}

