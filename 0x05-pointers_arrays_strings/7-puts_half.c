#include "main.h"

/**
 *puts_half- print half a string then new line
 *@str: str
 * Return: Always 0.
 */

void puts_half(char *str)
{
int x;
int y;

x = 0;

for (y = 0 ; str[y] ; y++)
{
x++;
}
if (x % 2 == 0)
{
for (y = x / 2 ; y < x ; y++)
{
_putchar(str[y]);
}
}
else
{
for (y = (x / 2) + 1 ; y < x ; y++)
{
_putchar(str[y]);
}
}
_putchar('\n');

return;
}
