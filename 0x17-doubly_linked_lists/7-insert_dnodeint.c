#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position.
 *
 * @h: doble pointer to a doble likned list.
 * @idx: position to insert the new node.
 * @n: value of the new node.
 *
 * Return: check the code for Holberton School students.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newnode = NULL;

	if (h == NULL)
		return (*h);
	if (*h == NULL)
	{
		newnode = add_dnodeint(*&h, n);
		return (newnode);
	}
	while ((*h)->prev)
		*h = (*h)->prev;
	while (i <= idx)
	{
		if (i == idx)
		{
			newnode = malloc(sizeof(dlistint_t));
			newnode->n = n;
			newnode->next = *h;
			newnode->prev = (*h)->prev;
			if ((*h)->prev != NULL)
				(*h)->prev->next = newnode;
			(*h)->prev = newnode;
			while ((*h)->prev)
				*h = (*h)->prev;
			return (*h);
		}
		*h = (*h)->next;
		i += 1;
	}
	newnode = add_dnodeint_end(*&h, n);
	return (*h);
}
