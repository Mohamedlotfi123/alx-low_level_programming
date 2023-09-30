#include "main.h"
/**
 * flip_bits - number of bits to flip to get form number to another
 * @n : first number
 * @m : second number
 *
 * Return: number of bits need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, y;
	unsigned int c = 0;

	while (n != 0 || m != 0)
	{
		x = n & 1;
		n = n >> 1;
		y = m & 1;
		m = m >> 1;
		if (x == y)
		{
			continue;
		}
		else
		{
			c = c + 1;
		}
	}
	return (c);
}
