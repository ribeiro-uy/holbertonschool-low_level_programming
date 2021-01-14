#include "holberton.h"

/**
 * _islower - check if charater is lower.
 * @c: input value
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
		return (0);
}
