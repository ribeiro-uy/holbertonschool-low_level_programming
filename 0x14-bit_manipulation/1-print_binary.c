#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: binary to convert
 *
 */

void print_binary(unsigned long int n)
{
	long int i, res, flag = 0;

	if (n == 0)
		_putchar('0');

	for (i = 32; i >= 0; i--)
	{
		res = n >> i;

		if (res & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else
			if (flag == 1)
			{
				_putchar('0');
			}
	}
}
