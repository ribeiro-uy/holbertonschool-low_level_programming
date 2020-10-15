#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 *
 * @ptr: pointer.
 * @old_size: memory previously allocated.
 * @new_size: new memory.
 *
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	int *array;

	array = malloc(new_size);
