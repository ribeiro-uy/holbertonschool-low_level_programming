#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        unsigned int i = 0;
        dlistint_t *newnode = NULL;

        if (h == NULL)
                return (*h);

        if (*h == NULL)
        {
                newnode = add_dnodeint(*&h, n);
                return (newnode);
        }

        while ((*h)->prev)
                *h = (*h)->prev;

        while (i <= idx)
        {
                if (i == idx)
                {
                        newnode = malloc(sizeof(dlistint_t));
                        newnode->n = n;
                        newnode->prev = (*h)->prev;
                        newnode->next = (*h);
                        (*h)->prev = newnode;
                        *h = newnode;
                        prinf("el anterior vale %i", (*h)->next->n);
                        while ((*h)->prev)
                                *h = (*h)->prev;
                        return (newnode);
                }
                *h = (*h)->next;
                i += 1;
        }
        newnode = add_dnodeint_end(*&h, n);
        while ((*h)->prev)
                *h = (*h)->prev;
        return (*h);
}
