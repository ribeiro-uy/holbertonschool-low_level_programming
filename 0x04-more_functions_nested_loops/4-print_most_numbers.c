#include "holberton.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * @num: number variable
 * Return: Always 0.
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		else
			_putchar(num + '0');
	}

	_putchar('\n');

}
