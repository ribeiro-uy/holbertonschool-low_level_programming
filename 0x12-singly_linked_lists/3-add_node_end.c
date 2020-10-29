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
	int i = 0;
	list_t *new, *ptr = NULL;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{

		ptr = *head;
		while (ptr->next)
		{
			ptr = ptr->next;
		}
	}

	while (str[i] != '\0')
	{
		i++;
	}

	new->str = strdup(str);
	new->len = i;

	if (ptr)
	{
		ptr->next = new;
	}

	if (!*head)
	{
		*head = new;
	}
	return (new);
}
