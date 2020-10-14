#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of array
 * @c: character
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char *) malloc((size + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	array[i] = '\0';
	return (array);
}
