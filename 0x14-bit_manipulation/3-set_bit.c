#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n : number in decimal
 * @index : index to be set
 *
 * Return: 1 if it work and -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
