#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - check the code for Holberton School students.
 * @letter: string
 * Return: Always 0.
 */
char *string_toupper(char *letter)
{

	int counter;

	for (counter = 0; letter[counter] != '\0'; counter++)
	{
		if (letter[counter] >= 97 && letter[counter] <= 122)
			letter[counter] = letter[counter] - 32;
	}
	return (letter);
}
