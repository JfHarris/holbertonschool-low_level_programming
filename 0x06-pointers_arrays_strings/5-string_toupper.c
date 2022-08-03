#include "main.h"
#include "holberton.h"

/**
 *string_toupper - change all lowercase letters of a string to uppercase
 *@a: pointer to string
 *
 * Return: Always 0.
 */

char *string_toupper(char *a)
{
int x;

x = 0;

for (x = 0 ; a[x] != '\0' ; x++)
{
if (a[x] >= 'a' && a[x] <= 'z')
{
a[x] = a[x] - 32;
}
}

return (a);
}
