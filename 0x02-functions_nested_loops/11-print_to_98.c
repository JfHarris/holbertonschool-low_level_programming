#include "main.h"
/**
 *print_to_98- print all natural numbers to 98
 *@n: var
 * Return: Always 0.
 */

void print_to_98(int n)
{
for (n = '1' ; n <= 98 ; n++)
{
_putchar(n);
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
return;
}
