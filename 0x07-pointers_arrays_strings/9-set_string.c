#include "holberton.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 *
 * @s: pointer
 * @to: char
 * Return: a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
