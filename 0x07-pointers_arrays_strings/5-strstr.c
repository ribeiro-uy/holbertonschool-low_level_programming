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

		for (ii = 0; haystack[ii] != '\0'; ii++)
		{
			if (needle[0] == haystack[ii])
			{
				for (i = 1; needle[i] != '\0'; i++)
				{
					if (needle[i] != haystack[i + ii])
					{
						break;
					}
				}
			}
			if (needle[i + 1] == '\0')
			{
				return (haystack + ii);
			}
		}
	return (NULL);
}
