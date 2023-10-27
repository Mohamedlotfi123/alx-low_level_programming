#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coins to make changes for amount of money
 * @argc : number of arguments
 * @argv : array of arguments
 *
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	int r, d, i;
	int x[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Erorr\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		if (atoi(argv[1]) == 1)
		{
			printf("1");
			return (0);
		}
		for (i = 0; x[i] != '\0'; i++)
		{
			r = atoi(argv[1]) % x[i];
			if (r == 0)
			{
				d = atoi(argv[1]) / x[i];
				printf("%d\n", d);
				return (0);
			}
			else if (r == 1 || r == 2 || r == 5 || r == 10 || r == 25)
			{
				d = atoi(argv[1]) / x[i];
				d = d + 1;
				printf("%d\n", d);
				return (0);
			}
		}
	}
	return (0);
}
