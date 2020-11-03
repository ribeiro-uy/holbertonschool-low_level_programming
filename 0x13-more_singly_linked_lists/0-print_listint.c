#include "lists.h"

/**
 * print_list - function that prints all the elements of a listint_t list.
 *
 * @h: pointer to head of the list
 *
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
