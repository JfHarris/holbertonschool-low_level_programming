#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocate memory for array
 * @min: first int in array
 * @max: final int in array
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int *x;
	unsigned int y;

	if (min > max)
	{
		return (NULL);
	}

	x = malloc((max - min + 1) * sizeof(int));

	if (x == NULL)
	{
		return (NULL);
	}

	for (y = 0 ; min <= max ; y++)
	{
		x[y] = min;
		min++;
	}

	return (x);
}
