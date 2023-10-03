#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename : name of the file
 * @text_content : content to be added
 *
 * Return: 1 on success or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, x = 0;

	if (!filename)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	while (text_content[x] != '\0')
	{
		x++;
	}
	write(fp, text_content, x);
	close(fp);
	return (1);
}
