#include "main.h"
/**
 *_strspn - returns length of substring
 *@s: target string
 *@accept: receives from s
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int x;
unsigned int y;

for (x = 0 ; s[x] != '\0' ; x++)
{
for (y = 0 ; accept[y] != '\0' ; y++)
{
if (accept[y] == s[x])
{
break;
}
}
if (accept[y] == '\0')
{
return (x);
}
}
return (x);
}
