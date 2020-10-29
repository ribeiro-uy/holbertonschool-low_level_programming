#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: pointer to head of the list
 *
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h->str == NULL)
		return (i);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
