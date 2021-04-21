#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0;
	size_t bloc = sqrt(size);
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);
	if (array[idx] > value)
	{
		print_check(idx, array[idx]);
		return (-1);
	}
	if (array[idx] == value)
	{
		print_check(idx, array[idx]);
		return (idx);
	}
	while (array[idx] < value && idx < size)
	{
		print_check(idx, array[idx]);
		idx += bloc;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", idx - bloc, idx);
	for (i = (idx - bloc); i < size; i++)
	{
		print_check(i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

/**
 * print_check - prints the value checked
 * @index: index of the array
 * @integ: value checked
 *
 * Return: first index where value is located
 */

void print_check(size_t index, int integ)
{
	printf("Value checked array[%lu] = [%d]\n", index, integ);
}
