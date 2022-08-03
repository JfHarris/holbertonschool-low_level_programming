#include "hash_tables.h"

/**
 * key_index - gives index of a key
 *@key: key
 *@size: array size of hash table
 * Return: index to store in array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int number;

		number = hash_djb2(key);
	return (number % size);
}
