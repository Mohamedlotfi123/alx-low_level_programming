#include "main.h"
/**
 * is_prime_number - check if the number is prime
 * @n : number will be check
 *
 * Return: 1 if the number is prime or 0 if it not
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
