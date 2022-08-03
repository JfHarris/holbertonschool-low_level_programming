#include "main.h"
#include "holberton.h"

/**
 *_strncpy - copying a string
 *@dest: pointer
 *@src: pointer
 *@n: int var
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int x;

x = 0;

while (x < n && src[x] != '\0')
{
dest[x] = src[x];
x++;
}
while (x < n)
{
dest[x] = '\0';
x++;
}

return (dest);
}
