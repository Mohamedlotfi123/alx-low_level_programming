#include "main.h"
/**
 * square - support function
 * @n : number we want it's root
 * @x : to find the root
 *
 * Return: root of n
 */
int square(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	else if ((x * x) > n)
	{
		return (-1);
	}
	return (square(n, x + 1));
}
/**
 * _sqrt_recursion - Calculate natural square root
 * @n : Number to calculate it's root
 * 
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (square(n , 0));
}
