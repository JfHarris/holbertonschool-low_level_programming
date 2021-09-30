#include "main.h"
/**
 *times_table - creating a times table
 *
 * Return: Always 0.
 */

void times_table(void)
{
int n;
int x;
for (n = 0 ; n <= 9 ; n++)
{
if (n * n <= 81)
{
_putchar(',');
_putchar(' ');
}
}
for (x = 0 ; x <= 9 ; x++)
{
if (x * x <= 81)
{
_putchar(',');
_putchar('.');
}
}
}

