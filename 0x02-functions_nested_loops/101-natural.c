#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y, z;
	int sum = 0;

	for (x = 0; x < 1024; x++)
	{
		y = x % 3;
		z = x % 5;
		if (y == 0)
		{
			sum = sum + x;
		}
		else if (z == 0)
		{
			sum = sum + z;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", sum);
	return (0);
}
