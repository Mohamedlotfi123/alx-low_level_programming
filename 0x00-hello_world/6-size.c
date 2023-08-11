#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int s;
	long d;
	long long int f;
	float g;
	
	printf("Size of a char: %lu\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu\n", (unsigned long)sizeof(s));
	printf("Size of a long int: %lu\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu\n", (unsigned long)sizeof(f));
	printf("Size of a float: %lu\n", (unsigned long)sizeof(g));
	return (0);
}
