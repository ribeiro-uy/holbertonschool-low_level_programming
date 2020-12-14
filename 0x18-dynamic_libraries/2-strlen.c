#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int num = 0;

	while (*(s + num) != '\0')
	{
		num++;
	}
	return (num);
}
