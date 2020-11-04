#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @head: pointer to a pointer to the head of the list
 *
 * Return: sum of all n
 */

int sum_listint(listint_t *head)
{
	unsigned int n = 0;

	if (!head)
		return (0);

	while (head)
	{
		n += head->n;
		head = head->next;
	}

	return (n);
}
