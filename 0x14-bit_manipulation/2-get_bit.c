#include "main.h"
/**
 * get_bit - value of a bit at a given index.
 * @n : number in decimal
 * @index : index of the bit
 *
 * Return: value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	if (n & (1 << index))
	{
		return (1);
	}
	else (!(n & (1 << index)))
	{
		return (0);
	}
}
