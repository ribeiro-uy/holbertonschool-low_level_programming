#include "holberton.h"

/**
 * _abs - return the absolute number
 * n - number value
 * Return: The absolute value
 */

int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(n * (-1));
	}
}
