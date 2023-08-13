#include<stdio.h>
/**
 * main - Entry point
 *
 * Description : 'print combination of three digit'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 1 + x; y <= 9; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar(x + 48);
				putchar(y + 48);
				putchar(z + 48);
				if (x == 7 && y == 8 && z == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
