#include "lists.h"

/**
 * free_list - free memory in linked list
 *@head: pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *n;

	while (head != NULL)
	{
		n = head->next;
		free(head->str);
		free(head);
		head = n;
	}
}
