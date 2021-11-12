#include "lists.h"

/**
 * sum_listint - sum of list
 *@head: first pointer
 *
 * Return: total of list.
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
