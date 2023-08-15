#include "main.h"
/**
 * _islower - check if the character is lower case
 *@c : is the character
 * Return: integer
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
