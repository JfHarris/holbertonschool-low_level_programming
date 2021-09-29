#include "main.h"
/**
 * print_alphabet_x10 - Printing alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char ch;
int i;

for (i = '0'; i <= '9'; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
if (ch > 'z')
{
_putchar('\n');
}
}
return;
}
