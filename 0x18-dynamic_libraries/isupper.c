#include "main.h"
/**
 * _isupper - checks for uppercase character
 *@c : the character will be checked
 *
 * Return: the character and if its upper or not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
