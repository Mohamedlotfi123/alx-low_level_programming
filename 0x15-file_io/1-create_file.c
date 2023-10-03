#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content : content of the file
 *
 * Return: 1 if success or -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fp, x = 0;

	fp = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (!filename)
	{
		return (-1);
	}
	if (fp == -1)
	{
		return (-1);
	}
	while (text_content[x] != '\0')
	{
		x++;
	}
	if (x == 0 || text_content == NULL)
	{
		exit(0);
	}
	else
	{
		write(fp, text_content, x);
	}
	close(fp);
	return (1);
}
