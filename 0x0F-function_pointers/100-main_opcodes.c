#include <stdio.h>
#include <stdlib.h>

/**
 * main - main fuction
 *
 * @argc: argc
 * @argv: array
 *
 * Return: Nothing
 */

void main(int argc, char *argv[])
{
	int i = 0;
	unsigned char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < (atoi(argv[1])))
	{
		printf("%02x ", p[i]);
		i++;
	}

	printf("\n");
}
