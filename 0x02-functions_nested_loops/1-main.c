#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Description: 'print the alphabet'
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return;
}
