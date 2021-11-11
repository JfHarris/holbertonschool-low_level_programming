#include "lists.h"

/**
 * free_listint - free memory in linked list
 *@head: pointer
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *x;

	while (head != NULL)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
