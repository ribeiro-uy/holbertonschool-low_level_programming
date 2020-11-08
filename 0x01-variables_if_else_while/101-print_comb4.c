#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones = 0, tens = 0, hundreds = 0;

	while (hundreds <= 9)
	{
		while (tens <= 9)
		{
			while (ones <= 9)
			{
				if (ones != tens && tens != hundreds && hundreds < tens && tens < ones)
				{
					putchar(hundreds + '0');
					putchar(tens + '0');
					putchar(ones + '0');
					if (hundreds == 7 && tens == 8 && ones == 9)
					{}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				ones++;
			}
			ones = 0;
			tens++;
		}
		tens = 0;
		hundreds++;
	}
	putchar('\n');
	return (0);
}
