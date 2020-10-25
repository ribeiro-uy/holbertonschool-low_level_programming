#include "variadic_functions.h"

/**
 * print_all - print any kind of data
 * @format: chars that set the format
 */

void print_all(const char * const format, ...)
{
	char *cye = "";
	va_list magicians;
	int i = 0;
	int j = 0;

	rebelion pld[] = {
		{"c", pechar},
		{"i", pinta},
		{"f", fumeta},
		{"s", sublingual},
		{NULL, NULL}
	};

	va_start(magicians, format);

	while (format && format[i])
	{
		while (j < 4)
		{
			if (format[i] == pld[j].bomba[0])
			{
				pld[j].funk(cye, magicians);
				cye = ", ";
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	va_end(magicians);
	printf("\n");
}

/**
 * pechar - print char
 * @cye: separator
 * @magicians: list
 */
void pechar(char *cye, va_list magicians)
{
	printf("%s%c", cye, va_arg(magicians, int));
}
/**
 * pinta - something
 * @cye: separator
 * @magicians: list
 */
void pinta(char *cye, va_list magicians)
{
	printf("%s%i", cye, va_arg(magicians, int));
}
/**
 * fumeta - something
 * @cye: separator
 * @magicians: list
 */
void fumeta(char *cye, va_list magicians)
{
	printf("%s%f", cye, va_arg(magicians, double));
}
/**
 * sublingual - something
 * @cye: separator
 * @magicians: list
 */
void sublingual(char *cye, va_list magicians)
{
	char *string = va_arg(magicians, char *);

	if (string == NULL)
	{
		string = ("(nil)");
	}
	printf("%s%s", cye, string);
}
