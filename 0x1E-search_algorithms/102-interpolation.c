#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t hi = size - 1;
	size_t pos = low + (((double)(hi - low) / (array[hi] - array[low]))
			    * (value - array[low]));

	if (array != NULL || size > 0)
	{
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		if (array[low] > value)
		{
			print_check(low, array[low]);
			return (-1);
		}
		if (array[low] == value)
		{
			print_check(low, array[low]);
			return (low);
		}
		while (low <= hi)
		{
			print_check(pos, array[pos]);
			if (array[pos] > value)
				hi = pos - 1;
			else if (array[pos] < value)
				low = pos + 1;
			else
				return (pos);
			pos = low + (((double)(hi - low) / (array[hi] - array[low]))
				     * (value - array[low]));

		}
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
