#include "holberton.h"

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int leer, escribir, fd1, fd2, close1, close2;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	leer = read(fd1, buff, 1024);
	if (leer == -1 || fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[1]);
		close(fd1);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	escribir = write(fd2, buff, leer);
	if (fd2 == -1 || escribir == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
		close(fd2);
		exit(99);
	}
	while (leer == 1024)
	{
		leer = read(fd1, buff, 1024);
		escribir = write(fd2, buff, leer);
	}
	close1 = close(fd1);
	close2 = close(fd2);
	if (close1 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close1);
		exit(100);
	}
	if (close2 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close2);
		exit(100);
	}
	return (1);
}
