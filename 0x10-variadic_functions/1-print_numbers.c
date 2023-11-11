#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator : string to be printed between numbers
 * @n : number of integers passed
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list var;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(var, int));
		if (separator != NULL)
		{
			if (i + 1 != n)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(var);
}
