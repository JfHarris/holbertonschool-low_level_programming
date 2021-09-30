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
int y;
for (n = 0 ; n <= 9 ; n++)
{
_putchar('0');
for (x = 1 ; x <= 9 ; x++)
{
y = x * n;
_putchar(',');
_putchar(' ');
if (y >= 10)
{
_putchar('0' + (y / 10));
}
else
{
_putchar(' ');
_putchar('0' + (y % 10));
}
}
_putchar('\n');
}
}
