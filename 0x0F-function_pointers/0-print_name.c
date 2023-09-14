#include "function_pointers.h"
/**
 * print_name - print's a name
 * @name : pointer to name will be printed
 * @f : pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
