#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code for Holberton School students.
 *
 * @s: string
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);

	len = (_strlen_recursion(s + 1) + 1);

	return (len);
}
