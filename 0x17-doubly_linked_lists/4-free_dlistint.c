#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
        dlistint_t *tmp = NULL;

        if (head == NULL)
                return;

        while (head->prev)
                head = head->prev;

        while (head)
        {
                tmp = head->next;
                free(head);
                head = tmp;
        }
}

