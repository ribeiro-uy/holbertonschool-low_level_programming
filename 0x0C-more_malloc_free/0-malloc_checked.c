#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: allocated memory
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	void *kassadin;

	kassadin = malloc(b);

	if (kassadin == NULL)
	{
		exit(98);
	}
	return (kassadin);
}
