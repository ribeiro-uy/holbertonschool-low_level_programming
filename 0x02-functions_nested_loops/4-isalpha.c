#include "holberton.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: input value
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (c > 65 && c < 90)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
