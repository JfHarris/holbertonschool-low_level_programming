#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array
 * @size: size of array
 * @c: char
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *a;

	if (size == 0)
	{
		return ('\0');
	}

	a = malloc(size * sizeof(c));

	if (!a)
	{
		return ('\0');
	}

	for (x = 0 ; x < size ; x++)
	{
		a[x] = c;
	}

	return (a);
}
