#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 *
 * @head: pointer to a doble linked list.
 * @index: index of the node.
 *
 * Return: head or if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev)
		head = head->prev;
	while (i <= index)
	{
		if (i == index)
			return (head);
		else if (head == NULL)
			return (NULL);
		i += 1;
		head = head->next;
	}
	return (head);
}
