#include "lists.h"

/**
 * pop_listint -  function that adds a new node at the end of a list_t list.
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

/**
int pop_listint(listint_t **head)
{
        listint_t *ptr = (*head)->next;
        int n = (*head)->n;

        if (!*head)
                return (0);

        free(head);
        *head = ptr;
        return (n);
}
*/
