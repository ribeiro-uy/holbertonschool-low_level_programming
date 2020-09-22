#include "holberton.h"

/**
 * times_table - prints 9 times table.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int prim, seg, resultado;

	for (prim = 0; prim <= 9; prim++)
	{
		for (seg = 0; seg <= 9; seg++)
		{
			resultado = prim * seg;
			if (resultado <= 9)
			{
				_putchar(resultado + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((resultado / 10) + 48);
				_putchar((resultado % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
