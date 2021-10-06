#include "main.h"
/**
 *print_rev- print string in reverse then new line
 *@s: pointer
 * Return: Always 0.
 */
void print_rev(char *s)
{
int x;
int y;

for (x = 0 ; s[x] != 0; x++)
{
s++;
}
for (y = x - 1 ; y > 0 ; y--)
{
_putchar(s[y]);
}
_putchar('\n');

return;
}
