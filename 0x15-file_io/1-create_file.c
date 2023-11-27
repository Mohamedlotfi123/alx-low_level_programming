#include "main.h"
/**
 * create_file  - creates file
 * @filename : name of the file
 * @text_content : string to write to the file
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, i, x = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fp);
		return (1);
	}
	else
	{
		while (text_content[x])
		{
			x++;
		}
		i = write(fp, text_content, x);
		if (i < 0)
		{
			return (-1);
		}
	}
	close(fp);
	return (1);
}
