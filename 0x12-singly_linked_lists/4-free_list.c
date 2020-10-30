#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: pointer to head structure
 *
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t	*ptr;

	if (!head)
	{
		return;
	}

	while (head)
	{
		ptr = head->next;
		if (head->str)
		{
			free(head->str);
		}
		free(head);
		head = ptr;

	}
}
