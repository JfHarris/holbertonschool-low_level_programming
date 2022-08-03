#include "main.h"

/**
 *print_square - using # to make a square
 *@size: size of square
 * Return: Always 0.
 */

void print_square(int size)
{
int x;
int y;

if (size > 0)
{
for (x = 0 ; x < size ; x++)
{
for (y = 0 ; y < size ; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
return;
}
