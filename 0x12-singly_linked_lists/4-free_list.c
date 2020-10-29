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
	list_t	*ptr = *head

	while (head != '\0')
	{
		ptr = head;
		head = head->next;

		free(ptr->next);
		free(ptr->str);
		free(prt->len);

	}
}
