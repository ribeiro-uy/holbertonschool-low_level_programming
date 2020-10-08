#include "holberton.h"
#include <stdio.h>

/**
 * is_prime_number - check the code for Holberton School students.
 *
 * @n: prime number
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (yo(n, n - 1));
}

/**
 * yo - my own function
 *
 * @n: variable
 * @b: variable
 *
 * Return: Always 0.
 */


int yo(int n, int b)
{
	if (b == 1)
		return (1);

	if (n % b == 0)
		return (0);

	return (yo(n, b - 1));
}
