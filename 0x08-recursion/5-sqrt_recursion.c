#include "holberton.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: numbert to square root
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{

	int i = 0, res = i * i;

	if (i > n)
		return (-1);

	if (res == n)
		return (res);

	if (res == 0)
		return (0);

	_sqrt_recursion(i +1);
}
