#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a : variable
 * @b : variable
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int *r = &c;

	*b = *a;
	*a = *r;
}
