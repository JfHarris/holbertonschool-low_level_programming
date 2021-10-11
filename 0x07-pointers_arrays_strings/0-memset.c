#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: string
 * @b: byte
 *@n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
int x;
int y;

y = n;

for (x = 0 ; x < y ; x++)
{
s[x] = b;
}

return (s);
}
