#include <stdio.h>
#include<stdlib.h>
/**
 * main - check
 * @argc : argument count
 * @argv : argument vector
 *
 * Return: sum of numbers
 */
int main(int argc, char *argv[])
{
	int sum = 0, x;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (x = 1; x < argc; x++)
	{
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
