#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct qlito - calling for each element and compare
 * @bomba: type of data received from arguments
 * @funk: pointer to functions to execute
 * Description: This takes the char from arguments
 */
typedef struct qlito
{
	char *bomba;
	void (*funk)();
} rebelion;
void pechar(char *cye, va_list magicians);
void pinta(char *cye, va_list magicians);
void fumeta(char *cye, va_list magicians);
void sublingual(char *cye, va_list magicians);

#endif
