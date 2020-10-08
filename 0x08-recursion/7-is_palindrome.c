#include "holberton.h"
#include <stdio.h>

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not.
 *
 * @s: string
 *
  * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int inicio = 0;
	int fin = _strlen(s);

	return (roberto(s, inicio, fin - 1));
}

/**
 * roberto - function name
 *
 * @inicio: first char
 * @fin: last char
 * @s: string
 *
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

/**
 * _strlen - check the code for Holberton School students.
 *
 * @s: string
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen(s + 1) + 1);

}
