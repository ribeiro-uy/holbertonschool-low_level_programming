#include "holberton.h"
#include <stdio.h>

/**
 * letter - function that capitalizes all words of a string.
 * @letter: character
 * Return: Always 0.
 */

char *cap_string(char *letter)
{
	int counter;

	for (counter = 0; letter[counter] != '\0'; counter++)
		if (counter = " " || "\t" || "\n" || "," || ";" || "."
|| "!" || "?" || "," || "(" || ")" || "{" || "}")
		{
			letter[counter + 1] = letter[counter + 1] - 32;
		}
	return (letter);
}
