#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concat 2 strings
 *@s1: string one
 *@s2: string 2
 *
 * Return: NULL on failure, pointer otherwise.
 */

char *str_concat(char *s1, char *s2)
{
	int x;
	int y;
	int st1;
	int st2;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	st1 = strlen(s1);
	st2 = strlen(s2);

	a = malloc((st1 + st2 + 1) * sizeof(char));

	if (a == NULL)
	{
		return ('\0');
	}

	for (x = 0 ; s1[x] != '\0' ; x++)
	{
		a[x] = s1[x];
	}

	for (y = 0 ; s2[y] != '\0' ; y++)
	{
		a[x] = s2[y];
		x++;
	}
	return (a);

}
