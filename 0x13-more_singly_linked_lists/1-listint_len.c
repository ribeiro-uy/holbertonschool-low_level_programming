#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: pointer to head of the list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	if (!h)
		return (0);

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
