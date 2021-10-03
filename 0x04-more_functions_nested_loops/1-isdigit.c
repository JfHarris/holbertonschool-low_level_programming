#include "main.h"
/**
 *_isdigit- function
 *@c: var
 * Return: Always 0.
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
c = 1;
}
else
{
c = 0;
}
return (c);
}
