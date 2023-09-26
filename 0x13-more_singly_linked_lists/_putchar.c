#include <unistd.h>
/**
 * putchar - print one character
 * @c : character to print
 *
 * Return: integer
 */
int putchar (char c)
{
	return (write(1, &c, 1));
}
