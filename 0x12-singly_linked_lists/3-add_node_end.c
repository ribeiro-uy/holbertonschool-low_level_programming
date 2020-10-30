#include "lists.h"
/**
 * add_node_end -  function that adds a new node at the end of a list_t list.
 *
 * @head: pointer to a pointer to the head of the list
 * @str: new string in the node
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *cabezudo;
	int i = 0;

	cabezudo = *head;
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	while (cabezudo->next)
	{
		cabezudo = cabezudo->next;
	}

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (cabezudo)
	{
		cabezudo->next = new;
	}

	if (*head == NULL)
	{
		*head = new;
	}

	return (new);
}
