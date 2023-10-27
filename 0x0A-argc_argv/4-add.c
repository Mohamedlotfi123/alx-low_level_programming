#include <stdio.h>
#include <stdlib.h>
/**
 * main - add Numbers
 * @argc : argument count
 * @argv : array of argument
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int result = 0, i, n;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			n = atoi(argv[i]);
			if (n == 0)
			{
				printf("Erorr\n");
				return (1);
			}
			result += n;
		}
		printf("%d\n", result);
	}
	return (0);
}
