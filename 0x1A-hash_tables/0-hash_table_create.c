#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *@size: size of the array
 * Return: pointer to new hash table, NULL on failure.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned int x;

	new = malloc(sizeof(hash_table_t));

	if (!new)
	{
		return (NULL);
	}

	new->size = size;
	new->array = malloc(sizeof(hash_table_t *) * size);

	if (!new->array)
	{
		free(new);
		return (NULL);
	}

	x = 0;

	while (x < size)
	{
		new->array[x] = NULL;
		x++;
	}

	return (new);
}
