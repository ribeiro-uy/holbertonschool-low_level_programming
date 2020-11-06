#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *
 * @b: binary to convert
 *
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			n = n << 1;

			if (b[i] == '1')
				n += 1;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
