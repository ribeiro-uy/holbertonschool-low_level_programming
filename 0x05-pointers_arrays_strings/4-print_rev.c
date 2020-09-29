#include "holberton.h"

/**
* _print_rev - function that prints a string, followed by a new line.
* @s: string pointer
* Return: Always 0.
*/

void print_rev(char *s)
{
	int tope;

	while (*(s + tope) != '\0')
	{
		tope++;
	}

	while (tope >= 0)
	{
		_putchar(*(s + tope));
		tope--;
	}
	_putchar('\n');
}
