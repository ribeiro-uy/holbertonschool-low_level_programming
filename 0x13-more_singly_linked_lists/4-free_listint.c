#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 *
 * @head: pointer to a pointer to the head of the list
 *
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	if (head->next)
	{
		free_listint(head->next);
	}
	free(head);
}
