#include "main.h"
/**
 * prime - detect prime numbers
 * @n : number to be detected
 * @x : number to check by it
 *
 * Return: 1 if prime, and 0 if not
 */
int prime(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n != x && n % x == 0)
	{
		return (0);
	}
	else if (n == x)
	{
		return (1);
	}
	return (prime(n, x + 1));
}
/**
 * is_prime_number - Calculate if the number is prime or not
 * @n : number to know if prime or not
 *
 * Return: 1 if prime or 0 if not
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
