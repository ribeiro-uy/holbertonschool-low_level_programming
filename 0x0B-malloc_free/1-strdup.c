#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str:  string given as a parameter.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, ii;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	new_str = (char *)malloc(((i + 1)  * sizeof(char)));

	for (ii = 0; ii <= i; ii++)
	{
		new_str[ii] = str[ii];
	}

	if (new_str == NULL)
	{
		return (NULL);
	}

	return (new_str);
}
