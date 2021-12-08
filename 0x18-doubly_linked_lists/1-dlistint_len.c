#include "lists.h"

/**
 * dlistint_len - returns number of elements in list
 *@h: pointer to head node
 *
 * Return: number of elements in list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num;
	dlistint_t *hold = (dlistint_t *)h;

	num = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (hold != NULL)
	{
		hold = hold->next;
		num++;
	}

	return (num);
}
