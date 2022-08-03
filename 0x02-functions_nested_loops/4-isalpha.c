#include "main.h"

/**
 * _isalpha- returns 1 if c or C
 *@c: variable
 * Return: Always 0.
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
c = 1;
}
else if (c >= 'A' && c <= 'Z')
{
c = 1;
}
else
{
c = 0;
}
return (c);
}
