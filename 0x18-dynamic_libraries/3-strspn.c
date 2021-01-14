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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			if (s[i] == accept[ii])
			{
				x++;
			}
		}
		if (x > i)
			continue;

		else
			break;

	}
	return (x);
}
