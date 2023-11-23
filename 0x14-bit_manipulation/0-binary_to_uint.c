#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b : string of 0's and 1's
 *
 * Return: coverted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, y = 0, i, z, m;
	char *x = (char *)b;

	if (b == NULL)
	{
		return (0);
	}
	while (x[y] != '\0')
	{
		y++;
	}
	i = y;
	y = 0;
	while (i)
	{
		m = 1;
		z = i - 1;
		while (z)
		{
			m *= 2;
			z--;
		}
		if (x[y] == '1')
		{
			sum += m;
		}
		else if (x[y] == '0')
		{
			y++;
			i--;
			continue;
		}
		else
		{
			return (0);
		}
		y++;
		i--;
	}
	return (sum);
}
