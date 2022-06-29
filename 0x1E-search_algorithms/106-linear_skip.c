#include "search_algos.h"

/**
 * linear_skip - searchs for a value in a sorted skip list
 * @list:  pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return:  pointer on the first node where value is located
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *hold;
    skiplist_t *ref;

	if (!list)
    {
		return (NULL);
    }
	ref = list;
	hold = ref;
	while (ref->express && ref->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				ref->express->index, ref->express->n);
		hold = ref;
		ref = ref->express;
		if (ref->n == value)
			break;
	}
	if (ref->n >= value)
		printf("Value found between indexes [%lu] and [%lu]\n",
				hold->index, ref->index);
	else
	{
		hold = ref;
		while (ref->next)
			ref = ref->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
				hold->index, ref->index);
	}
	ref = hold;
	while (ref)
	{
		printf("Value checked at index [%lu] = [%d]\n", ref->index, ref->n);
		if (ref->n == value)
			return (ref);
		if (ref->n > value)
			break;
		if (ref->next)
			ref = ref->next;
		else
			ref = NULL;
	}
	return (NULL);
}
