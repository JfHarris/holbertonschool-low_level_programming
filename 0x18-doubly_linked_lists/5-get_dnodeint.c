#include "lists.h"

/**
 * get_dnodeint_at_index - returns Nth node of list
 *@head: pointer to head node
 *@index: location of node
 *
 * Return: node on success, NULL on failure.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;
	dlistint_t *hold;

	hold = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (hold != NULL)
	{
		if (num == index)
		{
			return (hold);
		}
		num++;
		hold = hold->next;
	}
	return (NULL);
}
