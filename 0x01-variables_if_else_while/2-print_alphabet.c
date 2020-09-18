#include <stdio.h>

/**
* main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int alphabet = 97;

	while (alphabet <= 122)
	{
		putchar(alphabet++);
	}
	putchar(10);
	return (0);
}
