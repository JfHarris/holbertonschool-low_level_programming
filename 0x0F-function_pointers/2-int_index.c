#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array of ints
 *@size: number of elements in array
 *@cmp: function that compares
 * Return: -1 if no match or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (x = 0 ; x < size ; x++)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}

	return (-1);
}
