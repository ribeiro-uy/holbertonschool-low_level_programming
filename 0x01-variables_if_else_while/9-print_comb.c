#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int single_digit = 48;

	while (single_digit <= 57)
	{
		putchar(single_digit);
			if (single_digit != 57)
			{
				putchar(44);
				putchar(32);
			}
			single_digit++;
	}
	putchar(10);
	return (0);
}
