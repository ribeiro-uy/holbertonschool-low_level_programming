#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 *
 * @head: pointer to a pointer to the head of the list
 * @idx:  is the index of the list where the new node
 * should be added. Index starts at 0
 * @n: number to new node
 *
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *ptr = NULL;

	if (!new)
		return (NULL);

	new->n = n;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	ptr = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (i != (idx - 1))
		{
			if (!ptr || ptr->next == NULL)
			{
				return (NULL);
			}
			i++;
			ptr = ptr->next;
		}
		new->next = ptr->next;
		ptr->next = new;
	}

	return (new);
}
