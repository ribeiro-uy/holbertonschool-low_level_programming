#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
