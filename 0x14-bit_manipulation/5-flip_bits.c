#include "holberton.h"

/**
 * flip_bits - returns the number of bits to flip to get one number to another.
 * @m:number
 * @n: number
 * Return: counter.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j, c;

	c = 0;
	i = n ^ m;
	for (j = 0; j <= sizeof(unsigned long int) * 8; j++)
	{
		if ((i & 1) == 1)
		{
			c++;
		}
		i = i >> 1;
	}
	return (c);
}
