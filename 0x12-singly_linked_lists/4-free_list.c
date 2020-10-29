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

	while (head != '\0')
	{
		ptr = head->next;
		free(head->next);
		free(head->str);
		free(head->len);
		head = ptr;

	}
}
