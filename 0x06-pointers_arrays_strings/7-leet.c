#include "holberton.h"
#include <stdio.h>

/**
 * leet -function that encodes a string into 1337.
 * @str: string
 * Return: Always 0.
 */

char *leet(char *encodes)
{
	int count;
	int count2;
	char letter[5] = "aeotl";
	char num[5] = "43071";

	for (count = 0; encodes[count] != '\0'; count++)
	{
		for (count2 = 0; letter[count2] != '\0'; count2++)
		{
			if (letter[count2] == encodes[count] ||
			    (letter[count2] - 32) == encodes[count])
			{
				encodes[count] = num[count2];
			}
		}
	}
	return (encodes);
}
