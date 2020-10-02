#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13.
 *
 * @letter: input array
 *
 * Return: Always 0.
 */

char *rot13(char *letter)
{

	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int count1, count2;

	for (count1 = 0; letter[count1] != '\0'; count1++)
	{
		for (count2 = 0; alph[count2] != '\0'; count2++)
		{
			if (letter[count1] == alph[count2])
			{
				letter[count1] = rot13[count2];
				break;
			}
		}
	}
	return (letter);
}
