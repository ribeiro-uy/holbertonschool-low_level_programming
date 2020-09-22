#include "holberton.h"

/**
 * jack_bauer - print hours
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int h, hh, m, mm, tope = 9;


	for (h = 0; h <= 2; h++)
	{
		for (hh = 0; hh <= tope; hh++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (mm = 0; mm <= 9; mm++)
				{
					if (h == 2)
					{
						tope = 3;
					}
					_putchar(h + '0');
					_putchar(hh + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(mm + '0');
					_putchar('\n');
				}
			}
		}
	}
}
