#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in list
 *@head: pointer to head node
 * Return: sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int total;
	dlistint_t *hold = head;

	total = 0;

	while (hold != NULL)
	{
		total += hold->n;
		hold = hold->next;
	}
	return (total);
}
