#include "lists.h"

/**
 * get_nodeint_at_index - get node at spot in list
 *@head: first node
 *@index: point to get node
 *
 * Return: Node. NULL if node is missing.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (index == 0)
	{
		return (NULL);
	}

	while (x < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
		x++;
	}

	return (head);
}
