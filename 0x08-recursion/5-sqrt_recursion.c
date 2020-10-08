#include "holberton.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 *
 * @n: numbert to square root
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{


	if (n <= 0)
		return (-1);

	if (n == 1)
		return (1);
	else
		return (helper(n, 2));

}

/**
 * helper - helper function
 *
 * @n: numbert to square root
 * @b: powered number
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
