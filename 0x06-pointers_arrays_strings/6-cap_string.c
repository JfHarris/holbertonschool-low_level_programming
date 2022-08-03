#include "main.h"
#include "holberton.h"

/**
 *cap_string - capitalize all words of a string.
 *@a: pointer
 * Return: Always 0.
 */

char *cap_string(char *a)
{
int x;

x = 0;

if (a[x] >= 'a' && a[x] <= 'z')
{
a[x] = a[x] - 32;
}
while (a[x] != '\0')
{
if (a[x] == ' ' || a[x] == '\t' || a[x] == '\n' || a[x] == ',' ||
a[x] == ';' ||
a[x] == '.' || a[x] == '!' || a[x] == '?' ||
a[x] == '"' || a[x] == '(' || a[x] == ')' || a[x] == '{' || a[x] == '}')
{
if (a[x + 1] >= 'a' && a[x + 1] <= 'z')
{
a[x + 1] = a[x + 1] - 32;
}
}
x++;
}
return (a);
}
