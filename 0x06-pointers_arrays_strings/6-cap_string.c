#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @letter: character
 * Return: Always 0.
 */

char *cap_string(char *letter)
{
	int counter, counter2;
	char separator[] = " \t\n,;.!?\"(){}";

	if (letter[0] >= 'a' && letter[0] <= 'z')
		letter[0] -= 32;

	for (counter = 0; letter[counter] != '\0'; counter++)
	{
		for (counter2 = 0; separator[counter2] != '\0'; counter2++)
		{
			if (letter[counter] == separator[counter2])
			{
				if (letter[counter + 1] >= 'a' &&
				    letter[counter + 1] <= 'z')
				{
					letter[counter + 1] -= 32;
					break;
				}
			}
		}
	}

	return (letter);
}
