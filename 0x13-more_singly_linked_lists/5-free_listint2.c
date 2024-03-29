#include "lists.h"

/**
 * free_listint2 - free list memory
 *@head: first node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *store;

	if (head == NULL)
	{
		return;
	}
	temp = *head;
	while (temp != NULL)
	{
		store = temp->next;
		free(temp);
		temp = store;
	}

	*head = NULL;
}
