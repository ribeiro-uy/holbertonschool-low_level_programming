#include "lists.h"

/**
 * get_nodeint_at_index - function that adds a new node
 * at the end of a list_t list.
 *
 * @head: pointer to a pointer to the head of the list
 * @index: is the index of the node, starting at 0
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index)
	{
		i++;
		head = head->next;
	}

	return (head);
}
