#include "holberton.h"

/**
 * _puts - function that prints a string, followed by a new line.
 * @str: string pointer
 * Return: Always 0.
 */

void _puts(char *str)
{
	int letra = 0;

	while (*(str + letra) != '\0')
	{
		_putchar(*(str + letra));
		letra++;
	}
	_putchar('\n');
}
