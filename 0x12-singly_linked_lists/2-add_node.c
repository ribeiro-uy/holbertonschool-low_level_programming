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
	int i = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		struct list_t *new = malloc(sizeof(struct list_t));

		new->str;
		new->next = head;
		head = new;
		if (new == NULL)
		{
			return (NULL);
		}
		else
		{
			return (&new);
		}
}
