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
	unsigned long int x = 0;
	int y;

	while (x <= index)
	{
		y = n & 1;
		n = n >> 1;
		x++;
	}
	return (y);
}
