#include "main.h"
/**
 *_puts- print string, new line, to stdout
 *@str: pointer
 * Return: Always 0.
 */
void _puts(char *str)
{
int x;
int y;

y = 0;

for (x = 0 ; str[x] != 0 ; x++)
{
x++;
}
for (y = 0 ; y < x ; y++)
{
_putchar(str[y]);
}
_putchar('\n');
return;
}
