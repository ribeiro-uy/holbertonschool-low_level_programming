#include "holberton.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: variable character
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
