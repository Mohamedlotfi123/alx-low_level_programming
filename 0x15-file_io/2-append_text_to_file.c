#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename - name of the file
 * @text_content - string to add at the end of the file
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND | O_EXCL);
	if (fd < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	i = write(fd, text_content, sizeof(text_content));
	if (i < -1)
	{
		return (-1);
	}
	return (1);
}
