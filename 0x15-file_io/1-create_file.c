#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, fd;

	if (filename == NULL)
		return (-1);

	/* create */
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	/* check if can open */
	if (fd == -1)
		return (-1);

	/* text is empty if the content is null */
	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
	{
		i++;
	}

	write(STDIN_FILENO, text_content, i);

	close(fd);
	return (1);
}
