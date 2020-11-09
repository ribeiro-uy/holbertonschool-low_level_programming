#include "holberton.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: txt file.
 * @letters:  is the number of letters it should read and print.
 * Return: number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, print_bytes;
	char *buf;

	/* check if the pointer is null */
	if (filename == NULL)
		return (0);
	/* check if no have letters */
	if (letters < 1)
		return (0);

	/* open the file and save on fd */
	fd = open(filename, O_RDONLY);

	/* check if can open */
	if (fd == -1)
		return (0);

	/* create the buffer */
	buf = malloc(sizeof(char) * letters);

	/* red the input and save */
	print_bytes = read(fd, buf, letters);

/* add null byte */
	buf[print_bytes + 1] = '\0';

/* print in the standard output */
	write(STDOUT_FILENO, buf, print_bytes);

	close(fd);
	free(buf);

	return (print_bytes);
}
