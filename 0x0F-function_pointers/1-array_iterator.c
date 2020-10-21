#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that searches for an integer.
 *
 * @array: the array
 * @size: size of array
 * @action: action to do
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
	{
		return;
	}
	if (size == 0)
	{
		return;
	}
	if (*action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
