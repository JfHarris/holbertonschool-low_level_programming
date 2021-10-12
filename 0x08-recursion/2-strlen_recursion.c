#include "main.h"
/**
 *_strlen_recursion - finds string length
 *@s: string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(++s));
}
