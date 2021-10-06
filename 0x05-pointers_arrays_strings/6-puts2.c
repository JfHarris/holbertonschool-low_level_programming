#include "main.h"
/**
 *puts2- print every other character then new line
 *@str: pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
int x;
int y;

x = 0;
for (y = 0 ; str[y] != 0 ; y++)
{
x++;
}
for (y = 0 ; y < x ; y += 2)
{
_putchar(str[y]);
}
_putchar('\n');
return;
}
