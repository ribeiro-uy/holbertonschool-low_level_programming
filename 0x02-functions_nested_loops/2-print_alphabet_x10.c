#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet 10 lines.
 *
 * Print_alphabet_x10 - Print the alphabet 10 lines.
 */

void print_alphabet_x10(void)
{

	char letra;
	int diez;

	for (diez = 0; diez <= 10; diez++)
	{
		for (letra = 97; letra <= 122; letra++)
		{
			_putchar(letra);
		}
		_putchar('\n');
	}
}
