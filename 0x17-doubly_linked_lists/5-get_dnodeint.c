#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        unsigned int i = 0;

        if (head == NULL)
                return (NULL);

        while(head->prev)
                head = head->prev;

        while (i <= index)
        {
                if (i == index)
                        return (head);
                i += 1;
                head = head->next;
        }
        return (head);
}
