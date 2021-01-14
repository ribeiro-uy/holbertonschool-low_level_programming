#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area.
 * @dest: destiny
 * @src: source
 * @n: bytes of memory
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
