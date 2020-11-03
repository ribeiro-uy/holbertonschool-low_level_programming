#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new
 * node at the end of a list_t list.
 *
 * @head: pointer to a pointer to the head of the list
 * @n: variable number in the node
 *
 * Return: Always 0.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
		return (new);
	}
}
