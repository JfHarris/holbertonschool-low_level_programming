#include "main.h"
/**
 *more_numbers - printing 0-14 ten times
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int x;
int a;

for (x = 0 ; x <= 9 ; x++)
{
for (a = 0 ; a <= 14 ; a++)
{
_putchar(a + '0');
}
if (a > 14)
{
_putchar('\n');
}
}
return;
}
