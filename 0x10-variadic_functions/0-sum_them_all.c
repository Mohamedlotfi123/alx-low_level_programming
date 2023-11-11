#include "variadic_functions.h"
/**
 * sum_them_all - Sum all it's parameter
 * @n : Number of the parameter
 *
 * Return: Sum of the parameters or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list v;

	if (n == 0)
	{
		return (0);
	}
	va_start(v, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(n, int);
	}
	va_end(v);
	return (sum);
}
