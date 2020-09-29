#include "holberton.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string value
 * Return: Always 0.
 */

void puts_half(char *str)
{

	int len = 0, half;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		half = (len / 2);

	}
	else
	{
		half = (len +1 / 2);
	}

	for (; half < len; half++)
	{
		_putchar(*(str + half));
	}
	_putchar('\n');
}
