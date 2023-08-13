#include<stdio.h>
/**
 * main - Entry point
 *
 * Description : 'print single combinition of single digit'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
