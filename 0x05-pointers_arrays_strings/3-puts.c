#include "main.h"
/**
 *_puts- print string, new line, to stdout
 *@str: pointer
 * Return: Always 0.
 */
void _puts(char *str)
{
int x;

for (x = 0 ; x <= 466 ; x++)
{
_putchar(*str);
str++;
}
_putchar('\n');
return;
}
