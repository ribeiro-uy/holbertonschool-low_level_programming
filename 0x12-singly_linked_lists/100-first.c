#include "lists.h"
#include <stdio.h>

void premain(void) __attribute__ ((constructor));

/**
 * premain - function that prints You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n
 * before the main function is executed.
 *
 * Return: Nothing
 */

void premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
