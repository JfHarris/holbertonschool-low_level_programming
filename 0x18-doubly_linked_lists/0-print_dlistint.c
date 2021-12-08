#include "lists.h"

/**
 * print_dlistint - print elements of list
 *@h: pointer to head node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", hold->n);
		hold = hold->next;
		num++;
	}
	return (num);
}
