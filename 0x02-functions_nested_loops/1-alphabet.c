#include "holberton.h"

/**
 * Main - check the code for Holberton School students.
 * Write a function that prints the alphabet, in lowercase,
 * followed by a new line
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
