#include "main.h"
/**
 * factorial - returns factorial of the number
 * @n : number to calculate it's factorial
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
