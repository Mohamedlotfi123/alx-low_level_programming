#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints string
 * @separator : string to be printed between strings
 * @n : number of string passed to the function
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list var;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(var, char *);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}
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
