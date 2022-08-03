#include "main.h"

/**
 * print_sign- print different signs depending on n
 *@n: int variable
 * Return: Always 0.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
