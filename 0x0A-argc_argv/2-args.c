#include<stdio.h>
/**
 * main - check
 * @argc : argument count
 * @argv : argument vector
 *
 * Return: all argument it receives
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
