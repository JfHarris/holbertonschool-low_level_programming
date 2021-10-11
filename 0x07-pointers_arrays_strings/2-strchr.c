#include "main.h"
/**
 *_strchr - locates character in a string
 *@s: pointer
 *@c: char to be found
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
++s;
}
if (*s == c)
{
return (s);
}
return (0);
}
