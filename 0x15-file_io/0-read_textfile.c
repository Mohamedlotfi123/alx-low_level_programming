#include "main.h"
/**
 * read_textfile - read text file and print it
 * @filename : pointer to the file
 * @letters : number of letters to read
 *
 * Return: actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char buf[1024];
	int i, x;

	if (filename == NULL)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);
	if (fp < 0)
	{
		return (0);
	}
	i = read(fp, buf, letters);
	if (i < 0)
	{
		return (0);
	}
	x = write(1, buf, i);
	if (x < 0)
	{
		return (0);
	}
	close(fp);
	return (i);
}
