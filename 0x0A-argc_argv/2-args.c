#include <stdio.h>
/**
 * main - print all the argument passed
 * @argc : argument count
 * @argv : argument array
 *
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
