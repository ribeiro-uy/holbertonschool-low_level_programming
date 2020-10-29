#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to a pointer to the head of the list
 * @str: new string in the node
 *
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

	if (head == NULL)
	{
		return (0);
	}

	new = malloc(sizeof(list_t));
	new->str = strdup(str);

	while (str)
	{
		new->len = len;
		len++;
	}

	new->next = *head;
	*head = new;

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		return (new);
	}
}
