#include "main.h"

/**
 * _islower- returns 1
 *@c: variable of int or char
 * Return: c.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
c = 1;
}
else
{
c = 0;
}
return (c);
}
