#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int za = 122;

	while (za >= 97)
	{
		putchar(za--);
	}
	putchar(10);
	return (0);
}
