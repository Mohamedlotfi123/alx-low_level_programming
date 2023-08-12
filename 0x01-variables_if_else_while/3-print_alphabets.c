#include<stdio.h>
/**
 * main - Entry point
 *
 * Description : 'write the alphabet in lowercase then uppercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		putchar(x);
	}
	for (x = 65; x <= 90; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
