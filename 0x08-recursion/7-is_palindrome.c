#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int inicio = 0;
	int fin = strlen(s);

	return (roberto(s, inicio, fin - 1));
}

/**
 * roberto - function name
 *
 * Return: Always 0.
 */

int roberto(char *s, int inicio, int fin)
{

	if (inicio <= fin && s[inicio] == s[fin])
		return (roberto(s, inicio + 1, fin - 1));

	if (inicio >= fin)
		return (1);

	return (0);
}
