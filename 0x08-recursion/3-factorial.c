#include "main.h"

/**
 *factorial - factorial
 *@n: number
 * Return: Always 0.
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1 || n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
