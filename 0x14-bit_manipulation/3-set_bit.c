#include "main.h"
/**
 * set_bit - set a value to onr at a given index
 * @n : pointer to the number
 * @index : the index to fill by one
 *
 * Return: 1 if it work or -1 if it fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if ((int)*n < 0)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	x = *n;
	return (x);
}
