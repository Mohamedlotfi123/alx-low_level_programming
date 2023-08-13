#include<stdio.h>
/**
 * main - Enty point
 *
 * description : 'print all single combintion of single digit'
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
		else if (x == 57)
		{
			putchar('$');
		}
	}
	return (0);
}
