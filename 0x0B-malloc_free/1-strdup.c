#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - return pointer to space in memory
 *@str: string to copy
 * Return: pointer mentioned above
 */

char *_strdup(char *str)
{
	int x;
	int y;
	char *a;

	y = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[y] != '\0')
	{
		y++;
	}

	a = malloc(y * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0 ; x < y ; x++)
	{
		a[x] = str[x];
	}

	return (a);

}
