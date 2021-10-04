#include "main.h"
/**
 *more_numbers - printing 0-14 ten times
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int x;
int y;

for (x = 0 ; x <= 9 ; x++)
{
for (y = 0 ; y <= 14 ; y++)
{
_putchar("%d" , y);
}
if (y > 14)
{
_putchar('\n');
}
}
return;
}
