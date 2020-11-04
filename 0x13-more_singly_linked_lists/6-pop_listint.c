#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: pointer to a pointer to the head of the list
 *
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n = (*head)->n;

	*head = (*head)->next;
	if (!*head)
		return (0);

	free(ptr);
	return (n);
}
