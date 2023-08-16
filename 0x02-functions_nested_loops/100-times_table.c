#include "main.h"
#include<stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 *@n : varible
 *
 * Return: n times table
 */
void print_times_table(int n)
{
	int x, y, z;

	for (z = 0; z <= n; z++)
	{
		if (n > 15 || n < 0)
		{
			break;
		}
		else
		{
			for (x = 0; x <= n; x++)
			{
				y = z * x;
				if (x == n)
				{
					printf("%d\n", y);
				}
				else
				{
					printf("%d, ", y);
				}
			}
		}
	}
}
