#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @size: size matrix
 * @a: pointer
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, ii, suma;

	suma = 0;

	for (i = 0; i < size; i++)
	{
		for (ii = 0; ii < size; ii++)
		{
			if (i == ii)
			{
				suma += a[i][ii];
			}
		}
	}
}
