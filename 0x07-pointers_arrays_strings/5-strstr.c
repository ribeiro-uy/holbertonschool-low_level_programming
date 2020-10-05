#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - Write a function that locates a substring.
 *
 * @haystack: string
 *
 * @needle: substring
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)

{

	int i, ii;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (ii = 0; haystack[ii] != '\0'; ii++)
		{
			if (needle[0] == haystack[ii])
			{
				return (needle + i);
			}
		}

	}
	return (NULL);
}
