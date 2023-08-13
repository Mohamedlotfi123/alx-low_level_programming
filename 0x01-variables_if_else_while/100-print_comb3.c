#include<stdio.h>
/**
 * main - Entry point
 *
 * Description : 'print combinition of two digit'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		for  (y = 1 + x; y <= 57; y++)
		{
			if (x != y)
			{
				putchar(x);
				putchar(y);
				if (x == 56 && y == 57)
				{
					continue;
				}
				{
					putchar(',');
					putchar(' ');
				}
			}
			else
			{
				continue;
			}
		}
	}
	putchar('\n');
	return (0);
}
