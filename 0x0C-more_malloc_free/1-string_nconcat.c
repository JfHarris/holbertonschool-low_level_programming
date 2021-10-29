#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - pointer to concat strings
 *@s1: string 1
 *@s2: string 2
 *@n: bytes od s2
 * Return: pointer to strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x;
	unsigned int y;
	char *a;

	x = 0;
	y = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	x = strlen(s1);
	if (n >= strlen(s1))
	{
		x += strlen(s2);
	}
	else
	{
		x = n;
	}
	a = (char *) malloc(sizeof(char) * (x + 1));
	if (a == NULL)
	{
		return (0);
	}
	x = 0;
	for (x = 0 ; s1[x] ; x++)
	{
		a[x] = s1[x];
	}
	for (y = 0 ; y < n && s2[y] ; x++, y++)
	{
		a[x] = s2[y];
	}
	a[x] = '\0';
	return (a);
}
