#include "main.h"
/**
 *_isalpha - check if char is uppercase
 *
 * @c : the variable will be check
 *
 * Return: integer
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
