#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array == 0)
		return (-1);
	index = find_index(array, value, 0, size - 1, size);
	return (index);
}

/**
 * find_index - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @value: value to search
 * @low: lowest value of the subarray
 * @high: highest value of the subarray
 * @size: number of elements in array
 *
 * Return: first index where value is located
 */

int find_index(int *array, int value, int low, int high, size_t size)
{
	int mid = low + (high - low) / 2;
	int i;

	if (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (find_index(array, value, low, mid - 1, size));
		return (find_index(array, value, mid + 1, high, size));
	}
	return (-1);
}
