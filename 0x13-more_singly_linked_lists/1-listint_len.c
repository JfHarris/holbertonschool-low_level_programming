#include "lists.h"

/**
 * listint_len - find length of list
 *@h: pointer
 * Return: nodes.
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	if (h->next != NULL)
	{
		return (listint_len(h->next) + 1);
	}

	return (1);
}
