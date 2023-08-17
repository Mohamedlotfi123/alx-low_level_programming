#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y, z;
	int sum_1 = 0, sum_2 = 0;

	for (x = 0; x < 1024; x++)
	{
		y = x % 3;
		z = x % 5;
		if (y == 0)
		{
			sum_1 = sum_1 + x;
		}
		else if (z == 0)
		{
			sum_2 = sum_2 + z;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", sum_1 + sum_2);
	return (0);
}
