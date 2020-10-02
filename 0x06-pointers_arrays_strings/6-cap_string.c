#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @letter: character
 * Return: Always 0.
 */

char *cap_string(char *letter)
{
	int counter;

	for (counter = 0; letter[counter] != '\0'; counter++)
	{
		if (letter[counter] == 44 || letter[counter] == 59 ||
		    letter[counter] == 46 || letter[counter] == 9 ||
		    letter[counter] == 10 || letter[counter] == 32 ||
		    letter[counter] == 33 || letter[counter] == 33 ||
		    letter[counter] == 63 || letter[counter] == 34 ||
		    letter[counter] == 40 || letter[counter] == 41 ||
		    letter[counter] == 123 || letter[counter] == 125)
		{
			if (letter[counter +1 ] >= 97 && letter[counter + 1] <= 122)
			{
				letter[counter + 1] = letter[counter + 1] - 32;
			}
		}
	}
	return (letter);
}
