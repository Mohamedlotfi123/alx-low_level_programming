#include <unistd.h>
/**
 * putchar - writes a character to stdout
 * @c : character to print
 *
 * Return: 1 on Success or -1 on Fail
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
