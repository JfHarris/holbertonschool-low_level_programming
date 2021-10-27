#include "function_pointers.h"

/**
 * array_iterator - executes function in an array
 * @array: receives function
 *@action: pointer to function
 *@size: size of array
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)

	for (x = 0 ; x < size ; x++)
	{
		action(*array);
		array++;
	}
}
