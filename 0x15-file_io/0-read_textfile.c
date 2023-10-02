#include "main.h"
/**
 * read_textfile - read text file and print it to the standard output
 * @filename : name of the file
 * @letters : number of letters to print
 *
 * Return: string
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	int fp;
	char c[10000];

	if (!filename || !letters)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);
	if (!fp)
	{
		return (0);
	}
	count = read(fp, &c[0], letters);
	count = write(1, &c[0], count);
	close(fp);
	return (count);
}
