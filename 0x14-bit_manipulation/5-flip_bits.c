#include "main.h"
/**
 * flip_bits - number of bits need to flip to get from one number to another
 * @n : first number
 * @m : second number
 *
 * Return: number of bits to flip to get from m to n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c = 0, x;
	int i = 31;

	x = n ^ m;
	while (i >= 0)
	{
		if ((x >> i) & 1)
		{
			c++;
		}
		i--;
	}
	return (c);
}
