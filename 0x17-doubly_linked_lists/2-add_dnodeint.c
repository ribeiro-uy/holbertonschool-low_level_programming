#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *newnode = NULL;

        if (head == NULL)
                return (NULL);

        if ((newnode = malloc(sizeof(dlistint_t))) == NULL)
                return (NULL);

        newnode->n = n;
        newnode->next = *head;
        newnode->prev = NULL;

        if (*head == NULL)
        {
                *head = newnode;
                return (*head);
        }

        while ((*head)->prev != NULL)
                *head = (*head)->prev;

        *head = newnode;

        return (*head);
}
