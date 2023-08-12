#include<stdio.h>
/**
 * main - Entry point
 *
 * Description : 'write the alphabet in lower case'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
	if (x == 113 || x == 101)
	{
		continue;
	}
	else
		putchar(x);
	}
	putchar('\n');
	return (0);
}
