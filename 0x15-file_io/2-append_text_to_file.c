#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file to create or edit
 * @text_content: text to write in the file
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fd;

	if (filename == NULL && text_content == NULL)
		return (1);

	/* create */
	fd = open(filename, O_APPEND | O_WRONLY);

	/* check if can open */
	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
	{
		i++;
	}

	/* if nothing to add */
	if (i == 0)
	{
		close(fd);
		return (1);
	}

	if (write(fd, text_content, i) == -1)
		return (-1);

	if (close(fd) == -1)
		return (-1);

	return (1);
}
