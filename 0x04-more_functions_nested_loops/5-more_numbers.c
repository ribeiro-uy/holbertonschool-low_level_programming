#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 *
 */

void more_numbers(void)

{
	int veces, linea;

	for (veces = '0'; veces <= '9'; veces++)
	{
		for (linea = 0; linea <= 14; linea++)

		{
			if (linea > 9)
			{
				_putchar(linea / 10 + '0');
			}
			_putchar(linea % 10 + '0');
		}
		_putchar('\n');


	}
}
