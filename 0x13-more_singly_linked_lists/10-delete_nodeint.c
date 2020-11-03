#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 *
 * @head: pointer to a pointer to the head of the list
 * @index:  is the index of the node that should be deleted. Index starts at 0
 *
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *actual = *head;
	listint_t *anterior = *head;

	while (head)
	{
		if (i == index)
		{
			anterior->next = actual->next;
			free(actual);
			return (1);
		}

		i++;
		anterior = actual;
		actual = actual->next;
	}
	return (-1);
}
