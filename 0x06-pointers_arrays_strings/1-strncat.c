#include "main.h"
#include "holberton.h"
/**
 *_strncat - concatenating two strings
 *@dest: pointer
 *@src: pointer
 *@n: int var
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int x;
int y;

x = 0;
y = 0;

while (dest[x] != '\0')
{
x++;
}
while (y < n && src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}

dest[x] = '\0';

return (dest);
}
