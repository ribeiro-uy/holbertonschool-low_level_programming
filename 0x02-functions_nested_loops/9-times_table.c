#include "holberton.h"

/**
 * times_table - prints 9 times table.
 *
 * Return: Nothing.
 */

void times_table(void)
{
	int tens = 0, ones = 0, result = 0;

	while (tens <= 9)
	{
		while (ones <= 9)
		{
			result = tens * ones;

			if (ones == 9)
			{
				if (result > 9)
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
					_putchar('\n');
				}
				else
				{
					_putchar(result + '0');
					_putchar('\n');
				}
				break;
			}

			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');

			}
			else
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			ones++;
		}
		ones = 0;
		tens++;
	}
	_putchar('\n');
}
