#include<stdio.h>
/**
 * main - Entry point
 *
 * Description : 'print all digit base 16'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (x = 97; x <=102; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
