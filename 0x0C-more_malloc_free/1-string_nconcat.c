#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int num = 0;

	while (*(s + num) != '\0')
	{
		num++;
	}
	return (num);
}

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: destiny
 * @src: src
 * @n: variable
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: destiny
 * @s2: src
 * @n: variable
 *
 * Return: Always 0.
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1a, s2a;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1a = _strlen(s1);
	s2a = _strlen(s2);

	if (n >= s2a)
	{
		n = s2a;
	}

		array = malloc((s1a + n) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	_strncat(array, s1, s1a);
	_strncat(array, s2, n);

	return (array);
}
