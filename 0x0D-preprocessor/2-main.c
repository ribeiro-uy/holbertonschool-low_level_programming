#include <stdio.h>

/**
 * main - program that prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: On success 1.
 *
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
