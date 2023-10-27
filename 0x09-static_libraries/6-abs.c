#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @x : the variable
 *
 * Return: integer
 */
int _abs(int x)
{
	if (x < 0)
	{
		int y;

		y = x * -1;
		return (y);
	}
	return (x);
}
