#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 * @s: string
 * Return: Always 0.
 */

void rev_string(char *s)
{

	int len = 0, temp, left = 0, right = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (left = 0, right = len - 1; left < (len / 2); left++, right--)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
	}
}
