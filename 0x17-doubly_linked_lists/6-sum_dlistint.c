#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
        int sum = 0;

        if (head == NULL)
                return (sum);

        while (head->prev)
                head = head->prev;

        while (head)
        {
                sum += head->n;
                head = head->next;
        }
        return (sum);
}
