#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: value to bit
 * @index:  is the index, starting from 0
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	m <<= index;
	if ((m & n) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (-1);
}
}
