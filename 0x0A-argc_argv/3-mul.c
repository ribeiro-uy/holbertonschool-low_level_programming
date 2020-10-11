#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
	int multi;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	multi = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", multi);
	return (0);
}
