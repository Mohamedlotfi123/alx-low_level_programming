#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc : number of argument
 * @argv : array of arguments
 *
 * Return: Void
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	int fd_1, fd_2, i, y;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 < 0)
	{
		dprintf(2, "Error: Can't read to %s\n", argv[1]);
		exit(98);
	}
	fd_2 = open(argv[2], O_WRONLY | O_CREAT, 0664);
	if (fd_2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((i = read(fd_1, buf, 1024)) > 0)
	{
		if (write(fd_2, buf, 1024) != i)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(2, "Error: Can't read to %s\n", argv[1]);
		exit(98);
	}
	y = close(fd_1);
	if (y < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	y = close(fd_2);
	if (y < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	return (0);
}
