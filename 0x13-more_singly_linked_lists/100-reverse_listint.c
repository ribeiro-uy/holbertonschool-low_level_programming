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

listint_t *reverse_listint(listint_t **head)
{
	listint_t *actual = *head;
	listint_t *futuro = (*head)->next;

	if (!*head && !(*head)->next)
		return (NULL);

	while ((*head) != NULL)
	{
		printf("entre en el while\n");
		if (!futuro->next)
		{
			printf("el futuro es ahora\n");
			return (*head);
		}
		*head = futuro;
		futuro = futuro->next;
		(*head)->next = actual;
		actual = *head;
	}
	return (*head);
}
