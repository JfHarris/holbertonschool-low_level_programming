#include "main.h"

/**
 *print_numbers - prints numbers
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
int x;

x = '0';

while (x <= '9')
{
_putchar(x);
x++;
}
_putchar('\n');
}
