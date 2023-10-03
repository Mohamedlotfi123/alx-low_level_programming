#include "main.h"
/**
 * main - copies the content of the file to another file
 * @argc : number of argument
 * @argv : array of argument
 *
 * Return: 1 on success or -1 on fail
 */
int main(int argc, char *argv[])
{
	int fp, fp1;
	char c[1024];
	ssize_t z;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		dprintf(2, "Error: Can't read from %s", argv[1]);
		exit(98);
	}
	fp1 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fp1 == -1)
	{
		dprintf(2, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	while ((z = read(fp, c, 1024)) != 0)
	{
		write(fp1, c, z);
	}
	if (z == -1)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
	}
	close(fp);
	close(fp1);
	return (1);
}
