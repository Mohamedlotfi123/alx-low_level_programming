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
			printf("1\n");
			return (0);
		}
		for (i = 0; x[i] != '\0'; i++)
		{
			r = atoi(argv[1]) % x[i];
			d = atoi(argv[1]) / x[i];
			if (r == 0)
			{
				break;
			}
			else if (r == 1 || r == 2 || r == 5 || r == 10 || r == 25)
			{
				d = d + 1;
				break;
			}
			else if (r == 3 || r == 4 || r == 7)
			{
				d = d + 2;
				break;
			}
			else if (r == 6 || r == 9)
			{
				d = d + 3;
				break;
			}
			else if (r == 8)
			{
				d = d + 4;
				break;
			}
		}
		printf("%d\n", d);
	}
	return (0);
}
