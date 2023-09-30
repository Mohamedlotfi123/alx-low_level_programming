#include "main.h"
/**
 * get_endianness - checks the endian
 *
 * Return: 0if big endian, 1 when little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	if (*y != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
