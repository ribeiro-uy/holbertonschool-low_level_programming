#include "holberton.h"

/**
 * more_numbers - function description
 *
 *
 *
 *
 *
 *
 */

void more_numbers(void)
{
	int numero, veces;

	for (veces = 0; veces <= 10; veces++)
	{
		for (numero = 0; numero <= 14; numero++)
		{
			if (numero > 9)
			{
				_putchar(numero / 10 + '0' );
			}
			_putchar(numero % 10 + '0');
		}
		_putchar('\n');
	}
}
