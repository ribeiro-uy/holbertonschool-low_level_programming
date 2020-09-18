#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers++);
	}
	putchar(10);
	return (0);
}
