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
	list_t *new = NULL;
	list_t *ptr = *head;

	new = (list_t*)malloc(sizeof(list_t));
	if (new == NULL)
        {
                return (NULL);
        }

        while (str[i] != '\0')
        {
                i++;
        }
        new->str = strdup(str);
        new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (new);
}
