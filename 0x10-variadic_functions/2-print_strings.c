#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}

	va_start(string, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%s", va_arg(string, char *));
				break;
			}
			printf("%s%s", va_arg(string, char *), separator);
		}
	}
	else
	{
		printf("(nil)");
	}

	va_end(string);
	printf("\n");
}
