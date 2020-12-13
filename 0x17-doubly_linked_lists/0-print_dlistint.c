#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @dlistint_t : pointer to the head of the dlistint_t
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
        int nodes_number = 0;

        if (h == NULL)
                return (nodes_number);

        while (h)
        {
                printf("%i\n", h->n);
                nodes_number += 1;
                h = h->next;
        }

        return (nodes_number);
}
