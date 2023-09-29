#include "main.h"
/**
 * get_bit - vlaue of the bit at given index
 * @n : number in decimal
 * @index : index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 0, z, c = 0;
	int y;

	z = n;
	while (z != 0)
	{
		c = c + 1;
		z = z >> 1;
	}
	if (index > c)
	{
		return (-1);
	}
	while (x <= index)
	{
		y = n & 1;
		n = n >> 1;
		x++;
	}
	return (y);
}
