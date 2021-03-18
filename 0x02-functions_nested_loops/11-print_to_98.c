#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98..
 * @n: number of condition
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}}
	if (n > 98)
	{
		for (; n > 98 ; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
