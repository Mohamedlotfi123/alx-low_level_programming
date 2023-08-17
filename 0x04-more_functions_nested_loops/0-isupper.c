#include "main.h"
/**
 * _isupper - checks for uppercase character
 *@c : the character will be checked
 *
 * Return: the character and if its upper or not
 */
int _isupper(int c)
{
	_putchar(c);
	_putchar(':');
	_putchar(32);
	if (c >= 65 && c <= 90)
	{
		_putchar(49);
	}
	else
	{
		_putchar(48);
	}
	_putchar('\n');
	return (0);
}
