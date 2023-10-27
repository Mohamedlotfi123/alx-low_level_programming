#include <stdio.h>
/**
 * main - print number of arguments passed
 * @argc : arguments count
 * @argv : arguments array
 *
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n",argc - 1);
	return (0);
}
