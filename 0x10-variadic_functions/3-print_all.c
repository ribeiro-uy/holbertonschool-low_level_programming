#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	char *any;
	int i = 0, int ii = 0;

	typedef struct op
	{
		char *c;
		void (*funtion) ();
	}types;

	types functions[]
	{
		{'c', print_char};
		{'i', print_integer};
		{'f', print_float};
		{'s', print_string};
		{NULL, NULL}
	};

	
}
