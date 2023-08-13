#include<stdio.h>
/**
 * main -Entry point
 *
 * Description : 'combination of two digit twice'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z, g;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 8; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				for (g = 0; g <= 9; g++)
				{
					if (z == 0 && g == 0)
					{
						continue;
					}
					if (z == x && g == y)
					{
						continue;
					}
					putchar(x + 48);
					putchar(y + 48);
					putchar(' ');
					putchar(z + 48);
					putchar(g + 48);
					if (x == 9 && y == 8 && z == 9 && g == 9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

