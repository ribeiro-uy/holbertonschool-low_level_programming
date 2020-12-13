#include "lists.h"

/**
 * main - function that adds a new node at the end of a dlistint_t list.
 * @head = pointer to a head
 * @n = new int in the node
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *tmphead = *head, *newnode = NULL;

        if ((newnode = malloc(sizeof(dlistint_t))) == NULL)
                return (NULL);

        newnode->n = n;
        newnode->next = NULL;

        if (head == NULL)
                return (NULL);

        if (*head == NULL)
        {
                *head = newnode;
                return(newnode);
        }

        while (tmphead->next)
        {
                tmphead = tmphead->next;
        }

        tmphead->next = newnode;
        newnode->prev = tmphead;

        return (newnode);
}
