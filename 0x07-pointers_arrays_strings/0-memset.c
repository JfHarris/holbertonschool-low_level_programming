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
unsigned int x;


for (x = 0 ; x < n ; x++)
{
s[x] = b;
}

return (s);
}
