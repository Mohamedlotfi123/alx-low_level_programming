#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n : pointer to the number
 * @index : index of the bit to be clear
 *
 * Return: 1 if it worked, or -1 if it fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
