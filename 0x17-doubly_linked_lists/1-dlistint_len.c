#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
        int elements = 0;

        if (h == NULL)
                return (elements);

        while (h)
        {
                elements += 1;
                h = h->next;
        }
        return (elements);
}
