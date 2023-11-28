#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc : number of argument
 * @argv : array of arguments
 *
 * Return: Void
 */
int main(int argc, char *argv[])
{
	int fd_1, fd_2, i, x, y;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(1, "Usage: cp file_from file_to");
		write(2, "\n", 1);
		exit(97);
	}
	fd_1 = open(argv[1], O_RDONLY);
	i = read(fd_1, buf, 1024);
	if (fd_1 < 0 || i < 0)
	{
		dprintf(1, "Error: Can't read to %s", argv[1]);
		write(2 ,"\n", 1);
		exit(98);
	}
	fd_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	x = write(fd_2, buf, i);
	if (fd_2 < 0 || x < 0)
	{
		dprintf(1, "Error: Can't write to %s", argv[2]);
		write(2, "\n", 1);
		exit(99);
	}
	y = close(fd_1);
	if (y < 0)
	{
		dprintf(1, "Error: Can't close fd %d", fd_1);
		write(2, "\n", 1);
		exit(100);
	}
	y = close(fd_2);
	if (y < 0)
	{
		dprintf(1, "Error: Can't close fd %d", fd_1);
		write(2, "\n", 1);
		exit(100);
	}
	return (0);
}
