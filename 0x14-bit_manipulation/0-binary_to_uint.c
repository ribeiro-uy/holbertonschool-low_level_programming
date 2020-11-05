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
	int i = 0, bytes = 1;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			sum += bytes;
		}
		bytes *= 2;
	}
	return (sum);
}
