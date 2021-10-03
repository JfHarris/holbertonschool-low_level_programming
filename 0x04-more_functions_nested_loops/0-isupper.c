#include "main.h"
/**
 *_isupper- print 1 if "C", 0 otherwise.
 *@c: variable
 * Return: Always 0.
 */

int _isupper(int c)
{
int a;
if (c >= 'A' && c <= 'Z')
{
a = 1;
}
else
a = 0;
return (a);
}
