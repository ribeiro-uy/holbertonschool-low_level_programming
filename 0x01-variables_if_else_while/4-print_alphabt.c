#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	int alphabet = 97;
	while (alphabet <= 122)
	{
		if (alphabet == 101 || alphabet == 113)
		{
			alphabet++;
		}
		putchar(alphabet);
		alphabet++;
	}
	return (0);
}
