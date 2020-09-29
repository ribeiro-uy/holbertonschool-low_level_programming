#include "holberton.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string value
 * Return: Always 0.
 */

void puts_half(char *str)
{

	int len = 0, half;

	while (str[len] != '\0')
	{
		len++;
	}

	if ((len - 1) % 2 == 0)
	{
		half = ((len + 1) / 2);
	}

	else if ((len - 1) % 2 != 0)
	{
		half = (len / 2);
	}

	for (; len - half >= 1; half++)
	{
		_putchar(str[half]);
	}

	_putchar('\n');
}
