#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list.
 *
 * @h: pointer to a doble linked list.
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	if (h == NULL)
		return (elements);

	while (h)
	{
		elements += 1;
		h = h->next;
	}
	return (elements);
}
