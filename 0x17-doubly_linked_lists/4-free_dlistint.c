#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 *
 * @head: pointer to doble linked list.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return;
	while (head->prev)
		head = head->prev;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
