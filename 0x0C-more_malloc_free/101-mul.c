#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiply two poistive numbers
 * @argc : argument count
 * @argv : argument vector
 *
 * Return: mulitpy result
 */
int main(int argc, char *argv[])
{
	int mul = 1, x;

	if (argc > 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	for (x = 1; x < argc; x++)
	{
		mul = mul * *argv[x];
	}
	printf("%d\n", mul);
	return (mul);
}
