#include "search_algos.h"

/**
 * linear_skip - searchs for a value in a sorted skip list
 * @list: skiplist_t list to search in
 * @value: int value to search for
 *
 * Return: pointer to first node that matches value
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp, *node;

	if (!list)
		return (NULL);
	node = list;
	temp = node;
	while (node->express && node->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				node->express->index, node->express->n);
		temp = node;
		node = node->express;
		if (node->n == value)
			break;
	}
	if (node->n >= value)
		printf("Value found between indexes [%lu] and [%lu]\n",
				temp->index, node->index);
	else
	{
		temp = node;
		while (node->next)
			node = node->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
				temp->index, node->index);
	}
	node = temp;
	while (node)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		if (node->n > value)
			break;
		if (node->next)
			node = node->next;
		else
			node = NULL;
	}
	return (NULL);
}
