#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int num = 48;
	int ll = 97;

	while (num <= 57)
	{
		putchar(num++);
	}
	while (ll <= 102)
	{
		putchar(ll++);
	}
	putchar(10);
	return (0);
}
