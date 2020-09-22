#include "holberton.h"

/**
 * print_alphabet - print the alphabet.
 *
 * Return: Always 0.
 */

void print_alphabet(void)

{
	char letra;


	for (letra = 97; letra <= 122; letra++)
	{
		_putchar(letra);
	}
	_putchar('\n');
}
