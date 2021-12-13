#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 *@ht: hash table
 *
 * Return: void.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *move;
	hash_node_t *start;
	unsigned long int x;

	if (!ht)
	{
		return;
	}

	for (x = 0 ; x < ht->size ; x++)
	{
		start = ht->array[x];
		while (start)
		{
			move = start->next;
			free(start->key);
			free(start->value);
			free(start);
			start = move;
		}
	}
	free(ht->array);
	free(ht);
}
