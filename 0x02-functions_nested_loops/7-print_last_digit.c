#include "main.h"

/**
 *print_last_digit- printing last digit of n
 *@n: int variable
 * Return: Always 0.
 */

int print_last_digit(int n)
{

n = n % 10;
if (n < 0)
{
n = 0 - n;
}
_putchar(n + '0');
return (n);
}
