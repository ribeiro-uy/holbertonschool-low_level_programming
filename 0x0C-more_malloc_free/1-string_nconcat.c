#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: destiny string
 * @s2: source string
 * @n: size
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, ii, j, jj;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (ii = 0; s2[ii] != '\0' && ii < n; ii++)
	{
	}

	array = malloc(sizeof(char) * (i + ii) + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	for (j = 0; s1[j]; j++)
	{
		array[j] = s1[j];
	}

	for (jj = 0; s2[jj] && j < n; jj++)
	{
		array[j + jj] = s2[jj];
	}

	array[j + jj] = '\0';

	return (array);
}
