#include "main.h"
/**
 * binary_to_uint - binary number to an unsigned int
 * @b : pointer to the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y = 1, sum = 0;
	int x = 0;

	while (b[x] != '\0')
	{
		x = x + 1;
	}
	if (x == 0)
	{
		return (0);
	}
	x = x - 1;
	while (x >= 0)
	{
		if (b[x] == '1')
		{
			sum = sum + y * 1;
			y = y * 2;
		}
		else if (b[x] == '0')
		{
			y = y * 2;
		}
		else
		{
			return (0);
		}
		x--;
	}
	return (sum);
}
