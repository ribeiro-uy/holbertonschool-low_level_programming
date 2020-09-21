#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
		return (0);
}
