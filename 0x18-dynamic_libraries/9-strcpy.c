#include "holberton.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 *
 * @dest: in
 * @src: out
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
