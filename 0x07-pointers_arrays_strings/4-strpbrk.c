#include "main.h"

/**
 *_strpbrk - search string for set of bytes
 *@s: string with bytes
 *@accept: bytes
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
int x;

while (*s != '\0')
{
for (x = 0 ; accept[x] != '\0' ; x++)
{
if (*s == accept[x])
{
return (s);
}
}
s++;
}
return (0);
}
