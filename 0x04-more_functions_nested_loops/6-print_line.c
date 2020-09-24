#include "holberton.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: line.
 */

void print_line(int n)
{
	int veces;
	int lineas;

	for (veces = 0; veces < n; veces++)
	{
		if (n > 0)
		{
			for (lineas = 1; lineas < n; lineas++)
			{
				_putchar('_');
			}
		}
		_putchar('\n');
	}
}
