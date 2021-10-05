#include "main.h"
/**
 *print_triangle- print triangle using #
 *@size: var
 * Return: Always 0.
 */

void print_triangle(int size)
{
int x;
int y;
int rows;

rows = size;

if (size > 0)
{
for (x = rows ; x <= 1 ; --x)
{
for (y = 1 ; y <= x ; ++y)
{
_putchar('#');
}
_putchar('\n');
}
}
_putchar('\n');
return;
}
