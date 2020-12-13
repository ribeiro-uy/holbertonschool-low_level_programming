#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list.
 *
 * @head: doble pointer to the doble linked list.
 * @n: value for the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	*head = newnode;
	return (*head);
}
