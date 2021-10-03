#include "main.h"
/**
 *print_diagonal- printing
 *@n: var
 * Return: Always 0.
 */

void print_diagonal(int n)
{
int x;

if (n > 0)
{
for (x = 0 ; x < n ; x++)
{
_putchar('\\');
}
}
_putchar('\n');
return;
}
