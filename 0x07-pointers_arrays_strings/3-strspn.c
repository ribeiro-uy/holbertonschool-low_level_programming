#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: string
 *
 * @accept: number of bytes
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{

	int i, ii, x = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (ii = 0; s[ii] != '\0'; ii++)
			if (s[ii] == accept[i])
			{
				x++;
				break;
			}

	}
	return (x);
}
