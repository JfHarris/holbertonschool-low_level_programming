#include "main.h"

/**
 *_memcpy - copy bytes
 * @dest: what is copied
 *@src: source
 *@n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;

x = 0;

while (x < n)
{
*(dest + x) = *(src + x);
x++;
}

return (dest);
}
