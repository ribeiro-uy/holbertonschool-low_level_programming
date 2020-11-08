#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int unit = 0, decimal = 0;

	while (decimal <= 9)
	{
		while (unit <= 9)
		{
			if (unit != decimal && decimal < unit)
			{
				putchar(decimal + '0');
				putchar(unit + '0');
				if (decimal == 8 && unit == 9)
				{}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			unit++;
		}
		unit = 0;
		decimal++;
	}
	putchar('\n');
	return (0);
}
