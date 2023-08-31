#include "main.h"

int _sqrt_recursion2(int n, int x);

/**
 * _sqrt_recursion - return natural square root
 * @n : number we need it root
 *
 * Return: natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion2(n,0));
}


int _sqrt_recursion2(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (_sqrt_recursion2(n, x + 1));
}
