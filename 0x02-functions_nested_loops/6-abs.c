#include "holberton.h"

/**
 * _abs - return the absolute number
 * @n: Number to check
 * Return: The absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
