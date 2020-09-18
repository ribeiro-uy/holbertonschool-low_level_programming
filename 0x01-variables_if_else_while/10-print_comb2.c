#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int fd = 48;
	int ld;

	while (fd <= 57)
	{
		ld = 48;

			while (ld <= 57)
			{
				putchar(fd);
				putchar(ld);
				if (fd != 57 || ld != 57)
				{
					putchar(44);
					putchar(32);
				}
				ld++;
			}
		fd++;
	}
	putchar(10);
	return (0);
}
