#include "holberton.h"

/**
 * helper - function that returns the natural square root of a number.
 *
 * @n: numbert to square root
 * @b: variable
 *
 * Return: Always 0.
 */

int helper(int n, int b)
{

	if (b * b == n)
		return (b);

	if (b * b > n)
		return (-1);

	return (helper(n, b + 1));
}
