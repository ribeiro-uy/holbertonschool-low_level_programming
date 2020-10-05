#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string
 *
 * @accept: number of bytes
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)

{

	int i, ii;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			if (s[i] == accept[ii])
			{
				return (s + 1);
			}
		}

	}
	return (NULL);
}
