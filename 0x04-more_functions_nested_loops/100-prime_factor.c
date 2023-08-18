#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int x;
	long int y = 612852475143;

	for (x = 3; x < 782849; x = x + 2)
	{
		while ((y % x == 0) && (y != x))
		{
			y = y / x;
		}
	}
	printf("%ld\n",y);
	return (0);
}
