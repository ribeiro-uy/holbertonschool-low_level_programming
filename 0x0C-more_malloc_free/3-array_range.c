#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min: min integer
 * @max: max integer
 *
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
