#include "function_pointers.h"
/**
 * print_name - prints name
 * @name : name will be printed
 * @f : Function Pointer
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
