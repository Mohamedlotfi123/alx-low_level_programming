#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x, y;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (y = 0; y < x; y++)
	{
		if (y == x - 1)
		{
			printf("%02hhx\n", arr[y]);
			break;
		}
		printf("%02hhx ", arr[y]);
	}
	return (0);
}
