#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 *
 * @head: pointer to a pointer to the head of the list
 *
 * Return: reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *future;

	if (*head == NULL)
		return (NULL);

	if ((*head)->next != NULL)
	{
		current = *head;
		future = (*head)->next;
		current->next = NULL;
		while (future->next != NULL)
		{
			*head = future;
			future = future->next;
			(*head)->next = current;
			current = *head;
		}
	*head = future;
	(*head)->next = current;
	}

	return (*head);
}
