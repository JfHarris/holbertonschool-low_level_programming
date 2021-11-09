#include "lists.h"

/**
 * print_list - print linked list
 *@h: pointer
 *
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (print_list(h->next) + 1);
	}

	printf("[%u]%s\n", h->len, h->str);

	if (h->next != NULL)
	{
		return (print_list(h->next) + 1);
	}
	return (1);
}
